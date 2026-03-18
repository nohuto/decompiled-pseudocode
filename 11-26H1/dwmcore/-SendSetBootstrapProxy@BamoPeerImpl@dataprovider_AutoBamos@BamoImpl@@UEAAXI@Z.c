/*
 * XREFs of ?SendSetBootstrapProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI@Z @ 0x180240B50
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::SendSetBootstrapProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        int a2)
{
  __m128i v2; // xmm1
  __int64 v3; // rcx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-38h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  __m128i v7; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)((char *)this + 36)), (__m128i)0LL);
  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v7 = v2;
  v4 = CoreUICallSend(*(_QWORD *)(v3 + 72), &v7, 2LL, 7LL, 10, &unk_180373365, a2, v6, v2.m128i_i32[0]);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3C69,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v4,
      v5);
}
