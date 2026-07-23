/*
 * XREFs of PspQueryProcessDefaultQos @ 0x140618240
 * Callers:
 *     <none>
 * Callees:
 *     KeCalculateProcessDefaultQos @ 0x1405FBE10 (KeCalculateProcessDefaultQos.c)
 */

__int64 __fastcall PspQueryProcessDefaultQos(__int64 a1, _BYTE *a2)
{
  *a2 = KeCalculateProcessDefaultQos(a1);
  return 0LL;
}
