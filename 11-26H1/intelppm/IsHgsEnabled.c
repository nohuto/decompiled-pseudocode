/*
 * XREFs of IsHgsEnabled @ 0x140006BD0
 * Callers:
 *     ConnectHwpInterrupt @ 0x14002A7C0 (ConnectHwpInterrupt.c)
 * Callees:
 *     <none>
 */

bool IsHgsEnabled()
{
  return dword_140019B18 != 0;
}
