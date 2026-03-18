/*
 * XREFs of AntiLog @ 0x14013FCEC
 * Callers:
 *     RaisePower @ 0x14013FBB0 (RaisePower.c)
 * Callees:
 *     MantissaToFraction @ 0x14013FEB8 (MantissaToFraction.c)
 */

__int64 __fastcall AntiLog(int a1)
{
  int v1; // r9d
  unsigned int v2; // r8d
  int v3; // ebx
  int v4; // edx
  int v5; // ecx
  int i; // edx
  int v7; // edi
  int v8; // r8d
  int v9; // ecx
  int v10; // r9d

  v1 = a1;
  v2 = 1000000;
  if ( a1 < 0 )
  {
    if ( a1 <= -6000000 )
      return 1LL;
    v3 = (a1 - 999999) / 1000000;
    v1 = -1000000 * v3 + a1;
    goto LABEL_4;
  }
  if ( a1 < 1000000 )
  {
    v3 = 0;
LABEL_4:
    if ( !v1 )
      goto LABEL_15;
    v4 = v1 / 10000;
    if ( v1 / 10000 >= 0 && (unsigned __int64)v4 <= 0x63 )
    {
      _mm_lfence();
      v5 = (unsigned __int16)MantSearchTable[v4];
      for ( i = (unsigned __int16)word_140360A82[v4] + 1; ; v5 = (v5 + i) >> 1 )
      {
        while ( 1 )
        {
          v7 = (v5 + i) >> 1;
          if ( v7 == v5 )
          {
            v8 = MantissaToFraction(
                   (unsigned int)(v1 - MantissaTable[v5]),
                   (unsigned int)MantissaCorrectData[v5],
                   1000000LL);
            goto LABEL_14;
          }
          if ( v1 >= MantissaTable[v7] )
            break;
          i = (v5 + i) >> 1;
        }
        if ( v1 <= MantissaTable[v7] )
          break;
      }
      v8 = 0;
LABEL_14:
      v2 = 1000000 * (v7 + 100) + v8;
      v3 -= 2;
LABEL_15:
      if ( v3 >= 0 )
      {
        if ( v3 > 0 )
          v2 *= Power10ExpNum[v3];
        return v2;
      }
      v9 = Power10ExpNum[-v3];
      if ( v9 <= 0 )
      {
        v9 = -v9;
        v10 = 1;
        if ( !v9 )
          return v2;
      }
      else
      {
        v10 = 0;
      }
      if ( (int)v2 > 0 )
        goto LABEL_19;
      v2 = -v2;
      if ( v2 )
      {
        v10 ^= 1u;
LABEL_19:
        v2 = (v2 + ((unsigned int)v9 >> 1)) / v9;
        if ( v10 )
          return -v2;
        return v2;
      }
      return 0;
    }
    return 0x7FFFFFFFLL;
  }
  if ( a1 < 3331930 )
  {
    v3 = (a1 + 999999) / 1000000;
    v1 = 1000000 * v3 - a1;
    goto LABEL_4;
  }
  return 0x7FFFFFFFLL;
}
