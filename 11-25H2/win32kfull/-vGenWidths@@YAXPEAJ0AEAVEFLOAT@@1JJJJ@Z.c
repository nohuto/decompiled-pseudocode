/*
 * XREFs of ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1400A968C
 * Callers:
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1400AA670 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x140230D24 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 * Callees:
 *     bFToL @ 0x1400A4410 (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400A6340 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1400BFE30 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 */

void __fastcall vGenWidths(int *a1, int *a2, struct EFLOAT *a3, struct EFLOAT *a4, int a5, int a6, int a7, int a8)
{
  int v11; // r10d
  EFLOAT *v12; // r11
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // ebx
  int v17; // ebx
  int v18; // r8d
  int v19; // r10d
  float *v20; // r11
  double v21; // xmm3_8
  double v22; // xmm0_8
  float v23; // xmm4_4

  if ( *(float *)&a5 == 0.0 )
  {
    *a2 = 0;
    *a1 = 0;
  }
  else if ( EFLOAT::bIsZero(a3) )
  {
    *a1 = v11 / 2;
    *a2 = v11 - v11 / 2;
  }
  else
  {
    v13 = a7;
    v14 = a6;
    if ( a7 == a6 )
    {
      v13 = a8 / -4;
      v14 = a8 / -4 + a8 / 2;
    }
    v15 = 0;
    if ( v13 < 0 )
      v15 = v13;
    v16 = 0;
    if ( v14 > 0 )
      v16 = v14;
    if ( *(float *)a3 < 0.0 )
      v16 = -v15;
    v17 = a8 / 16 + v16;
    if ( !v17 )
      v17 = 1;
    if ( EFLOAT::bIsZero(v12) )
    {
      *a2 = v17;
      *a1 = -v18;
    }
    else
    {
      *(float *)&a5 = (float)((float)(*(float *)a3 / (float)v18) * (float)(*(float *)a3 / (float)v18))
                    + (float)((float)(*v20 / (float)((float)v19 * 0.5)) * (float)(*v20 / (float)((float)v19 * 0.5)));
      EFLOAT::vSqrt((EFLOAT *)&a5);
      *(_QWORD *)&v21 = LODWORD(FLOAT_1_0);
      *(_QWORD *)&v22 = LODWORD(FLOAT_1_0);
      *(float *)&v22 = 1.0 / *(float *)&a5;
      bFToL(v22, a1, 6u);
      *(float *)&a5 = (float)((float)(*(float *)a3 / (float)v17) * (float)(*(float *)a3 / (float)v17)) + v23;
      EFLOAT::vSqrt((EFLOAT *)&a5);
      *(float *)&v21 = 1.0 / *(float *)&a5;
      bFToL(v21, a2, 6u);
    }
  }
}
