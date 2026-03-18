/*
 * XREFs of ExpVerifyCallbackResult @ 0x140840DD8
 * Callers:
 *     ExRegisterExtension @ 0x140840790 (ExRegisterExtension.c)
 *     ExUnregisterExtension @ 0x140840C20 (ExUnregisterExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall ExpVerifyCallbackResult(int a1, int a2)
{
  if ( a2 < 0 )
    KeBugCheckEx(0x203u, 1uLL, a1, a2, 0LL);
}
