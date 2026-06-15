/*
 * XREFs of sub_14000E63C @ 0x14000E63C
 * Callers:
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_14000DC7C @ 0x14000DC7C (sub_14000DC7C.c)
 *     sub_14000EC10 @ 0x14000EC10 (sub_14000EC10.c)
 *     sub_14001D270 @ 0x14001D270 (sub_14001D270.c)
 *     sub_14002B5C0 @ 0x14002B5C0 (sub_14002B5C0.c)
 *     sub_14002B8B0 @ 0x14002B8B0 (sub_14002B8B0.c)
 *     sub_1400825E0 @ 0x1400825E0 (sub_1400825E0.c)
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 *     sub_1400AE3D3 @ 0x1400AE3D3 (sub_1400AE3D3.c)
 *     sub_1400AE84A @ 0x1400AE84A (sub_1400AE84A.c)
 *     sub_1400B0071 @ 0x1400B0071 (sub_1400B0071.c)
 *     sub_1400B26AE @ 0x1400B26AE (sub_1400B26AE.c)
 * Callees:
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DA94 @ 0x14000DA94 (sub_14000DA94.c)
 */

__int64 __fastcall sub_14000E63C(__int64 a1)
{
  unsigned __int64 v2; // rax
  int v3; // r8d

  v2 = sub_14000DA4C();
  return sub_14000DA94(a1, v2, v3);
}
