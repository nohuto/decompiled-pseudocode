/*
 * XREFs of ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400F92A8
 * Callers:
 *     EngTextOut @ 0x140012BD0 (EngTextOut.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400D1B54 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400F8750 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1400F9B88 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1400F9BF8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?draw_clrt_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1400F9C60 (-draw_clrt_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1400F9DE8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vSrcOpaqCopyS1D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x14016C620 (-vSrcOpaqCopyS1D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14017ED20 (-draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?vSrcOpaqCopyS1D1@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140189D70 (-vSrcOpaqCopyS1D1@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS1D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401ABBA0 (-vSrcOpaqCopyS1D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401AD210 (-draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_gray_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401B14A0 (-draw_gray_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_f_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401DBE30 (-draw_f_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14020E030 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x140223420 (-draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_gray_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1403003B0 (-draw_gray_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?vSrcOpaqCopyS1D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140307510 (-vSrcOpaqCopyS1D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS1D4@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1403076E0 (-vSrcOpaqCopyS1D4@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS1D8@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140307A80 (-vSrcOpaqCopyS1D8@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
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
  struct _RECTL *v22; // r15
  unsigned int v23; // ecx
  GLYPHDEF **p_pgdf; // rdx
  LONG top; // edx
  struct SURFACE *v26; // rax
  int v27; // ecx
  unsigned int v28; // esi
  struct SURFACE *v29; // r10
  struct _RECTL *v30; // r9
  int v31; // eax
  void (__fastcall *v32)(const unsigned __int8 *, int, int, unsigned __int8 *, int, int, int, int, unsigned int, unsigned int, struct SURFACE *); // r12
  LONG *i; // r15
  struct _RECTL *v34; // r9
  LONG v35; // edx
  LONG v36; // r8d
  LONG v37; // r11d
  LONG v38; // r13d
  LONG v39; // ecx
  __int64 v40; // r10
  LONG v41; // edx
  LONG v42; // r8d
  LONG v43; // eax
  void (__fastcall *v44)(struct BLTINFO *); // r12
  LONG left; // r8d
  LONG right; // r11d
  __int64 v47; // r8
  int v48; // r11d
  LONG v49; // ecx
  LONG v50; // eax
  LONG bottom; // edx
  int v52; // [rsp+68h] [rbp-410h]
  int v53; // [rsp+68h] [rbp-410h]
  LONG v54; // [rsp+6Ch] [rbp-40Ch]
  LONG v56; // [rsp+70h] [rbp-408h]
  int v57; // [rsp+70h] [rbp-408h]
  LONG v58; // [rsp+A0h] [rbp-3D8h]
  LONG v59; // [rsp+A0h] [rbp-3D8h]
  LONG v60; // [rsp+A8h] [rbp-3D0h]
  int v61; // [rsp+A8h] [rbp-3D0h]
  int v62; // [rsp+B0h] [rbp-3C8h]
  Gre::Base *v63[2]; // [rsp+B8h] [rbp-3C0h] BYREF
  struct _POINTL v64; // [rsp+C8h] [rbp-3B0h] BYREF
  LONG *p_top; // [rsp+D0h] [rbp-3A8h]
  struct SURFACE *v66; // [rsp+D8h] [rbp-3A0h]
  _BYTE v67[8]; // [rsp+E0h] [rbp-398h] BYREF
  struct _POINTL *v68; // [rsp+E8h] [rbp-390h]
  struct _BRUSHOBJ *v69; // [rsp+F0h] [rbp-388h]
  struct SURFACE *v70; // [rsp+F8h] [rbp-380h]
  _QWORD v71[2]; // [rsp+100h] [rbp-378h]
  void (__fastcall *v72)(struct _GLYPHPOS *, unsigned int, unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int); // [rsp+110h] [rbp-368h]
  struct _RECTL v73; // [rsp+118h] [rbp-360h] BYREF
  _BYTE v74[80]; // [rsp+130h] [rbp-348h] BYREF
  _BYTE v75[56]; // [rsp+180h] [rbp-2F8h] BYREF
  unsigned int v76; // [rsp+1B8h] [rbp-2C0h]
  int v77; // [rsp+1BCh] [rbp-2BCh]
  unsigned __int8 *v78; // [rsp+1D0h] [rbp-2A8h]
  unsigned int v79; // [rsp+1D8h] [rbp-2A0h]
  int v80; // [rsp+1E0h] [rbp-298h]
  __int16 v81; // [rsp+1E4h] [rbp-294h]

  v66 = a9;
  v63[1] = a8;
  v64 = (struct _POINTL)a15;
  v22 = a16;
  v69 = a18;
  v68 = a19;
  v63[0] = 0LL;
  v23 = 0;
  p_pgdf = &a3->pgdf;
  while ( v23 < a4 )
  {
    if ( !(*p_pgdf)->pgb )
      goto LABEL_54;
    ++v23;
    p_pgdf += 3;
  }
  if ( (a14 & 1) != 0 || a4 <= 1 || (unsigned int)(a3->ptl.x - a3[a4 - 1].ptl.x + 0x8000000) <= 0x10000000 )
  {
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v74, a1, a2, 1);
    p_top = &a10->top;
    top = a10->top;
    v26 = a8;
    if ( v66 )
      v26 = v66;
    v70 = v26;
    if ( (a14 & 8) != 0 )
      v27 = (a14 & 0x20) != 0 ? 3 : 7;
    else
      v27 = 31;
    v62 = v27 & a10->left;
    v28 = a10->left - v62;
    if ( (a14 & 0x20) != 0 )
    {
      v71[0] = draw_clrt_nf_ntb_o_to_temp_start;
      v71[1] = draw_clrt_f_ntb_o_to_temp_start;
      v72 = (void (__fastcall *)(struct _GLYPHPOS *, unsigned int, unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int))v71[a14 & 1];
      if ( v72 == draw_clrt_nf_ntb_o_to_temp_start )
        draw_clrt_nf_ntb_o_to_temp_start(a3, a4, a5, v28, a6, a7, top);
      else
        v72(a3, a4, a5, v28, a6, a7, top);
      v29 = a8;
      v30 = a10;
    }
    else
    {
      funcs_1400F9856[a14 & 0xFFFFFF4F](a3, a4, a5, v28, a6, a7, top);
      v29 = a8;
      v30 = a10;
    }
    if ( a16 )
    {
      if ( (a14 & 8) != 0 )
      {
        v44 = vSrcCopyDummy;
        if ( (a14 & 0x20) == 0 )
          v44 = vSrcCopyDummy;
      }
      else
      {
        v44 = (void (__fastcall *)(struct BLTINFO *))vRectBlt;
      }
      while ( 1 )
      {
        left = v22->left;
        right = v22->right;
        if ( v22->left == right )
          break;
        if ( left <= v30->left )
          left = v30->left;
        v47 = left - v28;
        if ( right >= v30->right )
          right = v30->right;
        v48 = right - v28;
        v49 = *p_top;
        v50 = v22->top;
        if ( v50 <= *p_top )
          v50 = *p_top;
        v57 = v50 - v49;
        bottom = v22->bottom;
        if ( bottom >= v30->bottom )
          bottom = v30->bottom;
        v53 = bottom - v49;
        if ( (int)v47 < v48 && v57 < v53 )
        {
          ((void (__fastcall *)(unsigned __int8 *, _QWORD, __int64, _QWORD, int, int))v44)(
            a5,
            a6,
            v47,
            (unsigned int)v57,
            v48,
            v53);
          v29 = a8;
          v30 = a10;
        }
        ++v22;
      }
    }
    if ( *((_DWORD *)v29 + 24) > 6u )
    {
      if ( (unsigned int)bUMPDSecurityGateEx() )
      {
LABEL_28:
        UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v74);
        return;
      }
      v29 = a8;
    }
    v31 = *((_DWORD *)v29 + 24);
    if ( a13 == -1 )
      v31 += 8;
    if ( (a14 & 0x80u) != 0 )
    {
      v32 = vSrcAlphaCopyS8D32;
      if ( (a14 & 0x20) == 0 )
        v32 = vSrcAlphaCopyS4D32;
    }
    else
    {
      if ( (a14 & 8) != 0 )
      {
        v31 += 16;
        if ( (a14 & 0x20) != 0 )
          v31 += 16;
      }
      v32 = (void (__fastcall *)(const unsigned __int8 *, int, int, unsigned __int8 *, int, int, int, int, unsigned int, unsigned int, struct SURFACE *))funcs_1400F97A8[v31];
    }
    p_top = (LONG *)v32;
    for ( i = (LONG *)v64; ; i += 4 )
    {
      v66 = (struct SURFACE *)i;
      v60 = i[3];
      if ( !v60 )
        break;
      v34 = a10;
      v35 = a10->left;
      if ( a10->left <= *i )
        v35 = *i;
      v56 = v35;
      v36 = a10->right;
      if ( v36 >= i[2] )
        v36 = i[2];
      v52 = v36;
      v58 = a10->top;
      v37 = v58;
      if ( v58 <= i[1] )
        v37 = i[1];
      v54 = v37;
      v38 = a10->bottom;
      if ( v38 >= v60 )
        v38 = i[3];
      v61 = v35 - a10->left;
      v39 = v37 - v58;
      v59 = v37 - v58;
      if ( (a14 & 0x10) != 0 )
      {
        v41 = v35 - v28;
        v42 = v36 - v28;
        v43 = v39;
        v54 = v39;
        v38 -= a10->top;
      }
      else
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v67, *((struct PFT **)v29 + 6));
        PDEVOBJ::vSync((PDEVOBJ *)v67, (struct _SURFOBJ *)(v40 + 24), 0LL, 0);
        v41 = v56;
        v42 = v52;
        v29 = a8;
        v34 = a10;
        v43 = v54;
        v39 = v59;
      }
      if ( v41 < v42 && v43 < v38 )
      {
        if ( a12 == -1 )
        {
          v73.left = v41;
          v73.top = v43;
          v73.right = v42;
          v73.bottom = v38;
          v80 = 1;
          v81 = 0;
          v78 = a5;
          v79 = a6;
          v76 = 8 * a6;
          v77 = v34->bottom - v34->top;
          v64.x = v62 + v61;
          v64.y = v59;
          BltLnk(v29, 0LL, (struct SURFACE *)v75, 0LL, 0LL, &v73, 0LL, &v64, v69, v68, 0xAAF0u);
        }
        else
        {
          v32(
            &a5[a6 * v39],
            v62 + v61,
            a6,
            (unsigned __int8 *)(*((_QWORD *)v29 + 10) + v54 * *((_DWORD *)v29 + 22)),
            v41,
            v42,
            *((_DWORD *)v29 + 22),
            v38 - v54,
            a12,
            a13,
            v70);
        }
        v29 = a8;
      }
    }
    goto LABEL_28;
  }
LABEL_54:
  EXLATEOBJ::vAltUnlock(v63, (__int64)p_pgdf, (__int64)a3);
}
