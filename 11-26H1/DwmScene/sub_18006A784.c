/*
 * XREFs of sub_18006A784 @ 0x18006A784
 * Callers:
 *     sub_180060E8C @ 0x180060E8C (sub_180060E8C.c)
 *     sub_180069C00 @ 0x180069C00 (sub_180069C00.c)
 * Callees:
 *     sub_18003EDCC @ 0x18003EDCC (sub_18003EDCC.c)
 *     sub_18005FEB8 @ 0x18005FEB8 (sub_18005FEB8.c)
 */

unsigned __int64 __fastcall sub_18006A784(_QWORD *a1)
{
  __int64 *v2; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[2] )
  {
    v2 = (__int64 *)a1[1];
    if ( a1[7] >> 3 <= a1[2] )
    {
      sub_18005FEB8((__int64)a1, (__int64)v2);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v4 = (unsigned __int64 *)a1[4];
      v5 = (unsigned __int64 *)a1[3];
      v6 = a1[1];
      return sub_18003EDCC(v5, v4, &v6);
    }
    else
    {
      return sub_18006A650(a1, *v2, a1[1]);
    }
  }
  return result;
}
