/*
 * XREFs of ?StartActivity@UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAAX_NPEBG@Z @ 0x1802A05F8
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1802488B0 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180015FA0 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800384F8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003D530 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1801F1A84 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapS.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::StartActivity(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *this,
        char a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  RTL_SRWLOCK *v8; // rcx
  const struct _tlgProvider_t *v9; // rdi
  const GUID *v10; // rax
  const WCHAR *v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12[4]; // [rsp+48h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+8h] BYREF
  DWORD CurrentThreadId; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v6 = *((_QWORD *)this + 34);
  if ( *(_DWORD *)SearchAppLauncherLogging::Provider(v7) <= 5u )
    *(_OWORD *)(v6 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  v8 = SRWLock;
  *(_DWORD *)v6 = 1;
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  v9 = SearchAppLauncherLogging::Provider((__int64)v8);
  if ( *(_DWORD *)v9 > 5u )
  {
    v11 = a3;
    LOBYTE(SRWLock) = a2;
    v12[0] = 0x2000000LL;
    CurrentThreadId = GetCurrentThreadId();
    v10 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>>(
      (__int64)v9,
      byte_1807C8263,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL),
      v10,
      (__int64)v12,
      (__int64)&CurrentThreadId,
      (__int64)&SRWLock,
      &v11);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)((char *)this + 288));
}
