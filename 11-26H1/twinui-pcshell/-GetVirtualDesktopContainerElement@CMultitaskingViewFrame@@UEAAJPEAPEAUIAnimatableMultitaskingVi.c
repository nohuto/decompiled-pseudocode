/*
 * XREFs of ?GetVirtualDesktopContainerElement@CMultitaskingViewFrame@@UEAAJPEAPEAUIAnimatableMultitaskingViewElement@@@Z @ 0x1804BAAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultitaskingViewFrame::GetVirtualDesktopContainerElement(
        CMultitaskingViewFrame *this,
        struct IAnimatableMultitaskingViewElement **a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, struct IAnimatableMultitaskingViewElement **); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IAnimatableMultitaskingViewElement **))*((_QWORD *)this + 318);
  if ( !v2 )
    return 2147943568LL;
  v3 = (**v2)(v2, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, a2);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x306,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
