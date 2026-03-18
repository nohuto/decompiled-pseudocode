/*
 * XREFs of ?SendDisposeProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI_N@Z @ 0x180240940
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::SendDisposeProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        int a2,
        unsigned __int8 a3)
{
  __m128i v3; // xmm1
  __int64 v4; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __m128i v8; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = _mm_loadl_epi64((const __m128i *)((char *)this + 36));
  LODWORD(v7) = a3;
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 72LL);
  v8 = _mm_unpacklo_epi32(v3, (__m128i)0LL);
  v5 = CoreUICallSend(v4, &v8, 2LL, 7LL, 8, &unk_180373371, a2, v7, v8.m128i_i32[0]);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3C91,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5,
      v6);
}
