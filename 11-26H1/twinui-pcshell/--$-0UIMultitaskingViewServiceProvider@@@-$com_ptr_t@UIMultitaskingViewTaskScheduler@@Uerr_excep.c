/*
 * XREFs of ??$?0UIMultitaskingViewServiceProvider@@@?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMultitaskingViewServiceProvider@@U?$integral_constant@D$01@wistd@@@Z @ 0x1800E4B1C
 * Callers:
 *     ??$com_copy@UIMultitaskingViewTaskScheduler@@AEAV?$ComPtr@UIMultitaskingViewServiceProvider@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@UIMultitaskingViewServiceProvider@@@WRL@Microsoft@@@Z @ 0x1800E494C (--$com_copy@UIMultitaskingViewTaskScheduler@@AEAV-$ComPtr@UIMultitaskingViewServiceProvider@@@WR.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IMultitaskingViewTaskScheduler,wil::err_exception_policy>::com_ptr_t<IMultitaskingViewTaskScheduler,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  if ( a2 )
  {
    v3 = (**a2)(a2, &GUID_b8445672_ee65_4e59_b5ef_fd73ca6b61e2, a1);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C89,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v3,
        v5);
  }
  return a1;
}
