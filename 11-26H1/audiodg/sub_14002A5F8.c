/*
 * XREFs of sub_14002A5F8 @ 0x14002A5F8
 * Callers:
 *     sub_14002A54C @ 0x14002A54C (sub_14002A54C.c)
 *     sub_14002A6F8 @ 0x14002A6F8 (sub_14002A6F8.c)
 *     sub_14002A84C @ 0x14002A84C (sub_14002A84C.c)
 *     sub_140052E0C @ 0x140052E0C (sub_140052E0C.c)
 *     sub_14005F1D4 @ 0x14005F1D4 (sub_14005F1D4.c)
 *     sub_140093DB8 @ 0x140093DB8 (sub_140093DB8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14002A5F8(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 *a3)
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
