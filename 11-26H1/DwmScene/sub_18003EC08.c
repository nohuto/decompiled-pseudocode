/*
 * XREFs of sub_18003EC08 @ 0x18003EC08
 * Callers:
 *     sub_18003EC38 @ 0x18003EC38 (sub_18003EC38.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003EC08(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *a3;
  a2[1] = 0LL;
  a2[2] = 0LL;
  *a2 = v3;
  a2[1] = a3[1];
  result = a3[2];
  a2[2] = result;
  a3[1] = 0LL;
  a3[2] = 0LL;
  return result;
}
