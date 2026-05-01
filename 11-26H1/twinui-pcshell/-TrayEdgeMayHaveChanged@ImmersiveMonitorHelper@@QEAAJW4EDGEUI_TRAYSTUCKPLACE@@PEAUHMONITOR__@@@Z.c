/*
 * XREFs of ?TrayEdgeMayHaveChanged@ImmersiveMonitorHelper@@QEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x180210950
 * Callers:
 *     ?TrayEdgeMayHaveChanged@XamlLauncher@@UEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x180245850 (-TrayEdgeMayHaveChanged@XamlLauncher@@UEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::TrayEdgeMayHaveChanged(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    v8 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 40LL))(v5, &v8);
    if ( (int)result >= 0 )
    {
      if ( a3 == v8 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 104LL))(*(_QWORD *)(a1 + 80)) )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 168LL))(*(_QWORD *)(a1 + 80));
      }
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}
