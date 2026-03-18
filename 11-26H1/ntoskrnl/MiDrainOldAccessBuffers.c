/*
 * XREFs of MiDrainOldAccessBuffers @ 0x1403BAF90
 * Callers:
 *     MiEmptyTargetedWorkingSet @ 0x1403B9CE8 (MiEmptyTargetedWorkingSet.c)
 *     MiCaptureTargetedWorkingSetAccessBits @ 0x1403B9D78 (MiCaptureTargetedWorkingSetAccessBits.c)
 *     MiAgeTargetedWorkingSet @ 0x140476D30 (MiAgeTargetedWorkingSet.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x1402CFDDC (MiEmptyPageAccessLog.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402FE650 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402FE7B0 (MiLockWorkingSetCoreExclusive.c)
 */

_DWORD *__fastcall MiDrainOldAccessBuffers(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _DWORD *result; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  _DWORD *v8; // r8
  ULONG *v9; // rcx

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v4 = &unk_140E37828;
  else
    v4 = (_QWORD *)(a1 + 232);
  result = (_DWORD *)*v4;
  if ( *v4 )
  {
    MiLockWorkingSetCoreExclusive(a1);
    v6 = (_QWORD *)*v4;
    if ( *v4 )
    {
      v7 = (_QWORD *)*v6;
      v8 = (_DWORD *)*v4;
      if ( *v6 )
      {
        do
        {
          v8 = v7;
          v7 = (_QWORD *)*v7;
        }
        while ( v7 );
      }
      if ( a2 - *((_QWORD *)v8 + 2) > stru_140F12D20.Padding[1] )
      {
        if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
          v9 = &MiSystemPartition;
        else
          v9 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
        MiEmptyPageAccessLog((__int64)v9, v6);
        *v4 = 0LL;
      }
    }
    return MiUnlockWorkingSetCoreExclusive(a1);
  }
  return result;
}
