/*
 * XREFs of ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC
 * Callers:
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@@Z @ 0x1400DBDFC (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1400DBE60 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400DC9FC (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14016D630 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcOpaqCopyS1D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x14019AFA0 (-vSrcOpaqCopyS1D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401B5030 (-draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?vSrcOpaqCopyS1D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401B7150 (-vSrcOpaqCopyS1D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS1D1@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401C79D0 (-vSrcOpaqCopyS1D1@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401DCC00 (-draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_gray_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401E8BB0 (-draw_gray_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?vSrcOpaqCopyS1D8@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401FE090 (-vSrcOpaqCopyS1D8@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?draw_f_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14020DA10 (-draw_f_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14025AA30 (-draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_gray_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14030F4A0 (-draw_gray_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?vSrcOpaqCopyS1D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x14031EA90 (-vSrcOpaqCopyS1D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS1D4@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x14031EC60 (-vSrcOpaqCopyS1D4@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vExpandAndCopyText(
        struct SURFACE *a1,
        struct _FONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned int a4,
        unsigned __int8 *a5,
        unsigned int a6,
        unsigned int a7,
        struct SURFACE *a8,
        struct SURFACE *a9,
        struct _RECTL *a10,
        struct _RECTL *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        struct _RECTL *a15,
        struct _RECTL *a16,
        unsigned int a17,
        struct _BRUSHOBJ *a18,
        struct _POINTL *a19)
{
  struct _RECTL *v21; // rsi
  unsigned int v22; // ecx
  GLYPHDEF **p_pgdf; // rdx
  int v24; // eax
  LONG top; // r9d
  struct SURFACE *v26; // rax
  LONG left; // r14d
  int v28; // ecx
  unsigned int v29; // r14d
  struct SURFACE *v30; // r10
  struct _RECTL *v31; // r9
  unsigned int v32; // eax
  void (__fastcall *v33)(const unsigned __int8 *, int, int, unsigned __int8 *, int, int, int, int, unsigned int, unsigned int, struct SURFACE *); // r13
  LONG *i; // r15
  LONG v35; // edx
  LONG v36; // r11d
  LONG v37; // r8d
  LONG v38; // ecx
  LONG v39; // r9d
  LONG v40; // esi
  LONG v41; // ecx
  void (__fastcall *v42)(struct BLTINFO *); // r15
  LONG right; // edx
  LONG v44; // r8d
  __int64 v45; // r8
  int v46; // edx
  LONG v47; // ecx
  LONG v48; // eax
  LONG bottom; // r11d
  unsigned int v51; // [rsp+60h] [rbp-438h]
  signed int v52; // [rsp+60h] [rbp-438h]
  int v53; // [rsp+78h] [rbp-420h]
  signed int v54; // [rsp+78h] [rbp-420h]
  LONG v55; // [rsp+A0h] [rbp-3F8h]
  struct _POINTL v56; // [rsp+A8h] [rbp-3F0h] BYREF
  LONG v57; // [rsp+B0h] [rbp-3E8h]
  signed int v58; // [rsp+B4h] [rbp-3E4h]
  signed int v59; // [rsp+B8h] [rbp-3E0h]
  struct _RECTL *v60; // [rsp+C0h] [rbp-3D8h]
  int v61; // [rsp+C8h] [rbp-3D0h]
  Gre::Base *v62[3]; // [rsp+D0h] [rbp-3C8h] BYREF
  struct SURFACE *v63; // [rsp+E8h] [rbp-3B0h]
  struct _RECTL *v64; // [rsp+F0h] [rbp-3A8h]
  LONG *p_top; // [rsp+F8h] [rbp-3A0h]
  _QWORD v66[2]; // [rsp+100h] [rbp-398h] BYREF
  struct SURFACE *v67; // [rsp+110h] [rbp-388h]
  struct _POINTL *v68; // [rsp+118h] [rbp-380h]
  struct _BRUSHOBJ *v69; // [rsp+120h] [rbp-378h]
  struct SURFACE *v70; // [rsp+128h] [rbp-370h]
  struct SURFACE *v71; // [rsp+130h] [rbp-368h]
  struct _RECTL v72; // [rsp+138h] [rbp-360h] BYREF
  _BYTE v73[80]; // [rsp+150h] [rbp-348h] BYREF
  char v74[56]; // [rsp+1A0h] [rbp-2F8h] BYREF
  unsigned int v75; // [rsp+1D8h] [rbp-2C0h]
  int v76; // [rsp+1DCh] [rbp-2BCh]
  unsigned __int8 *v77; // [rsp+1F0h] [rbp-2A8h]
  unsigned int v78; // [rsp+1F8h] [rbp-2A0h]
  int v79; // [rsp+200h] [rbp-298h]
  __int16 v80; // [rsp+204h] [rbp-294h]

  v56 = (struct _POINTL)a3;
  v63 = a9;
  v64 = a10;
  v70 = a8;
  v67 = a8;
  v62[2] = a8;
  v62[1] = (Gre::Base *)a10;
  v66[0] = a15;
  v21 = a16;
  v60 = a16;
  v69 = a18;
  v68 = a19;
  v62[0] = 0LL;
  v22 = 0;
  p_pgdf = &a3->pgdf;
  while ( v22 < a4 )
  {
    if ( !(*p_pgdf)->pgb )
      goto LABEL_52;
    ++v22;
    p_pgdf += 3;
  }
  if ( (a14 & 1) != 0 || a4 <= 1 || (v24 = a3->ptl.x - a3[a4 - 1].ptl.x, v24 <= 0x8000000) && v24 >= -134217728 )
  {
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v73, a1, a2);
    p_top = &a10->top;
    top = a10->top;
    v26 = a8;
    if ( v63 )
      v26 = v63;
    v71 = v26;
    left = v64->left;
    v58 = a14 & 8;
    if ( (a14 & 8) != 0 )
      v28 = (a14 & 0x20) != 0 ? 3 : 7;
    else
      v28 = 31;
    v59 = a14 & 0x20;
    v57 = v59;
    v61 = v28 & left;
    v29 = left - (v28 & left);
    if ( (a14 & 0x20) != 0 )
    {
      *(_QWORD *)&v72.left = draw_clrt_nf_ntb_o_to_temp_start;
      *(_QWORD *)&v72.right = draw_clrt_f_ntb_o_to_temp_start;
      (*((void (__fastcall **)(struct _POINTL, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))&v72.left
       + (a14 & 1)))(
        v56,
        a4,
        a5,
        v29,
        a6,
        a7,
        top);
    }
    else
    {
      funcs_1400DBBB4[a14 & 0xFFFFFF4F](*(struct _GLYPHPOS **)&v56, a4, a5, v29, a6, a7, top);
    }
    v30 = a8;
    v31 = a10;
    if ( a16 )
    {
      if ( (a14 & 8) != 0 )
      {
        v42 = vSrcCopyDummy;
        if ( (a14 & 0x20) == 0 )
          v42 = vSrcCopyDummy;
      }
      else
      {
        v42 = (void (__fastcall *)(struct BLTINFO *))vRectBlt;
      }
      v56 = (struct _POINTL)v42;
      while ( 1 )
      {
        right = v21->right;
        v44 = v21->left;
        if ( v21->left == right )
          break;
        if ( v44 <= v64->left )
          v44 = v64->left;
        v45 = v44 - v29;
        if ( right >= v31->right )
          right = v31->right;
        v46 = right - v29;
        v47 = *p_top;
        v48 = v21->top;
        if ( v48 <= *p_top )
          v48 = *p_top;
        v54 = v48 - v47;
        bottom = v21->bottom;
        if ( bottom >= v31->bottom )
          bottom = v31->bottom;
        v52 = bottom - v47;
        if ( (int)v45 < v46 && v54 < v52 )
        {
          ((void (__fastcall *)(unsigned __int8 *, _QWORD, __int64, _QWORD, int, signed int))v42)(
            a5,
            a6,
            v45,
            (unsigned int)v54,
            v46,
            v52);
          v30 = a8;
          v31 = a10;
        }
        v60 = ++v21;
      }
    }
    v32 = *((_DWORD *)v30 + 24);
    if ( v32 <= 6 )
    {
      if ( a13 == -1 )
        v32 += 8;
      if ( (a14 & 0x80u) != 0 )
      {
        v33 = vSrcAlphaCopyS8D32;
        if ( !v57 )
          v33 = vSrcAlphaCopyS4D32;
      }
      else
      {
        if ( v58 )
        {
          v32 += 16;
          if ( v59 )
            v32 += 16;
        }
        v33 = (void (__fastcall *)(const unsigned __int8 *, int, int, unsigned __int8 *, int, int, int, int, unsigned int, unsigned int, struct SURFACE *))funcs_1400DB989[v32];
      }
      v66[1] = v33;
      for ( i = (LONG *)v66[0]; ; i += 4 )
      {
        v63 = (struct SURFACE *)i;
        v59 = i[3];
        if ( !v59 )
          goto LABEL_43;
        v35 = v64->left;
        v36 = v64->left;
        if ( v64->left <= *i )
          v36 = *i;
        v57 = v36;
        v37 = v31->right;
        if ( v37 >= i[2] )
          v37 = i[2];
        v51 = v37;
        v38 = i[1];
        v58 = *p_top;
        v39 = v58;
        if ( v58 <= v38 )
          v39 = v38;
        LODWORD(v60) = v39;
        v40 = a10->bottom;
        if ( v40 >= v59 )
          v40 = v59;
        v53 = v36 - v35;
        v41 = v39 - v58;
        v55 = v39 - v58;
        if ( (a14 & 0x10) != 0 )
          break;
        v66[0] = *((_QWORD *)v30 + 6);
        if ( v66[0] )
        {
          PDEVOBJ::vSync(
            (PDEVOBJ *)v66,
            (struct _SURFOBJ *)(((unsigned __int64)v67 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v67 >> 64)),
            0LL,
            0);
          v36 = v57;
          v37 = v51;
          v39 = (int)v60;
          v30 = a8;
          v41 = v55;
LABEL_37:
          v51 = v37;
        }
        if ( v36 < v37 && v39 < v40 )
        {
          if ( a12 != -1 )
          {
            v33(
              &a5[a6 * v41],
              v61 + v53,
              a6,
              (unsigned __int8 *)(*((_QWORD *)v30 + 10) + v39 * *((_DWORD *)v30 + 22)),
              v36,
              v51,
              *((_DWORD *)v30 + 22),
              v40 - v39,
              a12,
              a13,
              v71);
            v30 = a8;
            v31 = a10;
            continue;
          }
          v72.left = v36;
          v72.top = v39;
          v72.right = v37;
          v72.bottom = v40;
          v79 = 1;
          v80 = 0;
          v77 = a5;
          v78 = a6;
          v75 = 8 * a6;
          v76 = a10->bottom - *p_top;
          v56.x = v61 + v53;
          v56.y = v55;
          BltLnk(v70, 0LL, (struct SURFACE *)v74, 0LL, 0LL, &v72, 0LL, &v56, v69, v68, 0xAAF0u);
          v30 = a8;
        }
        v31 = a10;
      }
      v36 -= v29;
      v37 -= v29;
      v39 -= v58;
      v40 -= v58;
      goto LABEL_37;
    }
LABEL_43:
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v73);
  }
  else
  {
LABEL_52:
    EXLATEOBJ::vAltUnlock(v62, (__int64)p_pgdf, (__int64)a3);
  }
}
