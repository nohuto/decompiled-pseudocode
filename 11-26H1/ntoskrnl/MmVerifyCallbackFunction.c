/*
 * XREFs of MmVerifyCallbackFunction @ 0x140B52880
 * Callers:
 *     KeRegisterBoundCallback @ 0x1405E7740 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14050DCC0 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(__int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
