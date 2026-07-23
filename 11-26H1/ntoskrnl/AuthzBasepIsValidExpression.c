/*
 * XREFs of AuthzBasepIsValidExpression @ 0x140472080
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     <none>
 */

bool __fastcall AuthzBasepIsValidExpression(unsigned __int8 a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rdi
  int v5; // r11d
  unsigned int v6; // r10d
  __int64 v7; // rsi
  int v8; // ecx
  int v10; // ecx

  v4 = 0LL;
  v5 = a1;
  v6 = 0;
  *a4 = 0;
  v7 = 0x7000FFFC3LL;
  while ( 1 )
  {
    if ( v6 >= a3 )
    {
      if ( ((unsigned __int8)(v5 + 0x80) > 0x22u || !_bittest64(&v7, (unsigned __int8)(v5 + 0x80)))
        && a3 == 2
        && (*(_WORD *)a2 & 0xFFFB) != 0
        && *(_DWORD *)(a2 + 52) == 1
        && *(_BYTE *)(a2 + 44) )
      {
        return 0;
      }
      if ( v5 == 162 )
      {
        if ( a3 != 2 )
        {
          if ( a3 == 1 )
            return *(_DWORD *)(a2 + 12) != 1;
          return 1;
        }
        return 0;
      }
      if ( v5 == 163 )
      {
LABEL_14:
        if ( a3 != 2
          || *(_DWORD *)(a2 + 12) == 1
          || ((_BYTE)v5 == 0x8F || (_BYTE)v5 == 0x88) && *(_DWORD *)(a2 + 52) == 1 && !*(_BYTE *)(a2 + 44) )
        {
          return 0;
        }
      }
      else
      {
        switch ( v5 )
        {
          case 128:
          case 129:
          case 130:
          case 131:
          case 132:
          case 133:
          case 134:
          case 136:
          case 142:
          case 143:
            goto LABEL_14;
          case 135:
          case 141:
            if ( a3 != 1 )
              return 0;
            v10 = *(_DWORD *)(a2 + 12);
            return ((v10 - 1) & 0xFFFFFFF9) != 0 || v10 == 7;
          case 137:
          case 138:
          case 139:
          case 140:
          case 144:
          case 145:
          case 146:
          case 147:
            if ( a3 != 1 )
              return 0;
            if ( *(_DWORD *)(a2 + 12) != 1 && *(_WORD *)a2 != 5 )
              goto LABEL_35;
            return 1;
          case 160:
          case 161:
            break;
          default:
            return 1;
        }
        while ( (unsigned int)v4 < a3 )
        {
          if ( *(_DWORD *)(a2 + 40 * v4 + 12) == 1 )
            return 0;
          v4 = (unsigned int)(v4 + 1);
        }
      }
      return 1;
    }
    v8 = *(_DWORD *)(a2 + 40LL * v6 + 12);
    if ( !v8 )
      return 0;
    if ( ((unsigned __int8)(v5 + 0x80) > 0x22u || !_bittest64(&v7, (unsigned __int8)(v5 + 0x80)))
      && v8 != 1
      && *(_DWORD *)(a2 + 40LL * v6 + 4) > 1u )
    {
      break;
    }
    ++v6;
  }
LABEL_35:
  *a4 = 1;
  return 0;
}
