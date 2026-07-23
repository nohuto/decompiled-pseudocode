/*
 * XREFs of MiRelinkStandbyPage @ 0x140298DC0
 * Callers:
 *     MiUpdatePfnPriority @ 0x140298800 (MiUpdatePfnPriority.c)
 *     MiEmptyDecayClusterTimers @ 0x140298A3C (MiEmptyDecayClusterTimers.c)
 *     MmSetPfnListInfo @ 0x1402D4250 (MmSetPfnListInfo.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x1402D5050 (MiUpdatePfnForPrefetchByPte.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( (unsigned __int16)*(_DWORD *)(a1 + 32) )
  {
    if ( a2 == 0xFFFFFF || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
      return 1LL;
    result = 1LL;
    *(_DWORD *)(a1 + 32) = ((char)a2 << 24) ^ (*(_DWORD *)(a1 + 32) ^ ((char)a2 << 24)) & 0xF8FFFFFF;
  }
  else
  {
    if ( (MiUnlinkPageFromListEx(a1) & 3) == 0 )
    {
      if ( a2 != 0xFFFFFF && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0 )
      {
        v4 = (unsigned int)((char)a2 << 24);
        *(_DWORD *)(a1 + 32) = v4 ^ (*(_DWORD *)(a1 + 32) ^ ((char)a2 << 24)) & 0xF8FFFFFF;
      }
      MiInsertPageInList(a1, 4LL, v4, v5);
      return 1LL;
    }
    MiRestoreTransitionPte(a1);
    MiClearPfnReuseFields(a1, v7, v8, v9);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x50000;
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x220000000000LL) / 48, 2LL);
    return 0LL;
  }
  return result;
}
