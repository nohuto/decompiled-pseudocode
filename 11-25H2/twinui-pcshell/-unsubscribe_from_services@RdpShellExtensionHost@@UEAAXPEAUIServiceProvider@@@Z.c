/*
 * XREFs of ?unsubscribe_from_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z @ 0x18064F0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x18064E99C (-Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?StopAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x18064EAC8 (-StopAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 */

void __fastcall RdpShellExtensionHost::unsubscribe_from_services(
        RdpShellExtensionHost *this,
        struct IServiceProvider *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = RdpShellExtensionHost::StopAllRdpShellExtensions(this, (__int64)a2, a3, a4);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2E,
      (int)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
      (const char *)(unsigned int)v4);
  v6 = RdpShellExtensionHostTelemetry::Provider(v5);
  if ( *(_DWORD *)v6 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v6,
      byte_1807F003B,
      0LL);
}
