/*
 * XREFs of I_MinAsn1MultiplyAndDivide @ 0x1408AA530
 * Callers:
 *     I_MinAsn1DecodeGeneralizedTimeFraction @ 0x1408AA3B0 (I_MinAsn1DecodeGeneralizedTimeFraction.c)
 * Callees:
 *     ?RtlLongLongMult@@YAJ_J0PEA_J@Z @ 0x140721B4C (-RtlLongLongMult@@YAJ_J0PEA_J@Z.c)
 */

char __fastcall I_MinAsn1MultiplyAndDivide(int a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // r10
  int v6; // r10d
  int i; // r11d
  int v8; // r11d
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 0LL;
  if ( (int)RtlLongLongMult(a1, a2, v13) < 0 )
    return 0;
  if ( (int)v5 >= 0 )
  {
    if ( (int)v5 > 0 )
    {
      v9 = v13[0];
      v10 = v5;
      do
      {
        v11 = (__int64)((unsigned __int128)(v9 * (__int128)0x6666666666666667LL) >> 64) >> 2;
        v9 = (v11 >> 63) + v11;
        --v10;
      }
      while ( v10 );
      goto LABEL_12;
    }
  }
  else
  {
    v6 = -(int)v5;
    for ( i = 0; i < v6; i = v8 + 1 )
    {
      if ( (int)RtlLongLongMult(v13[0], 10LL, v13) < 0 )
        return 0;
    }
  }
  v9 = v13[0];
LABEL_12:
  if ( (unsigned __int64)(v9 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    *a4 = v9;
    return 1;
  }
  *a4 = -1;
  return 0;
}
