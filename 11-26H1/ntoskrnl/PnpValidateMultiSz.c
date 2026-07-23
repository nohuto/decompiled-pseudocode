/*
 * XREFs of PnpValidateMultiSz @ 0x140952178
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x140950E2C (PiDqQueryValidateQueryData.c)
 *     PiSwValidateCreateData @ 0x140A8D068 (PiSwValidateCreateData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpValidateMultiSz(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  _WORD *v5; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rax

  result = 3221225485LL;
  v4 = 0LL;
  if ( a1 )
  {
    while ( 1 )
    {
      v5 = (_WORD *)(a1 + 2 * v4);
      v6 = a2 - v4;
      if ( !v5 || v6 > 0x7FFFFFFF )
        break;
      v7 = a2 - v4;
      if ( v6 )
      {
        do
        {
          if ( !*v5 )
            break;
          ++v5;
          --v7;
        }
        while ( v7 );
      }
      result = v7 == 0 ? 0xC000000D : 0;
      if ( v7 )
        v8 = v6 - v7;
      else
        v8 = 0LL;
      if ( !v7 )
        return result;
      v9 = v8 + v4;
      if ( v8 + v4 < v4 )
        return 3221225621LL;
      v4 = v9 + 1;
      if ( v9 + 1 < v9 )
        return 3221225621LL;
      result = 0LL;
      if ( !v8 )
        return result;
    }
    return 3221225485LL;
  }
  return result;
}
