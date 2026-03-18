/*
 * XREFs of PspQueryProcessDefaultQos @ 0x140615330
 * Callers:
 *     <none>
 * Callees:
 *     KeCalculateProcessDefaultQos @ 0x1405F93F0 (KeCalculateProcessDefaultQos.c)
 */

__int64 __fastcall PspQueryProcessDefaultQos(__int64 a1, _BYTE *a2)
{
  *a2 = KeCalculateProcessDefaultQos(a1);
  return 0LL;
}
