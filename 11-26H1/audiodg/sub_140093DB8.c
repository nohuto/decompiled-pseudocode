/*
 * XREFs of sub_140093DB8 @ 0x140093DB8
 * Callers:
 *     sub_140093710 @ 0x140093710 (sub_140093710.c)
 * Callees:
 *     sub_14002A5F8 @ 0x14002A5F8 (sub_14002A5F8.c)
 *     sub_1400930FC @ 0x1400930FC (sub_1400930FC.c)
 */

unsigned __int64 __fastcall sub_140093DB8(_QWORD *a1)
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
      sub_1400930FC((__int64)a1, (__int64)v2);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v4 = (unsigned __int64 *)a1[4];
      v5 = (unsigned __int64 *)a1[3];
      v6 = a1[1];
      return sub_14002A5F8(v5, v4, &v6);
    }
    else
    {
      return sub_140093C78(a1, *v2, a1[1]);
    }
  }
  return result;
}
