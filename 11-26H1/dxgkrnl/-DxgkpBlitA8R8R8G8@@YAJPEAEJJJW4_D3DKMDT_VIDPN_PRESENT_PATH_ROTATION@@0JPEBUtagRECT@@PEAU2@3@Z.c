/*
 * XREFs of ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x140398E8C
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1402BA700 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140417C20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1401BDDF0 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x140399C88 (-DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z.c)
 */

__int64 __fastcall DxgkpBlitA8R8R8G8(
        unsigned __int8 *a1,
        int a2,
        int a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5,
        unsigned __int8 *a6,
        int a7,
        const struct tagRECT *a8,
        struct tagRECT *a9,
        struct tagRECT *a10)
{
  int v10; // r13d
  int v11; // ebx
  int v12; // edi
  LONG right; // ebp
  LONG left; // r15d
  LONG bottom; // r10d
  LONG top; // r11d
  LONG v17; // esi
  LONG v18; // r12d
  LONG v19; // r14d
  int v20; // r8d
  int v21; // r11d
  __int64 v22; // rcx
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // rbx
  int v25; // esi
  int v26; // r10d
  int v27; // r8d
  int v28; // eax
  int v29; // r15d
  unsigned __int64 v30; // r8
  LONG v31; // r10d
  unsigned __int8 *v32; // r12
  int v33; // ecx
  int v34; // r10d
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  int v37; // ebx
  int v38; // ecx
  unsigned __int8 *v39; // r9
  struct _UFIXPOINT_PIXEL *v40; // r15
  unsigned __int8 *v41; // rcx
  int v42; // r12d
  struct _UFIXPOINT_PIXEL *v43; // r9
  unsigned __int8 *v44; // r8
  int *v45; // r11
  int v46; // r9d
  _BYTE *v47; // rdx
  int v48; // eax
  unsigned __int8 *v49; // r8
  int v50; // eax
  bool v51; // cc
  struct _UFIXPOINT_PIXEL *v53; // rdx
  unsigned int v54; // edx
  unsigned int v55; // eax
  unsigned int v56; // r11d
  unsigned int *v57; // rdx
  _BYTE *v58; // r8
  signed __int64 v59; // r9
  int v60; // r10d
  unsigned int v61; // ecx
  unsigned int v62; // eax
  int v63; // r14d
  int v64; // ebp
  int v65; // r11d
  int v66; // r9d
  int v67; // edx
  int v68; // ecx
  int v69; // r8d
  struct _UFIXPOINT_PIXEL *v70; // r8
  unsigned int v71; // eax
  _BYTE *v72; // r11
  _DWORD *v73; // rdx
  unsigned int v74; // r9d
  unsigned int v75; // ebp
  signed __int64 v76; // r10
  int v77; // r14d
  unsigned int v78; // eax
  _DWORD *v79; // rdx
  int v80; // r9d
  _BYTE *v81; // r12
  signed __int64 v82; // r8
  int v83; // ecx
  _DWORD *v84; // rdx
  unsigned int v85; // r9d
  signed __int64 v86; // r10
  int v87; // r14d
  unsigned int v88; // eax
  unsigned __int8 *v89; // rdi
  size_t v90; // rsi
  __int64 v91; // rbx
  __int64 v92; // r15
  unsigned int v93; // edx
  unsigned int v94; // r10d
  _BYTE *v95; // r11
  unsigned int v96; // r9d
  unsigned int *v97; // rdx
  unsigned int v98; // r10d
  __int64 v99; // r8
  unsigned int v100; // ecx
  unsigned int v101; // eax
  unsigned __int8 *v102; // rdi
  __int64 v103; // rbp
  int v104; // r9d
  int v105; // r8d
  _DWORD *v106; // rdx
  unsigned int v107; // eax
  LONG v108; // [rsp+50h] [rbp-98h]
  unsigned int v109; // [rsp+50h] [rbp-98h]
  int v110; // [rsp+50h] [rbp-98h]
  int v111; // [rsp+58h] [rbp-90h]
  int v112; // [rsp+5Ch] [rbp-8Ch]
  int v113; // [rsp+5Ch] [rbp-8Ch]
  LONG v114; // [rsp+60h] [rbp-88h]
  int v115; // [rsp+60h] [rbp-88h]
  int v116; // [rsp+64h] [rbp-84h]
  int v117; // [rsp+68h] [rbp-80h]
  int v118; // [rsp+6Ch] [rbp-7Ch]
  int v119; // [rsp+6Ch] [rbp-7Ch]
  unsigned int v120; // [rsp+70h] [rbp-78h]
  struct tagRECT v121; // [rsp+78h] [rbp-70h]
  unsigned __int8 *v122; // [rsp+78h] [rbp-70h]
  int v123; // [rsp+88h] [rbp-60h]
  unsigned __int8 *v124; // [rsp+90h] [rbp-58h]
  unsigned __int8 *v125; // [rsp+90h] [rbp-58h]
  int v126; // [rsp+90h] [rbp-58h]
  unsigned __int8 *v127; // [rsp+98h] [rbp-50h]
  struct _UFIXPOINT_PIXEL *v128; // [rsp+A0h] [rbp-48h]
  struct _UFIXPOINT_PIXEL *v129; // [rsp+A0h] [rbp-48h]
  __int64 v130; // [rsp+A8h] [rbp-40h]
  int v131; // [rsp+B0h] [rbp-38h]
  int v133; // [rsp+130h] [rbp+48h]

