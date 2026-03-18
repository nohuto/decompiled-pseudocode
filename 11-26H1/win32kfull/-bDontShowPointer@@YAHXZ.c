/*
 * XREFs of ?bDontShowPointer@@YAHXZ @ 0x140019944
 * Callers:
 *     GreSetPointer @ 0x14001AE9C (GreSetPointer.c)
 * Callees:
 *     <none>
 */

_BOOL8 bDontShowPointer(void)
{
  return *(_DWORD *)(*(_QWORD *)(W32GetSessionState() + 96) + 72LL) != 0;
}
