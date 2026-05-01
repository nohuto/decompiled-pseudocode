/*
 * XREFs of ?ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x18056EDD0
 * Callers:
 *     ??$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU?$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureTelemetry@@SAX$$QEAIAEAIAEBM2$$QEA_N$$QEAU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x18056B114 (--$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU-$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureT.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@433AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000C6E0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U1@U1@U-$_tlgWrapperByVal@$0.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Mirror_IsThreadRTL @ 0x1800A00B0 (Mirror_IsThreadRTL.c)
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800A733C (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800FC65C (-Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?GetCurrentImmersiveMonitor@TouchGestureHelper@@SA?AU?$com_ptr@UIImmersiveMonitor@@@winrt@@PEAUIImmersiveMonitorManager@@AEBUPoint@Foundation@Windows@3@@Z @ 0x1801F23D0 (-GetCurrentImmersiveMonitor@TouchGestureHelper@@SA-AU-$com_ptr@UIImmersiveMonitor@@@winrt@@PEAUI.c)
 *     ??$capture@UIImmersiveMonitorManager@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU3@@winrt@@YA?AU?$com_ptr@UIImmersiveMonitorManager@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x18056C1B8 (--$capture@UIImmersiveMonitorManager@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvide.c)
 *     ?GetCurrentPoint@PointerPoint@Input@UI@Windows@winrt@@SA@I@Z @ 0x18056DE74 (-GetCurrentPoint@PointerPoint@Input@UI@Windows@winrt@@SA@I@Z.c)
 *     ?InvocationPoint@?$consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs@UIShellViewGestureReportedArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18056EBD4 (-InvocationPoint@-$consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs@UIShellViewGestureR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall TouchGestureTelemetry::ReportTouchSwipePerformed_(
        __int64 a1,
        int a2,
        int a3,
        float a4,
        float a5,
        char a6,
        __int64 *a7)
{
  int v9; // edi
  int IsThreadRTL; // r15d
  __int64 v11; // r9
  int v12; // eax
  __int64 *v13; // rsi
  __int64 *CurrentPoint; // rax
  float *v15; // rax
  int v16; // eax
  int v17; // eax
  const struct _tlgProvider_t *v18; // rax
  const char *v19; // r9
  bool v20; // al
  int v22; // [rsp+20h] [rbp-98h]
  int v23; // [rsp+60h] [rbp-58h] BYREF
  int v24; // [rsp+64h] [rbp-54h] BYREF
  int v25[2]; // [rsp+68h] [rbp-50h] BYREF
  int v26; // [rsp+70h] [rbp-48h]
  int v27; // [rsp+74h] [rbp-44h]
  int v28; // [rsp+78h] [rbp-40h]
  int v29; // [rsp+7Ch] [rbp-3Ch]
  int v30; // [rsp+80h] [rbp-38h]
  __int64 v31; // [rsp+88h] [rbp-30h] BYREF
  __int64 v32; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v34; // [rsp+C0h] [rbp+8h] BYREF
  char v35; // [rsp+D8h] [rbp+20h] BYREF

  v34 = a1;
  v9 = 0;
  if ( COERCE_FLOAT(LODWORD(a4) & _xmm) < COERCE_FLOAT(LODWORD(a5) & _xmm) )
  {
    LOBYTE(v9) = a5 > 0.0;
    v9 += 2;
  }
  else
  {
    LOBYTE(v9) = a4 > 0.0;
  }
  try
  {
    IsThreadRTL = Mirror_IsThreadRTL();
    LOBYTE(a5) = 0;
    v35 = 0;
    v12 = wil::wnf_query_nothrow<bool>((__int64)&WNF_TMCN_ISTABLETPOSTURE, (char *)&a5, &v35, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x22,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
        (const char *)(unsigned int)v12,
        v22);
    v13 = a7;
    v34 = *a7;
    winrt::capture<IImmersiveMonitorManager,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
      &v31,
      (__int64 (__fastcall *)(__int64, SID *, void *, __int64 *))IUnknown_QueryService,
      &v34);
    CurrentPoint = winrt::Windows::UI::Input::PointerPoint::GetCurrentPoint(&v34, a2);
    v15 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs<winrt::WindowsUdk::UI::Shell::IShellViewGestureReportedArgs>::InvocationPoint(
                     CurrentPoint,
                     &v32);
    TouchGestureHelper::GetCurrentImmersiveMonitor(v25, v31, v15);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v34);
    v24 = 0;
    v16 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v25 + 24LL))(*(_QWORD *)v25, &v24);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2B,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
        (const char *)(unsigned int)v16,
        v22);
    v23 = 0;
    v17 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v25 + 80LL))(*(_QWORD *)v25, &v23);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2D,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
        (const char *)(unsigned int)v17,
        v22);
    v18 = TouchGestureLogging::Provider((__int64)retaddr);
    v19 = (const char *)v18;
    if ( *(_DWORD *)v18 > 5u )
    {
      LOBYTE(v18) = tlgKeywordOn((__int64)v18, 0x400000000000LL);
      if ( (_BYTE)v18 )
      {
        v32 = 0x2000000LL;
        v26 = v23;
        v27 = v24;
        LOBYTE(v34) = a6;
        v20 = LOBYTE(a5) && v35;
        LOBYTE(a5) = v20;
        v28 = IsThreadRTL;
        v29 = v9;
        v30 = a3;
        LOBYTE(v18) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                        (__int64)v19,
                        (__int64)&unk_1807E5443);
      }
    }
    if ( *(_QWORD *)v25 )
      LOBYTE(v18) = winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v25);
    if ( v31 )
      LOBYTE(v18) = winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v31);
  }
  catch ( ... )
  {
    LOBYTE(v18) = wil::details::in1diag3::Log_CaughtException(
                    retaddr,
                    (void *)0x39,
                    (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
                    v19);
    v13 = a7;
  }
  if ( *v13 )
    LOBYTE(v18) = winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v13);
  return (char)v18;
}
