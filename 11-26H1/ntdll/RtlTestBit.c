/*
 * XREFs of RtlTestBit @ 0x180100830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlTestBit(__int64 a1, unsigned int a2)
{
  return (*(char *)(((unsigned __int64)a2 >> 3) + *(_QWORD *)(a1 + 8)) >> (a2 & 7)) & 1;
}
