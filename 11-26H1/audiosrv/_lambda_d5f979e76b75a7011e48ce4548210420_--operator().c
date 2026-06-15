/*
 * XREFs of _lambda_d5f979e76b75a7011e48ce4548210420_::operator() @ 0x18010FB4C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d5f979e76b75a7011e48ce4548210420__void_::_Do_call @ 0x1801104A0 (std--_Func_impl_no_alloc__lambda_d5f979e76b75a7011e48ce4548210420__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001984 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x18010C2B0 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 */

void __fastcall lambda_d5f979e76b75a7011e48ce4548210420_::operator()(__int64 a1)
{
  struct AudioSrvTelemetryProvider *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  const wchar_t **v5; // rax
  const wchar_t *v6; // rcx
  const unsigned __int16 *v7; // rcx
  int refreshed; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  const wchar_t *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v2 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v2 + 1), 32LL) )
  {
    v5 = *(const wchar_t ***)(a1 + 8);
    if ( v5 )
      v6 = *v5;
    else
      v6 = 0LL;
    v10 = *(_DWORD *)a1;
    v11 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v3,
      (int)&unk_1801A7484,
      v3,
      v4,
      (__int64)&v10,
      &v11);
  }
  v7 = *(const unsigned __int16 **)(a1 + 8);
  if ( v7 )
    v7 = *(const unsigned __int16 **)v7;
  refreshed = CPolicyConfig::RefreshConnectorFormats(v7);
  if ( refreshed < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      164LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)refreshed);
}
