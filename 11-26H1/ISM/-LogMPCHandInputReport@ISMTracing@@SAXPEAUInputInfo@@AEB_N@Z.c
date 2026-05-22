/*
 * XREFs of ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C5384
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x18000D8B0 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@D@@44@Z @ 0x180002750 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@D@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U3@U3@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@33333AEBU?$_tlgWrapSz@D@@355333@Z @ 0x180002B04 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U-$_tlgWrapSz@D@@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@333333333@Z @ 0x180002CF4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWri.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x18000EA4C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800C4E44 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800C6048 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ISMTracing::LogMPCHandInputReport(struct InputInfo *a1, const bool *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rsi
  __int64 Vector3AsString; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE *v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v22[4]; // [rsp+A8h] [rbp-80h] BYREF
  int v23; // [rsp+ACh] [rbp-7Ch] BYREF
  int v24; // [rsp+B0h] [rbp-78h] BYREF
  int v25; // [rsp+B4h] [rbp-74h] BYREF
  int v26; // [rsp+B8h] [rbp-70h] BYREF
  int v27; // [rsp+BCh] [rbp-6Ch] BYREF
  int v28; // [rsp+C0h] [rbp-68h] BYREF
  int v29; // [rsp+C4h] [rbp-64h] BYREF
  int v30; // [rsp+C8h] [rbp-60h] BYREF
  int v31; // [rsp+CCh] [rbp-5Ch] BYREF
  int v32; // [rsp+D0h] [rbp-58h] BYREF
  int v33; // [rsp+D4h] [rbp-54h] BYREF
  const unsigned __int16 *v34; // [rsp+D8h] [rbp-50h] BYREF
  const unsigned __int16 *v35; // [rsp+E0h] [rbp-48h] BYREF
  const unsigned __int16 *v36; // [rsp+E8h] [rbp-40h] BYREF
  _BYTE v37[32]; // [rsp+F0h] [rbp-38h] BYREF
  _BYTE v38[32]; // [rsp+110h] [rbp-18h] BYREF
  _BYTE v39[32]; // [rsp+130h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 16) == 6 )
  {
    v4 = ISMTracing::Provider();
    v5 = (__int64)v4;
    if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 1LL) )
    {
      v33 = *((_DWORD *)a1 + 303);
      v26 = *((_DWORD *)a1 + 267);
      v27 = *((_DWORD *)a1 + 268);
      Vector3AsString = ISMTracing::GetVector3AsString((__int64)v39);
      if ( *(_QWORD *)(Vector3AsString + 24) > 0xFuLL )
        Vector3AsString = *(_QWORD *)Vector3AsString;
      v34 = (const unsigned __int16 *)Vector3AsString;
      v7 = ISMTracing::GetVector3AsString((__int64)v38);
      if ( *(_QWORD *)(v7 + 24) > 0xFuLL )
        v7 = *(_QWORD *)v7;
      v35 = (const unsigned __int16 *)v7;
      v28 = *((_DWORD *)a1 + 266);
      v8 = ISMTracing::GetVector3AsString((__int64)v37);
      if ( *(_QWORD *)(v8 + 24) > 0xFuLL )
        v8 = *(_QWORD *)v8;
      v36 = (const unsigned __int16 *)v8;
      v29 = *((_DWORD *)a1 + 265);
      v30 = *((_DWORD *)a1 + 264);
      v31 = *((_DWORD *)a1 + 17);
      v32 = *((_DWORD *)a1 + 16);
      v23 = *((_DWORD *)a1 + 18);
      v22[0] = *a2;
      v24 = *((_DWORD *)a1 + 2);
      v25 = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        (__int64)&unk_1802140D2,
        v9,
        v10,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)v22,
        (__int64)&v23,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        &v36,
        (__int64)&v28,
        &v35,
        &v34,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v33);
      std::string::_Tidy_deallocate(v37);
      std::string::_Tidy_deallocate(v38);
      v11 = v39;
LABEL_23:
      std::string::_Tidy_deallocate(v11);
    }
  }
  else
  {
    v12 = ISMTracing::Provider();
    if ( *(_DWORD *)v12 > 4u && tlgKeywordOn((__int64)v12, 1LL) )
    {
      v25 = *((_DWORD *)a1 + 303);
      v24 = *((_DWORD *)a1 + 267);
      v23 = *((_DWORD *)a1 + 268);
      v32 = *((_DWORD *)a1 + 266);
      v31 = *((_DWORD *)a1 + 265);
      v30 = *((_DWORD *)a1 + 264);
      v29 = *((_DWORD *)a1 + 17);
      v28 = *((_DWORD *)a1 + 16);
      v27 = *((_DWORD *)a1 + 18);
      v22[0] = *a2;
      v26 = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        (__int64)&unk_180214010,
        v13,
        v14,
        (__int64)&v26,
        (__int64)v22,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v30,
        (__int64)&v31,
        (__int64)&v32,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25);
    }
    v15 = ISMTracing::Provider();
    v16 = (__int64)v15;
    if ( *(_DWORD *)v15 > 5u && tlgKeywordOn((__int64)v15, 1LL) )
    {
      v17 = ISMTracing::GetVector3AsString((__int64)v37);
      if ( *(_QWORD *)(v17 + 24) > 0xFuLL )
        v17 = *(_QWORD *)v17;
      v36 = (const unsigned __int16 *)v17;
      v18 = ISMTracing::GetVector3AsString((__int64)v38);
      if ( *(_QWORD *)(v18 + 24) > 0xFuLL )
        v18 = *(_QWORD *)v18;
      v35 = (const unsigned __int16 *)v18;
      v19 = ISMTracing::GetVector3AsString((__int64)v39);
      if ( *(_QWORD *)(v19 + 24) > 0xFuLL )
        v19 = *(_QWORD *)v19;
      v34 = (const unsigned __int16 *)v19;
      v25 = *((_DWORD *)a1 + 18);
      v24 = *((_DWORD *)a1 + 2);
      v23 = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        v16,
        (__int64)&unk_180213EF8,
        v20,
        v21,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        &v34,
        &v35,
        &v36);
      std::string::_Tidy_deallocate(v39);
      std::string::_Tidy_deallocate(v38);
      v11 = v37;
      goto LABEL_23;
    }
  }
}
