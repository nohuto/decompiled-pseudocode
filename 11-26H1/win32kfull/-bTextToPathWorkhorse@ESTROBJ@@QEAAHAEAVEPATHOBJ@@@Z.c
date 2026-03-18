/*
 * XREFs of ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D42A0
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D4010 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D4278 (-bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D4898 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 * Callees:
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400DA118 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     STROBJ_bEnum @ 0x1400DA160 (STROBJ_bEnum.c)
 */

__int64 __fastcall ESTROBJ::bTextToPathWorkhorse(STROBJ *pstro, struct EPATHOBJ *a2)
{
  unsigned int v2; // ebx
  _DWORD *p_pwszOrg; // r13
  PGLYPHPOS v5; // rsi
  ULONG ulCharInc; // r14d
  int v7; // r14d
  ULONG v8; // edi
  ULONG GlyphData; // r12d
  ULONG v10; // r13d
  FIX v11; // ecx
  FIX v12; // edx
  bool v13; // zf
  FIX x; // ecx
  FIX y; // edx
  PGLYPHPOS ppgpos; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v18; // [rsp+28h] [rbp-10h]
  ULONG pc; // [rsp+80h] [rbp+48h] BYREF
  EPATHOBJ *v20; // [rsp+88h] [rbp+50h]
  BOOL v21; // [rsp+90h] [rbp+58h]
  struct _POINTFIX v22; // [rsp+98h] [rbp+60h] BYREF

  v20 = a2;
  v2 = 0;
  p_pwszOrg = &pstro[4].pwszOrg;
  pc = 0;
  v22 = 0LL;
  ppgpos = 0LL;
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  do
  {
    v18 = p_pwszOrg;
    v21 = STROBJ_bEnum(pstro, &pc, &ppgpos);
    if ( !pc )
      break;
    v5 = ppgpos;
    if ( !ppgpos )
      break;
    ulCharInc = pstro->ulCharInc;
    if ( ulCharInc )
    {
      v13 = (*p_pwszOrg & 0x100) == 0;
      x = ppgpos->ptl.x;
      v22.x = x;
      y = ppgpos->ptl.y;
      v22.y = y;
      if ( v13 )
      {
        v22.y = 16 * y;
        v22.x = 16 * x;
      }
      v7 = 16 * ulCharInc;
      v22.x -= v7;
    }
    else
    {
      v7 = 0;
    }
    v8 = pc;
    GlyphData = pc;
    do
    {
      if ( (*p_pwszOrg & 2) == 0 )
      {
        GlyphData = RFONTOBJ::cGetGlyphData(*(RFONTOBJ **)&pstro[1].ulCharInc, v8, v5);
        if ( !GlyphData )
          break;
      }
      v10 = 0;
      if ( GlyphData )
      {
        while ( 1 )
        {
          if ( v7 )
          {
            v22.x += v7;
          }
          else
          {
            v11 = v5->ptl.x;
            v22.x = v11;
            v12 = v5->ptl.y;
            v22.y = v12;
            if ( (*v18 & 0x100) == 0 )
            {
              v22.y = 16 * v12;
              v22.x = 16 * v11;
            }
          }
          if ( !EPATHOBJ::bAppend(v20, (const struct EPATHOBJ *)v5->pgdf->pgb, &v22) )
            break;
          ++v5;
          ++v10;
          ppgpos = v5;
          if ( v10 >= GlyphData )
            goto LABEL_14;
        }
        p_pwszOrg = v18;
        break;
      }
LABEL_14:
      p_pwszOrg = v18;
      v8 -= GlyphData;
    }
    while ( v8 );
    v13 = v8 == 0;
    if ( v8 )
      goto LABEL_21;
  }
  while ( v21 );
  v13 = 1;
LABEL_21:
  LOBYTE(v2) = v13;
  return v2;
}
