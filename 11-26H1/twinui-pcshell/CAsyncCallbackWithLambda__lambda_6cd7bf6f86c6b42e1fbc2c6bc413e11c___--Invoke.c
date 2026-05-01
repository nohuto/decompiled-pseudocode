/*
 * XREFs of CAsyncCallbackWithLambda__lambda_6cd7bf6f86c6b42e1fbc2c6bc413e11c___::Invoke @ 0x1804FEBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RunningDispatchedWork@AEAY0BH@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAY0BH@$$CBG@Z @ 0x1804F615C (--$RunningDispatchedWork@AEAY0BH@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAY0BH@$$CB.c)
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x180500B10 (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_6cd7bf6f86c6b42e1fbc2c6bc413e11c___::Invoke(__int64 a1)
{
  GamingPosturePositioner *v2; // rbx
  __int64 v3; // rcx
  int v4; // eax

  GamingPosturePositionerTelemetryProvider::RunningDispatchedWork<unsigned short const (&)[23]>((const WCHAR *)a1);
  v2 = *(GamingPosturePositioner **)(a1 + 56);
  v4 = IsGamingFullScreenExperienceActive(v3);
  GamingPosturePositioner::OnGamingPostureChanged(v2, v4);
  return 0LL;
}
