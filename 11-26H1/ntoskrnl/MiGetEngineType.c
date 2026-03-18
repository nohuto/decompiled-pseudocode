/*
 * XREFs of MiGetEngineType @ 0x140512544
 * Callers:
 *     MiInitializeZeroingDomains @ 0x14087F248 (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetEngineType(__int64 a1)
{
  return (unsigned int)(*(_BYTE *)(a1 + 35352) != 1) + 1;
}
