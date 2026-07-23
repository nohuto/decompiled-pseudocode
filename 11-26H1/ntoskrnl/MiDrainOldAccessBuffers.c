/*
 * XREFs of MiDrainOldAccessBuffers @ 0x1403C4E00
 * Callers:
 *     MiCaptureTargetedWorkingSetAccessBits @ 0x1403C3BE8 (MiCaptureTargetedWorkingSetAccessBits.c)
 *     MiEmptyTargetedWorkingSet @ 0x1403C7C08 (MiEmptyTargetedWorkingSet.c)
 *     MiAgeTargetedWorkingSet @ 0x1404704B0 (MiAgeTargetedWorkingSet.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402E06D0 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402E0830 (MiLockWorkingSetCoreExclusive.c)
 */

_DWORD *__fastcall MiDrainOldAccessBuffers(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx
  _DWORD *result; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  _DWORD *v9; // r8
  ULONG *v10; // rcx

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v5 = &unk_140E379A8;
  else
    v5 = (_QWORD *)(a1 + 232);
  result = (_DWORD *)*v5;
  if ( *v5 )
  {
    MiLockWorkingSetCoreExclusive(a1, a2, a3);
    v7 = (_QWORD *)*v5;
    if ( *v5 )
    {
      v8 = (_QWORD *)*v7;
      v9 = (_DWORD *)*v5;
      if ( *v7 )
      {
        do
        {
          v9 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      if ( a2 - *((_QWORD *)v9 + 2) > (unsigned __int64)PfKernelGlobals )
      {
        if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
          v10 = &MiSystemPartition;
        else
          v10 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
        MiEmptyPageAccessLog((__int64)v10, v7);
        *v5 = 0LL;
      }
    }
    return MiUnlockWorkingSetCoreExclusive(a1);
  }
  return result;
}
