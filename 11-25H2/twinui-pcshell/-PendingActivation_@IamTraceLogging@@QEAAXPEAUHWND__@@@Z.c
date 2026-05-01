/*
 * XREFs of ?PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x1802E9D8C
 * Callers:
 *     _lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::operator() @ 0x1802E43C0 (_lambda_2cec81e5a08c64ba5d30bf166a2a5e31_--operator().c)
 * Callees:
 *     ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18003EEC0 (-Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180042A88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall IamTraceLogging::PendingActivation_(IamTraceLogging *this, HWND a2)
{
  DWORD WindowThreadProcessId; // edi
  const struct _tlgProvider_t *v4; // rax
  HWND v5[3]; // [rsp+40h] [rbp-18h] BYREF
  DWORD v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+64h] [rbp+Ch]
  DWORD v8; // [rsp+70h] [rbp+18h] BYREF
  DWORD v9; // [rsp+78h] [rbp+20h] BYREF

  v7 = HIDWORD(this);
  v6 = 0;
  WindowThreadProcessId = GetWindowThreadProcessId(a2, &v6);
  v4 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v9 = v6;
    v8 = WindowThreadProcessId;
    v5[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_1807B6307,
      0LL,
      0LL,
      (__int64)v5,
      (__int64)&v9,
      (__int64)&v8);
  }
}
