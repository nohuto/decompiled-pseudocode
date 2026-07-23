/*
 * XREFs of gen_codes @ 0x140639BD4
 * Callers:
 *     build_tree @ 0x1406392F4 (build_tree.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall gen_codes(__int64 a1, int a2, __int64 a3)
{
  int v3; // r10d
  __int64 i; // r9
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  int v12; // eax
  _WORD v13[16]; // [rsp+0h] [rbp-38h]

  v3 = 0;
  for ( i = 1LL; i <= 15; ++i )
  {
    result = *(unsigned __int16 *)(a3 + 2 * i - 2);
    v3 = 2 * (result + v3);
    v13[i] = v3;
  }
  v7 = a2;
  if ( a2 >= 0 )
  {
    v8 = 0LL;
    do
    {
      v9 = *(unsigned __int16 *)(a1 + 4 * v8 + 2);
      if ( *(_WORD *)(a1 + 4 * v8 + 2) )
      {
        v10 = (unsigned __int16)v13[v9];
        v11 = 0;
        v13[v9] = v10 + 1;
        do
        {
          LODWORD(v9) = v9 - 1;
          v12 = v10 & 1;
          v10 >>= 1;
          result = v11 | v12;
          v11 = 2 * result;
        }
        while ( (int)v9 > 0 );
        *(_WORD *)(a1 + 4 * v8) = v11 >> 1;
      }
      ++v8;
    }
    while ( v8 <= v7 );
  }
  return result;
}
