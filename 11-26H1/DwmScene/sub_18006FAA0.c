/*
 * XREFs of sub_18006FAA0 @ 0x18006FAA0
 * Callers:
 *     sub_18006F91C @ 0x18006F91C (sub_18006F91C.c)
 * Callees:
 *     sub_18006F8FC @ 0x18006F8FC (sub_18006F8FC.c)
 */

unsigned __int64 __fastcall sub_18006FAA0(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = sub_18006F8FC((__int64)a1, &v6);
  *a1 = v4;
  a1[1] = v4;
  result = v4 + 8 * a2;
  a1[2] = result;
  return result;
}
