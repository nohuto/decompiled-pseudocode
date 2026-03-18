/*
 * XREFs of ViCtxAllocateIsrContext @ 0x140C40C88
 * Callers:
 *     VerifierIoConnectInterrupt @ 0x140C40900 (VerifierIoConnectInterrupt.c)
 *     ViCtxSetPrivateConnectParameters @ 0x140C4108C (ViCtxSetPrivateConnectParameters.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall ViCtxAllocateIsrContext(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExAllocatePool2(64LL, 0x18uLL, 0x72734956u);
  if ( result )
  {
    *result = a1;
    result[1] = a2;
    result[2] = a3;
  }
  return result;
}
