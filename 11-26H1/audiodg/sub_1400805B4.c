/*
 * XREFs of sub_1400805B4 @ 0x1400805B4
 * Callers:
 *     sub_1400800C4 @ 0x1400800C4 (sub_1400800C4.c)
 *     sub_1400802D0 @ 0x1400802D0 (sub_1400802D0.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1400805B4(const void **a1, const void *a2)
{
  const void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    LODWORD(v2) = UnmapViewOfFile(v2);
  return (int)v2;
}
