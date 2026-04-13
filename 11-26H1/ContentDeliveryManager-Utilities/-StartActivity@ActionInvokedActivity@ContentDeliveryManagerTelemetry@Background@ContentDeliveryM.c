/*
 * XREFs of ?StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180070A2C
 * Callers:
 *     _lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator() @ 0x18006E844 (_lambda_64334da26fc4dbc2a9fcd40835aea43a_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x180001C90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@55@Z @ 0x180002BA0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U3@@-$_tlgWriteTe.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029E44 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044AC0 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180054764 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180058DF8 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18005C914 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  const GUID *v16; // rcx
  const wchar_t *v17; // [rsp+50h] [rbp-20h] BYREF
  const wchar_t *v18; // [rsp+58h] [rbp-18h] BYREF
  const wchar_t *v19; // [rsp+60h] [rbp-10h] BYREF
  __int64 v20; // [rsp+68h] [rbp-8h] BYREF
  RTL_SRWLOCK *v21; // [rsp+90h] [rbp+20h] BYREF

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v21);
  v8 = *((_QWORD *)this + 34);
  v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v9);
  if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  else
    *(_OWORD *)(v8 + 8) = 0LL;
  *(_DWORD *)v8 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
  v12 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v11);
  v13 = (__int64)v12;
  if ( *(_DWORD *)v12 > 5u && tlgKeywordOn((__int64)v12, 0x400000000000LL) )
  {
    v17 = a4;
    v18 = a3;
    v19 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v15 = *((_QWORD *)this + 34);
    LODWORD(v21) = CurrentThreadId;
    v20 = 0x2000000LL;
    if ( !*(_BYTE *)(v15 + 4) || _tlgGuidIsZero((const struct _GUID *)(v15 + 24)) )
      v16 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v13,
      byte_180166457,
      (const GUID *)(v15 + 8),
      v16,
      (__int64)&v20,
      (__int64)&v21,
      &v19,
      &v18,
      &v17);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)((char *)this + 288));
}
