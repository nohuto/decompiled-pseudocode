/*
 * XREFs of ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x140335178
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400BE594 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400C034C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x14010764C (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x14010C710 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

void __fastcall ESTROBJ::vCharPos_G3(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        unsigned int a8,
        const int *a9,
        int *a10)
{
  int v10; // r13d
  __int64 v15; // rax
  float v16; // xmm8_4
  float v17; // xmm9_4
  int v18; // r14d
  float v19; // xmm6_4
  __int64 v20; // xmm7_8
  float v21; // xmm11_4
  float v22; // xmm10_4
  _DWORD *v23; // rdi
  int v24; // ecx
  __int64 v25; // rax
  double v26; // xmm0_8
  int v27; // edx
  struct _GLYPHPOS *v28; // r8
  int v29; // r14d
  unsigned __int16 *v30; // r9
  signed int v31; // r15d
  signed int v32; // edi
  __int64 v33; // rax
  struct RFONTOBJ *v34; // rdx
  int v35; // edx
  __int64 v36; // rax
  int *v37; // r12
  int v38; // ecx
  POINTL *v39; // r11
  int v40; // ebx
  int v41; // r13d
  float v42; // xmm1_4
  int v43; // xmm0_4^4
  unsigned int v44; // r8d
  int v45; // ecx
  double v46; // xmm0_8
  int v47; // ecx
  signed int v48; // ecx
  signed int v49; // ecx
  int *v50; // rbx
  int v51; // edx
  int v52; // eax
  int v53; // ecx
  double v54; // xmm0_8
  int v55; // r11d
  LONG v56; // ecx
  unsigned int v57; // r8d
  unsigned int v58; // r8d
  POINTL *v59; // r11
  int v60; // ebx
  double v61; // xmm0_8
  int v62; // eax
  double v63; // xmm0_8
  double v64; // xmm1_8
  int v65; // r11d
  __int128 v66; // xmm0
  int v67; // r8d
  int v68; // [rsp+48h] [rbp-B9h] BYREF
  int v69; // [rsp+4Ch] [rbp-B5h] BYREF
  int v70; // [rsp+50h] [rbp-B1h] BYREF
  int v71; // [rsp+54h] [rbp-ADh]
  int v72[4]; // [rsp+58h] [rbp-A9h]
  int v73; // [rsp+68h] [rbp-99h]
  signed int v74; // [rsp+6Ch] [rbp-95h]
  float v75; // [rsp+70h] [rbp-91h] BYREF
  float v76; // [rsp+74h] [rbp-8Dh] BYREF
  int v77; // [rsp+78h] [rbp-89h]
  int v78; // [rsp+7Ch] [rbp-85h]
  unsigned int v79; // [rsp+80h] [rbp-81h]
  int v80; // [rsp+84h] [rbp-7Dh]
  int v81; // [rsp+88h] [rbp-79h]
  signed int v82; // [rsp+8Ch] [rbp-75h]
  int v83; // [rsp+90h] [rbp-71h]
  POINTL *p_ptl; // [rsp+98h] [rbp-69h]
  int *v85; // [rsp+A0h] [rbp-61h]
  int v86; // [rsp+158h] [rbp+57h] BYREF
  LONG v87; // [rsp+160h] [rbp+5Fh]

  v87 = a4;
  v10 = 0;
  v15 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 648LL) )
  {
    v16 = *(float *)(v15 + 448);
    v17 = *(float *)(v15 + 452);
    v18 = *(_DWORD *)(v15 + 308);
    v19 = *(float *)(v15 + 432);
    v20 = *(unsigned int *)(v15 + 436);
    v21 = *(float *)(v15 + 440);
    v22 = *(float *)(v15 + 444);
    v75 = v16;
    v76 = v17;
    v69 = 0;
    v70 = 0;
    v77 = v18;
    v73 = 0;
    if ( !a9 )
    {
      v23 = (_DWORD *)((char *)this + 120);
      *((_DWORD *)this + 29) = 0;
      v24 = a6;
      *v23 = 0;
      v73 = 0;
      if ( v24 )
      {
        v25 = *(_QWORD *)a3;
        *(_QWORD *)&v26 = COERCE_UNSIGNED_INT((float)v24);
        v86 = 0;
        *(float *)&v26 = *(float *)&v26 * *(float *)(v25 + 440);
        bFToL(v26, &v86, 0);
        *((_DWORD *)this + 29) = v86;
      }
      if ( bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)a3 + 440LL), a7, a8) )
      {
        vGenWidths(
          &v69,
          &v70,
          (struct EFLOAT *)&v76,
          (struct EFLOAT *)&v75,
          *(_DWORD *)(*(_QWORD *)a3 + 464LL),
          v18,
          0,
          v18);
        v27 = *((_DWORD *)this + 29);
        if ( v69 + v70 + v27 + *v23 < 0 )
          *v23 = -(v69 + v27 + v70);
        v73 = *(_DWORD *)(*(_QWORD *)a3 + 460LL);
      }
    }
    v28 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v29 = 0x7FFFFFFF;
    v30 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v72[0] = 0x7FFFFFFF;
    v28->ptl.x = a4;
    v31 = 0x80000000;
    p_ptl = &v28->ptl;
    v32 = 0x80000000;
    v28->ptl.y = a5;
    v33 = *(_QWORD *)a3;
    v34 = (struct RFONTOBJ *)*(unsigned int *)this;
    v74 = 0x80000000;
    v80 = *(_DWORD *)(v33 + 312);
    v71 = 0x7FFFFFFF;
    v72[3] = 0x7FFFFFFF;
    *(_QWORD *)&v72[1] = 0x8000000080000000uLL;
    v78 = 0;
    v86 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v34, v28, v30, &v86, a2, this) )
    {
      v35 = *((_DWORD *)this + 58);
      if ( v86 )
      {
        v36 = *((_QWORD *)this + 8);
        v35 |= 2u;
        *((_DWORD *)this + 58) = v35;
        *((_QWORD *)this + 4) = v36;
      }
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x10) == 0 || (LOBYTE(v86) = 1, (v35 & 0x1400) != 0) )
        LOBYTE(v86) = 0;
      v79 = 0;
      if ( *(_DWORD *)this )
      {
        v37 = a10;
        v38 = 0x7FFFFFFF;
        v39 = p_ptl;
        while ( 1 )
        {
          v40 = v38;
          v83 = v29;
          v85 = (int *)v39[-1];
          v82 = v31;
          v81 = v29;
          vGenWidths(&v69, &v70, (struct EFLOAT *)&v76, (struct EFLOAT *)&v75, v85[3], v85[6], v85[7], v77);
          v41 = v69 + v10;
          v68 = 0;
          v42 = (float)v41;
          v43 = 0;
          *(float *)&v46 = (float)v41 * v17;
          bFToL(v46, &v68, 0);
          v45 = v71;
          HIDWORD(v46) = 0;
          if ( v68 + v80 < v71 )
            v45 = v68 + v80;
          v72[3] = v45;
          v47 = v68 + v80;
          if ( v68 + v80 >= v40 )
            v47 = v40;
          v71 = v47;
          v48 = v74;
          if ( v68 + v77 > v74 )
            v48 = v68 + v77;
          v72[1] = v48;
          v49 = v68 + v77;
          if ( v68 + v77 <= v32 )
            v49 = v32;
          v68 = 0;
          v74 = v49;
          *(float *)&v46 = v42 * v16;
          bFToL(v46, &v68, v44);
          v50 = v85;
          v51 = v68 - v85[3] / 2;
          if ( (_BYTE)v86 )
            break;
          v29 = v51 + v85[4] - 4;
          if ( v29 >= v83 )
            v29 = v83;
          v53 = v51 + v85[5] + 4;
          v72[0] = v29;
          if ( v53 > v31 )
          {
            v31 = v53;
            v72[2] = v53;
LABEL_35:
            v72[0] = v29;
          }
          HIDWORD(v54) = 0;
          v68 = 0;
          *(float *)&v54 = v42 * v19;
          bFToL(v54, &v68, 0);
          HIDWORD(v54) = HIDWORD(v20);
          *(float *)&v54 = *(float *)&v20 * v42;
          v56 = v87 + v68 - v50[13] / v55;
          v68 = 0;
          p_ptl->x = v56;
          bFToL(v54, &v68, v57);
          v59->y = a5 + v68 - v50[15] / (int)(v58 + 2);
          if ( !a9 )
          {
            v10 = v70 + *((_DWORD *)this + 29) + v41;
            v62 = *((_DWORD *)this + 30);
            if ( v62 )
            {
              if ( v59[-2].x == v73 )
                v10 += v62;
            }
            if ( !v37 )
              goto LABEL_45;
            *(_QWORD *)&v63 = COERCE_UNSIGNED_INT((float)v10);
            v68 = 0;
            *(float *)&v63 = *(float *)&v63 * v22;
            bFToL(v63, &v68, v58);
            *v37 = v68;
            goto LABEL_44;
          }
          v60 = *a9++ + v78;
          v78 = v60;
          v68 = 0;
          *(_QWORD *)&v61 = COERCE_UNSIGNED_INT((float)v60);
          *(float *)&v61 = *(float *)&v61 * v21;
          bFToL(v61, &v68, v58);
          v10 = v68;
          if ( v37 )
          {
            *v37 = v60;
LABEL_44:
            ++v37;
          }
LABEL_45:
          v39 = v59 + 3;
          v38 = v71;
          v32 = v74;
          p_ptl = v39;
          ++v79;
          v72[3] = v71;
          v72[1] = v74;
          if ( v79 >= *(_DWORD *)this )
            goto LABEL_46;
        }
        v29 = v51 - 4;
        v52 = v85[3] + 4;
        if ( v51 - 4 >= v81 )
          v29 = v81;
        v31 = v51 + v52;
        if ( v51 + v52 <= v82 )
          v31 = v82;
        v72[2] = v31;
        goto LABEL_35;
      }
LABEL_46:
      *(_QWORD *)&v64 = COERCE_UNSIGNED_INT((float)v10);
      v86 = 0;
      bFToL(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(*(float *)&v64 * v19)), &v86, 0);
      *(float *)&v64 = *(float *)&v64 * *(float *)&v20;
      *((_DWORD *)this + 20) = v86;
      v86 = v65;
      bFToL(v64, &v86, 0);
      v66 = *(_OWORD *)v72;
      v67 = v86;
      *((_DWORD *)this + 58) |= 4u;
      *((_OWORD *)this + 6) = v66;
      *((_DWORD *)this + 21) = v67;
    }
  }
}
