/*
 * XREFs of ?SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z @ 0x180231ABC
 * Callers:
 *     ?GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x1802930B8 (-GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@.c)
 * Callees:
 *     ?Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18009E4F4 (-Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1801CEFD4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall XamlSwitcherTelemetry::SnapAssistZOrder_(
        XamlSwitcherTelemetry *this,
        const struct tagRECT *a2,
        HWND a3,
        HWND a4)
{
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  LONG right; // [rsp+50h] [rbp-20h] BYREF
  LONG top; // [rsp+54h] [rbp-1Ch] BYREF
  LONG left; // [rsp+58h] [rbp-18h] BYREF
  HWND v13; // [rsp+60h] [rbp-10h] BYREF
  HWND v14; // [rsp+68h] [rbp-8h] BYREF
  XamlSwitcherTelemetry *v15; // [rsp+80h] [rbp+10h] BYREF

  v15 = this;
  v7 = XamlSwitcherLogging::Provider((__int64)this);
  if ( *(_DWORD *)v7 > 5u )
  {
    LODWORD(v15) = a2->bottom;
    right = a2->right;
    top = a2->top;
    left = a2->left;
    v13 = a4;
    v14 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)v7,
      byte_180835095,
      v8,
      v9,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
}
