/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x140514250
 * Callers:
 *     PsSetCreateThreadNotifyRoutineEx @ 0x1407FCD50 (PsSetCreateThreadNotifyRoutineEx.c)
 *     ObRegisterCallbacks @ 0x140A5A730 (ObRegisterCallbacks.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140B2CF9C (PspSetCreateProcessNotifyRoutine.c)
 *     MmVerifyCallbackFunction @ 0x140B4FFF0 (MmVerifyCallbackFunction.c)
 * Callees:
 *     MmUnlockLoadedDataTableEntry @ 0x14051E3A8 (MmUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x1406FD170 (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmVerifyCallbackFunctionCheckFlags(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  v4 = MiLockLoadedDataTableEntry(a1, 1LL);
  if ( v4 )
  {
    if ( !a2 || (a2 & *(_DWORD *)(v4 + 104)) != 0 )
      v3 = 1;
    MmUnlockLoadedDataTableEntry(v4);
  }
  return v3;
}