  v10 = a2;
  v11 = a4;
  v12 = a3;
  right = a9->right;
  left = a9->left;
  if ( a9->left == right
    || (bottom = a9->bottom, top = a9->top, top == bottom)
    || (v17 = a8->right, v114 = a8->left, a8->left == v17)
    || (v18 = a8->bottom, v108 = a8->top, v108 == v18) )
  {
    DxgkpConvertRects(a2, a3, a5, a8, 1u, a9, a10);
    return 0LL;
  }
  if ( a5 == D3DKMDT_VPPR_IDENTITY )
    goto LABEL_78;
  if ( a5 != D3DKMDT_VPPR_ROTATE90 )
  {
    if ( a5 == D3DKMDT_VPPR_ROTATE180 )
    {
      v20 = a2 - right;
      v121.left = a2 - right;
      v19 = v12 - bottom;
      right = v12 - top;
      bottom = a2 - left;
      a4 = -a4;
      v21 = -4;
      v22 = a2 - 1;
      v23 = &a1[v11 * (v12 - 1)];
      goto LABEL_8;
    }
    if ( a5 == D3DKMDT_VPPR_ROTATE270 )
    {
      v121.top = a9->left;
      v10 = a3;
      v121.bottom = a9->right;
      a4 = 4;
      v20 = a3 - bottom;
      v117 = 4;
      v121.left = v12 - bottom;
      bottom = v12 - top;
      v12 = a2;
      v121.right = bottom;
      v21 = -v11;
      v19 = a9->left;
      v24 = &a1[v11 * (v10 - 1)];
      goto LABEL_9;
    }
LABEL_78:
    bottom = a9->right;
    v117 = a4;
    v21 = 4;
    v24 = a1;
    right = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)a9, 12));
    v19 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)a9, 4));
    v121 = *a9;
    v20 = _mm_cvtsi128_si32(*(__m128i *)a9);
    goto LABEL_9;
  }
  v121.left = a9->top;
  a4 = -4;
  v19 = a2 - right;
  v20 = v121.left;
  v21 = v11;
  right = a2 - left;
  v10 = v12;
  v12 = a2;
  v22 = a2 - 1;
  v23 = a1;
LABEL_8:
  v117 = a4;
  v24 = &v23[4 * v22];
  v121.bottom = right;
  *(_QWORD *)&v121.top = __PAIR64__(bottom, v19);
