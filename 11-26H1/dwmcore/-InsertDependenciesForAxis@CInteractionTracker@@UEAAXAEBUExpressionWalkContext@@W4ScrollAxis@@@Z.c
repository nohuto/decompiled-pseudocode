/*
 * XREFs of ?InsertDependenciesForAxis@CInteractionTracker@@UEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x180270D20
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x1801DAF7C (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxi.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::InsertDependenciesForAxis(
        __int64 *a1,
        const struct ExpressionWalkContext *a2,
        int a3)
{
  __int64 v4; // rdi
  const char *v6; // r9
  __int64 v7; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  (*(void (__fastcall **)(__int64 *, const struct ExpressionWalkContext *, __int64))(*a1 + 280))(a1, a2, a1[a3 + 59]);
  if ( (unsigned int)v4 <= 1 )
    (*(void (__fastcall **)(__int64 *, const struct ExpressionWalkContext *, __int64))(*a1 + 280))(a1, a2, a1[v4 + 57]);
  if ( (unsigned int)v4 < 2 )
  {
    v7 = 1LL;
  }
  else
  {
    if ( (_DWORD)v4 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x150C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
        v6);
    v7 = 2LL;
  }
  (*(void (__fastcall **)(__int64 *, const struct ExpressionWalkContext *, __int64))(*a1 + 224))(a1, a2, v7);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 552))(a1) )
    InteractionSourceManager::InsertDependenciesForAxis(a1 + 37, a2, v4);
}
