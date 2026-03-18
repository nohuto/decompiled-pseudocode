/*
 * XREFs of ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400C06B0
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400BF628 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400BFBEC (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400C034C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400C05AC (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400C14FC (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1401C5990 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

struct GPRUN *__fastcall RFONTOBJ::gprunFindRun(RFONTOBJ *this, unsigned __int16 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  _DWORD *v4; // r10
  int v5; // r9d
  _DWORD *v6; // rbx
  struct GPRUN *result; // rax
  struct GPRUN *v8; // rdx
  __int64 v9; // rdx
  int v10; // r11d
  int v11; // ecx
  int v12; // r10d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  int v26; // edx
  int v27; // eax
  int v28; // eax

  v2 = *(_QWORD *)this;
  v3 = a2;
  v4 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  v5 = *(_DWORD *)(*(_QWORD *)this + 604LL);
  v6 = v4 + 4;
  if ( !v5 )
  {
    result = (struct GPRUN *)(v4 + 4);
    v8 = (struct GPRUN *)&v4[4 * (*v4 - 1) + 4];
    if ( v3 > *(_DWORD *)v8 + *((_DWORD *)v8 + 1) - 1 )
      return result;
    while ( result <= v8 )
    {
      if ( v3 - *(_DWORD *)result < *((_DWORD *)result + 1) )
        return result;
      result = (struct GPRUN *)((char *)result + 16);
    }
    return (struct GPRUN *)(v4 + 4);
  }
  if ( (unsigned int)a2 < *v6 )
    return (struct GPRUN *)(v4 + 4);
  v9 = *(int *)(v2 + 608);
  v10 = -1;
  v11 = *(_DWORD *)(v2 + 612);
  v12 = *(_DWORD *)(v2 + 608);
  if ( v11 == 13 )
  {
LABEL_10:
    if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
      v13 = -2048;
    else
      v13 = 2048;
    LODWORD(v9) = v13 + v9;
LABEL_15:
    if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
      v14 = -1024;
    else
      v14 = 1024;
    LODWORD(v9) = v14 + v9;
LABEL_20:
    if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
      v15 = -512;
    else
      v15 = 512;
    LODWORD(v9) = v15 + v9;
LABEL_25:
    if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
      v16 = -256;
    else
      v16 = 256;
    LODWORD(v9) = v16 + v9;
  }
  else if ( v11 != 9 )
  {
    switch ( v11 )
    {
      case 1:
        goto LABEL_66;
      case 2:
        goto LABEL_61;
      case 3:
        goto LABEL_56;
      case 4:
        goto LABEL_51;
      case 5:
        goto LABEL_47;
      case 6:
        goto LABEL_43;
      case 7:
        goto LABEL_38;
      case 8:
        goto LABEL_34;
      case 10:
        goto LABEL_25;
      case 11:
        goto LABEL_20;
      case 12:
        goto LABEL_15;
      case 14:
        goto LABEL_83;
      case 15:
        goto LABEL_79;
      case 16:
        v25 = 2 * v9;
        v26 = 0x4000;
        if ( v3 < v6[2 * v25] )
          v26 = -16384;
        LODWORD(v9) = v12 + v26;
LABEL_79:
        if ( (int)v9 > v5 || (v27 = 0x2000, v3 < v6[4 * (int)v9]) )
          v27 = -8192;
        LODWORD(v9) = v27 + v9;
LABEL_83:
        if ( (int)v9 > v5 || (v28 = 4096, v3 < v6[4 * (int)v9]) )
          v28 = -4096;
        LODWORD(v9) = v28 + v9;
        goto LABEL_10;
      default:
        goto LABEL_70;
    }
  }
  if ( (int)v9 > v5 || (v17 = 128, v3 < v6[4 * (int)v9]) )
    v17 = -128;
  LODWORD(v9) = v17 + v9;
LABEL_34:
  if ( (int)v9 > v5 || (v18 = 64, v3 < v6[4 * (int)v9]) )
    v18 = -64;
  LODWORD(v9) = v18 + v9;
LABEL_38:
  if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
    v19 = -32;
  else
    v19 = 32;
  LODWORD(v9) = v19 + v9;
LABEL_43:
  if ( (int)v9 <= v5 && v3 >= v6[4 * (int)v9] )
    v20 = 16;
  else
    v20 = -16;
  LODWORD(v9) = v20 + v9;
LABEL_47:
  if ( (int)v9 > v5 || (v21 = 8, v3 < v6[4 * (int)v9]) )
    v21 = -8;
  LODWORD(v9) = v21 + v9;
LABEL_51:
  if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
    v22 = -4;
  else
    v22 = 4;
  LODWORD(v9) = v22 + v9;
LABEL_56:
  if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
    v23 = -2;
  else
    v23 = 2;
  LODWORD(v9) = v23 + v9;
LABEL_61:
  if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
    v24 = -1;
  else
    v24 = 1;
  LODWORD(v9) = v24 + v9;
LABEL_66:
  if ( (int)v9 <= v5 && v3 >= v6[4 * (int)v9] )
    v10 = 0;
  LODWORD(v9) = v10 + v9;
LABEL_70:
  result = (struct GPRUN *)&v6[4 * (int)v9];
  if ( v3 - *(_DWORD *)result >= *((_DWORD *)result + 1) )
    return (struct GPRUN *)v6;
  return result;
}
