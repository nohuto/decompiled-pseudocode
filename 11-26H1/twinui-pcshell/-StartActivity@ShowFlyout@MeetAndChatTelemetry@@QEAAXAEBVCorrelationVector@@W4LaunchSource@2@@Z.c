/*
 * XREFs of ?StartActivity@ShowFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@W4LaunchSource@2@@Z @ 0x1805F7284
 * Callers:
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F6ED0 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4@Z @ 0x18001060C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@@-$_tlgWriteTempl.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x1801688C8 (-ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z.c)
 *     ?Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1802A9E68 (-Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?zInternalStart@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1805F89BC (-zInternalStart@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_Tl.c)
 */

void __fastcall MeetAndChatTelemetry::ShowFlyout::StartActivity(__int64 a1, TraceLoggingCorrelationVector **a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  DWORD v10; // [rsp+44h] [rbp-D4h] BYREF
  char *v11; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-C8h] BYREF
  char v13[129]; // [rsp+60h] [rbp-B8h] BYREF

  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = MeetAndChatTelemetryLogging::Provider(v4);
  v6 = (__int64)v5;
  if ( *(_DWORD *)v5 > 5u && tlgKeywordOn((__int64)v5, 0x400000000000LL) )
  {
    v11 = CorrelationVector::ToString(a2, (char (*)[129])v13);
    CurrentThreadId = GetCurrentThreadId();
    v8 = *(_QWORD *)(a1 + 272);
    v10 = CurrentThreadId;
    v12 = 50331648LL;
    if ( !*(_BYTE *)(v8 + 4) || _tlgGuidIsZero((const struct _GUID *)(v8 + 24)) )
      v9 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      v6,
      (__int64)&unk_180828D26,
      v8 + 8,
      v9,
      (__int64)&v12,
      (__int64)&v10,
      &v11);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
}
