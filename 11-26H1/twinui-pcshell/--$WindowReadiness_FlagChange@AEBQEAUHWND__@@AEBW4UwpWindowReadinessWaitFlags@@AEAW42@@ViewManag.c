/*
 * XREFs of ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@Z @ 0x18006CAF4
 * Callers:
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x18006BDEC (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18006C3E4 (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18006C874 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18006C990 (-v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18006CA90 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18006CAC0 (-Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801C8968 (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
        __int64 *a1,
        int *a2,
        WINBOOL *a3)
{
  ULONG result; // eax
  __int64 v7; // rcx
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-31h] BYREF
  int v11; // [rsp+48h] [rbp-29h] BYREF
  __int64 v12; // [rsp+50h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  __int64 *v18; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+90h] [rbp+1Fh]
  int *v20; // [rsp+98h] [rbp+27h]
  __int64 v21; // [rsp+A0h] [rbp+2Fh]
  WINBOOL *p_fPending; // [rsp+A8h] [rbp+37h]
  __int64 v23; // [rsp+B0h] [rbp+3Fh]

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    qword_1808DC710 = 0LL;
    Context = &qword_1808DC708;
    qword_1808DC708 = &ShellScreenClippingLogging::`vftable';
    byte_1808DC718 = 0;
    dword_1808DC71C = 0;
    qword_1808DC720 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DC708, qword_1808DC720, v8);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_1808DC708);
  }
  result = (unsigned int)Context;
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    fPending = *a3;
    v11 = *a2;
    v12 = *a1;
    p_fPending = &fPending;
    v20 = &v11;
    v18 = &v12;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    v23 = 4LL;
    v21 = 4LL;
    v19 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v15 = &unk_180803816;
    UserData.Reserved = 2;
    v16 = 66;
    v17 = 1;
    LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
