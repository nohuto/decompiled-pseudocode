/*
 * XREFs of sub_140048258 @ 0x140048258
 * Callers:
 *     sub_1400753F0 @ 0x1400753F0 (sub_1400753F0.c)
 *     sub_1400B48A0 @ 0x1400B48A0 (sub_1400B48A0.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_140048258(__int64 a1)
{
  bool v1; // zf
  __int64 (__fastcall **v2)(); // rax
  void *v3; // rcx

  v1 = *(_BYTE *)(a1 + 16) == 0;
  v2 = &off_1400BB148;
  *(_QWORD *)a1 = &off_1400BB148;
  if ( !v1 )
  {
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      LODWORD(v2) = HeapDestroy(v3);
  }
  return (int)v2;
}
