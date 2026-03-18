/*
 * XREFs of KiConvertToGuiThread @ 0x140729780
 * Callers:
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x140A40AE0 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
