/*
 * XREFs of MiIncreaseAvailablePages @ 0x1403E8BC0
 * Callers:
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403E8DF0 (MiUpdateAvailableEventsAtDpc.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403E8E7C (MiSlabDemotionLowMemoryConditionUpdate.c)
 */

unsigned __int64 __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // ebp
  int v11; // eax
  __int64 v12; // rax
  struct _KEVENT *v13; // rdi

  if ( a2 == 1 )
  {
    v3 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 22464));
    if ( v3 <= 0x420 )
    {
      if ( v3 == 50 )
      {
        v12 = 16616LL;
      }
      else if ( v3 == 1056 )
      {
        v12 = 16648LL;
      }
      else
      {
        if ( v3 != 34 )
        {
          if ( v3 == 288 )
            MiSlabDemotionLowMemoryConditionUpdate(a1, 1LL);
          goto LABEL_3;
        }
        v12 = 16584LL;
      }
      v13 = (struct _KEVENT *)(a1 + v12);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16576));
      KeSetEvent(v13, 0, 0);
      ++v13[1].Header.LockNV;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16576));
    }
LABEL_3:
    v4 = v3 - 1;
    if ( v4 == *(_QWORD *)(a1 + 17024) || v4 == *(_QWORD *)(a1 + 17032) )
      MiUpdateAvailableEventsAtDpc(a1);
    return v4 + 1;
  }
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 22464), a2);
  v7 = a2 + v6;
  if ( v6 < 0x420 )
  {
    v10 = 4;
    if ( v7 < 0x420 )
      v10 = 0;
    if ( v6 < 0x32 )
    {
      v11 = v10 | 2;
      if ( v7 < 0x32 )
        v11 = v10;
      v10 = v11;
      if ( v6 < 0x22 && v7 >= 0x22 )
        v10 = v11 | 1;
    }
    else if ( v6 >= 0x120 )
    {
LABEL_23:
      if ( v10 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16576));
        if ( (v10 & 1) != 0 )
        {
          KeSetEvent((PRKEVENT)(a1 + 16584), 0, 0);
          ++*(_DWORD *)(a1 + 16608);
        }
        if ( (v10 & 2) != 0 )
        {
          KeSetEvent((PRKEVENT)(a1 + 16616), 0, 0);
          ++*(_DWORD *)(a1 + 16640);
        }
        if ( (v10 & 4) != 0 )
        {
          KeSetEvent((PRKEVENT)(a1 + 16648), 0, 0);
          ++*(_DWORD *)(a1 + 16672);
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16576));
      }
      goto LABEL_7;
    }
    if ( v7 >= 0x120 )
      MiSlabDemotionLowMemoryConditionUpdate(a1, 1LL);
    goto LABEL_23;
  }
LABEL_7:
  v8 = *(_QWORD *)(a1 + 17032);
  if ( v6 <= v8 && v7 > v8 || (v9 = *(_QWORD *)(a1 + 17024), v6 <= v9) && v7 > v9 )
    MiUpdateAvailableEventsAtDpc(a1);
  return v7;
}
