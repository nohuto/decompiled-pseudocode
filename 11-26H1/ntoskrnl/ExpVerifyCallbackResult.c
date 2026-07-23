/*
 * XREFs of ExpVerifyCallbackResult @ 0x140847018
 * Callers:
 *     ExRegisterExtension @ 0x1408469D0 (ExRegisterExtension.c)
 *     ExUnregisterExtension @ 0x140846E60 (ExUnregisterExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExpVerifyCallbackResult(int a1, int a2)
{
  if ( a2 < 0 )
    KeBugCheckEx(0x203u, 1uLL, a1, a2, 0LL);
}
