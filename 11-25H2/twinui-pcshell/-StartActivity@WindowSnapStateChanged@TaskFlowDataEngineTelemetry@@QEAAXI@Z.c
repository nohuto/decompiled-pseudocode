/*
 * XREFs of ?StartActivity@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXI@Z @ 0x1803F2538
 * Callers:
 *     ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1803F3450 (-WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIAp.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180015FA0 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003D530 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180042A88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802AB878 (-Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall TaskFlowDataEngineTelemetry::WindowSnapStateChanged::StartActivity(
        TaskFlowDataEngineTelemetry::WindowSnapStateChanged *this,
        int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v11; // rax
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+8h] BYREF
  DWORD v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v12);
  v4 = *((_QWORD *)this + 34);
  v6 = TaskFlowDataEngineTelemetry::Provider(v5);
  if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  else
    *(_OWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)v4 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
  v8 = TaskFlowDataEngineTelemetry::Provider(v7);
  v9 = (__int64)v8;
  if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
  {
    LODWORD(v12) = a2;
    CurrentThreadId = GetCurrentThreadId();
    v14 = 0x1000000LL;
    v13 = CurrentThreadId;
    v11 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      byte_1807CB8D0,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL),
      v11,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TaskFlowDataEngineTelemetry::WindowSnapStateChanged *)((char *)this + 288));
}
