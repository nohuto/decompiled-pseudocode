/*
 * XREFs of sub_180048910 @ 0x180048910
 * Callers:
 *     sub_180048A70 @ 0x180048A70 (sub_180048A70.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180048938 @ 0x180048938 (sub_180048938.c)
 */

__int64 __fastcall sub_180048910(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = sub_180012C40(v5, a2);
  return sub_180048938(v3, v2);
}
