/*
 * XREFs of ?SetSystemVisual@FrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1803018C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x180021F9C (-ReconcileFramedView@FrameWrapper@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall FrameWrapper::SetSystemVisual(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  int v8; // edx
  unsigned int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 56LL))(*(_QWORD *)(a1 + 16));
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 48);
    v8 = v7 | 2;
    v9 = v7 & 0xFFFFFFFD;
    if ( !a2 )
      v8 = v9;
    *(_DWORD *)(a1 + 48) = v8;
    FrameWrapper::ReconcileFramedView((FrameWrapper *)(a1 - 32));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13B,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
