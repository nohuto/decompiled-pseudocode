/*
 * XREFs of MiDrainSystemAccessLog @ 0x1403C508C
 * Callers:
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403C4EDC (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiCleanWorkingSet @ 0x1403C5004 (MiCleanWorkingSet.c)
 *     MiEmptyAccessLogs @ 0x1404FB2E0 (MiEmptyAccessLogs.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402E06D0 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402E0830 (MiLockWorkingSetCoreExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDrainSystemAccessLog(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v3; // rdi
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rdx
  ULONG *v8; // rcx

  v3 = (_QWORD **)&unk_140E379A8;
  v4 = a1;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v3 = (_QWORD **)(a1 + 232);
  result = (__int64)*v3;
  if ( *v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v7 = 2LL;
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    MiLockWorkingSetCoreExclusive(v4, v7, a3);
    if ( *v3 )
    {
      if ( (*(_DWORD *)(v4 + 184) & 0xF) == 1 )
        v8 = &MiSystemPartition;
      else
        v8 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v4 + 174));
      MiEmptyPageAccessLog((__int64)v8, *v3);
      *v3 = 0LL;
    }
    MiUnlockWorkingSetCoreExclusive(v4);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
