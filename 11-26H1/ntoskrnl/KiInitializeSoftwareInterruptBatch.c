/*
 * XREFs of KiInitializeSoftwareInterruptBatch @ 0x1405F411C
 * Callers:
 *     KiInitPrcb @ 0x140BF9C24 (KiInitPrcb.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall KiInitializeSoftwareInterruptBatch(_DWORD *a1)
{
  void *result; // rax

  result = memset_0(a1, 0, 0x210uLL);
  *(_BYTE *)a1 = 2;
  a1[1] = -1;
  a1[2] = 2097153;
  return result;
}
