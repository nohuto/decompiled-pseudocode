/*
 * XREFs of ?SendCheckProtocol@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXAEBU_GUID@@@Z @ 0x1801D7900
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::SendCheckProtocol(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        const struct _GUID *a2)
{
  __m128i v2; // xmm1
  __int64 v3; // rax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-48h]
  __int64 v6; // [rsp+38h] [rbp-30h]
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  __m128i v8; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = _mm_loadl_epi64((const __m128i *)((char *)this + 36));
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 72LL);
  v7 = (__int128)*a2;
  v8 = _mm_unpacklo_epi32(v2, (__m128i)0LL);
  v4 = CoreUICallSend(v3, &v8, 2LL, 7LL, 0, &unk_18037339B, (unsigned int)&v7, v6, v7);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3CA9,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v4,
      v5);
}
