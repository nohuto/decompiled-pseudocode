/*
 * XREFs of RtlSetBit @ 0x1801117E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlSetBit(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  int result; // eax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (unsigned __int64)a2 >> 3;
  result = *(char *)(v3 + v2) | (1 << (a2 & 7));
  *(_BYTE *)(v3 + v2) = result;
  return result;
}
