/*
 * XREFs of MmVerifyCallbackFunction @ 0x140B4FFF0
 * Callers:
 *     KeRegisterBoundCallback @ 0x1405E4DD0 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140514250 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(__int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
