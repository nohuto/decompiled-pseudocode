/*
 * XREFs of MiGetEngineType @ 0x14050BFB4
 * Callers:
 *     MiInitializeZeroingDomains @ 0x140885648 (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetEngineType(__int64 a1)
{
  return (unsigned int)(*(_BYTE *)(a1 + 35352) != 1) + 1;
}
