/*
 * XREFs of MinAsn1DecodeGeneralizedTime @ 0x1408AA6DC
 * Callers:
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x1408A8BD4 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     MinAsn1DecodeTime @ 0x1408AA920 (MinAsn1DecodeTime.c)
 * Callees:
 *     atoi @ 0x1405381E0 (atoi.c)
 *     isdigit @ 0x140539020 (isdigit.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     I_MinAsn1CalculateTimeOffset @ 0x1408AA21C (I_MinAsn1CalculateTimeOffset.c)
 *     I_MinAsn1ConvertTime @ 0x1408AA30C (I_MinAsn1ConvertTime.c)
 *     I_MinAsn1DecodeGeneralizedTimeFraction @ 0x1408AA3B0 (I_MinAsn1DecodeGeneralizedTimeFraction.c)
 */

bool __fastcall MinAsn1DecodeGeneralizedTime(__int64 a1, LARGE_INTEGER *a2)
{
  unsigned int v2; // edi
  char *v4; // rbx
  char *v5; // rbx
  unsigned int v6; // edi
  int i; // esi
  int v8; // ecx
  char v9; // al
  int v10; // eax
  char *v11; // rbx
  int v12; // edi
  char v14[4]; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+34h] [rbp-3Ch] BYREF
  int v16; // [rsp+38h] [rbp-38h] BYREF
  int v17[4]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h]
  int v19; // [rsp+58h] [rbp-18h]
  char Str; // [rsp+60h] [rbp-10h] BYREF
  char v21; // [rsp+61h] [rbp-Fh]
  char v22; // [rsp+62h] [rbp-Eh]
  char v23; // [rsp+63h] [rbp-Dh]
  char v24; // [rsp+64h] [rbp-Ch]

  v2 = *(_DWORD *)a1;
  v4 = *(char **)(a1 + 8);
  v18 = 0LL;
  v19 = 0;
  v16 = 0;
  v14[0] = 0;
  v15 = 0;
  if ( v2 < 0xA )
    return 0;
  v24 = 0;
  Str = *v4;
  v21 = v4[1];
  v22 = v4[2];
  v23 = v4[3];
  v17[0] = atoi(&Str);
  v22 = 0;
  Str = v4[4];
  v21 = v4[5];
  v17[1] = atoi(&Str);
  Str = v4[6];
  v21 = v4[7];
  v17[2] = atoi(&Str);
  Str = v4[8];
  v21 = v4[9];
  v5 = v4 + 10;
  v17[3] = atoi(&Str);
  v6 = v2 - 10;
  for ( i = 0; i < 3; ++i )
  {
    if ( !v6 )
      return 0;
    v8 = (unsigned __int8)*v5;
    if ( (((_BYTE)v8 - 44) & 0xFD) == 0 )
    {
      v11 = v5 + 1;
      v12 = v6 - 1;
      if ( !I_MinAsn1DecodeGeneralizedTimeFraction(i, (int)v11, v12, v17, &v15) )
        return 0;
      v5 = &v11[v15];
      v6 = v12 - v15;
      return I_MinAsn1CalculateTimeOffset(v5, v6, 1, &v16, v14) && I_MinAsn1ConvertTime((__int16 *)v17, v16, v14[0], a2);
    }
    if ( i >= 2 || !isdigit(v8) )
      return I_MinAsn1CalculateTimeOffset(v5, v6, 1, &v16, v14) && I_MinAsn1ConvertTime((__int16 *)v17, v16, v14[0], a2);
    if ( v6 < 2 )
      return 0;
    Str = *v5;
    v6 -= 2;
    v9 = v5[1];
    v5 += 2;
    v21 = v9;
    v10 = atoi(&Str);
    if ( i )
      HIDWORD(v18) = v10;
    else
      LODWORD(v18) = v10;
  }
  return I_MinAsn1CalculateTimeOffset(v5, v6, 1, &v16, v14) && I_MinAsn1ConvertTime((__int16 *)v17, v16, v14[0], a2);
}
