/*
 * XREFs of ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x18051BD4C
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x18051AB50 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@444444@Z @ 0x18000C434 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@@-.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180016044 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800705CC (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeTraceLogging::ShellTrackedWindowPosChanged::StartActivity(
        TabletModeTraceLogging::ShellTrackedWindowPosChanged *this,
        struct IApplicationView *a2,
        __int64 a3,
        const struct tagRECT *a4,
        unsigned int a5)
{
  unsigned __int16 **v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rbx
  const WCHAR *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  DWORD CurrentThreadId; // [rsp+84h] [rbp+13h] BYREF
  const WCHAR *v16; // [rsp+88h] [rbp+17h] BYREF
  __int64 v17; // [rsp+90h] [rbp+1Fh]
  __int64 v18; // [rsp+98h] [rbp+27h]
  const WCHAR *v19; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+A8h] [rbp+37h] BYREF
  RTL_SRWLOCK *v21; // [rsp+D0h] [rbp+5Fh] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
  v17 = -1LL;
  v18 = -1LL;
  ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(a2, (struct IApplicationView *)&v16, v7);
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v21);
  v8 = *((_QWORD *)this + 34);
  if ( *(_DWORD *)WindowManagementLogging::Provider(v9) <= 5u )
    *(_OWORD *)(v8 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  *(_DWORD *)v8 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v21);
  v11 = WindowManagementLogging::Provider(v10);
  if ( *(_DWORD *)v11 > 5u )
  {
    LODWORD(v21) = a5;
    v12 = &pvData;
    if ( v16 )
      v12 = v16;
    v19 = v12;
    CurrentThreadId = GetCurrentThreadId();
    v20 = 0LL;
    v13 = *((_QWORD *)this + 34);
    if ( !*(_BYTE *)(v13 + 4) || _tlgGuidIsZero((const struct _GUID *)(v13 + 24)) )
      v14 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v11,
      (__int64)&unk_18081A45A,
      v13 + 8,
      v14,
      (__int64)&v20,
      (__int64)&CurrentThreadId,
      &v19);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)((char *)this + 288));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
}
