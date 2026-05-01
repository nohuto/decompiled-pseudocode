/*
 * XREFs of _lambda_0bfcc78e271c9d57dd0543599a36cd9a_::operator() @ 0x1802A0710
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0bfcc78e271c9d57dd0543599a36cd9a___::Run @ 0x180311EF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0bfcc78e271c9d57dd0543599a36cd9a___--Run.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801FA360 (--$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@-$com_ptr_t@UIS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_0bfcc78e271c9d57dd0543599a36cd9a_::operator()(_QWORD *a1)
{
  __int64 (__fastcall ****v1)(_QWORD, GUID *, _QWORD *); // rcx
  _QWORD *v2; // rax
  __int64 result; // rax
  const char *v4; // r9
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*a1 + 168LL);
  try
  {
    v2 = wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
           v1,
           &v7);
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 48LL))(*v2);
    if ( (int)result < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xDC,
        (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)result,
        v5);
    if ( v7 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xDE,
             (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
             v4);
  }
  return result;
}
