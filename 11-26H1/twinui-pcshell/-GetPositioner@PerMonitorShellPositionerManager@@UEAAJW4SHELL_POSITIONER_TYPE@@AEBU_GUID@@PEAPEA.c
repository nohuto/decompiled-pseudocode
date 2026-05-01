/*
 * XREFs of ?GetPositioner@PerMonitorShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x180182130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PerMonitorShellPositionerManager::GetPositioner(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall ***v4)(_QWORD, __int64, __int64); // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 8LL * a2 + 16);
  if ( !v4 )
    return 2147647531LL;
  v5 = (**v4)(v4, a3, a4);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\permonitorshellpositionermanager.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
