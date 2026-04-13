/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180056C44
 * Callers:
 *     ?Destroy@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004F040 (-Destroy@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgRef.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058EEC (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflec.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180001C90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x1800022B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@_W@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1800023B0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1800023B0.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAPEBU_tlgProvider_t@@XZ @ 0x180056298 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAPEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdi
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r9
  const wchar_t *v9; // rcx
  __int64 v10; // r8
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  const wchar_t *v14; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+A0h] [rbp-19h] BYREF
  int v20; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-11h] BYREF
  const wchar_t *v22; // [rsp+B0h] [rbp-9h] BYREF
  const wchar_t *v23; // [rsp+B8h] [rbp-1h] BYREF
  const wchar_t *v24; // [rsp+C0h] [rbp+7h] BYREF
  const wchar_t *v25; // [rsp+C8h] [rbp+Fh] BYREF
  const wchar_t *v26; // [rsp+D0h] [rbp+17h] BYREF
  const wchar_t *v27; // [rsp+D8h] [rbp+1Fh] BYREF
  const wchar_t *v28; // [rsp+E0h] [rbp+27h] BYREF
  const wchar_t *v29; // [rsp+E8h] [rbp+2Fh] BYREF
  int v30; // [rsp+120h] [rbp+67h] BYREF
  DWORD v31; // [rsp+128h] [rbp+6Fh] BYREF
  const wchar_t *v32; // [rsp+130h] [rbp+77h] BYREF
  const wchar_t *v33; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v4 = a1[34];
    v5 = *(_DWORD *)(v4 + 72);
    if ( v5 < 0 && (v6 = v4 + 80, v5 == *(_DWORD *)(v6 + 8)) && v6 )
    {
      v7 = CreativeFramework::Logging::ShellPlacementLogging::Provider((__int64)a1);
      if ( *(_DWORD *)v7 > 2u && tlgKeywordOn((__int64)v7, 0x200000000000LL) )
      {
        v9 = *(const wchar_t **)(v6 + 120);
        v10 = a1[34];
        v23 = *(const wchar_t **)(v6 + 112);
        v31 = *(_DWORD *)(v6 + 104);
        v24 = *(const wchar_t **)(v6 + 96);
        v25 = *(const wchar_t **)(v6 + 88);
        v30 = *(_DWORD *)(v6 + 80);
        v26 = *(const wchar_t **)(v6 + 72);
        LODWORD(v32) = *(_DWORD *)(v6 + 32);
        v27 = *(const wchar_t **)(v6 + 24);
        LODWORD(v33) = *(_DWORD *)v6;
        v28 = *(const wchar_t **)(v6 + 128);
        v19 = *(_DWORD *)(v6 + 64);
        v29 = *(const wchar_t **)(v6 + 56);
        v20 = *(_DWORD *)(v6 + 8);
        v22 = v9;
        v21 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v8,
          byte_180164401,
          (const GUID *)(v10 + 8),
          v8,
          (__int64)&v21,
          (__int64)&v20,
          &v29,
          (__int64)&v19,
          &v28,
          (__int64)&v33,
          &v27,
          (__int64)&v32,
          &v26,
          (__int64)&v30,
          &v25,
          &v24,
          (__int64)&v31,
          &v23,
          &v22);
      }
    }
    else
    {
      v11 = CreativeFramework::Logging::ShellPlacementLogging::Provider((__int64)a1);
      v12 = (__int64)v11;
      if ( *(_DWORD *)v11 > 2u && tlgKeywordOn((__int64)v11, 0x200000000000LL) )
      {
        v13 = a1[34];
        v14 = *(const wchar_t **)(v13 + 56);
        v33 = *(const wchar_t **)(v13 + 48);
        v32 = v14;
        CurrentThreadId = GetCurrentThreadId();
        v16 = a1[34];
        v31 = CurrentThreadId;
        v30 = a2;
        v21 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v12,
          byte_180164636,
          (const GUID *)(v16 + 8),
          v17,
          (__int64)&v21,
          (__int64)&v30,
          (__int64)&v31,
          &v33,
          &v32);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
