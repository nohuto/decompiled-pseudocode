/*
 * XREFs of MiDecreaseAvailablePages @ 0x1402DAD50
 * Callers:
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiReleasePageListSynchronization @ 0x1402DAB30 (MiReleasePageListSynchronization.c)
 *     MiUnlinkPagesUpdateCounts @ 0x1402DAF00 (MiUnlinkPagesUpdateCounts.c)
 *     MiUnlinkStandbyPage @ 0x1402DBCA0 (MiUnlinkStandbyPage.c)
 *     MiReplaceTransitionPageInList @ 0x1402DE8B0 (MiReplaceTransitionPageInList.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403E8DF0 (MiUpdateAvailableEventsAtDpc.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403E8E7C (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiObtainFreePages @ 0x140533DBC (MiObtainFreePages.c)
 */

__int64 __fastcall MiDecreaseAvailablePages(__int64 a1, __int64 a2, unsigned __int64 a3, __int16 a4)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  unsigned int v9; // ebp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v14; // eax

  if ( a2 == 1 )
  {
    v7 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 22464));
    if ( v7 == *(_QWORD *)(a1 + 17024) || v7 == *(_QWORD *)(a1 + 17032) )
      MiUpdateAvailableEventsAtDpc(a1);
    v8 = v7 + 1;
  }
  else
  {
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 22464), -a2);
    v11 = *(_QWORD *)(a1 + 17032);
    v7 = v8 - a2;
    if ( v8 - a2 <= v11 && v8 > v11 || (v12 = *(_QWORD *)(a1 + 17024), v7 <= v12) && v8 > v12 )
      MiUpdateAvailableEventsAtDpc(a1);
  }
  v9 = 1;
  if ( v7 <= 0x420 )
  {
    if ( !*(_BYTE *)(a1 + 21256) )
      MiObtainFreePages(a1);
    if ( v7 < 0x32 && v8 >= 0x32 )
    {
      MiSlabDemotionLowMemoryConditionUpdate(a1, 1LL);
      if ( *(_DWORD *)(a1 + 1300) != -1 )
        KeSetEvent((PRKEVENT)(a1 + 1152), 0, 0);
    }
  }
  if ( a3 == -1LL )
  {
    if ( v7 < 0x31 && (a4 & 0x200) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) != 8 )
      {
        v14 = *(_DWORD *)(a1 + 4);
        if ( v7 < 0x20 && (v14 & 4) != 0 )
        {
          return 0;
        }
        else if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0 || v7 < 0x21 )
        {
          return (v14 & 0x10) != 0;
        }
      }
    }
  }
  else
  {
    return v7 >= a3;
  }
  return v9;
}
