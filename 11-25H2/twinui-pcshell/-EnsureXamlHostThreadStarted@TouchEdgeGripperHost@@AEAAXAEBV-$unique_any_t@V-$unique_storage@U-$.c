/*
 * XREFs of ?EnsureXamlHostThreadStarted@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805729E8
 * Callers:
 *     TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180573370 (TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?get_strong@?$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VTouchEdgeGripperHost@@@2@XZ @ 0x1801ED2D4 (-get_strong@-$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x1802923F0 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall TouchEdgeGripperHost::EnsureXamlHostThreadStarted(__int64 a1)
{
  char result; // al
  BOOL v3; // eax
  const char *v4; // r9
  const char *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *pData; // [rsp+50h] [rbp+18h] BYREF

  result = *(_BYTE *)(a1 + 24);
  *(_BYTE *)(a1 + 24) = 1;
  if ( !result )
  {
    winrt::implements<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>::get_strong(a1, (__int64 *)&pData);
    v3 = SHCreateThreadWithHandle(
           (LPTHREAD_START_ROUTINE)lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl_,
           pData,
           0xC000u,
           (LPTHREAD_START_ROUTINE)lambda_0ced3948e50d96c4a590f48e25a32e04_::_lambda_invoker_cdecl_,
           (HANDLE *)(a1 + 40));
    try
    {
      if ( !v3 )
        wil::details::in1diag3::_Throw_GetLastError(
          retaddr,
          (void *)0x8E,
          (__int64)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
          v4);
      pData = 0LL;
      result = winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)&pData);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x95,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
        v5);
      *(_BYTE *)(a1 + 24) = 0;
      return MicrosoftTelemetryAssertTriggeredNoArgs(a1, v6, v7, v8);
    }
  }
  return result;
}
