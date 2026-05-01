/*
 * XREFs of ??R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBA@XZ @ 0x1801A8458
 * Callers:
 *     ??1?$ScopeExitFn@V_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@@details@wil@@QEAA@XZ @ 0x1801A8188 (--1-$ScopeExitFn@V_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@@details@wil@@QEAA@XZ.c)
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801A81B0 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 * Callees:
 *     <none>
 */

void __fastcall _lambda_bf0c31f178687dd5d0af47a31b5c5700_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // r9
  RTL_SRWLOCK *v4; // r8
  PVOID Ptr; // rcx
  PVOID v6; // rdx
  PVOID v7; // rdx

  v2 = *a1 + 10;
  AcquireSRWLockExclusive(v2);
  v3 = a1[1];
  v4 = *a1 + 6;
  if ( v4 != v3 )
  {
    Ptr = v4->Ptr;
    v4->Ptr = v3->Ptr;
    v3->Ptr = Ptr;
    v6 = v4[1].Ptr;
    v4[1].Ptr = v3[1].Ptr;
    v3[1].Ptr = v6;
    v7 = v4[2].Ptr;
    v4[2].Ptr = v3[2].Ptr;
    v3[2].Ptr = v7;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
