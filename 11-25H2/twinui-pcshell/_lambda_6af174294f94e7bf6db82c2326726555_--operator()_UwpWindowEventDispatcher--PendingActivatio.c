/*
 * XREFs of _lambda_6af174294f94e7bf6db82c2326726555_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData_&_ @ 0x180416220
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_6af174294f94e7bf6db82c2326726555___ @ 0x180416DB8 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_UwpWindowEventDispatche.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_6af174294f94e7bf6db82c2326726555_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData___(
        _QWORD **a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2[2] != **a1 )
    return 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)a2[1] + 472LL))(a2[1]) != 3 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 128LL))(*a2, 1LL);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x561,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v3);
  }
  return 1;
}
