/*
 * XREFs of ??$CopilotHotkeyInvoked@AEAW4IMMERSIVE_HOT_KEY_ID@@AEAY0FE@$$CBGIIAEAU_GUID@@@CopilotHotkeyManagerTelemetry@@SAXAEAW4IMMERSIVE_HOT_KEY_ID@@AEAY0FE@$$CBG$$QEAI2AEAU_GUID@@@Z @ 0x18061D848
 * Callers:
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x180632CA0 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011064 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapp.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180633BCC (-Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID &,unsigned short const (&)[84],unsigned int,unsigned int,_GUID &>(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int128 v10; // xmm0
  int v12; // [rsp+60h] [rbp+17h] BYREF
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  __int128 *v14; // [rsp+70h] [rbp+27h]
  const wchar_t *v15; // [rsp+78h] [rbp+2Fh] BYREF
  __int128 v16; // [rsp+80h] [rbp+37h] BYREF

  v6 = CopilotHotkeyManagerTelemetry::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x800000000000LL);
    if ( (_BYTE)v6 )
    {
      v14 = &v16;
      v10 = *a5;
      v13 = 0x2000000LL;
      v15 = L"windows.immersivecontrolpanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel";
      v12 = *a1;
      v16 = v10;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
                     v9,
                     (__int64)&unk_18082DB34,
                     v7,
                     v8,
                     (__int64)&v12,
                     &v15);
    }
  }
  return (char)v6;
}
