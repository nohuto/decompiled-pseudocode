/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x14050DCC0
 * Callers:
 *     PsSetCreateThreadNotifyRoutineEx @ 0x140802780 (PsSetCreateThreadNotifyRoutineEx.c)
 *     ObRegisterCallbacks @ 0x140A676A0 (ObRegisterCallbacks.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140B2F01C (PspSetCreateProcessNotifyRoutine.c)
 *     MmVerifyCallbackFunction @ 0x140B52880 (MmVerifyCallbackFunction.c)
 * Callees:
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x140701E40 (MiLockLoadedDataTableEntry.c)
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
