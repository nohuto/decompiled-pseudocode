/*
 * XREFs of ?AdjustRegionsForInitialSnapPosition@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800DBBF0
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x1800DA680 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1800DBD18 (--$AdjustRegionsForInitialSnapPosition@V-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@CS.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSnapAssistControllerBase::AdjustRegionsForInitialSnapPosition(__int64 a1, HWND a2, __int64 a3)
{
  HMONITOR v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT pvAttribute; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  pvAttribute = 0LL;
  if ( DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u) < 0 )
    GetWindowRect(a2, &pvAttribute);
  v6 = MonitorFromRect(&pvAttribute, 0);
  if ( !v6 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB1,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)0x80070057LL,
      v11);
  v11 = 0LL;
  v7 = *(__int64 **)(a1 + 64);
  v8 = *v7;
  v11 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, __int64 *))(v8 + 48))(v7, v6, &v11);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB4,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v9,
      v11);
  result = CSnapAssistControllerBase::AdjustRegionsForInitialSnapPosition<std::deque<tagRECT>>(retaddr, a2, a3, v11);
  if ( v11 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return result;
}
