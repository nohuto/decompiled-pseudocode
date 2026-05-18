/*
 * XREFs of sub_18004EAF0 @ 0x18004EAF0
 * Callers:
 *     sub_18004DE74 @ 0x18004DE74 (sub_18004DE74.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18004F194 @ 0x18004F194 (sub_18004F194.c)
 */

bool __fastcall sub_18004EAF0(__int64 a1, __int64 a2)
{
  bool v3; // bl
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)sub_18004F194(a1 + 18560, v5, a2) != *(_QWORD *)(a1 + 18560);
  sub_1800129D0(a2);
  return v3;
}
