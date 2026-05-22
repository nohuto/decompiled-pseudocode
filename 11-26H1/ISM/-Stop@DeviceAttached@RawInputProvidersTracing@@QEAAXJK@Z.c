/*
 * XREFs of ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800D84C8
 * Callers:
 *     wil::details::lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___::_lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___ @ 0x1800D4788 (wil--details--lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___--_lambda_call__lambda_aa67.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D53CC (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644@Z @ 0x180003AB8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180003AB8.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D2FF0 (-Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800D5ED8 (-IgnoreCurrentThread@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgRef.c)
 *     ?zInternalStop@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800D8EC4 (-zInternalStop@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflector.c)
 */

void __fastcall RawInputProvidersTracing::DeviceAttached::Stop(
        RawInputProvidersTracing::DeviceAttached *this,
        int a2,
        int a3)
{
  __int64 v3; // rsi
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  int v19; // [rsp+B0h] [rbp-80h] BYREF
  DWORD v20; // [rsp+B4h] [rbp-7Ch] BYREF
  int v21; // [rsp+B8h] [rbp-78h] BYREF
  int v22; // [rsp+BCh] [rbp-74h] BYREF
  int v23; // [rsp+C0h] [rbp-70h] BYREF
  int v24; // [rsp+C4h] [rbp-6Ch] BYREF
  int v25; // [rsp+C8h] [rbp-68h] BYREF
  int v26; // [rsp+CCh] [rbp-64h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-60h] BYREF
  const WCHAR *v28; // [rsp+D8h] [rbp-58h] BYREF
  const unsigned __int16 *v29; // [rsp+E0h] [rbp-50h] BYREF
  const WCHAR *v30; // [rsp+E8h] [rbp-48h] BYREF
  const unsigned __int16 *v31; // [rsp+F0h] [rbp-40h] BYREF
  const unsigned __int16 *v32; // [rsp+F8h] [rbp-38h] BYREF
  const WCHAR *v33; // [rsp+100h] [rbp-30h] BYREF
  const unsigned __int16 *v34; // [rsp+108h] [rbp-28h] BYREF
  const unsigned __int16 *v35; // [rsp+110h] [rbp-20h] BYREF
  __int64 v36; // [rsp+118h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+120h] [rbp-10h] BYREF
  __int64 *v38; // [rsp+140h] [rbp+10h]
  __int64 v39; // [rsp+148h] [rbp+18h]
  int *v40; // [rsp+150h] [rbp+20h]
  __int64 v41; // [rsp+158h] [rbp+28h]
  DWORD *v42; // [rsp+160h] [rbp+30h]
  __int64 v43; // [rsp+168h] [rbp+38h]
  int *v44; // [rsp+170h] [rbp+40h]
  __int64 v45; // [rsp+178h] [rbp+48h]
  int *v46; // [rsp+180h] [rbp+50h]
  __int64 v47; // [rsp+188h] [rbp+58h]

  v3 = *((_QWORD *)this + 34);
  v7 = *(_DWORD *)(v3 + 72);
  if ( v7 < 0 && (v8 = v3 + 80, v7 == *(_DWORD *)(v8 + 8)) && v8 )
  {
    wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v10 = RawInputProvidersTracing::Provider(v9);
    if ( *(_DWORD *)v10 > 4u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      v28 = *(const WCHAR **)(v8 + 120);
      v13 = *((_QWORD *)this + 34);
      v29 = *(const unsigned __int16 **)(v8 + 112);
      v25 = *(_DWORD *)(v8 + 104);
      v30 = *(const WCHAR **)(v8 + 96);
      v31 = *(const unsigned __int16 **)(v8 + 88);
      v26 = *(_DWORD *)(v8 + 80);
      v32 = *(const unsigned __int16 **)(v8 + 72);
      v19 = *(_DWORD *)(v8 + 32);
      v33 = *(const WCHAR **)(v8 + 24);
      v20 = *(_DWORD *)v8;
      v34 = *(const unsigned __int16 **)(v8 + 128);
      v21 = *(_DWORD *)(v8 + 64);
      v35 = *(const unsigned __int16 **)(v8 + 56);
      v22 = *(_DWORD *)(v8 + 8);
      v23 = a3;
      v24 = a2;
      v36 = 0x1000000LL;
      v27 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (__int64)&unk_180215AE8,
        v13 + 8,
        v12,
        (__int64)&v27,
        (__int64)&v36,
        (__int64)&v22,
        &v35,
        (__int64)&v21,
        &v34,
        (__int64)&v20,
        &v33,
        (__int64)&v19,
        &v32,
        (__int64)&v26,
        &v31,
        &v30,
        (__int64)&v25,
        &v29,
        &v28,
        (__int64)&v24,
        (__int64)&v23);
    }
  }
  else
  {
    wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v15 = RawInputProvidersTracing::Provider(v14);
    v16 = (__int64)v15;
    if ( *(_DWORD *)v15 > 4u && tlgKeywordOn((__int64)v15, 0x400000000000LL) )
    {
      v22 = a3;
      v21 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 34);
      v20 = CurrentThreadId;
      v47 = 4LL;
      v45 = 4LL;
      v19 = *(_DWORD *)(v18 + 72);
      v46 = &v22;
      v44 = &v21;
      v42 = &v20;
      v40 = &v19;
      v38 = &v27;
      v27 = 0LL;
      v43 = 4LL;
      v41 = 4LL;
      v39 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v16, byte_180215A86, (const GUID *)(v18 + 8), 0LL, 7u, &v37);
    }
  }
  wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
