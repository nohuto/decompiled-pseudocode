/*
 * XREFs of ??$CopilotHotkeyInvoked@AEAW4IMMERSIVE_HOT_KEY_ID@@PEBGIIAEAU_GUID@@@CopilotHotkeyManagerTelemetry@@SAXAEAW4IMMERSIVE_HOT_KEY_ID@@$$QEAPEBG$$QEAI2AEAU_GUID@@@Z @ 0x18061D948
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180626954 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180633140 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180635530 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011064 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapp.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180633BCC (-Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID &,unsigned short const *,unsigned int,unsigned int,_GUID &>(
        int *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5)
{
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int128 v11; // xmm0
  int v13; // [rsp+60h] [rbp+17h] BYREF
  __int64 v14; // [rsp+68h] [rbp+1Fh]
  __int128 *v15; // [rsp+70h] [rbp+27h]
  __int64 v16; // [rsp+78h] [rbp+2Fh] BYREF
  __int128 v17; // [rsp+80h] [rbp+37h] BYREF

  v7 = CopilotHotkeyManagerTelemetry::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    LOBYTE(v7) = tlgKeywordOn((__int64)v7, 0x800000000000LL);
    if ( (_BYTE)v7 )
    {
      v15 = &v17;
      v11 = *a5;
      v16 = *a2;
      v13 = *a1;
      v14 = 0x2000000LL;
      v17 = v11;
      LOBYTE(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
                     v10,
                     (__int64)&unk_18082DA97,
                     v8,
                     v9,
                     (__int64)&v13,
                     &v16);
    }
  }
  return (char)v7;
}
