/*
 * XREFs of _lambda_60171be431ab7e306603b28a1d6e78d6_::operator() @ 0x180673BB4
 * Callers:
 *     _lambda_60171be431ab7e306603b28a1d6e78d6_::_lambda_invoker_cdecl_ @ 0x180672FB0 (_lambda_60171be431ab7e306603b28a1d6e78d6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CoInitializeEx_failfast@wil@@YA?AV?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@1@K@Z @ 0x180673DA8 (-CoInitializeEx_failfast@wil@@YA-AV-$unique_call@P6AXXZ$1-CoUninitialize@@YAXXZ$00@1@K@Z.c)
 *     ?Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180674A5C (-Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void lambda_60171be431ab7e306603b28a1d6e78d6_::operator()(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const struct _tlgProvider_t *v4; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  wil::CoInitializeEx_failfast((__int64 *)va);
  v4 = RdpShellExtensionHostTelemetry::Provider();
  if ( *(_DWORD *)v4 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v4,
      byte_18082EA5F,
      0LL);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3);
  v6 = retaddr;
  if ( v5 < 0 )
  {
    v7 = 146LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      v6,
      (void *)v7,
      (int)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
  v6 = retaddr;
  if ( v5 < 0 )
  {
    v7 = 150LL;
    goto LABEL_5;
  }
LABEL_6:
  if ( (_BYTE)v9 )
    CoUninitialize();
}
