/*
 * XREFs of DpxAcquireSimpleRundown @ 0x1405E5EA0
 * Callers:
 *     DpxEndpointWrappedCall @ 0x140C66010 (DpxEndpointWrappedCall.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

signed __int64 __fastcall DpxAcquireSimpleRundown(__int64 a1)
{
  unsigned int Number; // edx
  int v2; // ebx
  volatile signed __int64 *v3; // rbx
  signed __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v2 = *(_DWORD *)(a1 + 8) - 1;
  v5 = 0;
  v3 = (volatile signed __int64 *)(*(_QWORD *)a1 + *(_DWORD *)(a1 + 12) * (Number & v2));
  for ( result = _InterlockedExchangeAdd64(v3, 2uLL); (result & 1) != 0; result = *v3 )
    KeYieldProcessorEx(&v5);
  return result;
}
