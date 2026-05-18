/*
 * XREFs of sub_18003EDCC @ 0x18003EDCC
 * Callers:
 *     sub_18003F4D8 @ 0x18003F4D8 (sub_18003F4D8.c)
 *     sub_180041860 @ 0x180041860 (sub_180041860.c)
 *     sub_18006A784 @ 0x18006A784 (sub_18006A784.c)
 *     sub_1800907C0 @ 0x1800907C0 (sub_1800907C0.c)
 *     sub_18009CD40 @ 0x18009CD40 (sub_18009CD40.c)
 *     sub_1800D2B84 @ 0x1800D2B84 (sub_1800D2B84.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18003EDCC(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  result = 0LL;
  v5 = a1;
  v6 = (unsigned __int64)((char *)a2 - (char *)a1 + 7) >> 3;
  if ( a1 > a2 )
    v6 = 0LL;
  if ( v6 >= 2 )
  {
    result = *a3;
    v7 = (unsigned __int64)&a1[v6 - 1];
    if ( v5 > a3 || v7 < (unsigned __int64)a3 )
    {
      v8 = 8 * (v6 & 0xFFFFFFFFFFFFFFFEuLL);
      memset64(v5, result, v8 >> 3);
      v5 = (unsigned __int64 *)((char *)v5 + v8);
    }
  }
  while ( v5 != a2 )
  {
    result = *a3;
    *v5++ = *a3;
  }
  return result;
}
