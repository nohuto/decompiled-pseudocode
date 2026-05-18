/*
 * XREFs of sub_1800385B0 @ 0x1800385B0
 * Callers:
 *     sub_180033678 @ 0x180033678 (sub_180033678.c)
 * Callees:
 *     sub_180031E08 @ 0x180031E08 (sub_180031E08.c)
 */

__int64 __fastcall sub_1800385B0(__int64 a1, _QWORD *a2)
{
  __int64 **v2; // r9
  __int64 *v4; // r8
  __int64 *v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-18h]

  v2 = *(__int64 ***)a1;
  v9 = a1;
  v10 = 0LL;
  v11 = &v10;
  v4 = *v2;
  if ( *v2 != (__int64 *)v2 )
  {
    do
    {
      v5 = (__int64 *)*v4;
      if ( v4[2] == *a2 )
      {
        --*(_QWORD *)(a1 + 8);
        v6 = (_QWORD *)*v4;
        *v4 = 0LL;
        v7 = (_QWORD *)v4[1];
        *v7 = v6;
        v6[1] = v7;
        *v11 = (__int64)v4;
        a1 = v9;
        v11 = v4;
      }
      v4 = v5;
    }
    while ( v5 != (__int64 *)v2 );
  }
  return sub_180031E08((__int64)&v9);
}
