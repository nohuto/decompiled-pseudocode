/*
 * XREFs of ??$InvokedCopilotKeyTargetApplication@AEAY0N@$$CBGPEBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0N@$$CBG$$QEAPEBG@Z @ 0x18061E29C
 * Callers:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1806237D0 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801EA130 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180633BCC (-Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CopilotHotkeyManagerTelemetry::InvokedCopilotKeyTargetApplication<unsigned short const (&)[13],unsigned short const *>(
        __int64 a1,
        const WCHAR **a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  const WCHAR *v6; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  const WCHAR *v9; // [rsp+60h] [rbp+18h] BYREF
  const WCHAR *v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = a1;
  v3 = CopilotHotkeyManagerTelemetry::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v3, 0x400000000000LL);
    if ( (_BYTE)v3 )
    {
      v6 = *a2;
      v10 = L"PressAndHold";
      v9 = v6;
      v8 = 0x2000000LL;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v5,
                     byte_18082D6D2,
                     v4,
                     v5,
                     &v10,
                     &v9,
                     (__int64)&v8);
    }
  }
  return (char)v3;
}
