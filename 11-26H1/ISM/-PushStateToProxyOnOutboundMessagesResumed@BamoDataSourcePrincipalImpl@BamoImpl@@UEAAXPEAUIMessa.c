/*
 * XREFs of ?PushStateToProxyOnOutboundMessagesResumed@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801050D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180036710 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushStateToProxy@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180104F70 (-PushStateToProxy@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z.c)
 */

void __fastcall BamoImpl::BamoDataSourcePrincipalImpl::PushStateToProxyOnOutboundMessagesResumed(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rbp
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-48h]
  __m128i v10; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 4);
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  LOWORD(v9) = 11;
  v10 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(v3 + 36)), (__m128i)0LL);
  v7 = CoreUICallSend(a2, &v10, 2LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x31B8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
  BamoImpl::BamoDataSourcePrincipalImpl::PushStateToProxy(this, a3);
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  LOWORD(v9) = 12;
  v10 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(v3 + 36)), (__m128i)0LL);
  v8 = CoreUICallSend(a2, &v10, 2LL);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x31C0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v8,
      v9);
}
