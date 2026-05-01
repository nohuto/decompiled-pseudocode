/*
 * XREFs of ?OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1800944B0
 * Callers:
 *     wistd::__function::__func__lambda_2aaa3fcbc81a3c042074e76849eaaaa8__void___cdecl(void)_::operator() @ 0x18046B4E0 (wistd--__function--__func__lambda_2aaa3fcbc81a3c042074e76849eaaaa8__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18009496C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnDpiChanged(KeyboardHosting::TabTipAdapter *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 72LL))(*((_QWORD *)this + 16), &v6);
  if ( v2 < 0 )
  {
    v3 = 2867LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( v6 == 3 )
  {
    v2 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
    if ( v2 < 0 )
    {
      v3 = 2871LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
