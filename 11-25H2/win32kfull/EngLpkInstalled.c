/*
 * XREFs of EngLpkInstalled @ 0x140195920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL EngLpkInstalled(void)
{
  Gre::Base *v0; // rcx

  return *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v0) + 221) + 1573012LL) != 0;
}
