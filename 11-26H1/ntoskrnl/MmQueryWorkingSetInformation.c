/*
 * XREFs of MmQueryWorkingSetInformation @ 0x1404706D0
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140643124 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140643428 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1406E7B50 (CmSiProcessTupleStartFromHandle.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PspQueryQuotaLimits @ 0x140A7CBE0 (PspQueryQuotaLimits.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  struct _LIST_ENTRY **p_Blink; // rbp
  unsigned __int8 v11; // al
  int v12; // r12d

  *a6 = 0;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v11 = MiLockWorkingSetShared((__int64)p_Blink, (__int64)a2, (__int64)a3);
  v12 = *((_DWORD *)p_Blink + 46);
  *a1 = (_QWORD)p_Blink[1] << 12;
  *a2 = (_QWORD)p_Blink[17] << 12;
  *a3 = (_QWORD)p_Blink[18] << 12;
  *a4 = (_QWORD)p_Blink[15] << 12;
  *a5 = (_QWORD)p_Blink[16] << 12;
  MiUnlockWorkingSetShared((__int64)p_Blink, v11);
  if ( (v12 & 0x20) != 0 )
    *a6 |= 4u;
  if ( (v12 & 0x10) != 0 )
    *a6 |= 1u;
  return 0LL;
}
