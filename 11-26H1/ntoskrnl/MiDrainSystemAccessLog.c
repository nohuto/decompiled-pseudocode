/*
 * XREFs of MiDrainSystemAccessLog @ 0x1403BB21C
 * Callers:
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403BB06C (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiCleanWorkingSet @ 0x1403BB194 (MiCleanWorkingSet.c)
 *     MiEmptyAccessLogs @ 0x140501AF0 (MiEmptyAccessLogs.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiEmptyPageAccessLog @ 0x1402CFDDC (MiEmptyPageAccessLog.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402FE650 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402FE7B0 (MiLockWorkingSetCoreExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDrainSystemAccessLog(__int64 a1)
{
  _QWORD **v1; // rdi
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  ULONG *v5; // rcx

  v1 = (_QWORD **)&unk_140E37828;
  v2 = a1;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v1 = (_QWORD **)(a1 + 232);
  result = (__int64)*v1;
  if ( *v1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    MiLockWorkingSetCoreExclusive(v2);
    if ( *v1 )
    {
      if ( (*(_DWORD *)(v2 + 184) & 0xF) == 1 )
        v5 = &MiSystemPartition;
      else
        v5 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v2 + 174));
      MiEmptyPageAccessLog((__int64)v5, *v1);
      *v1 = 0LL;
    }
    MiUnlockWorkingSetCoreExclusive(v2);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
