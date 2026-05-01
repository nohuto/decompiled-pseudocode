/*
 * XREFs of ?GetViewInFocus@ApplicationViewFilteredCollection@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1805BD480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ApplicationViewFilteredCollection::GetViewInFocus(
        ApplicationViewFilteredCollection *this,
        struct IApplicationView **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView **))(**((_QWORD **)this + 9) + 72LL))(
         *((_QWORD *)this + 9),
         a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x95,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
