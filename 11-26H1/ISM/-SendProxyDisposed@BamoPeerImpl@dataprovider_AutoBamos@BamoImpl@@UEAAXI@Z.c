/*
 * XREFs of ?SendProxyDisposed@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI@Z @ 0x180106130
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::SendProxyDisposed(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this)
{
  __m128i v1; // xmm1
  __int64 v2; // rcx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-38h]
  __m128i v5; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)((char *)this + 36)), (__m128i)0LL);
  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v5 = v1;
  LOWORD(v4) = 9;
  v3 = CoreUICallSend(*(_QWORD *)(v2 + 72), &v5, 2LL);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3C9D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v3,
      v4);
}
