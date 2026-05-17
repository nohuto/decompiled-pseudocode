/*
 * XREFs of LdrGetProcedureAddressEx @ 0x180085BD0
 * Callers:
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 *     LdrpGetShimEngineInterface @ 0x18011DA94 (LdrpGetShimEngineInterface.c)
 *     AVrfpVerifierStopInitialize @ 0x1801201E8 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddressEx(int a1, int a2, int a3, int a4, int a5)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, a5, retaddr);
}
