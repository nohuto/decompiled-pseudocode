/*
 * XREFs of CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___::Invoke @ 0x1804E3920
 * Callers:
 *     <none>
 * Callees:
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x1804E428C (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___::Invoke(__int64 a1)
{
  GamingPosturePositioner *v1; // rbx
  int v2; // eax

  v1 = *(GamingPosturePositioner **)(a1 + 56);
  v2 = IsGamingFullScreenExperienceActive(a1);
  GamingPosturePositioner::OnGamingPostureChanged(v1, v2);
  return 0LL;
}
