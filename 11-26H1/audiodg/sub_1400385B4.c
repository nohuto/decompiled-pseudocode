/*
 * XREFs of sub_1400385B4 @ 0x1400385B4
 * Callers:
 *     sub_1400AEEE0 @ 0x1400AEEE0 (sub_1400AEEE0.c)
 *     sub_1400AEF20 @ 0x1400AEF20 (sub_1400AEF20.c)
 *     sub_1400AF7CD @ 0x1400AF7CD (sub_1400AF7CD.c)
 *     sub_1400AFFB8 @ 0x1400AFFB8 (sub_1400AFFB8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400385B4(__int64 a1)
{
  return EtwEventActivityIdControl(4LL, a1 + 16);
}
