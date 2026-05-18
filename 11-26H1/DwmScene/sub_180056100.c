/*
 * XREFs of sub_180056100 @ 0x180056100
 * Callers:
 *     sub_180058650 @ 0x180058650 (sub_180058650.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180056AE0 @ 0x180056AE0 (sub_180056AE0.c)
 */

__int64 __fastcall sub_180056100(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = sub_180012C40(v5, a2);
  return sub_180056AE0(v3, v2);
}
