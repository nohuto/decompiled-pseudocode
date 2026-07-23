/*
 * XREFs of AuthzBasepCompareIntegerOperands @ 0x140719E8C
 * Callers:
 *     AuthzBasepValueInSet @ 0x1402FB070 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x1402FB3B8 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     AuthzBasepCompareUnsigned @ 0x1404602B8 (AuthzBasepCompareUnsigned.c)
 */

__int64 __fastcall AuthzBasepCompareIntegerOperands(unsigned __int8 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r10
  signed __int64 **v4; // rdx
  __int16 v5; // r11
  signed __int64 **v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned int v9; // eax
  signed __int64 v11; // [rsp+20h] [rbp-10h]
  signed __int64 v12; // [rsp+28h] [rbp-8h]

  v2 = 0;
  v11 = -1LL;
  v3 = 0LL;
  v12 = -1LL;
  v4 = (signed __int64 **)(a2 + 32);
  v5 = 2;
  do
  {
    if ( *((_DWORD *)v4 - 5) == 1 )
    {
      v6 = v4;
    }
    else
    {
      v5 = *((_WORD *)v4 - 16);
      v6 = (signed __int64 **)(*(v4 - 2) + 6);
    }
    v4 += 5;
    *(&v11 + v3++) = **v6;
  }
  while ( v3 < 2 );
  switch ( v5 )
  {
    case 1:
      switch ( a1 )
      {
        case 0x80u:
          LOBYTE(v2) = v11 == v12;
          break;
        case 0x81u:
          LOBYTE(v2) = v11 != v12;
          break;
        case 0x82u:
          LOBYTE(v2) = v11 < v12;
          break;
        case 0x83u:
          LOBYTE(v2) = v11 <= v12;
          break;
        case 0x84u:
          LOBYTE(v2) = v11 > v12;
          break;
        case 0x85u:
          LOBYTE(v2) = v11 >= v12;
          break;
      }
      break;
    case 2:
      v8 = v12;
      v7 = v11;
      goto LABEL_13;
    case 6:
      v7 = v11;
      if ( (unsigned __int64)v11 > 1 )
        return (unsigned int)-1;
      v8 = v12;
      if ( (unsigned __int64)v12 >= 2 )
        return (unsigned int)-1;
LABEL_13:
      LOBYTE(v9) = AuthzBasepCompareUnsigned(a1, v7, v8);
      return v9;
  }
  return v2;
}
