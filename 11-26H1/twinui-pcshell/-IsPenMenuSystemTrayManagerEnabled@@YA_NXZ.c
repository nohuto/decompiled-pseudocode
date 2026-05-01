/*
 * XREFs of ?IsPenMenuSystemTrayManagerEnabled@@YA_NXZ @ 0x1803E5290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsPenMenuSystemTrayManagerEnabled(void)
{
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &CLSID_PenMenuSystemTrayManager);
}
