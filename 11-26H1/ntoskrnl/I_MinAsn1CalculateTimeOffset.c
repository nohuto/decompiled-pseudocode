/*
 * XREFs of I_MinAsn1CalculateTimeOffset @ 0x1408AA21C
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x1408AA6DC (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x1408AA998 (MinAsn1DecodeUtcTime.c)
 * Callees:
 *     I_MinAsn1ScanFrac @ 0x1408AA5F0 (I_MinAsn1ScanFrac.c)
 */

char __fastcall I_MinAsn1CalculateTimeOffset(char *a1, int a2, char a3, int *a4, _BYTE *a5)
{
  int v5; // r10d
  _BYTE *v8; // rax
  char v9; // di
  int v10; // ebx
  int v11; // ebx
  int v13; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v14[5]; // [rsp+34h] [rbp-14h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0;
  v13 = 0;
  v14[0] = 0;
  v15 = 0;
  v8 = a5;
  *a5 = 0;
  if ( !a2 )
    return 0;
  v9 = *a1;
  if ( *a1 == 90 )
  {
    *v8 = 1;
    v10 = a2 - 1;
  }
  else
  {
    if ( ((v9 - 43) & 0xFD) != 0 )
      return 0;
    v11 = a2 - 1;
    if ( !(unsigned __int8)I_MinAsn1ScanFrac((int)a1 + 1, a2 - 1, a3, (unsigned int)&v13, (__int64)&v15, (__int64)v14) )
      return 0;
    v10 = v11 - v14[0];
    if ( a3 && v15 == 2 )
    {
      v5 = 60 * v13;
    }
    else
    {
      if ( v15 != 4 )
        return 0;
      v5 = v13 - 40 * (v13 / 100);
    }
    if ( v9 == 45 )
      v5 = -v5;
  }
  if ( !v10 )
  {
    *a4 = v5;
    return 1;
  }
  return 0;
}
