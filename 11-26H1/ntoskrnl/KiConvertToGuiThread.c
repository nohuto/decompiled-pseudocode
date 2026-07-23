/*
 * XREFs of KiConvertToGuiThread @ 0x14072E350
 * Callers:
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1409FC500 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
