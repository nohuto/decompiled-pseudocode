/*
 * XREFs of ?StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805F9F38
 * Callers:
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1805F9810 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@6@Z @ 0x180010770 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U4@.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180016044 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x1801688C8 (-ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z.c)
 *     ?Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1802A9E68 (-Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall MeetAndChatTelemetry::UriLaunch::StartActivity(
        MeetAndChatTelemetry::UriLaunch *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        TraceLoggingCorrelationVector **a4)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  RTL_SRWLOCK *v17; // [rsp+50h] [rbp-B0h] BYREF
  const unsigned __int16 *v18; // [rsp+58h] [rbp-A8h] BYREF
  const unsigned __int16 *v19; // [rsp+60h] [rbp-A0h] BYREF
  char *v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  char v22[129]; // [rsp+80h] [rbp-80h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v17);
  v8 = *((_QWORD *)this + 34);
  v10 = MeetAndChatTelemetryLogging::Provider(v9);
  if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x200000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  else
    *(_OWORD *)(v8 + 8) = 0LL;
  *(_DWORD *)v8 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v17);
  v12 = MeetAndChatTelemetryLogging::Provider(v11);
  v13 = (__int64)v12;
  if ( *(_DWORD *)v12 > 5u && tlgKeywordOn((__int64)v12, 0x200000000000LL) )
  {
    v18 = a3;
    v19 = a2;
    v20 = CorrelationVector::ToString(a4, (char (*)[129])v22);
    CurrentThreadId = GetCurrentThreadId();
    v15 = *((_QWORD *)this + 34);
    LODWORD(v17) = CurrentThreadId;
    v21 = 0x1000000LL;
    if ( !*(_BYTE *)(v15 + 4) || _tlgGuidIsZero((const struct _GUID *)(v15 + 24)) )
      v16 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v13,
      (__int64)&unk_180829686,
      v15 + 8,
      v16,
      (__int64)&v21,
      (__int64)&v17,
      &v20,
      &v19,
      &v18);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((MeetAndChatTelemetry::UriLaunch *)((char *)this + 288));
}
