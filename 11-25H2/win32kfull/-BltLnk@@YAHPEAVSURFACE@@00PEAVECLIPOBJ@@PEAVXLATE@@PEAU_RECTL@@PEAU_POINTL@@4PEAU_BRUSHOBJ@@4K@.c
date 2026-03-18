/*
 * XREFs of ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400F8750
 * Callers:
 *     EngBitBlt @ 0x1400815E0 (EngBitBlt.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400F92A8 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14006EF0C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1400F7764 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1400F9DE8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400F9EFC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  struct _RECTL *v12; // r15
  struct SURFACE *v15; // r9
  struct _BRUSHOBJ *v16; // rbx
  unsigned __int64 v17; // rcx
  struct _RECTL v18; // xmm0
  int v19; // edx
  char v20; // r12
  char v21; // r14
  char v22; // di
  char v23; // si
  int v24; // r11d
  int v25; // edx
  LONG x; // r10d
  LONG y; // ecx
  int v28; // eax
  int v29; // r8d
  PVOID v30; // rdi
  struct _POINTL *v31; // rdx
  XCLIPOBJ *v32; // r10
  struct _RECTL v33; // xmm0
  int v34; // esi
  unsigned int v35; // r12d
  LONG left; // eax
  struct _RECTL *v37; // rbx
  LONG v38; // ecx
  LONG right; // edi
  LONG v40; // eax
  LONG top; // r8d
  LONG v42; // eax
  LONG bottom; // eax
  LONG v44; // edx
  ULONG iSolidColor; // ecx
  unsigned int v47; // ecx
  int v48; // r10d
  int v49; // r8d
  int v50; // r9d
  int v51; // eax
  struct Gre::Base::SESSION_GLOBALS *v52; // rax
  int v53; // r9d
  int v54; // ecx
  unsigned int v55; // r10d
  signed int v56; // r8d
  int flColorType; // ebx
  struct _BRUSHOBJ *EngRbrush; // rax
  int v59; // ecx
  LONG v60; // r14d
  bool v61; // zf
  int v62; // eax
  POINTL v63; // rdi
  int v64; // eax
  struct Gre::Base::SESSION_GLOBALS *v65; // rax
  unsigned __int8 v66; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v67; // [rsp+61h] [rbp-9Fh]
  unsigned int v68; // [rsp+64h] [rbp-9Ch]
  int v69; // [rsp+64h] [rbp-9Ch]
  int v70; // [rsp+68h] [rbp-98h]
  int v71; // [rsp+74h] [rbp-8Ch]
  unsigned int v72; // [rsp+74h] [rbp-8Ch]
  BOOL v74; // [rsp+80h] [rbp-80h]
  POINTL pptlSrc; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL *v76; // [rsp+90h] [rbp-70h]
  __int64 v77; // [rsp+98h] [rbp-68h] BYREF
  char v78; // [rsp+A0h] [rbp-60h]
  int v79; // [rsp+A4h] [rbp-5Ch]
  BOOL v80; // [rsp+A8h] [rbp-58h]
  BOOL v81; // [rsp+ACh] [rbp-54h]
  BOOL v82; // [rsp+B0h] [rbp-50h]
  BOOL v83; // [rsp+B4h] [rbp-4Ch]
  BOOL v84; // [rsp+B8h] [rbp-48h]
  BOOL v85; // [rsp+BCh] [rbp-44h]
  XCLIPOBJ *v86; // [rsp+C0h] [rbp-40h]
  POINTL *v87; // [rsp+C8h] [rbp-38h]
  struct _POINTL *v88; // [rsp+D0h] [rbp-30h]
  struct _BRUSHOBJ *v89; // [rsp+D8h] [rbp-28h]
  int v90; // [rsp+E0h] [rbp-20h] BYREF
  LONG v91; // [rsp+E4h] [rbp-1Ch]
  LONG v92; // [rsp+E8h] [rbp-18h]
  int v93; // [rsp+ECh] [rbp-14h]
  __int64 v94; // [rsp+F0h] [rbp-10h]
  __int64 v95; // [rsp+F8h] [rbp-8h]
  struct _RECTL *v96; // [rsp+100h] [rbp+0h]
  struct _RECTL v97; // [rsp+110h] [rbp+10h] BYREF
  struct SURFACE *v98; // [rsp+120h] [rbp+20h]
  struct SURFACE *v99; // [rsp+128h] [rbp+28h]
  struct SURFACE *v100; // [rsp+130h] [rbp+30h]
  struct ECLIPOBJ *v101; // [rsp+138h] [rbp+38h]
  struct XLATE *v102; // [rsp+140h] [rbp+40h]
  struct _BRUSHOBJ *v103; // [rsp+148h] [rbp+48h]
  __int64 v104; // [rsp+150h] [rbp+50h]
  __int64 v105; // [rsp+158h] [rbp+58h]
  PVOID v106; // [rsp+160h] [rbp+60h]
  PVOID pvRbrush; // [rsp+168h] [rbp+68h]
  unsigned int v108; // [rsp+170h] [rbp+70h]
  int v109; // [rsp+174h] [rbp+74h]
  int v110; // [rsp+178h] [rbp+78h]
  int v111; // [rsp+17Ch] [rbp+7Ch]
  int v112; // [rsp+180h] [rbp+80h]
  int v113; // [rsp+184h] [rbp+84h]
  int v114; // [rsp+188h] [rbp+88h]
  int v115; // [rsp+18Ch] [rbp+8Ch]
  int v116; // [rsp+190h] [rbp+90h]
  int v117; // [rsp+194h] [rbp+94h]
  int v118; // [rsp+198h] [rbp+98h]
  unsigned __int64 v119; // [rsp+19Ch] [rbp+9Ch]
  int v120; // [rsp+1A4h] [rbp+A4h]
  int v121; // [rsp+1A8h] [rbp+A8h]
  ULONG v122; // [rsp+1ACh] [rbp+ACh]
  LONG v123; // [rsp+1B0h] [rbp+B0h]
  LONG v124; // [rsp+1B4h] [rbp+B4h]
  unsigned int v125; // [rsp+1B8h] [rbp+B8h]
  int v126; // [rsp+1BCh] [rbp+BCh]
  int v127; // [rsp+1C0h] [rbp+C0h]
  int v128; // [rsp+1C4h] [rbp+C4h]
  unsigned int v129; // [rsp+1DCh] [rbp+DCh]
  int v130; // [rsp+1E0h] [rbp+E0h]
  BOOL v131; // [rsp+1E4h] [rbp+E4h]
  BOOL v132; // [rsp+1E8h] [rbp+E8h]
  BOOL v133; // [rsp+1ECh] [rbp+ECh]
  BOOL v134; // [rsp+1F0h] [rbp+F0h]
  char v135; // [rsp+1F4h] [rbp+F4h]
  char v136; // [rsp+1F5h] [rbp+F5h]
  RECTL prclDest; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v138; // [rsp+210h] [rbp+110h] BYREF
  _OWORD v139[20]; // [rsp+214h] [rbp+114h] BYREF

  v12 = a6;
  v88 = a8;
  v87 = a7;
  v89 = a9;
  pptlSrc = (POINTL)a2;
  v86 = a4;
  v96 = a6;
  v76 = a10;
  v70 = 0;
  memset_0(&v97, 0, 0xE8uLL);
  memset_0(&v138, 0, 0x144uLL);
  v15 = a1;
  v16 = 0LL;
  v77 = 0LL;
  v78 = 0;
  v79 = 0;
  v17 = (unsigned int)(*((_DWORD *)a1 + 24) - 1);
  if ( *((_DWORD *)a1 + 24) == 1 )
  {
    v70 = 1986;
  }
  else
  {
    v17 = (unsigned int)(*((_DWORD *)a1 + 24) - 2);
    if ( *((_DWORD *)a1 + 24) == 2 )
    {
      v70 = 498;
    }
    else
    {
      v17 = (unsigned int)(*((_DWORD *)a1 + 24) - 3);
      if ( *((_DWORD *)a1 + 24) == 3 )
      {
        v70 = 250;
      }
      else
      {
        v17 = (unsigned int)(*((_DWORD *)a1 + 24) - 4);
        if ( *((_DWORD *)a1 + 24) == 4 )
        {
          v70 = 126;
        }
        else
        {
          v17 = (unsigned int)(*((_DWORD *)a1 + 24) - 5);
          if ( *((_DWORD *)a1 + 24) == 5 )
          {
            v70 = 83;
          }
          else if ( *((_DWORD *)a1 + 24) == 6 )
          {
            v70 = 64;
          }
        }
      }
    }
  }
  if ( a5 )
  {
    v102 = a5;
  }
  else
  {
    v52 = Gre::Base::Globals((Gre::Base *)v17);
    v15 = a1;
    v102 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v52 + 4552);
  }
  v18 = *a6;
  v99 = a2;
  v101 = a4;
  v98 = v15;
  v103 = v89;
  v68 = a11 >> 8;
  v66 = a11 & 0xA5 | (8 * (a11 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v67 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v97 = v18;
  v82 = (a11 & 0xF) != (unsigned __int8)a11 >> 4;
  v85 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  if ( (a11 & 0xF) != (unsigned __int8)a11 >> 4 || (v19 = 0, (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4) )
    v19 = 1;
  v71 = v19;
  v20 = (unsigned __int8)(a11 & 0xC3 | (4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC) >> 4;
  v21 = a11 & 3 | (4 * (a11 & 0xC)) & 0xF | ((unsigned __int8)a11 >> 2) & 0xC;
  v22 = BYTE1(a11) & 3 | (4 * (BYTE1(a11) & 0xC)) & 0xF | (BYTE1(a11) >> 2) & 0xC;
  v80 = v21 != v20;
  v23 = (unsigned __int8)(BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC) >> 4;
  v83 = v22 != v23;
  v74 = v21 != v20 || v22 != v23;
  v81 = (v66 & 0xF) != v66 >> 4;
  v84 = (v67 & 0xF) != v67 >> 4;
  if ( v19 || (unsigned __int8)a11 != a11 >> 8 && !a3 )
  {
    if ( v89 && v89->iSolidColor == -1 )
    {
      EngRbrush = (struct _BRUSHOBJ *)pvGetEngRbrush(v89);
      v15 = a1;
      v16 = EngRbrush;
    }
    else
    {
      v16 = v89;
    }
  }
  v24 = 1;
  v110 = 1;
  v109 = 1;
  v108 = 4;
  if ( v74 )
  {
    v25 = *(_DWORD *)(*(_QWORD *)&pptlSrc + 88LL);
    v104 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 80LL);
    v111 = v25;
    x = v87->x;
    y = v87->y;
    v119 = __PAIR64__(y, v87->x);
    if ( v104 == *((_QWORD *)v15 + 10) )
    {
      v61 = y == a6->top;
      if ( y >= a6->top )
      {
        v62 = 1;
        v109 = 1;
        if ( v61 )
        {
          if ( x < a6->left )
            v62 = -1;
          v109 = v62;
        }
      }
      else
      {
        v24 = -1;
        v110 = -1;
        v108 = 2;
        v62 = 1;
        v109 = 1;
      }
      if ( (unsigned __int8)a11 != v68 && v21 != v20 && v22 != v23
        || (v62 == -1 || v24 == -1) && a6->right - a6->left > v70 )
      {
        v63 = pptlSrc;
        v91 = a6->right - a6->left;
        v64 = *(_DWORD *)(*(_QWORD *)&pptlSrc + 96LL);
        v92 = a6->bottom - a6->top;
        v93 = 0;
        v95 = 1LL;
        v90 = v64;
        v94 = 0LL;
        SURFMEM::bCreateDIB((SURFMEM *)&v77, (struct _DEVBITMAPINFO *)&v90, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v77 )
          goto LABEL_48;
        *(_QWORD *)&prclDest.left = 0LL;
        pptlSrc = *v87;
        prclDest.right = v91;
        prclDest.bottom = v92;
        v65 = Gre::Base::Globals((Gre::Base *)v87);
        if ( !EngCopyBits(
                (SURFOBJ *)((v77 + 24) & -(__int64)(v77 != 0)),
                (SURFOBJ *)(*(_QWORD *)&v63 + 24LL),
                0LL,
                (XLATEOBJ *)((char *)v65 + 4552),
                &prclDest,
                &pptlSrc) )
          goto LABEL_48;
        v24 = v110;
        v15 = a1;
        v104 = *(_QWORD *)(v77 + 80);
        v25 = *(_DWORD *)(v77 + 88);
        v111 = v25;
        v119 = 0LL;
      }
      if ( v24 != 1 )
        v25 = -v25;
    }
    v115 = v25;
  }
  else
  {
    v104 = 0LL;
  }
  v105 = *((_QWORD *)v15 + 10);
  v28 = *((_DWORD *)v15 + 22);
  v112 = v28;
  if ( v24 != 1 )
    v28 = -v28;
  v29 = (unsigned __int8)a11;
  v116 = v28;
  if ( (unsigned __int8)a11 == v68 || !a3 )
  {
    v100 = 0LL;
    v30 = 0LL;
    v106 = 0LL;
  }
  else
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !v88 )
      goto LABEL_48;
    v47 = *((_DWORD *)a3 + 14);
    v48 = v88->x;
    v30 = (PVOID)*((_QWORD *)a3 + 10);
    v49 = *((_DWORD *)a3 + 15);
    v50 = v88->y;
    v106 = v30;
    v100 = a3;
    v125 = v47;
    v126 = v49;
    v127 = v48;
    v128 = v50;
    if ( v48 >= (int)v47 )
    {
      v127 = v48 % v47;
    }
    else if ( v48 < 0 )
    {
      v127 = v47 - (-1 - v48) % v47 - 1;
    }
    if ( v50 >= v49 )
    {
      v128 = v50 % v49;
    }
    else if ( v50 < 0 )
    {
      v128 = v49 - ~v50 % v49 - 1;
    }
    v24 = v110;
    v51 = *((_DWORD *)a3 + 22);
    v15 = a1;
    v29 = (unsigned __int8)a11;
    v114 = v51;
    if ( v110 != 1 )
      v51 = -v51;
    v118 = v51;
  }
  if ( !v71 )
  {
    pvRbrush = 0LL;
LABEL_25:
    v31 = v76;
    goto LABEL_26;
  }
  if ( !v89 )
    goto LABEL_48;
  iSolidColor = v89->iSolidColor;
  if ( v89->iSolidColor != -1 )
  {
    pvRbrush = 0LL;
    switch ( *((_DWORD *)v15 + 24) )
    {
      case 1:
        if ( iSolidColor )
          iSolidColor = -1;
        goto LABEL_63;
      case 2:
        iSolidColor |= 16 * iSolidColor;
        break;
      case 3:
        break;
      case 4:
LABEL_135:
        iSolidColor |= iSolidColor << 16;
        goto LABEL_63;
      default:
LABEL_63:
        v120 = iSolidColor;
        goto LABEL_25;
    }
    iSolidColor |= iSolidColor << 8;
    goto LABEL_135;
  }
  if ( !v16 )
    goto LABEL_48;
  v120 = -1;
  if ( !v16[1].pvRbrush )
    goto LABEL_25;
  v59 = *(&v16[1].iSolidColor + 1);
  v31 = v76;
  v113 = v59;
  pvRbrush = v16[1].pvRbrush;
  v121 = *(&v16->flColorType + 1);
  v122 = v16[1].iSolidColor;
  v123 = v76->x;
  v124 = v76->y;
  if ( v24 != 1 )
    v59 = -v59;
  v117 = v59;
LABEL_26:
  if ( v29 != v68 && !v30 )
  {
    if ( v16 && v16[2].pvRbrush )
    {
      v30 = v16[2].pvRbrush;
      v53 = a6->left - v31->x;
      v54 = a6->top - v31->y;
      v106 = v30;
      v55 = *(&v16[1].flColorType + 1);
      v125 = v55;
      v56 = v16[2].iSolidColor;
      v126 = v56;
      flColorType = v16[2].flColorType;
      v114 = flColorType;
      v127 = v53;
      v128 = v54;
      if ( v53 < (int)v55 )
      {
        if ( v53 < 0 )
          v127 = v55 - ~v53 % v55 - 1;
      }
      else
      {
        v127 = v53 % v55;
      }
      if ( v54 < v56 )
      {
        if ( v54 < 0 )
          v128 = v56 - ~v54 % v56 - 1;
      }
      else
      {
        v128 = v54 % v56;
      }
      if ( v24 != 1 )
        flColorType = -flColorType;
      v118 = flColorType;
    }
    if ( !v30 )
      goto LABEL_48;
  }
  v32 = v86;
  if ( v86 && *((_BYTE *)v86 + 20) )
  {
    if ( *((_BYTE *)v86 + 20) != 1 )
    {
      if ( *((_BYTE *)v86 + 20) == 3 )
      {
        v69 = 1;
        v34 = 1;
        XCLIPOBJ::cEnumStart(v86, 0, 0, v108, 0x14u);
        v32 = v86;
        goto LABEL_30;
      }
LABEL_48:
      SURFMEM::~SURFMEM((SURFMEM *)&v77);
      return 0LL;
    }
    v33 = *(struct _RECTL *)((char *)v86 + 4);
  }
  else
  {
    v33 = *a6;
  }
  v34 = 0;
  v138 = 1;
  v69 = 0;
  v139[0] = v33;
LABEL_30:
  if ( v34 )
    goto LABEL_56;
  while ( 1 )
  {
    v35 = 0;
    v72 = 0;
    if ( v138 )
    {
      do
      {
        left = v12->left;
        v37 = (struct _RECTL *)&v139[v35];
        v38 = v37->left;
        if ( v37->left < v12->left )
        {
          v37->left = left;
          v38 = left;
        }
        right = v37->right;
        v40 = v12->right;
        if ( right > v40 )
        {
          v37->right = v40;
          right = v40;
        }
        top = v37->top;
        v42 = v12->top;
        if ( top < v42 )
        {
          v37->top = v42;
          top = v42;
        }
        bottom = v37->bottom;
        v44 = v12->bottom;
        if ( bottom > v44 )
        {
          v37->bottom = v44;
          bottom = v44;
        }
        if ( top < bottom && right - v38 > 0 )
        {
          do
          {
            v60 = right;
            if ( right - v38 > v70 )
            {
              v60 = v38 + v70;
              v37->right = v38 + v70;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              v135 = a11;
              v130 = v66;
              v131 = v80;
              v132 = v81;
              v133 = v82;
              v134 = (unsigned __int8)a11 != a11 >> 8;
              v129 = a11 & 0xC3 | (unsigned __int8)((4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC);
              v136 = 0;
              BltLnkRect((struct _BLTLNKINFO *)&v97, v37);
            }
            if ( (unsigned __int8)a11 != a11 >> 8 && BYTE1(a11) != 0xAA )
            {
              v129 = BYTE1(a11) & 0xC3 | (unsigned __int8)((4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC);
              v130 = v67;
              v131 = v83;
              v132 = v84;
              v133 = v85;
              v134 = (unsigned __int8)a11 != a11 >> 8;
              v135 = BYTE1(a11);
              v136 = -1;
              BltLnkRect((struct _BLTLNKINFO *)&v97, v37);
            }
            v37->left = v60;
            v37->right = right;
            v38 = v60;
          }
          while ( right - v60 > 0 );
          v12 = v96;
          v35 = v72;
        }
        v72 = ++v35;
      }
      while ( v35 < v138 );
      v34 = v69;
    }
    v32 = v86;
    if ( !v34 )
      break;
LABEL_56:
    v34 = XCLIPOBJ::bEnum(v32, 0x144u, (char *)&v138, 0LL);
    v69 = v34;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v77);
  return 1LL;
}
