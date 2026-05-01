/*
 * XREFs of ?SetPosition@MultitaskingViewDragVisual@@UEAAJAEBUCPoint@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804E0E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewDragVisual::SetPosition(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  int v3; // r10d
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64 *, _DWORD *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  _DWORD v9[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)(a1 + 72) = *(_QWORD *)a2;
  v2 = *(__int64 **)(a1 + 24);
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *v2;
  v9[0] = *(_DWORD *)a2;
  v9[2] = v9[0] + 1;
  v9[3] = v3 + 1;
  v5 = *(__int64 (__fastcall **)(__int64 *, _DWORD *))(v4 + 24);
  v9[1] = v3;
  v6 = v5(v2, v9);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
      (const char *)(unsigned int)v6);
  return v7;
}
