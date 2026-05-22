/*
 * XREFs of ?SendCheckProtocol@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXAEBU_GUID@@@Z @ 0x180089670
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::SendCheckProtocol(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        const struct _GUID *a2)
{
  __int64 v2; // rax
  int v3; // eax
  int v4; // [rsp+20h] [rbp-48h]
  __m128i v5; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  LOWORD(v4) = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 72LL);
  v5 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)((char *)this + 36)), (__m128i)0LL);
  v3 = CoreUICallSend(v2, &v5, 2LL);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3CA9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v3,
      v4);
}
