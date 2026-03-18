/*
 * XREFs of ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002FF00 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800E8BE0 (-GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800E9C24 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800E9CB0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x1800EA51C (-AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800EA824 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180129AD8 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x18018634C (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOp.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180193F90 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1801CC11C (-SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@U.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800EB930 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800EBC90 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::TryAddRectangles(FastRegion::CRegion **this, const struct tagRECT *a2, unsigned int a3)
{
  FastRegion::CRegion *v3; // rbx
  int v4; // esi
  unsigned int v5; // r14d
  unsigned int v6; // r10d
  const struct tagRECT *i; // r9
  LONG right; // ecx
  LONG left; // edx
  LONG bottom; // r8d
  LONG top; // r9d
  int v13; // r11d
  int v14; // r9d
  unsigned int v15; // ecx
  int v16; // eax
  FastRegion::Internal::CRgnData *v17; // rcx
  int v18; // edi
  void *v19; // rdi
  HANDLE ProcessHeap; // rax
  int v22; // eax
  signed int v23; // edi
  int v24; // r9d
  int v25; // edx
  char *v26; // rsi
  char *v27; // r10
  LONG *v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rsi
  int *v33; // rsi
  int v34; // edi
  int v35; // eax
  int v36; // edx
  int v37; // r9d
  FastRegion::CRegion *v38; // r10
  char *v39; // r11
  char *v40; // r15
  _DWORD *v41; // r8
  __int64 v42; // rax
  char *v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r15
  int v47; // eax
  FastRegion::Internal::CRgnData *v48; // rcx
  FastRegion::CRegion *v49; // rdi
  int v50; // ebx
  HANDLE v51; // rax
  HANDLE v52; // rax
  FastRegion::CRegion *v53; // r15
  FastRegion::CRegion *v54; // rdi
  int v55; // r12d
  int v56; // esi
  int v57; // eax
  int v58; // edx
  int v59; // r11d
  char *v60; // r8
  char *v61; // r10
  _DWORD *v62; // r9
  __int64 v63; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r10
  HANDLE v68; // rax
  _DWORD *v69; // rbx
  int v70; // r12d
  int *v71; // rsi
  int v72; // r15d
  int v73; // eax
  int v74; // edx
  int v75; // r11d
  char *v76; // r8
  char *v77; // r10
  _DWORD *v78; // r9
  __int64 v79; // rax
  __int64 v80; // rcx
  unsigned __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r10
  void *v84; // rbx
  HANDLE v85; // rax
  FastRegion::Internal::CRgnData *v86; // rax
  FastRegion::Internal::CRgnData *v87; // rax
  struct FastRegion::Internal::CRgnData *v90; // [rsp+38h] [rbp-D0h] BYREF
  int v91; // [rsp+40h] [rbp-C8h] BYREF
  LONG v92; // [rsp+44h] [rbp-C4h] BYREF
  LONG v93; // [rsp+48h] [rbp-C0h]
  LONG v94; // [rsp+4Ch] [rbp-BCh] BYREF
  int v95; // [rsp+50h] [rbp-B8h]
  LONG v96; // [rsp+54h] [rbp-B4h]
  int v97; // [rsp+58h] [rbp-B0h]
  LONG v98; // [rsp+5Ch] [rbp-ACh]
  LONG v99; // [rsp+60h] [rbp-A8h]
  FastRegion::CRegion *v100; // [rsp+88h] [rbp-80h] BYREF
  _DWORD Mem[18]; // [rsp+90h] [rbp-78h] BYREF
  int v102; // [rsp+D8h] [rbp-30h]
  LPVOID lpMem; // [rsp+E0h] [rbp-28h]
  _BYTE v104[256]; // [rsp+E8h] [rbp-20h] BYREF
  int v105; // [rsp+1E8h] [rbp+E0h]
  LPVOID v106; // [rsp+1F0h] [rbp+E8h]
  _BYTE v107[256]; // [rsp+1F8h] [rbp+F0h] BYREF

  v3 = (FastRegion::CRegion *)Mem;
  Mem[0] = 0;
  v4 = 0;
  v100 = (FastRegion::CRegion *)Mem;
  v5 = 0;
  v6 = a3;
  for ( i = a2; ; i = a2 )
  {
    if ( v5 >= v6 )
    {
      if ( Mem != (_DWORD *)v3 && v3 )
        goto LABEL_68;
      return (unsigned int)v4;
    }
    v90 = (struct FastRegion::Internal::CRgnData *)&v91;
    right = i[v5].right;
    left = i[v5].left;
    if ( left >= right || (bottom = i[v5].bottom, top = i[v5].top, top >= bottom) )
    {
      v14 = v95;
      v13 = 0;
      v91 = 0;
      v15 = 0;
    }
    else
    {
      v13 = 2;
      v94 = top;
      v14 = 16;
      v93 = right;
      v99 = right;
      v15 = 2;
      v95 = 16;
      v97 = 16;
      v91 = 2;
      v92 = left;
      v98 = left;
      v96 = bottom;
    }
    if ( !v15 )
    {
      v4 = 0;
      goto LABEL_32;
    }
    if ( *(_DWORD *)v3 )
    {
      v16 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v3, (const struct FastRegion::Internal::CRgnData *)&v91);
      v17 = (FastRegion::Internal::CRgnData *)v104;
      lpMem = v104;
      v102 = v16;
      if ( (unsigned __int64)v16 > 0x100 )
      {
        v86 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v16);
        v17 = v86;
        if ( !v86 )
        {
          if ( v104 != lpMem )
            operator delete(lpMem);
          v4 = -2147024882;
LABEL_113:
          FastRegion::CRegion::FreeMemory(&v90);
          FastRegion::CRegion::FreeMemory(&v100);
          return (unsigned int)v4;
        }
        v3 = v100;
        lpMem = v86;
      }
      FastRegion::Internal::CRgnData::Union(v17, v3, v90);
      v3 = (FastRegion::CRegion *)lpMem;
      v4 = 0;
      if ( *(_DWORD *)lpMem )
      {
        if ( v104 != lpMem )
        {
          v18 = v102;
          lpMem = v104;
          v102 = 0;
          FastRegion::CRegion::FreeMemory(&v100);
          v100 = v3;
          Mem[0] = v18;
          goto LABEL_12;
        }
        v54 = v100;
        v55 = (_DWORD)lpMem + 12;
        v56 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
            + 8 * *(_DWORD *)lpMem
            - *((_DWORD *)lpMem + 4)
            - 12
            + 8 * (*(_DWORD *)lpMem - 1)
            + 24;
        v57 = Mem[0];
        if ( Mem == (_DWORD *)v100 )
          v57 = 60;
        if ( v57 >= v56 )
        {
LABEL_76:
          v58 = *(_DWORD *)v3;
          v59 = 0;
          *(_DWORD *)v54 = *(_DWORD *)v3;
          *((_DWORD *)v54 + 1) = *((_DWORD *)v3 + 1);
          *((_DWORD *)v54 + 2) = *((_DWORD *)v3 + 2);
          v60 = (char *)v54 + 8 * v58 + 12;
          v61 = (char *)v3 + *((int *)v3 + 4) + 12;
          if ( v58 > 0 )
          {
            v62 = (_DWORD *)((char *)v54 + 12);
            do
            {
              *v62 = *(_DWORD *)((char *)v62 + v3 - v54);
              v62 += 2;
              v63 = v59++;
              *((_DWORD *)v54 + 2 * v63 + 4) = 4 * ((v60 - v61) >> 2)
                                             + (_DWORD)v3
                                             + 8 * v63
                                             + *((_DWORD *)v3 + 2 * v63 + 4)
                                             - ((_DWORD)v54
                                              + 8 * v63);
            }
            while ( v59 < *(_DWORD *)v54 );
          }
          v64 = (__int64)v3 + 8 * *(_DWORD *)v3 + 4;
          v65 = (unsigned __int64)((int)v64 + *(_DWORD *)(v64 + 4) - *((_DWORD *)v3 + 4) - v55) >> 2;
          v66 = (int)v65;
          if ( (int)v65 > 0 )
          {
            v67 = v61 - v60;
            do
            {
              *(_DWORD *)v60 = *(_DWORD *)&v60[v67];
              v60 += 4;
              --v66;
            }
            while ( v66 );
          }
          v3 = v100;
          v4 = 0;
          goto LABEL_12;
        }
        v54 = (FastRegion::CRegion *)MIDL_user_allocate(v56);
        if ( v54 )
        {
          FastRegion::CRegion::FreeMemory(&v100);
          v100 = v54;
          Mem[0] = v56;
          goto LABEL_76;
        }
        v3 = v100;
        v4 = -2147024882;
      }
      else
      {
        *(_DWORD *)v100 = 0;
        v3 = v100;
      }
LABEL_12:
      v19 = lpMem;
      if ( v104 == lpMem || !lpMem )
        goto LABEL_30;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v19);
      goto LABEL_29;
    }
    v22 = Mem[0];
    v23 = (unsigned int)(&v92 + 2 * v15) + *(&v92 + 2 * v15 + 1) + 8 * v15 - v14 - (unsigned int)&v94 + 12;
    if ( Mem == (_DWORD *)v3 )
      v22 = 60;
    if ( v22 >= v23 )
      goto LABEL_21;
    v3 = (FastRegion::CRegion *)MIDL_user_allocate(v23);
    if ( v3 )
    {
      FastRegion::CRegion::FreeMemory(&v100);
      v13 = v91;
      v100 = v3;
      Mem[0] = v23;
LABEL_21:
      *(_DWORD *)v3 = v13;
      v24 = 0;
      *((_DWORD *)v3 + 1) = v92;
      *((_DWORD *)v3 + 2) = v93;
      v25 = v95;
      v26 = (char *)&v94 + v95;
      v27 = (char *)v3 + 8 * v13 + 12;
      if ( v13 > 0 )
      {
        v28 = &v94;
        do
        {
          *(LONG *)((char *)v28 + v3 - (FastRegion::CRegion *)&v94 + 12) = *v28;
          v28 += 2;
          v29 = v24++;
          *((_DWORD *)v3 + 2 * v29 + 4) = (unsigned int)(&v94 + 2 * v29)
                                        + 4 * ((v27 - v26) >> 2)
                                        + *(&v94 + 2 * v29 + 1)
                                        - ((_DWORD)v3
                                         + 8 * v29
                                         + 12);
        }
        while ( v24 < *(_DWORD *)v3 );
        v25 = v95;
      }
      v30 = (unsigned __int64)(int)(*(&v94 + 2 * v91 - 1) - v25 - (unsigned int)&v94 + (unsigned int)&v94
                                                                                     + 8 * (v91 - 1)) >> 2;
      v31 = (int)v30;
      if ( (int)v30 > 0 )
      {
        v32 = v26 - v27;
        do
        {
          *(_DWORD *)v27 = *(_DWORD *)&v27[v32];
          v27 += 4;
          --v31;
        }
        while ( v31 );
      }
      v4 = 0;
      goto LABEL_29;
    }
    v4 = -2147024882;
LABEL_29:
    v3 = v100;
LABEL_30:
    if ( v4 < 0 )
      goto LABEL_113;
    v6 = a3;
LABEL_32:
    if ( v5 == 5 * (v5 / 5) || v5 == v6 - 1 )
      break;
LABEL_49:
    if ( &v91 != (int *)v90 )
    {
      if ( v90 )
      {
        v51 = GetProcessHeap();
        HeapFree(v51, 0, v90);
        v3 = v100;
      }
    }
    v6 = a3;
    ++v5;
  }
  if ( !*(_DWORD *)v3 )
  {
    v4 = 0;
    goto LABEL_48;
  }
  if ( !*(_DWORD *)*this )
  {
    if ( this == &v100 )
      goto LABEL_46;
    v33 = (int *)(this + 1);
    v34 = *((_DWORD *)v3 + 2 * *(_DWORD *)v3 + 2)
        + 8 * *(_DWORD *)v3
        - *((_DWORD *)v3 + 4)
        - 12
        + 8 * (*(_DWORD *)v3 - 1)
        + 24;
    v35 = 60;
    if ( this + 1 != (FastRegion::CRegion **)*this )
      v35 = *v33;
    if ( v35 < v34 )
    {
      v53 = (FastRegion::CRegion *)MIDL_user_allocate(v34);
      if ( v53 )
      {
        FastRegion::CRegion::FreeMemory(this);
        *this = v53;
        *v33 = v34;
        goto LABEL_39;
      }
      v3 = v100;
      v4 = -2147024882;
    }
    else
    {
LABEL_39:
      v36 = *(_DWORD *)v3;
      v37 = 0;
      v38 = *this;
      *(_DWORD *)v38 = *(_DWORD *)v3;
      *((_DWORD *)v38 + 1) = *((_DWORD *)v3 + 1);
      *((_DWORD *)v38 + 2) = *((_DWORD *)v3 + 2);
      v39 = (char *)v38 + 8 * v36 + 12;
      v40 = (char *)v3 + *((int *)v3 + 4) + 12;
      if ( v36 > 0 )
      {
        v41 = (_DWORD *)((char *)v38 + 12);
        do
        {
          *v41 = *(_DWORD *)((char *)v41 + v3 - v38);
          v41 += 2;
          v42 = v37++;
          *((_DWORD *)v38 + 2 * v42 + 4) = 4 * ((v39 - v40) >> 2)
                                         + (_DWORD)v3
                                         + 8 * v42
                                         + *((_DWORD *)v3 + 2 * v42 + 4)
                                         - ((_DWORD)v38
                                          + 8 * v42);
        }
        while ( v37 < *(_DWORD *)v38 );
      }
      v43 = (char *)v3 + 8 * *(_DWORD *)v3 + 4;
      v44 = (unsigned __int64)((int)v43 + *((_DWORD *)v43 + 1) - *((_DWORD *)v3 + 4) - ((int)v3 + 12)) >> 2;
      v45 = (int)v44;
      if ( (int)v44 > 0 )
      {
        v46 = v40 - v39;
        do
        {
          *(_DWORD *)v39 = *(_DWORD *)&v39[v46];
          v39 += 4;
          --v45;
        }
        while ( v45 );
      }
      v3 = v100;
LABEL_46:
      v4 = 0;
    }
LABEL_47:
    if ( v4 < 0 )
      goto LABEL_62;
LABEL_48:
    *(_DWORD *)v3 = 0;
    v3 = v100;
    goto LABEL_49;
  }
  v47 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*this, v3);
  v48 = (FastRegion::Internal::CRgnData *)v107;
  v106 = v107;
  v105 = v47;
  if ( (unsigned __int64)v47 <= 0x100 )
  {
LABEL_54:
    FastRegion::Internal::CRgnData::Union(v48, *this, v3);
    v49 = (FastRegion::CRegion *)v106;
    v4 = 0;
    if ( *(_DWORD *)v106 )
    {
      if ( v107 != v106 )
      {
        v50 = v105;
        v106 = v107;
        v105 = 0;
        FastRegion::CRegion::FreeMemory(this);
        *this = v49;
        *((_DWORD *)this + 2) = v50;
        goto LABEL_93;
      }
      v69 = *this;
      v70 = (_DWORD)v106 + 12;
      v71 = (int *)(this + 1);
      v72 = *((_DWORD *)v106 + 2 * *(_DWORD *)v106 + 2)
          + 8 * *(_DWORD *)v106
          - *((_DWORD *)v106 + 4)
          - 12
          + 8 * (*(_DWORD *)v106 - 1)
          + 24;
      v73 = 60;
      if ( this + 1 != (FastRegion::CRegion **)*this )
        v73 = *v71;
      if ( v73 >= v72 )
      {
LABEL_86:
        v74 = *(_DWORD *)v49;
        v75 = 0;
        *v69 = *(_DWORD *)v49;
        v69[1] = *((_DWORD *)v49 + 1);
        v69[2] = *((_DWORD *)v49 + 2);
        v76 = (char *)&v69[2 * v74 + 3];
        v77 = (char *)v49 + *((int *)v49 + 4) + 12;
        if ( v74 > 0 )
        {
          v78 = v69 + 3;
          do
          {
            *v78 = *(_DWORD *)((char *)v78 + v49 - (FastRegion::CRegion *)v69);
            v78 += 2;
            v79 = v75++;
            v69[2 * v79 + 4] = (_DWORD)v49
                             + 8 * v79
                             + 4 * ((v76 - v77) >> 2)
                             + *((_DWORD *)v49 + 2 * v79 + 4)
                             - ((_DWORD)v69
                              + 8 * v79);
          }
          while ( v75 < *v69 );
        }
        v80 = (__int64)v49 + 8 * *(_DWORD *)v49 + 4;
        v81 = (unsigned __int64)((int)v80 + *(_DWORD *)(v80 + 4) - *((_DWORD *)v49 + 4) - v70) >> 2;
        v82 = (int)v81;
        if ( (int)v81 > 0 )
        {
          v83 = v77 - v76;
          do
          {
            *(_DWORD *)v76 = *(_DWORD *)&v76[v83];
            v76 += 4;
            --v82;
          }
          while ( v82 );
        }
        v4 = 0;
        goto LABEL_93;
      }
      v69 = MIDL_user_allocate(v72);
      if ( v69 )
      {
        FastRegion::CRegion::FreeMemory(this);
        *this = (FastRegion::CRegion *)v69;
        *v71 = v72;
        goto LABEL_86;
      }
      v4 = -2147024882;
    }
    else
    {
      *(_DWORD *)*this = 0;
    }
LABEL_93:
    v84 = v106;
    if ( v107 != v106 && v106 )
    {
      v85 = GetProcessHeap();
      HeapFree(v85, 0, v84);
    }
    v3 = v100;
    goto LABEL_47;
  }
  v87 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v47);
  v48 = v87;
  if ( v87 )
  {
    v3 = v100;
    v106 = v87;
    goto LABEL_54;
  }
  if ( v107 != v106 )
    operator delete(v106);
  v3 = v100;
  v4 = -2147024882;
LABEL_62:
  if ( &v91 != (int *)v90 )
  {
    if ( v90 )
    {
      v68 = GetProcessHeap();
      HeapFree(v68, 0, v90);
      v3 = v100;
    }
    v91 = 0;
    v90 = (struct FastRegion::Internal::CRgnData *)&v91;
  }
  if ( Mem != (_DWORD *)v3 && v3 )
  {
LABEL_68:
    v52 = GetProcessHeap();
    HeapFree(v52, 0, v3);
  }
  return (unsigned int)v4;
}
