/*
 * XREFs of sub_140062830 @ 0x140062830
 * Callers:
 *     sub_140062080 @ 0x140062080 (sub_140062080.c)
 *     sub_140062200 @ 0x140062200 (sub_140062200.c)
 * Callees:
 *     sub_1400080D4 @ 0x1400080D4 (sub_1400080D4.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_140061328 @ 0x140061328 (sub_140061328.c)
 *     sub_140061CB0 @ 0x140061CB0 (sub_140061CB0.c)
 */

__int64 __fastcall sub_140062830(__int64 a1, unsigned int a2, _OWORD *a3)
{
  __int64 result; // rax
  unsigned int v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0;
  LODWORD(v10) = 0;
  result = sub_140061328(a1, a2, (int *)&v7, (unsigned int *)&v10, &v8);
  if ( result )
  {
    *(_OWORD *)(result + 8) = *a3;
  }
  else
  {
    if ( !*(_QWORD *)a1 && !sub_1400080D4((__int64 *)a1, *(unsigned int *)(a1 + 16), 1) )
      sub_14004639C(-2147024882);
    result = sub_140061CB0(a1, a2, v7, v10);
    v10 = result;
    try
    {
      *(_OWORD *)(result + 8) = *a3;
    }
    catch ( ... )
    {
      sub_1400627BC(a1, v10);
      throw;
    }
  }
  return result;
}
