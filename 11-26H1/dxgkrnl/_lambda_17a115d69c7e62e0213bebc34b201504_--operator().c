/*
 * XREFs of _lambda_17a115d69c7e62e0213bebc34b201504_::operator() @ 0x14009A5D8
 * Callers:
 *     _lambda_17a115d69c7e62e0213bebc34b201504_::_lambda_invoker_cdecl_ @ 0x14009A500 (_lambda_17a115d69c7e62e0213bebc34b201504_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x1403015D4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z.c)
 */

LONG_PTR __fastcall lambda_17a115d69c7e62e0213bebc34b201504_::operator()(__int64 a1, struct DXGSWAPCHAIN **a2)
{
  struct DXGSWAPCHAIN *v3; // rcx
  __int64 v4; // rdi
  LONG_PTR result; // rax
  int v6; // [rsp+28h] [rbp-70h]
  struct _D3DKMT_RELEASESWAPCHAIN v7; // [rsp+50h] [rbp-48h] BYREF

  memset(&v7, 0, 0x40uLL);
  v3 = *a2;
  v7.bProducer = 1;
  v4 = (int)SwapChainReleaseInternal(v3, &v7, 0LL, 0, 1, v6);
  result = ObfDereferenceObject(a2);
  if ( (int)v4 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1733;
    return DxgkLogInternalTriageEvent(
             0LL,
             0x40000,
             -1,
             (__int64)L"Indirect display present failed to release a buffer with status: 0x%I64x",
             v4,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
