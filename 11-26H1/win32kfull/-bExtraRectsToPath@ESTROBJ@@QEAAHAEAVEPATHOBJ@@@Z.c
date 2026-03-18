/*
 * XREFs of ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x14019BA1C
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400DA118 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 *     ?bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z @ 0x14019BDD8 (-bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z.c)
 *     ?GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z @ 0x140335038 (-GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::bExtraRectsToPath(ESTROBJ *this, struct EPATHOBJ *a2)
{
  struct EPATHOBJ *v3; // r10
  unsigned int v4; // esi
  _DWORD *v5; // r8
  int v6; // ecx
  int v7; // edx
  int v8; // r9d
  int v9; // r11d
  int v10; // r13d
  int v11; // ecx
  int v12; // edx
  int v13; // r9d
  int v14; // r11d
  int v15; // r13d
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // edi
  struct _GLYPHPOS *v20; // r10
  RFONTOBJ *v21; // rcx
  unsigned int v22; // r13d
  unsigned int v23; // r15d
  unsigned int v24; // r12d
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  int v29; // r9d
  __int64 v30; // r15
  _DWORD *v31; // rcx
  struct RFONT *LinkedRfontOnIndex; // rax
  unsigned int GlyphData; // eax
  unsigned int v34; // eax
  unsigned int *v35; // r8
  LONG y; // eax
  LONG x; // edx
  int v38; // edi
  double v39; // xmm3_8
  int v40; // r9d
  int pgb; // ebx
  int v42; // eax
  double v43; // xmm1_8
  double v44; // xmm0_8
  double v45; // xmm2_8
  unsigned int v46; // r8d
  __int64 v47; // r11
  int v48; // eax
  float v49; // xmm1_4
  unsigned int v50; // r8d
  unsigned int v51; // r8d
  struct EPATHOBJ *v52; // rbx
  bool v53; // zf
  int v54; // edi
  struct EXFORMOBJR *v55; // [rsp+30h] [rbp-59h]
  int v56; // [rsp+40h] [rbp-49h] BYREF
  struct RFONT *v57; // [rsp+48h] [rbp-41h] BYREF
  int v58; // [rsp+50h] [rbp-39h]
  int v59; // [rsp+54h] [rbp-35h]
  int v60; // [rsp+58h] [rbp-31h]
  int v61; // [rsp+5Ch] [rbp-2Dh]
  int v62; // [rsp+60h] [rbp-29h]
  unsigned int v63; // [rsp+64h] [rbp-25h]
  struct _GLYPHPOS *v64; // [rsp+68h] [rbp-21h]
  int v65; // [rsp+70h] [rbp-19h]
  int v66; // [rsp+74h] [rbp-15h]
  int v67; // [rsp+78h] [rbp-11h]
  int v68; // [rsp+7Ch] [rbp-Dh]
  int v69; // [rsp+80h] [rbp-9h]
  unsigned int *v70; // [rsp+88h] [rbp-1h]
  RFONTOBJ *v71; // [rsp+90h] [rbp+7h]
  int v72; // [rsp+F0h] [rbp+67h] BYREF
  struct EPATHOBJ *v73; // [rsp+F8h] [rbp+6Fh]
  int v74; // [rsp+100h] [rbp+77h] BYREF
  int v75; // [rsp+108h] [rbp+7Fh] BYREF

  v73 = a2;
  v3 = a2;
  v4 = 0;
  v5 = (_DWORD *)**((_QWORD **)this + 7);
  v6 = v5[68];
  v7 = v5[69];
  v8 = v5[72];
  v9 = v5[73];
  v10 = v5[70];
  v59 = 16 * v5[71];
  v62 = 16 * v5[74];
  v11 = 16 * v6;
  v12 = 16 * v7;
  v13 = 16 * v8;
  v14 = 16 * v9;
  v15 = 16 * v10;
  v61 = 16 * v5[75];
  v16 = *((_DWORD *)this + 58);
  v66 = v11;
  v65 = v12;
  v68 = v13;
  v67 = v14;
  v69 = v15;
  if ( (v16 & 8) != 0 )
  {
    v20 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v21 = 0LL;
    v22 = *(_DWORD *)this;
    v23 = 0;
    v64 = v20;
    v24 = v22;
    v71 = 0LL;
    v57 = 0LL;
    while ( v22 )
    {
      v25 = *((_DWORD *)this + 58);
      if ( (v25 & 2) == 0 )
      {
        if ( (v25 & 0x1400) != 0 )
        {
          if ( !v23 )
          {
            v26 = *((_QWORD *)this + 26);
            v27 = *(_DWORD *)this - v22;
            v28 = *(_DWORD *)this - v22;
            v29 = *(_DWORD *)(v26 + 4 * v27);
            v30 = (unsigned int)(v27 + 1);
            if ( (unsigned int)v30 < *(_DWORD *)this )
            {
              v31 = (_DWORD *)(v26 + 4 * v30);
              do
              {
                if ( *v31 != v29 )
                  break;
                LODWORD(v30) = v30 + 1;
                ++v31;
              }
              while ( (unsigned int)v30 < *(_DWORD *)this );
            }
            v23 = v30 - v28;
            LinkedRfontOnIndex = ESTROBJ::GetLinkedRfontOnIndex(this, v28, *((struct RFONTOBJ **)this + 7));
            v21 = (RFONTOBJ *)&v57;
            v57 = LinkedRfontOnIndex;
            v71 = (RFONTOBJ *)&v57;
          }
          GlyphData = RFONTOBJ::cGetGlyphData(v21, v23, v20);
          v24 = GlyphData;
          if ( !GlyphData )
          {
LABEL_33:
            v57 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v57);
            return 0LL;
          }
          v23 -= GlyphData;
        }
        else
        {
          v24 = RFONTOBJ::cGetGlyphData(*((RFONTOBJ **)this + 7), v22, v20);
          if ( !v24 )
            goto LABEL_33;
        }
        v20 = v64;
      }
      v34 = 0;
      v35 = (unsigned int *)(**((_QWORD **)this + 7) + 392LL);
      v70 = v35;
      while ( 1 )
      {
        v63 = v34;
        if ( v34 >= v24 )
          break;
        y = v20->ptl.y;
        x = v20->ptl.x;
        v38 = *((_DWORD *)this + 58);
        *(_QWORD *)&v39 = *v35;
        v40 = 16 * y;
        pgb = (int)v20->pgdf[2].pgb;
        v74 = 0;
        if ( (v38 & 0x100) != 0 )
          v40 = y;
        v42 = 16 * x;
        *(_QWORD *)&v43 = COERCE_UNSIGNED_INT((float)pgb);
        if ( (v38 & 0x100) != 0 )
          v42 = x;
        v58 = v40;
        v60 = v42;
        HIDWORD(v44) = 0;
        *(float *)&v44 = *(float *)&v43 * *(float *)&v39;
        bFToL(v44, &v74, 0);
        v72 = 0;
        *(_QWORD *)&v45 = v70[1];
        *(float *)&v43 = *(float *)&v43 * *(float *)&v45;
        bFToL(v43, &v72, v46);
        v48 = *(_DWORD *)(v47 + 20) - pgb;
        v56 = 0;
        v49 = (float)v48;
        *(float *)&v39 = *(float *)&v39 * (float)v48;
        bFToL(v39, &v56, v50);
        *(float *)&v45 = *(float *)&v45 * v49;
        v75 = 0;
        bFToL(v45, &v75, v51);
        v52 = v73;
        v53 = (v38 & 0x20) == 0;
        v54 = v58;
        if ( !v53 )
        {
          LODWORD(v55) = v67;
          if ( !(unsigned int)bAddPgmToPath(v73, v74 + v66 + v60, v72 + v58 + v65, v56, v75, v68, v55) )
            goto LABEL_33;
        }
        if ( (*((_DWORD *)this + 58) & 0x80u) != 0 )
        {
          LODWORD(v55) = v61;
          if ( !(unsigned int)bAddPgmToPath(v52, v74 + v69 + v60, v72 + v54 + v59, v56, v75, v62, v55) )
            goto LABEL_33;
        }
        v35 = v70;
        v34 = v63 + 1;
        v20 = ++v64;
      }
      v21 = v71;
      v22 -= v24;
    }
    v57 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v57);
  }
  else
  {
    v17 = (*((_DWORD *)this + 18) + 8) & 0xFFFFFFF0;
    v18 = (*((_DWORD *)this + 19) + 8) & 0xFFFFFFF0;
    if ( (v16 & 0x20) != 0 )
    {
      LODWORD(v55) = v14;
      if ( !(unsigned int)bAddPgmToPath(
                            v3,
                            v11 + v17,
                            v12 + v18,
                            *((_DWORD *)this + 22),
                            *((_DWORD *)this + 23),
                            v13,
                            v55) )
        return 0LL;
      v3 = v73;
    }
    if ( (*((_DWORD *)this + 58) & 0x80u) != 0 )
    {
      LODWORD(v55) = v61;
      LOBYTE(v4) = (unsigned int)bAddPgmToPath(
                                   v3,
                                   v17 + v15,
                                   v18 + v59,
                                   *((_DWORD *)this + 22),
                                   *((_DWORD *)this + 23),
                                   v62,
                                   v55) != 0;
      return v4;
    }
  }
  return 1LL;
}
