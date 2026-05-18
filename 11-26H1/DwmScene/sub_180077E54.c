/*
 * XREFs of sub_180077E54 @ 0x180077E54
 * Callers:
 *     sub_180076054 @ 0x180076054 (sub_180076054.c)
 *     sub_18008F0C0 @ 0x18008F0C0 (sub_18008F0C0.c)
 *     sub_18008F17C @ 0x18008F17C (sub_18008F17C.c)
 *     sub_18008F33C @ 0x18008F33C (sub_18008F33C.c)
 * Callees:
 *     sub_180012F64 @ 0x180012F64 (sub_180012F64.c)
 */

__int64 __fastcall sub_180077E54(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = sub_180012F64((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 16 * a2;
  return result;
}
