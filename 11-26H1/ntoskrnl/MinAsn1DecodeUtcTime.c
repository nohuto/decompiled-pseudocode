/*
 * XREFs of MinAsn1DecodeUtcTime @ 0x1408AA998
 * Callers:
 *     MinAsn1DecodeTime @ 0x1408AA920 (MinAsn1DecodeTime.c)
 * Callees:
 *     atoi @ 0x1405381E0 (atoi.c)
 *     isdigit @ 0x140539020 (isdigit.c)
 *     I_MinAsn1CalculateTimeOffset @ 0x1408AA21C (I_MinAsn1CalculateTimeOffset.c)
 *     I_MinAsn1ConvertTime @ 0x1408AA30C (I_MinAsn1ConvertTime.c)
 */

bool __fastcall MinAsn1DecodeUtcTime(__int64 a1, LARGE_INTEGER *a2)
{
  unsigned int v2; // edi
  char *v4; // rbx
  int v5; // esi
  int v6; // eax
  char *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax
  _DWORD v11[5]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+44h] [rbp-Ch]
  char v13; // [rsp+80h] [rbp+30h] BYREF
  char Str; // [rsp+90h] [rbp+40h] BYREF
  char v15; // [rsp+91h] [rbp+41h]
  char v16; // [rsp+92h] [rbp+42h]
  int v17; // [rsp+98h] [rbp+48h] BYREF

  v2 = *(_DWORD *)a1;
  v4 = *(char **)(a1 + 8);
  v12 = 0LL;
  v17 = 0;
  v13 = 0;
  if ( v2 < 0xA )
    return 0;
  v16 = 0;
  Str = *v4;
  v15 = v4[1];
  v5 = atoi(&Str);
  Str = v4[2];
  v15 = v4[3];
  v6 = atoi(&Str);
  Str = v4[4];
  v15 = v4[5];
  v11[1] = v6;
  v11[2] = atoi(&Str);
  Str = v4[6];
  v15 = v4[7];
  v11[3] = atoi(&Str);
  Str = v4[8];
  v15 = v4[9];
  v7 = v4 + 10;
  v11[4] = atoi(&Str);
  v8 = v2 - 10;
  if ( v8 >= 2 && isdigit((unsigned __int8)*v7) )
  {
    Str = *v7;
    v15 = v7[1];
    v7 += 2;
    LODWORD(v12) = atoi(&Str);
    v8 -= 2;
  }
  if ( !I_MinAsn1CalculateTimeOffset(v7, v8, 0, &v17, &v13) )
    return 0;
  v9 = v5 + 1900;
  if ( v5 < 50 )
    v9 = v5 + 2000;
  v11[0] = v9;
  return I_MinAsn1ConvertTime((__int16 *)v11, v17, v13, a2);
}
