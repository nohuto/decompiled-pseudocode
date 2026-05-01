/*
 * XREFs of ?UnpinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180542AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::UnpinViewNoGroupPropagateInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IVirtualDesktop *))(**((_QWORD **)this + 8)
                                                                                              + 128LL))(
         *((_QWORD *)this + 8),
         a2,
         a3);
  if ( v5 < 0 )
  {
    v6 = 120LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 6) + 272LL))(
         *((_QWORD *)this + 6),
         a2);
  if ( v5 < 0 )
  {
    v6 = 121LL;
    goto LABEL_3;
  }
  return 0LL;
}
