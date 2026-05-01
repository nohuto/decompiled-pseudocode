/*
 * XREFs of wistd::__function::__func__lambda_796dce3944e7f8fced81f3ccc3af59c1__void___cdecl(void)_::operator() @ 0x1803A1130
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_1a4d461b071b17a49d9b71157d22f5c1___ @ 0x1803A06FC (CreationThreadDispatcher--RunAsync__lambda_1a4d461b071b17a49d9b71157d22f5c1___.c)
 */

void __fastcall wistd::__function::__func__lambda_796dce3944e7f8fced81f3ccc3af59c1__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreationThreadDispatcher::RunAsync__lambda_1a4d461b071b17a49d9b71157d22f5c1___(
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
         *(volatile int **)(a1 + 8));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x149,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
