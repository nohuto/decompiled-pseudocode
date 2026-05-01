/*
 * XREFs of ?SetShellScenario@CImmersiveShellBuilder@@UEAAJW4ImmersiveShellScenario@@@Z @ 0x1803E5750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveShellBuilder::SetShellScenario(__int64 a1, int a2)
{
  BOOL v2; // eax

  v2 = 0;
  if ( a2 )
    v2 = a2 == 1;
  s_exclusionsInEffect = v2;
  return 0LL;
}
