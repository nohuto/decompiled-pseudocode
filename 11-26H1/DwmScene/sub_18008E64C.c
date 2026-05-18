/*
 * XREFs of sub_18008E64C @ 0x18008E64C
 * Callers:
 *     sub_18008E7C0 @ 0x18008E7C0 (sub_18008E7C0.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18008E674 @ 0x18008E674 (sub_18008E674.c)
 */

__int64 __fastcall sub_18008E64C(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = sub_180012C40(v5, a2);
  return sub_18008E674(v3, v2);
}
