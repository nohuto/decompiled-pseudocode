/*
 * XREFs of SymCryptEcurveValidateAndComputeSizes @ 0x14055D934
 * Callers:
 *     SymCryptEcurveAllocate @ 0x14055D188 (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x14055E5B8 (SymCryptDigitsFromBits.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModulusFromDigits @ 0x14055EEC0 (SymCryptSizeofModulusFromDigits.c)
 *     SymCryptSizeofEcpointEx @ 0x140567060 (SymCryptSizeofEcpointEx.c)
 */

char __fastcall SymCryptEcurveValidateAndComputeSizes(_DWORD *a1, unsigned int *a2)
{
  char v3; // bp
  unsigned int v4; // ecx
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // r14d
  int v16; // r8d
  int v17; // r8d
  int v18; // ecx
  unsigned int v19; // ecx
  __int64 v20; // r8
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rbx
  int v23; // eax
  unsigned int v24; // r8d
  unsigned int v25; // edx
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // r9d
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // r9d
  unsigned int v35; // ecx
  unsigned int v36; // r9d
  unsigned int v37; // eax

  v3 = 0;
  v4 = a1[3];
  if ( v4 <= 0x80 && a1[4] <= 0x81u && a1[5] <= 2u && a1[6] <= 0x100u )
  {
    *a2 = SymCryptDigitsFromBits(8 * v4);
    a2[1] = SymCryptDigitsFromBits((unsigned int)(8 * a1[4]));
    v6 = SymCryptDigitsFromBits((unsigned int)(8 * a1[5]));
    v7 = *a2;
    a2[2] = v6;
    v8 = SymCryptSizeofModulusFromDigits(v7);
    v9 = a2[1];
    a2[4] = v8;
    v10 = SymCryptSizeofModulusFromDigits(v9);
    v11 = a2[2];
    a2[7] = v10;
    a2[8] = SymCryptSizeofIntFromDigits(v11);
    v12 = (((unsigned int)(8 * a1[3]) >> 9) + ((((8 * a1[3]) & 0x1FFu) + 511) >> 9)) << 6;
    a2[5] = v12;
    switch ( a1[1] )
    {
      case 1:
        a2[10] = 67;
        v13 = 3LL;
        break;
      case 2:
        a2[10] = 84;
        v13 = 4LL;
        break;
      case 3:
        a2[10] = 98;
        v13 = 2LL;
        break;
      default:
        return v3;
    }
    v14 = SymCryptSizeofEcpointEx(v12, v13);
    v3 = 1;
    v15 = a2[5];
    v16 = a2[4] + 672;
    a2[6] = v14;
    v17 = a2[7] + a2[8] + v16 + 2 * v15;
    a2[3] = v17;
    v18 = a1[1];
    if ( v18 == 1 || v18 == 2 )
      v14 *= 16;
    v19 = *a2;
    a2[3] = v17 + v14;
    v20 = v19 << 8;
    v21 = (unsigned int)(v20 + 64);
    v22 = v20 + (v19 << 6) + 64LL + v21 + 2 * ((v19 << 6) + 64LL);
    v23 = SymCryptSizeofEcpointEx(v15, 4LL);
    v24 = a2[1];
    v25 = *a2;
    if ( v21 <= v22 )
      LODWORD(v21) = v22;
    v26 = *a2;
    v27 = v21 + v23;
    if ( v25 <= v24 )
      v26 = a2[1];
    v28 = v27 + 8 * v15;
    if ( 16 * v26 <= (v26 << 8) + 192 )
    {
      if ( v25 <= v24 )
      {
        v32 = a2[1];
        v31 = v32;
      }
      else
      {
        v31 = *a2;
        v32 = *a2;
      }
      v30 = ((v32 + v31) << 7) + 192;
    }
    else
    {
      v29 = *a2;
      if ( v25 <= v24 )
        v29 = a2[1];
      v30 = 16 * v29;
    }
    if ( v28 <= v30 )
    {
      if ( v25 <= v24 )
      {
        v35 = a2[1];
        v34 = v35;
        v33 = v35;
      }
      else
      {
        v33 = *a2;
        v34 = *a2;
        v35 = *a2;
      }
      if ( 16 * v35 <= ((v34 + v33) << 7) + 192 )
      {
        if ( v25 <= v24 )
        {
          v37 = a2[1];
        }
        else
        {
          v24 = *a2;
          v37 = *a2;
        }
        v28 = ((v24 + v37) << 7) + 192;
      }
      else
      {
        v36 = a2[1];
        if ( v25 > v24 )
          v36 = *a2;
        v28 = 16 * v36;
      }
    }
    if ( v28 <= (v25 << 8) + 64 )
      v28 = (v25 << 8) + 64;
    a2[9] = v28;
  }
  return v3;
}
