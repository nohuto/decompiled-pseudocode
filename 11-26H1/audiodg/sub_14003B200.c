/*
 * XREFs of sub_14003B200 @ 0x14003B200
 * Callers:
 *     sub_14003B1C0 @ 0x14003B1C0 (sub_14003B1C0.c)
 * Callees:
 *     sub_14003B23C @ 0x14003B23C (sub_14003B23C.c)
 */

__int64 __fastcall sub_14003B200(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_BYTE *)(a1 + 16) = 1;
  sub_14003B23C(a2);
  *(_DWORD *)(a1 + 20) = 1;
  return sub_1400B6010(a1);
}
