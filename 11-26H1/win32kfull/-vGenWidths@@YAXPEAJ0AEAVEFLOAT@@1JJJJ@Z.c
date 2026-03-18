/*
 * XREFs of ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x14010764C
 * Callers:
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x14022788C (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x140335178 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140108968 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x14010C0C0 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
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
  __int64 v21; // rcx
  float v22; // xmm4_4
  __int64 v23; // rcx

  if ( *(float *)&a5 == 0.0 )
  {
    *a2 = 0;
    *a1 = 0;
  }
  else if ( (unsigned int)EFLOAT::bIsZero(a3) )
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
    if ( (unsigned int)EFLOAT::bIsZero(v12) )
    {
      *a2 = v17;
      *a1 = -v18;
    }
    else
    {
      *(float *)&a5 = (float)((float)(*(float *)a3 / (float)v18) * (float)(*(float *)a3 / (float)v18))
                    + (float)((float)(*v20 / (float)((float)v19 * 0.5)) * (float)(*v20 / (float)((float)v19 * 0.5)));
      EFLOAT::vSqrt((EFLOAT *)&a5);
      bFToL(v21, a1, 6LL);
      *(float *)&a5 = (float)((float)(*(float *)a3 / (float)v17) * (float)(*(float *)a3 / (float)v17)) + v22;
      EFLOAT::vSqrt((EFLOAT *)&a5);
      bFToL(v23, a2, 6LL);
    }
  }
}
