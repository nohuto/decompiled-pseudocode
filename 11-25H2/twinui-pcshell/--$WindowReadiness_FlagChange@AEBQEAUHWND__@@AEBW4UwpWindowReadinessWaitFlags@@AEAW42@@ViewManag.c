/*
 * XREFs of ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@Z @ 0x180073D84
 * Callers:
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x1800717B8 (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800733AC (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180073B00 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180073C20 (-v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x180073D20 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x180073D50 (-Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D2CC8 (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800384BC (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
        __int64 *a1,
        _DWORD *a2,
        int *a3)
{
  ULONG result; // eax
  __int64 v7; // rcx
  int v8; // eax
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  int v11; // [rsp+3Ch] [rbp-35h] BYREF
  _DWORD v12[2]; // [rsp+40h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  __int64 v14; // [rsp+50h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v17; // [rsp+78h] [rbp+7h]
  int v18; // [rsp+80h] [rbp+Fh]
  int v19; // [rsp+84h] [rbp+13h]
  __int64 *v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+94h] [rbp+23h]
  _DWORD *v23; // [rsp+98h] [rbp+27h]
  int v24; // [rsp+A0h] [rbp+2Fh]
  int v25; // [rsp+A4h] [rbp+33h]
  int *v26; // [rsp+A8h] [rbp+37h]
  int v27; // [rsp+B0h] [rbp+3Fh]
  int v28; // [rsp+B4h] [rbp+43h]

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    qword_18089C050 = 0LL;
    dword_18089C05C = 0;
    Context = &qword_18089C048;
    qword_18089C048 = &ShellScreenClippingLogging::`vftable';
    byte_18089C058 = 0;
    qword_18089C060 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18089C048, qword_18089C060, v9);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18089C048);
  }
  result = (unsigned int)Context;
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a3;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    EventDescriptor.Keyword = 0LL;
    v11 = v8;
    v12[0] = *a2;
    v14 = *a1;
    v26 = &v11;
    v23 = v12;
    v20 = &v14;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    v27 = 4;
    v24 = 4;
    v21 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v17 = &unk_1807CE4A1;
    UserData.Reserved = 2;
    v18 = 66;
    v19 = 1;
    v12[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
