/*
 * XREFs of sub_1800380E0 @ 0x1800380E0
 * Callers:
 *     sub_18002D3D4 @ 0x18002D3D4 (sub_18002D3D4.c)
 *     sub_18005ECC0 @ 0x18005ECC0 (sub_18005ECC0.c)
 * Callees:
 *     sub_18002EB58 @ 0x18002EB58 (sub_18002EB58.c)
 *     sub_18002F140 @ 0x18002F140 (sub_18002F140.c)
 */

_BOOL8 __fastcall sub_1800380E0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = sub_18002EB58(a1, v6, a2);
  return sub_18002F140(v4, v3[2], a2);
}
