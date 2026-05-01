/*
 * XREFs of ?TraceFoundInputSiteWindow@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@0_N@Z @ 0x18057BA60
 * Callers:
 *     ?TryToGetInputSiteWindow@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@PEAU8@@Z @ 0x18057BD44 (-TryToGetInputSiteWindow@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inter.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@34AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000DB14 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U1@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWrit.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?Provider@DragDropSimulatorTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18057AD1C (-Provider@DragDropSimulatorTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall DragDropSimulatorTelemetryProvider::TraceFoundInputSiteWindow(HWND hWnd, HWND a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  WCHAR *v8; // [rsp+58h] [rbp-A8h] BYREF
  HWND v9; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR *v10; // [rsp+68h] [rbp-98h] BYREF
  HWND v11; // [rsp+70h] [rbp-90h] BYREF
  __int64 v12; // [rsp+78h] [rbp-88h] BYREF
  WCHAR v13[264]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR ClassName[264]; // [rsp+290h] [rbp+190h] BYREF

  memset_0(ClassName, 0, 0x20AuLL);
  GetClassNameW(hWnd, ClassName, 260);
  ClassName[260] = 0;
  memset_0(v13, 0, 0x20AuLL);
  GetClassNameW(a2, v13, 260);
  v13[260] = 0;
  v5 = DragDropSimulatorTraceLogging::Provider(v4);
  if ( *(_DWORD *)v5 > 4u )
  {
    v8 = v13;
    v9 = a2;
    v10 = ClassName;
    v11 = hWnd;
    v12 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
      (__int64)v5,
      (__int64)&unk_18082016A,
      v6,
      v7,
      (__int64)&v12,
      (__int64)&v11,
      &v10,
      (__int64)&v9,
      &v8);
  }
}
