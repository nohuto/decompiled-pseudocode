/*
 * XREFs of RaidCreateBusEnumerator @ 0x1400508D8
 * Callers:
 *     StorAdapterNVMeEnumerateZNS @ 0x1401B5E24 (StorAdapterNVMeEnumerateZNS.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

_QWORD *__fastcall RaidCreateBusEnumerator(_QWORD *a1)
{
  _QWORD *result; // rax

  memset_0(a1, 0, 0x78uLL);
  result = a1 + 15;
  a1[16] = a1 + 15;
  a1[15] = a1 + 15;
  return result;
}
