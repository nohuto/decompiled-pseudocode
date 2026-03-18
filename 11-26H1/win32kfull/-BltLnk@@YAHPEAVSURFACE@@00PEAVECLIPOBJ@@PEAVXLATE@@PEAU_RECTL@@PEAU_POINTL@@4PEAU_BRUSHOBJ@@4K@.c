/*
 * XREFs of ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400DC9FC
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14018888C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall BltLnk(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct SURFACE *a3,
        struct ECLIPOBJ *a4,
        struct XLATE *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _RECTL *v11; // r12
  struct SURFACE *v13; // r11
  struct _BRUSHOBJ *v14; // rbx
  unsigned __int64 v15; // rcx
  struct _RECTL v16; // xmm0
  struct SURFACE *v17; // r10
  int v18; // edx
  char v19; // r13
  char v20; // r15
  char v21; // si
  char v22; // r14
  int v23; // edi
  int v24; // edx
  LONG x; // r9d
  LONG y; // ecx
  int v27; // r13d
  int v28; // eax
  unsigned int v29; // r8d
  int v30; // r9d
  PVOID v31; // rsi
  struct _POINTL *v32; // rdx
  XCLIPOBJ *v33; // r10
  struct _RECTL v34; // xmm0
  int v35; // esi
  unsigned int v36; // r15d
  LONG left; // eax
  struct _RECTL *v38; // rbx
  LONG v39; // edx
  LONG right; // eax
  LONG v41; // edi
  LONG top; // eax
  LONG v43; // r8d
  LONG bottom; // ecx
  LONG v45; // eax
  unsigned int v47; // r8d
  int v48; // r10d
  int v49; // ecx
  int v50; // r9d
  int v51; // eax
  ULONG iSolidColor; // ecx
  int v53; // ecx
  struct _BRUSHOBJ *EngRbrush; // rax
  int v55; // r10d
  int v56; // r8d
  unsigned int v57; // r9d
  signed int v58; // ecx
  int flColorType; // r11d
  struct Gre::Base::SESSION_GLOBALS *v60; // rax
  bool v61; // zf
  int v62; // eax
  int v63; // eax
  struct Gre::Base::SESSION_GLOBALS *v64; // rax
  SURFOBJ *v65; // rdx
  LONG v66; // r14d
  int v67; // [rsp+50h] [rbp-B0h]
  int v68; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v69; // [rsp+54h] [rbp-ACh]
  unsigned __int8 v70; // [rsp+55h] [rbp-ABh]
  unsigned int v71; // [rsp+5Ch] [rbp-A4h]
  int v72; // [rsp+60h] [rbp-A0h]
  unsigned int v73; // [rsp+60h] [rbp-A0h]
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  BOOL v75; // [rsp+70h] [rbp-90h]
  struct SURFACE *v76; // [rsp+78h] [rbp-88h]
  struct _POINTL *v77; // [rsp+80h] [rbp-80h]
  __int64 v78; // [rsp+88h] [rbp-78h] BYREF
  char v79; // [rsp+90h] [rbp-70h]
  int v80; // [rsp+94h] [rbp-6Ch]
  BOOL v81; // [rsp+98h] [rbp-68h]
  BOOL v82; // [rsp+9Ch] [rbp-64h]
  BOOL v83; // [rsp+A0h] [rbp-60h]
  BOOL v84; // [rsp+A4h] [rbp-5Ch]
  BOOL v85; // [rsp+A8h] [rbp-58h]
  BOOL v86; // [rsp+ACh] [rbp-54h]
  struct SURFACE *v87; // [rsp+B0h] [rbp-50h]
  XCLIPOBJ *v88; // [rsp+B8h] [rbp-48h]
  POINTL *v89; // [rsp+C0h] [rbp-40h]
  struct SURFACE *v90; // [rsp+C8h] [rbp-38h]
  struct _BRUSHOBJ *v91; // [rsp+D0h] [rbp-30h]
  int v92; // [rsp+D8h] [rbp-28h] BYREF
  LONG v93; // [rsp+DCh] [rbp-24h]
  LONG v94; // [rsp+E0h] [rbp-20h]
  int v95; // [rsp+E4h] [rbp-1Ch]
  __int64 v96; // [rsp+E8h] [rbp-18h]
  __int64 v97; // [rsp+F0h] [rbp-10h]
  struct _POINTL *v98; // [rsp+F8h] [rbp-8h]
  struct _RECTL *v99; // [rsp+100h] [rbp+0h]
  struct _RECTL v100; // [rsp+110h] [rbp+10h] BYREF
  struct SURFACE *v101; // [rsp+120h] [rbp+20h]
  struct SURFACE *v102; // [rsp+128h] [rbp+28h]
  struct SURFACE *v103; // [rsp+130h] [rbp+30h]
  struct ECLIPOBJ *v104; // [rsp+138h] [rbp+38h]
  struct XLATE *v105; // [rsp+140h] [rbp+40h]
  struct _BRUSHOBJ *v106; // [rsp+148h] [rbp+48h]
  __int64 v107; // [rsp+150h] [rbp+50h]
  __int64 v108; // [rsp+158h] [rbp+58h]
  PVOID v109; // [rsp+160h] [rbp+60h]
  PVOID pvRbrush; // [rsp+168h] [rbp+68h]
  unsigned int v111; // [rsp+170h] [rbp+70h]
  int v112; // [rsp+174h] [rbp+74h]
  int v113; // [rsp+178h] [rbp+78h]
  int v114; // [rsp+17Ch] [rbp+7Ch]
  int v115; // [rsp+180h] [rbp+80h]
  int v116; // [rsp+184h] [rbp+84h]
  int v117; // [rsp+188h] [rbp+88h]
  int v118; // [rsp+18Ch] [rbp+8Ch]
  int v119; // [rsp+190h] [rbp+90h]
  int v120; // [rsp+194h] [rbp+94h]
  int v121; // [rsp+198h] [rbp+98h]
  unsigned __int64 v122; // [rsp+19Ch] [rbp+9Ch]
  int v123; // [rsp+1A4h] [rbp+A4h]
  int v124; // [rsp+1A8h] [rbp+A8h]
  ULONG v125; // [rsp+1ACh] [rbp+ACh]
  LONG v126; // [rsp+1B0h] [rbp+B0h]
  LONG v127; // [rsp+1B4h] [rbp+B4h]
  unsigned int v128; // [rsp+1B8h] [rbp+B8h]
  int v129; // [rsp+1BCh] [rbp+BCh]
  int v130; // [rsp+1C0h] [rbp+C0h]
  int v131; // [rsp+1C4h] [rbp+C4h]
  unsigned int v132; // [rsp+1DCh] [rbp+DCh]
  int v133; // [rsp+1E0h] [rbp+E0h]
  BOOL v134; // [rsp+1E4h] [rbp+E4h]
  BOOL v135; // [rsp+1E8h] [rbp+E8h]
  BOOL v136; // [rsp+1ECh] [rbp+ECh]
  BOOL v137; // [rsp+1F0h] [rbp+F0h]
  char v138; // [rsp+1F4h] [rbp+F4h]
  char v139; // [rsp+1F5h] [rbp+F5h]
  RECTL prclDest; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v141; // [rsp+210h] [rbp+110h] BYREF
  _OWORD v142[20]; // [rsp+214h] [rbp+114h] BYREF

  v11 = a6;
  v77 = a10;
  v76 = a1;
  v98 = a8;
  v90 = a3;
  v87 = a2;
  v91 = a9;
  v89 = a7;
  v88 = a4;
  v99 = a6;
  v67 = 0;
  memset_0(&v100, 0, 0xE8uLL);
  memset_0(&v141, 0, 0x144uLL);
  v13 = v76;
  v14 = 0LL;
  v78 = 0LL;
  v79 = 0;
  v80 = 0;
  v15 = (unsigned int)(*((_DWORD *)v76 + 24) - 1);
  if ( *((_DWORD *)v76 + 24) == 1 )
  {
    v67 = 1986;
  }
  else
  {
    v15 = (unsigned int)(*((_DWORD *)v76 + 24) - 2);
    if ( *((_DWORD *)v76 + 24) == 2 )
    {
      v67 = 498;
    }
    else
    {
      v15 = (unsigned int)(*((_DWORD *)v76 + 24) - 3);
      if ( *((_DWORD *)v76 + 24) == 3 )
      {
        v67 = 250;
      }
      else
      {
        v15 = (unsigned int)(*((_DWORD *)v76 + 24) - 4);
        if ( *((_DWORD *)v76 + 24) == 4 )
        {
          v67 = 126;
        }
        else
        {
          v15 = (unsigned int)(*((_DWORD *)v76 + 24) - 5);
          if ( *((_DWORD *)v76 + 24) == 5 )
          {
            v67 = 83;
          }
          else if ( *((_DWORD *)v76 + 24) == 6 )
          {
            v67 = 64;
          }
        }
      }
    }
  }
  if ( a5 )
  {
    v105 = a5;
  }
  else
  {
    v60 = Gre::Base::Globals((Gre::Base *)v15);
    v13 = v76;
    v105 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v60 + 4664);
  }
  v16 = *a6;
  v17 = v87;
  v104 = a4;
  v101 = v13;
  v102 = v87;
  v106 = v91;
  v71 = a11 >> 8;
  v69 = a11 & 0xA5 | (8 * (a11 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v70 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v75 = (unsigned __int8)a11 != a11 >> 8;
  v100 = v16;
  v83 = (a11 & 0xF) != (unsigned __int8)a11 >> 4;
  v86 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  if ( (a11 & 0xF) != (unsigned __int8)a11 >> 4 || (v18 = 0, (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4) )
    v18 = 1;
  v72 = v18;
  v19 = (unsigned __int8)(a11 & 0xC3 | (4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC) >> 4;
  v20 = a11 & 3 | (4 * (a11 & 0xC)) & 0xF | ((unsigned __int8)a11 >> 2) & 0xC;
  v21 = BYTE1(a11) & 3 | (4 * (BYTE1(a11) & 0xC)) & 0xF | (BYTE1(a11) >> 2) & 0xC;
  v81 = v20 != v19;
  v22 = (unsigned __int8)(BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC) >> 4;
  v84 = v21 != v22;
  if ( v20 != v19 || (pptlSrc.x = 0, v21 != v22) )
    pptlSrc.x = 1;
  v82 = (v69 & 0xF) != v69 >> 4;
  v85 = (v70 & 0xF) != v70 >> 4;
  if ( v18 || (unsigned __int8)a11 != a11 >> 8 && !v90 )
  {
    if ( v91 && v91->iSolidColor == -1 )
    {
      EngRbrush = (struct _BRUSHOBJ *)pvGetEngRbrush(v91);
      v17 = v87;
      v14 = EngRbrush;
      v13 = v76;
    }
    else
    {
      v14 = v91;
    }
  }
  v23 = 1;
  v113 = 1;
  v112 = 1;
  v111 = 4;
  if ( pptlSrc.x )
  {
    v24 = *((_DWORD *)v17 + 22);
    v107 = *((_QWORD *)v17 + 10);
    x = v89->x;
    y = v89->y;
    v114 = v24;
    v122 = __PAIR64__(y, x);
    if ( v107 != *((_QWORD *)v13 + 10) )
    {
      v27 = v67;
LABEL_19:
      v118 = v24;
      goto LABEL_20;
    }
    v61 = y == a6->top;
    if ( y < a6->top )
    {
      v23 = -1;
      v113 = -1;
      v62 = 1;
      v111 = 2;
      v112 = 1;
    }
    else
    {
      v62 = 1;
      v112 = 1;
      if ( v61 )
      {
        if ( x < a6->left )
          v62 = -1;
        v112 = v62;
      }
    }
    if ( (unsigned __int8)a11 != v71 && v20 != v19 && v21 != v22 )
    {
      v27 = v67;
LABEL_100:
      v63 = *((_DWORD *)v17 + 24);
      v93 = a6->right - a6->left;
      v94 = a6->bottom - a6->top;
      v95 = 0;
      v97 = 1LL;
      v92 = v63;
      v96 = 0LL;
      SURFMEM::bCreateDIB((SURFMEM *)&v78, (struct _DEVBITMAPINFO *)&v92, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
      if ( !v78 )
        goto LABEL_51;
      *(_QWORD *)&prclDest.left = 0LL;
      pptlSrc = *v89;
      prclDest.right = v93;
      prclDest.bottom = v94;
      v64 = Gre::Base::Globals((Gre::Base *)v89);
      v65 = v87 ? (SURFOBJ *)((char *)v87 + 24) : 0LL;
      if ( !EngCopyBits(
              (SURFOBJ *)((v78 + 24) & -(__int64)(v78 != 0)),
              v65,
              0LL,
              (XLATEOBJ *)((char *)v64 + 4664),
              &prclDest,
              &pptlSrc) )
        goto LABEL_51;
      v13 = v76;
      v107 = *(_QWORD *)(v78 + 80);
      v24 = *(_DWORD *)(v78 + 88);
      v122 = 0LL;
      v23 = v113;
      v114 = v24;
      goto LABEL_126;
    }
    if ( v62 == -1 || v23 == -1 )
    {
      v27 = v67;
      if ( a6->right - a6->left > v67 )
        goto LABEL_100;
    }
    else
    {
      v27 = v67;
    }
LABEL_126:
    if ( v23 != 1 )
      v24 = -v24;
    goto LABEL_19;
  }
  v27 = v67;
  v107 = 0LL;
LABEL_20:
  v108 = *((_QWORD *)v13 + 10);
  v28 = *((_DWORD *)v13 + 22);
  v115 = v28;
  if ( v23 != 1 )
    v28 = -v28;
  v29 = a11 >> 8;
  v30 = (unsigned __int8)a11;
  v119 = v28;
  if ( (unsigned __int8)a11 == v71 || !v90 )
  {
    v31 = 0LL;
    v103 = 0LL;
    v109 = 0LL;
  }
  else
  {
    if ( !v98 )
    {
LABEL_51:
      SURFMEM::~SURFMEM((SURFMEM *)&v78);
      return 0LL;
    }
    v47 = *((_DWORD *)v90 + 14);
    v48 = v98->x;
    v31 = (PVOID)*((_QWORD *)v90 + 10);
    v49 = *((_DWORD *)v90 + 15);
    v50 = v98->y;
    v109 = v31;
    v103 = v90;
    v128 = v47;
    v129 = v49;
    v130 = v48;
    v131 = v50;
    if ( v48 >= (int)v47 )
    {
      v130 = v48 % v47;
    }
    else if ( v48 < 0 )
    {
      v130 = v47 - (-1 - v48) % v47 - 1;
    }
    if ( v50 >= v49 )
    {
      v131 = v50 % v49;
    }
    else if ( v50 < 0 )
    {
      v131 = v49 - ~v50 % v49 - 1;
    }
    v51 = *((_DWORD *)v90 + 22);
    v29 = a11 >> 8;
    v30 = (unsigned __int8)a11;
    v117 = v51;
    if ( v23 != 1 )
      v51 = -v51;
    v121 = v51;
  }
  if ( !v72 )
  {
    pvRbrush = 0LL;
LABEL_26:
    v32 = v77;
    goto LABEL_27;
  }
  if ( !v91 )
    goto LABEL_51;
  iSolidColor = v91->iSolidColor;
  if ( v91->iSolidColor != -1 )
  {
    pvRbrush = 0LL;
    switch ( *((_DWORD *)v76 + 24) )
    {
      case 1:
        if ( iSolidColor )
          iSolidColor = -1;
        goto LABEL_90;
      case 2:
        iSolidColor |= 16 * iSolidColor;
        break;
      case 3:
        break;
      case 4:
LABEL_132:
        iSolidColor |= iSolidColor << 16;
        goto LABEL_90;
      default:
LABEL_90:
        v123 = iSolidColor;
        goto LABEL_26;
    }
    iSolidColor |= iSolidColor << 8;
    goto LABEL_132;
  }
  if ( !v14 )
    goto LABEL_51;
  v123 = -1;
  if ( !v14[1].pvRbrush )
    goto LABEL_26;
  v53 = *(&v14[1].iSolidColor + 1);
  v32 = v77;
  v116 = v53;
  pvRbrush = v14[1].pvRbrush;
  v124 = *(&v14->flColorType + 1);
  v125 = v14[1].iSolidColor;
  v126 = v77->x;
  v127 = v77->y;
  if ( v23 != 1 )
    v53 = -v53;
  v120 = v53;
LABEL_27:
  if ( v30 != v29 && !v31 )
  {
    if ( v14 && v14[2].pvRbrush )
    {
      v31 = v14[2].pvRbrush;
      v55 = a6->left - v32->x;
      v56 = a6->top - v32->y;
      v109 = v31;
      v57 = *(&v14[1].flColorType + 1);
      v128 = v57;
      v58 = v14[2].iSolidColor;
      v129 = v58;
      flColorType = v14[2].flColorType;
      v117 = flColorType;
      v130 = v55;
      v131 = v56;
      if ( v55 < (int)v57 )
      {
        if ( v55 < 0 )
          v130 = v57 - ~v55 % v57 - 1;
      }
      else
      {
        v130 = v55 % v57;
      }
      if ( v56 < v58 )
      {
        if ( v56 < 0 )
          v131 = v58 - ~v56 % v58 - 1;
      }
      else
      {
        v131 = v56 % v58;
      }
      if ( v23 != 1 )
        flColorType = -flColorType;
      v121 = flColorType;
    }
    if ( !v31 )
      goto LABEL_51;
  }
  v33 = v88;
  if ( !v88 || !*((_BYTE *)v88 + 20) )
  {
    v34 = *a6;
LABEL_31:
    v35 = 0;
    v141 = 1;
    v68 = 0;
    v142[0] = v34;
    goto LABEL_32;
  }
  if ( *((_BYTE *)v88 + 20) == 1 )
  {
    v34 = *(struct _RECTL *)((char *)v88 + 4);
    goto LABEL_31;
  }
  if ( *((_BYTE *)v88 + 20) != 3 )
    goto LABEL_51;
  v68 = 1;
  v35 = 1;
  XCLIPOBJ::cEnumStart(v88, 0, 0, v111, 0x14u);
  v33 = v88;
LABEL_32:
  if ( !v35 )
    goto LABEL_34;
  do
  {
    v35 = XCLIPOBJ::bEnum(v33, 0x144u, &v141, 0LL);
    v68 = v35;
LABEL_34:
    v36 = 0;
    v73 = 0;
    if ( v141 )
    {
      do
      {
        left = v11->left;
        v38 = (struct _RECTL *)&v142[v36];
        v39 = v38->left;
        if ( v38->left < v11->left )
        {
          v38->left = left;
          v39 = left;
        }
        right = v11->right;
        v41 = v38->right;
        if ( v41 > right )
        {
          v38->right = right;
          v41 = right;
        }
        top = v11->top;
        v43 = v38->top;
        if ( v43 < top )
        {
          v38->top = top;
          v43 = top;
        }
        bottom = v11->bottom;
        v45 = v38->bottom;
        if ( v45 > bottom )
        {
          v38->bottom = bottom;
          v45 = bottom;
        }
        if ( v43 < v45 && v41 - v39 > 0 )
        {
          do
          {
            v66 = v41;
            if ( v41 - v39 > v27 )
            {
              v66 = v39 + v27;
              v38->right = v39 + v27;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              v138 = a11;
              v133 = v69;
              v134 = v81;
              v135 = v82;
              v136 = v83;
              v137 = v75;
              v132 = a11 & 0xC3 | (unsigned __int8)((4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC);
              v139 = 0;
              BltLnkRect((struct _BLTLNKINFO *)&v100, v38);
            }
            if ( (unsigned __int8)a11 != v71 && BYTE1(a11) != 0xAA )
            {
              v132 = BYTE1(a11) & 0xC3 | (unsigned __int8)((4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC);
              v133 = v70;
              v134 = v84;
              v135 = v85;
              v136 = v86;
              v137 = v75;
              v138 = BYTE1(a11);
              v139 = -1;
              BltLnkRect((struct _BLTLNKINFO *)&v100, v38);
            }
            v38->left = v66;
            v38->right = v41;
            v39 = v66;
          }
          while ( v41 - v66 > 0 );
          v36 = v73;
          v11 = v99;
        }
        v73 = ++v36;
      }
      while ( v36 < v141 );
      v35 = v68;
    }
    v33 = v88;
  }
  while ( v35 );
  SURFMEM::~SURFMEM((SURFMEM *)&v78);
  return 1LL;
}
