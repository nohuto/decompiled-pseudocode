/*
 * XREFs of CAsyncCallbackWithLambda__lambda_aaa29ad71ed7f57812cd6c4aeeafb90e___::Invoke @ 0x1804FEBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x180500B10 (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_aaa29ad71ed7f57812cd6c4aeeafb90e___::Invoke(__int64 a1)
{
  GamingPosturePositioner *v1; // rbx
  int v2; // eax

  v1 = *(GamingPosturePositioner **)(a1 + 56);
  v2 = IsGamingFullScreenExperienceActive(a1);
  GamingPosturePositioner::OnGamingPostureChanged(v1, v2);
  return 0LL;
}
