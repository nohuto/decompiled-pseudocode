/*
 * XREFs of I_MinAsn1DecodeGeneralizedTimeFraction @ 0x1408AA3B0
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x1408AA6DC (MinAsn1DecodeGeneralizedTime.c)
 * Callees:
 *     I_MinAsn1MultiplyAndDivide @ 0x1408AA530 (I_MinAsn1MultiplyAndDivide.c)
 *     I_MinAsn1ScanFrac @ 0x1408AA5F0 (I_MinAsn1ScanFrac.c)
 */

char __fastcall I_MinAsn1DecodeGeneralizedTimeFraction(int a1, int a2, int a3, int *a4, _DWORD *a5)
{
  unsigned int v7; // edi
  char result; // al
  int *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-14h] BYREF
  _DWORD v16[4]; // [rsp+38h] [rbp-10h] BYREF

  v15 = 0;
  v14 = 0;
  v16[0] = 0;
  v7 = 1;
  if ( !(unsigned __int8)I_MinAsn1ScanFrac(a2, a3, 0, (unsigned int)&v15, (__int64)&v14, (__int64)v16) )
    return 0;
  if ( !a1 )
  {
    v7 = 60;
    if ( !(unsigned __int8)I_MinAsn1MultiplyAndDivide(60LL, v15, v14, a4 + 4) )
      return 0;
    goto LABEL_7;
  }
  if ( a1 == 1 )
  {
LABEL_7:
    v7 *= 60;
    if ( !(unsigned __int8)I_MinAsn1MultiplyAndDivide(v7, v15, v14, a4 + 5) )
      return 0;
    goto LABEL_8;
  }
  if ( a1 != 2 )
    return 0;
LABEL_8:
  v9 = a4 + 6;
  if ( !(unsigned __int8)I_MinAsn1MultiplyAndDivide(1000 * v7, v15, v14, a4 + 6) )
    return 0;
  if ( a1 <= 1 )
  {
    v10 = 1000LL * a4[5];
    if ( (unsigned __int64)(v10 + 0x80000000LL) > 0xFFFFFFFF )
      return 0;
    v11 = *v9 - (__int64)(int)v10;
    if ( (unsigned __int64)(v11 + 0x80000000LL) > 0xFFFFFFFF )
    {
      *v9 = -1;
      return 0;
    }
    *v9 = v11;
    if ( !a1 )
    {
      v12 = 60LL * a4[4];
      if ( (unsigned __int64)(v12 + 0x80000000LL) > 0xFFFFFFFF )
        return 0;
      v13 = a4[5] - (__int64)(int)v12;
      if ( (unsigned __int64)(v13 + 0x80000000LL) > 0xFFFFFFFF )
      {
        a4[5] = -1;
        return 0;
      }
      a4[5] = v13;
    }
  }
  result = 1;
  *a5 = v16[0];
  return result;
}
