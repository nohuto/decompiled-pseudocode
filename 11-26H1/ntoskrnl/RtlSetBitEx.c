/*
 * XREFs of RtlSetBitEx @ 0x140464D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlSetBitEx(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  int result; // eax

  v2 = *(_QWORD *)(a1 + 8);
  result = *(char *)(v2 + (a2 >> 3)) | (1 << (a2 & 7));
  *(_BYTE *)(v2 + (a2 >> 3)) = result;
  return result;
}
