/*
 * XREFs of ?PushStateToPrincipalOnPropertiesRefresh@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z @ 0x180251C40
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoDataProviderProxyImpl::PushStateToPrincipalOnPropertiesRefresh(
        BamoImpl::BamoDataProviderProxyImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a3)
{
  __m128i v5; // xmm1
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+38h] [rbp-20h]
  __m128i v15; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = *((_DWORD *)this + 6);
  v5 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)((char *)a3 + 36)), (__m128i)0LL);
  v15.m128i_i64[1] = v5.m128i_i64[1];
  v7 = CoreUICallSend(a2, &v15, 2LL, 7LL, 14, &unk_180373365, v11, v13, v5.m128i_i32[0]);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2AA2,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
  (*(void (__fastcall **)(BamoImpl::BamoDataProviderProxyImpl *))(*(_QWORD *)this + 80LL))(this);
  v12 = *((_DWORD *)this + 6);
  v15 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)((char *)a3 + 36)), (__m128i)0LL);
  v8 = CoreUICallSend(a2, &v15, 2LL, 7LL, 13, &unk_180373365, v12, v14, v15.m128i_i32[0]);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2AAA,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v8,
      v10);
}
