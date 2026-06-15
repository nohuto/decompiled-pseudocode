/*
 * XREFs of sub_140035FF0 @ 0x140035FF0
 * Callers:
 *     sub_1400AE43A @ 0x1400AE43A (sub_1400AE43A.c)
 *     sub_1400AE670 @ 0x1400AE670 (sub_1400AE670.c)
 *     sub_1400AF525 @ 0x1400AF525 (sub_1400AF525.c)
 *     sub_1400AF8A0 @ 0x1400AF8A0 (sub_1400AF8A0.c)
 *     sub_1400AF8D6 @ 0x1400AF8D6 (sub_1400AF8D6.c)
 *     sub_1400B0E55 @ 0x1400B0E55 (sub_1400B0E55.c)
 *     sub_1400B1EAB @ 0x1400B1EAB (sub_1400B1EAB.c)
 *     sub_1400B279F @ 0x1400B279F (sub_1400B279F.c)
 *     sub_1400B27B1 @ 0x1400B27B1 (sub_1400B27B1.c)
 *     sub_1400B34A6 @ 0x1400B34A6 (sub_1400B34A6.c)
 *     sub_1400B3815 @ 0x1400B3815 (sub_1400B3815.c)
 *     sub_1400B3A9E @ 0x1400B3A9E (sub_1400B3A9E.c)
 *     sub_1400B3D37 @ 0x1400B3D37 (sub_1400B3D37.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140035FF0(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    CoTaskMemFree(v1);
}
