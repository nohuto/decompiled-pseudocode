/*
 * XREFs of ?IsBottomGesture@TouchEdgeGestureProcessor@@AEBA_NAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1801E8834
 * Callers:
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801E8420 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     ?ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUShellViewGestureReportedArgs@3456@@Z @ 0x180594F48 (-ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     ?GetCurrentImmersiveMonitor@TouchGestureHelper@@SA?AU?$com_ptr@UIImmersiveMonitor@@@winrt@@PEAUIImmersiveMonitorManager@@AEBUPoint@Foundation@Windows@3@@Z @ 0x1801E896C (-GetCurrentImmersiveMonitor@TouchGestureHelper@@SA-AU-$com_ptr@UIImmersiveMonitor@@@winrt@@PEAUI.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TouchEdgeGestureProcessor::IsBottomGesture(
        TouchEdgeGestureProcessor *this,
        const struct winrt::Windows::Foundation::Point *a2)
{
  int v3; // eax
  int v4; // eax
  float v5; // xmm6_4
  int IsThreadRTL; // eax
  float v7; // xmm1_4
  float v8; // xmm1_4
  bool v9; // cf
  bool v10; // zf
  float v11; // xmm0_4
  bool v12; // bl
  int nNumerator; // [rsp+20h] [rbp-40h] BYREF
  int v15[2]; // [rsp+28h] [rbp-38h] BYREF
  int v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  TouchGestureHelper::GetCurrentImmersiveMonitor((int)v15);
  v17 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v15 + 88LL))(*(_QWORD *)v15, &v17);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegestureprocessor.cpp",
      (const char *)(unsigned int)v3,
      nNumerator);
  nNumerator = 0;
  v16 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**(_QWORD **)v15 + 112LL))(*(_QWORD *)v15, &nNumerator, &v16);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16C,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegestureprocessor.cpp",
      (const char *)(unsigned int)v4,
      nNumerator);
  v5 = (float)MulDiv(240, nNumerator, 96);
  IsThreadRTL = Mirror_IsThreadRTL();
  v7 = *(float *)a2;
  if ( IsThreadRTL )
  {
    v8 = v7 - (float)(int)v17;
    v9 = v8 < v5;
    v10 = v8 == v5;
  }
  else
  {
    v11 = (float)SDWORD2(v17) - v7;
    v9 = v11 < v5;
    v10 = v11 == v5;
  }
  v12 = !v9 && !v10;
  if ( *(_QWORD *)v15 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v15);
  return v12;
}