LABEL_9:
  v25 = v17 - v114;
  v26 = v25 * bottom;
  v123 = v18 - v108;
  v124 = v24;
  v133 = v21;
  v27 = v25 * v20 / v10;
  v111 = (v10 * v27 + v25 - 1) / v25;
  v28 = (v26 - 1 - (v26 - 1) % v10 + v10) / v25;
  v29 = v28;
  v116 = v28;
  v118 = v27 + v114;
  a10->left = v27 + v114;
  v30 = HIDWORD(*(_QWORD *)&v121.left);
  v112 = (v18 - v108) * v121.top / v12;
  a10->top = v108 + v112;
  v31 = (v10 + v26 - 1) / v10 + v114;
  *(_QWORD *)&v121.left = HIDWORD(*(_QWORD *)&v121.right);
  a10->right = v31;
  v131 = (v18 - v108) * v121.bottom;
  a10->bottom = v108 + (v12 + v131 - 1) / v12;
  v32 = &a6[4 * v118 + a7 * (v108 + v112)];
  v33 = v25;
  v127 = v32;
  if ( a5 == D3DKMDT_VPPR_IDENTITY && v25 == v10 )
  {
    if ( v123 == v12 )
    {
      v89 = &v24[a4 * (int)v30 + v111 * v21];
      if ( (int)v30 < v121.left )
      {
        v90 = (unsigned int)(4 * (v28 - v111));
        v91 = (unsigned int)(right - v30);
        v92 = a4;
        do
        {
          memmove(v32, v89, v90);
          v32 += a7;
          v89 += v92;
          --v91;
        }
        while ( v91 );
      }
      return 0LL;
    }
  }
  else if ( v123 == v12 )
  {
    v102 = &v24[a4 * v19];
    if ( v19 < right )
    {
      v103 = (unsigned int)(right - v19);
      v129 = (struct _UFIXPOINT_PIXEL *)a4;
      do
      {
        DxgkpGetBilinearLineFromSource(v102, v21, v10, (struct _PIXEL *)v32, 0LL, v33, v111, v29);
        v102 = &v102[(_QWORD)v129];
        v32 += a7;
        v21 = v133;
        v33 = v25;
        --v103;
      }
      while ( v103 );
    }
    return 0LL;
  }
  v34 = v31 - v118;
  v35 = 16LL * (2 * v34 + 2);
  if ( !is_mul_ok(2 * v34 + 2, 0x10uLL) )
    v35 = -1LL;
  v36 = operator new[](v35, 0x4B677844u, 256LL);
  v37 = 0;
  v128 = (struct _UFIXPOINT_PIXEL *)v36;
  if ( v36 )
  {
    v38 = a10->right - a10->left;
    v39 = v124;
    v130 = v36;
    v40 = (struct _UFIXPOINT_PIXEL *)(v36 + 16LL * (v38 + 1));
    *(_OWORD *)(v36 + 16LL * v38) = 0LL;
    *((_OWORD *)v40 + a10->right - a10->left) = 0LL;
    v41 = &v124[v117 * v19];
    v125 = v41;
    if ( v123 > v12 )
    {
      v42 = v19 * v123 % v12;
      if ( v42 )
      {
        DxgkpGetBilinearLineFromSource(&v41[-v117], v133, v10, 0LL, v40, v25, v111, v116);
        v41 = v125;
      }
      DxgkpGetBilinearLineFromSource(v41, v133, v10, 0LL, v128, v25, v111, v116);
      if ( v19 < right )
      {
        v43 = (struct _UFIXPOINT_PIXEL *)v130;
        while ( v42 && v42 < v12 )
        {
          v44 = v127;
          v54 = (unsigned __int16)((v42 << 16) / (unsigned int)v12);
          if ( a10->right - a10->left > 0 )
          {
            v55 = v54 >> 8;
            v56 = (0x10000 - v54) >> 8;
            v57 = (unsigned int *)((char *)v40 + 12);
            v58 = v127 + 2;
            v109 = v55;
            v59 = v43 - v40;
            v60 = 0;
            do
            {
              v61 = *(unsigned int *)((char *)v57 + v59);
              ++v60;
              v62 = *v57;
              v57 += 4;
              v58[1] = (v56 * (v61 >> 8) + 0x8000 + v109 * (v62 >> 8)) >> 16;
              *v58 = (v56 * (*(unsigned int *)((char *)v57 + v59 - 20) >> 8) + 0x8000 + v109 * (*(v57 - 5) >> 8)) >> 16;
              v58 += 4;
              *(v58 - 5) = (v56 * (*(unsigned int *)((char *)v57 + v59 - 24) >> 8) + 0x8000 + v109 * (*(v57 - 6) >> 8)) >> 16;
              *(v58 - 6) = (v56 * (*(unsigned int *)((char *)v57 + v59 - 28) >> 8) + 0x8000 + v109 * (*(v57 - 7) >> 8)) >> 16;
            }
            while ( v60 < a10->right - a10->left );
            v43 = (struct _UFIXPOINT_PIXEL *)v130;
LABEL_38:
            v44 = v127;
          }
LABEL_24:
          v49 = &v44[a7];
          v50 = v42 - v12 + v123;
          v127 = v49;
          v51 = v42 < v12;
          v42 -= v12;
          if ( v51 )
            v42 = v50;
          if ( v42 < v12 )
          {
            v53 = v40;
            ++v19;
            v130 = (__int64)v40;
            v40 = v43;
            if ( v19 < right || v42 )
            {
              v125 += v117;
              DxgkpGetBilinearLineFromSource(v125, v133, v10, 0LL, v53, v25, v111, v116);
              v49 = v127;
              v43 = (struct _UFIXPOINT_PIXEL *)v130;
            }
            else
            {
              v43 = v53;
            }
          }
          if ( v19 >= right )
            goto LABEL_28;
        }
        if ( a10->right - a10->left > 0 )
        {
          v44 = v127;
          v45 = (int *)((char *)v43 + 8);
          v46 = 0;
          v47 = v127 + 2;
          do
          {
            ++v46;
            v47[1] = (unsigned int)(v45[1] + 0x8000) >> 16;
            v48 = *v45;
            v45 += 4;
            *v47 = (unsigned int)(v48 + 0x8000) >> 16;
            v47 += 4;
            *(v47 - 5) = (unsigned int)(*(v45 - 5) + 0x8000) >> 16;
            *(v47 - 6) = (unsigned int)(*(v45 - 6) + 0x8000) >> 16;
          }
          while ( v46 < a10->right - a10->left );
          v43 = (struct _UFIXPOINT_PIXEL *)v130;
          goto LABEL_24;
        }
        goto LABEL_38;
      }
      v49 = &a6[4 * v118 + a7 * (v108 + v112)];
LABEL_28:
      if ( v42 )
      {
        v93 = (unsigned __int16)((v42 << 16) / v12);
        if ( a10->right - a10->left > 0 )
        {
          v94 = 0x10000 - v93;
          v95 = v49 + 2;
          v96 = v93 >> 8;
          v97 = (unsigned int *)((char *)v40 + 12);
          v98 = v94 >> 8;
          v99 = v130 - (_QWORD)v40;
          do
          {
            v100 = *v97;
            ++v37;
            v101 = *(unsigned int *)((char *)v97 + v99);
            v97 += 4;
            v95[1] = (v96 * (v100 >> 8) + 0x8000 + v98 * (v101 >> 8)) >> 16;
            *v95 = (v96 * (*(v97 - 5) >> 8) + 0x8000 + v98 * (*(unsigned int *)((char *)v97 + v99 - 20) >> 8)) >> 16;
            v95 += 4;
            *(v95 - 5) = (v96 * (*(v97 - 6) >> 8) + 0x8000 + v98 * (*(unsigned int *)((char *)v97 + v99 - 24) >> 8)) >> 16;
            *(v95 - 6) = (v96 * (*(v97 - 7) >> 8) + 0x8000 + v98 * (*(unsigned int *)((char *)v97 + v99 - 28) >> 8)) >> 16;
          }
          while ( v37 < a10->right - a10->left );
        }
      }
      goto LABEL_29;
    }
    v126 = v123 << 16;
    v120 = (unsigned __int16)((v123 << 16) / v12);
    v115 = (v123 + v12 * v112 - 1) / v123;
    v122 = &v39[v115 * v117];
    v119 = (v12 + v131 - 1 - (v131 - 1) % v12) / v123;
    v113 = v123 * v115 % v12;
    v110 = v113 << 16;
    if ( v113 > 0 )
    {
      v63 = v116;
      v64 = v133;
      DxgkpGetBilinearLineFromSource(&v39[v115 * v117 - v117], v133, v10, 0LL, v40, v25, v111, v116);
      v104 = 0;
      if ( a10->right - a10->left > 0 )
      {
        v105 = (unsigned __int16)(v110 / v12) >> 8;
        v106 = (_DWORD *)((char *)v40 + 8);
        do
        {
          ++v104;
          v106[1] = v105 * (v106[1] >> 8);
          *v106 = v105 * (*v106 >> 8);
          v107 = *(v106 - 1);
          v106 += 4;
          *(v106 - 5) = v105 * (v107 >> 8);
          *(v106 - 6) = v105 * (*(v106 - 6) >> 8);
        }
        while ( v104 < a10->right - a10->left );
      }
    }
    else
    {
      memset(v40, 0, 16LL * (a10->right - a10->left));
      v63 = v116;
      v110 = v113 << 16;
      v64 = v133;
    }
    DxgkpGetBilinearLineFromSource(v122, v64, v10, 0LL, v128, v25, v111, v63);
    v65 = v115;
    if ( v115 >= v119 )
    {
LABEL_52:
      if ( v113 && a10->right - a10->left > 0 )
      {
        v79 = (_DWORD *)((char *)v40 + 12);
        v80 = (unsigned __int16)(((v12 - v113) << 16) / v12) >> 8;
        v81 = v32 + 2;
        v82 = v128 - v40;
        do
        {
          ++v37;
          v83 = *v79 + v80 * (*(_DWORD *)((char *)v79 + v82) >> 8) + 0x8000;
          v79 += 4;
          v81[1] = BYTE2(v83);
          *v81 = (unsigned int)(*(v79 - 5) + v80 * (*(_DWORD *)((char *)v79 + v82 - 20) >> 8) + 0x8000) >> 16;
          v81 += 4;
          *(v81 - 5) = (unsigned int)(*(v79 - 6) + v80 * (*(_DWORD *)((char *)v79 + v82 - 24) >> 8) + 0x8000) >> 16;
          *(v81 - 6) = (unsigned int)(*(v79 - 7) + v80 * (*(_DWORD *)((char *)v79 + v82 - 28) >> 8) + 0x8000) >> 16;
        }
        while ( v37 < a10->right - a10->left );
      }
LABEL_29:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v128);
      return 0LL;
    }
    v66 = v12 << 16;
    while ( 1 )
    {
      v67 = v123 + v113;
      v68 = v126 + v110;
      v69 = a10->right - a10->left;
      v113 = v67;
      v110 += v126;
      if ( v67 < v12 )
      {
        v51 = v69 <= 0;
        v70 = v128;
        if ( v51 )
          goto LABEL_50;
        v84 = (_DWORD *)((char *)v40 + 12);
        v85 = v120 >> 8;
        v86 = v128 - v40;
        v87 = 0;
        do
        {
          ++v87;
          *v84 += v85 * (*(_DWORD *)((char *)v84 + v86) >> 8);
          v88 = *(_DWORD *)((char *)v84 + v86 - 4);
          v84 += 4;
          *(v84 - 5) += v85 * (v88 >> 8);
          *(v84 - 6) += v85 * (*(_DWORD *)((char *)v84 + v86 - 24) >> 8);
          *(v84 - 7) += v85 * (*(_DWORD *)((char *)v84 + v86 - 28) >> 8);
        }
        while ( v87 < a10->right - a10->left );
        v63 = v116;
      }
      else
      {
        v113 = v67 - v12;
        v110 = v68 - v66;
        v51 = v69 <= 0;
        v70 = v128;
        v71 = (unsigned __int16)((v68 - v66) / v12);
        if ( !v51 )
        {
          v72 = v32 + 2;
          v73 = (_DWORD *)((char *)v40 + 12);
          v74 = (v120 - v71) >> 8;
          v75 = v71 >> 8;
          v76 = v128 - v40;
          v77 = 0;
          do
          {
            ++v77;
            v72[1] = (*v73 + 0x8000 + v74 * (*(_DWORD *)((char *)v73 + v76) >> 8)) >> 16;
            *v72 = (*(v73 - 1) + 0x8000 + v74 * (*(_DWORD *)((char *)v73 + v76 - 4) >> 8)) >> 16;
            v72 += 4;
            *(v72 - 5) = (*(v73 - 2) + 0x8000 + v74 * (*(_DWORD *)((char *)v73 + v76 - 8) >> 8)) >> 16;
            *(v72 - 6) = (*(v73 - 3) + 0x8000 + v74 * (*(_DWORD *)((char *)v73 + v76 - 12) >> 8)) >> 16;
            *v73 = v75 * (*(_DWORD *)((char *)v73 + v76) >> 8);
            v78 = *(_DWORD *)((char *)v73 + v76 - 4);
            v73 += 4;
            *(v73 - 5) = v75 * (v78 >> 8);
            *(v73 - 6) = v75 * (*(_DWORD *)((char *)v73 + v76 - 24) >> 8);
            *(v73 - 7) = v75 * (*(_DWORD *)((char *)v73 + v76 - 28) >> 8);
          }
          while ( v77 < a10->right - a10->left );
          v64 = v133;
          v63 = v116;
          v65 = v115;
        }
        v32 += a7;
      }
      v67 = v113;
LABEL_50:
      v115 = v65 + 1;
      if ( v65 + 1 < v119 || v67 )
      {
        v122 += v117;
        DxgkpGetBilinearLineFromSource(v122, v64, v10, 0LL, v70, v25, v111, v63);
        v65 = v115;
        v66 = v12 << 16;
        if ( v115 < v119 )
          continue;
      }
      goto LABEL_52;
    }
  }
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 692;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate line buffer for DxgkpBlitA8R8R8G8, returning 0x%I64x!",
    -1073741670LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225626LL;
}
