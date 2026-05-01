/*
 * XREFs of ?PresentationChangedForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180324550
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803230F4 (-ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositioner::PresentationChangedForView(
        FullScreenPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IInspectable *a3)
{
  struct IInspectableVtbl *lpVtbl; // rax
  int (*QueryInterface)(void); // rax
  FullScreenPositioner *v6; // rcx
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IPresentationRequestedArgs *v10; // [rsp+40h] [rbp+18h] BYREF

  lpVtbl = a3->lpVtbl;
  v10 = 0LL;
  QueryInterface = (int (*)(void))lpVtbl->QueryInterface;
  try
  {
    if ( QueryInterface() >= 0 )
      FullScreenPositioner::ApplyPresentationChanges(v6, a2, v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x232,
                           (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                           v7);
  }
  return result;
}
