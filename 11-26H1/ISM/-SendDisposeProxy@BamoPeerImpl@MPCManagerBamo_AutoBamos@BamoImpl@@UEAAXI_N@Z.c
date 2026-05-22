/*
 * XREFs of ?SendDisposeProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAXI_N@Z @ 0x1800B8590
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::SendDisposeProxy(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *this)
{
  __m128i v1; // xmm1
  __int64 v2; // rcx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-38h]
  __m128i v5; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = _mm_loadl_epi64((const __m128i *)((char *)this + 36));
  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 72LL);
  v5 = _mm_unpacklo_epi32(v1, (__m128i)0LL);
  LOWORD(v4) = 11;
  v3 = CoreUICallSend(v2, &v5, 2LL);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDF8,
      (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.Common.bamo.h",
      (const char *)(unsigned int)v3,
      v4);
}
