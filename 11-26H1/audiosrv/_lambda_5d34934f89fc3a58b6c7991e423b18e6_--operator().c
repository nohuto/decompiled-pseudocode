/*
 * XREFs of _lambda_5d34934f89fc3a58b6c7991e423b18e6_::operator() @ 0x180136168
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@553AEBU?$_tlgWrapperByVal@$01@@445@Z @ 0x1800053E4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U-$_tlgWr.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@553AEBU?$_tlgWrapperByVal@$01@@4454@Z @ 0x180005548 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U3_ea_180005548.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

char __fastcall lambda_5d34934f89fc3a58b6c7991e423b18e6_::operator()(__int64 *a1, __int64 a2, __int64 a3, _WORD *a4)
{
  __int64 v4; // r11
  unsigned int v5; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  GUID *v12; // rax
  GUID v13; // xmm0
  int *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  __int128 *v19; // rax
  __int128 v20; // xmm0
  int *v21; // rax
  _WORD v23[2]; // [rsp+80h] [rbp-19h] BYREF
  int v24; // [rsp+84h] [rbp-15h] BYREF
  int v25; // [rsp+88h] [rbp-11h] BYREF
  int v26; // [rsp+8Ch] [rbp-Dh] BYREF
  int v27; // [rsp+90h] [rbp-9h] BYREF
  const wchar_t *v28; // [rsp+98h] [rbp-1h] BYREF
  const wchar_t *v29; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+B0h] [rbp+17h] BYREF
  GUID *v32; // [rsp+B8h] [rbp+1Fh] BYREF
  GUID *v33; // [rsp+C0h] [rbp+27h] BYREF
  GUID v34; // [rsp+C8h] [rbp+2Fh] BYREF
  __int128 v35; // [rsp+D8h] [rbp+3Fh] BYREF

  v4 = *a1;
  LOBYTE(v5) = -2;
  if ( *a4 == 0xFFFE )
  {
    if ( **(_DWORD **)(v4 + 2120) > 4u )
    {
      LOBYTE(v5) = tlgKeywordOn(*(_QWORD *)(v4 + 2120), 16LL);
      if ( (_BYTE)v5 )
      {
        v27 = *(_DWORD *)(v9 + 20);
        v28 = (const wchar_t *)(v9 + 24);
        v24 = *(_DWORD *)(v9 + 8);
        v25 = *(_DWORD *)(v9 + 4);
        v23[0] = *(_WORD *)(v9 + 2);
        v29 = L"WAVEFORMATEXTENSIBLE";
        v12 = *(GUID **)(v11 + 1568);
        v30 = a3;
        v31 = a2;
        v13 = *v12;
        v32 = &v34;
        v14 = *(int **)(v10 + 8);
        v34 = v13;
        v26 = *v14;
        v33 = *(GUID **)(*(_QWORD *)(v11 + 1584) + 48LL);
        LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
                       v8,
                       (int)&unk_1801AB66F,
                       v8,
                       v9,
                       (const wchar_t **)&v33,
                       (__int64)&v26,
                       (__int64 *)&v32,
                       &v31,
                       &v30,
                       &v29,
                       (__int64)v23,
                       (__int64)&v25,
                       (__int64)&v24,
                       (__int64 *)&v28,
                       (__int64)&v27);
      }
    }
  }
  else
  {
    v5 = (unsigned __int16)*a4;
    v34 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v34.Data1 = v5;
    if ( **(_DWORD **)(v4 + 2120) > 4u )
    {
      LOBYTE(v5) = tlgKeywordOn(*(_QWORD *)(v4 + 2120), 16LL);
      if ( (_BYTE)v5 )
      {
        v31 = a3;
        v33 = &v34;
        v26 = *(_DWORD *)(v16 + 8);
        v25 = *(_DWORD *)(v16 + 4);
        v23[0] = *(_WORD *)(v16 + 2);
        v32 = (GUID *)L"WAVEFORMATEX";
        v19 = *(__int128 **)(v18 + 1568);
        v30 = a2;
        v20 = *v19;
        v29 = (const wchar_t *)&v35;
        v21 = *(int **)(v17 + 8);
        v35 = v20;
        v24 = *v21;
        v28 = *(const wchar_t **)(*(_QWORD *)(v18 + 1584) + 48LL);
        LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                       v15,
                       (int)&unk_1801AB5B4,
                       v15,
                       v16,
                       &v28,
                       (__int64)&v24,
                       (__int64 *)&v29,
                       &v30,
                       &v31,
                       (const wchar_t **)&v32,
                       (__int64)v23,
                       (__int64)&v25,
                       (__int64)&v26,
                       (__int64 *)&v33);
      }
    }
  }
  return v5;
}
