/*
 * XREFs of ??$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801EFF9C
 * Callers:
 *     _lambda_0bfcc78e271c9d57dd0543599a36cd9a_::operator() @ 0x1802992C8 (_lambda_0bfcc78e271c9d57dd0543599a36cd9a_--operator().c)
 *     _lambda_a03ebfe222b20f6e78e73c052cdff49c_::operator() @ 0x18030D9C4 (_lambda_a03ebfe222b20f6e78e73c052cdff49c_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e9a532c669263e40c58353da21e68f0a___::Run @ 0x18030DDF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e9a532c669263e40c58353da21e68f0a___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___::Run @ 0x18030DE50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___--Run.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_05357b73_71a8_4328_801f_d28e07a3d3ff, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C89,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
