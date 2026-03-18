/*
 * XREFs of ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1800E9F90
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1800E9F54 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180169C10 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x180181630 (-AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z.c)
 *     ?AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x180191DA0 (-AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z.c)
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x1801BDE24 (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDComposi.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800EB930 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800EBC90 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::TryAddRectangle(FastRegion::CRegion **this, const struct tagRECT *a2)
{
  LONG left; // ecx
  unsigned int v4; // r14d
  LONG right; // eax
  LONG bottom; // r10d
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // ecx
  FastRegion::CRegion *v10; // rbx
  int *v11; // r15
  int v12; // eax
  signed int v13; // esi
  int v14; // r9d
  int v15; // edx
  char *v16; // rdi
  char *v17; // r10
  LONG *p_top; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  void *v23; // rbx
  int v25; // eax
  FastRegion::Internal::CRgnData *v26; // rcx
  int *v27; // rsi
  int *v28; // r15
  int v29; // ebx
  HANDLE ProcessHeap; // rax
  _DWORD *v31; // rbx
  int v32; // r13d
  int v33; // r12d
  int v34; // eax
  int v35; // edx
  int v36; // r11d
  char *v37; // r8
  char *v38; // r9
  _DWORD *v39; // r10
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r9
  void *v45; // rbx
  HANDLE v46; // rax
  FastRegion::Internal::CRgnData *v47; // rax
  LPVOID lpMem; // [rsp+20h] [rbp-E0h] BYREF
  int v49; // [rsp+28h] [rbp-D8h] BYREF
  LONG v50; // [rsp+2Ch] [rbp-D4h] BYREF
  LONG v51; // [rsp+30h] [rbp-D0h]
  LONG top; // [rsp+34h] [rbp-CCh] BYREF
  int v53; // [rsp+38h] [rbp-C8h]
  LONG v54; // [rsp+3Ch] [rbp-C4h]
  int v55; // [rsp+40h] [rbp-C0h]
  LONG v56; // [rsp+44h] [rbp-BCh]
  LONG v57; // [rsp+48h] [rbp-B8h]
  int v58; // [rsp+70h] [rbp-90h]
  LPVOID v59; // [rsp+78h] [rbp-88h]
  _BYTE v60[256]; // [rsp+80h] [rbp-80h] BYREF

  left = a2->left;
  v4 = 0;
  lpMem = &v49;
  right = a2->right;
  if ( left >= right || (bottom = a2->bottom, a2->top >= bottom) )
  {
    v8 = v53;
    v7 = 0;
    v49 = 0;
    v9 = 0;
  }
  else
  {
    v7 = 2;
    top = a2->top;
    v8 = 16;
    v50 = left;
    v56 = left;
    v9 = 2;
    v53 = 16;
    v55 = 16;
    v49 = 2;
    v51 = right;
    v57 = right;
    v54 = bottom;
  }
  if ( v9 )
  {
    v10 = *this;
    if ( !*(_DWORD *)*this )
    {
      if ( this == (FastRegion::CRegion **)&lpMem )
      {
LABEL_17:
        v23 = lpMem;
        if ( &v49 != lpMem && lpMem )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v23);
        }
        return v4;
      }
      v11 = (int *)(this + 1);
      v12 = 60;
      v13 = *(&v50 + 2 * v9 + 1) + 8 * v9 - (unsigned int)&top - v8 + (unsigned int)(&v50 + 2 * v9) + 12;
      if ( this + 1 != (FastRegion::CRegion **)v10 )
        v12 = *v11;
      if ( v12 >= v13 )
        goto LABEL_10;
      v10 = (FastRegion::CRegion *)MIDL_user_allocate(v13);
      if ( v10 )
      {
        FastRegion::CRegion::FreeMemory(this);
        v7 = v49;
        *this = v10;
        *v11 = v13;
LABEL_10:
        *(_DWORD *)v10 = v7;
        v14 = 0;
        *((_DWORD *)v10 + 1) = v50;
        *((_DWORD *)v10 + 2) = v51;
        v15 = v53;
        v16 = (char *)&top + v53;
        v17 = (char *)v10 + 8 * v7 + 12;
        if ( v7 > 0 )
        {
          p_top = &top;
          do
          {
            *(LONG *)((char *)p_top + v10 - (FastRegion::CRegion *)&top + 12) = *p_top;
            p_top += 2;
            v19 = v14++;
            *((_DWORD *)v10 + 2 * v19 + 4) = (unsigned int)(&top + 2 * v19)
                                           + 4 * ((v17 - v16) >> 2)
                                           + *(&top + 2 * v19 + 1)
                                           - ((_DWORD)v10
                                            + 8 * v19
                                            + 12);
          }
          while ( v14 < *(_DWORD *)v10 );
          v15 = v53;
        }
        v20 = (unsigned __int64)(int)(*(&top + 2 * v49 - 1)
                                    - (unsigned int)&top
                                    - v15
                                    + (unsigned int)&top
                                    + 8 * (v49 - 1)) >> 2;
        v21 = (int)v20;
        if ( (int)v20 > 0 )
        {
          v22 = v16 - v17;
          do
          {
            *(_DWORD *)v17 = *(_DWORD *)&v17[v22];
            v17 += 4;
            --v21;
          }
          while ( v21 );
        }
        goto LABEL_17;
      }
LABEL_26:
      v4 = -2147024882;
      goto LABEL_17;
    }
    v25 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v10, (const struct FastRegion::Internal::CRgnData *)&v49);
    v26 = (FastRegion::Internal::CRgnData *)v60;
    v59 = v60;
    v58 = v25;
    if ( (unsigned __int64)v25 > 0x100 )
    {
      v47 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v25);
      v26 = v47;
      if ( !v47 )
      {
        if ( v60 != v59 )
          operator delete(v59);
        goto LABEL_26;
      }
      v59 = v47;
    }
    FastRegion::Internal::CRgnData::Union(v26, *this, (const struct FastRegion::Internal::CRgnData *)lpMem);
    v27 = (int *)v59;
    if ( *(_DWORD *)v59 )
    {
      v28 = (int *)(this + 1);
      if ( v60 == v59 )
      {
        v31 = *this;
        v32 = (_DWORD)v59 + 12;
        v33 = *((_DWORD *)v59 + 2 * *(_DWORD *)v59 + 2)
            + 8 * *(_DWORD *)v59
            - *((_DWORD *)v59 + 4)
            - 12
            + 8 * (*(_DWORD *)v59 - 1)
            + 24;
        v34 = 60;
        if ( v28 != (int *)*this )
          v34 = *v28;
        if ( v34 < v33 )
        {
          v31 = MIDL_user_allocate(v33);
          if ( !v31 )
          {
            v4 = -2147024882;
            goto LABEL_36;
          }
          FastRegion::CRegion::FreeMemory(this);
          *this = (FastRegion::CRegion *)v31;
          *v28 = v33;
        }
        v35 = *v27;
        v36 = 0;
        *v31 = *v27;
        v31[1] = v27[1];
        v31[2] = v27[2];
        v37 = (char *)&v31[2 * v35 + 3];
        v38 = (char *)v27 + v27[4] + 12;
        if ( v35 > 0 )
        {
          v39 = v31 + 3;
          do
          {
            *v39 = *(_DWORD *)((char *)v39 + (char *)v27 - (char *)v31);
            v39 += 2;
            v40 = v36++;
            v31[2 * v40 + 4] = 4 * ((v37 - v38) >> 2)
                             + (_DWORD)v27
                             + 8 * v40
                             + v27[2 * v40 + 4]
                             - ((_DWORD)v31
                              + 8 * v40);
          }
          while ( v36 < *v31 );
        }
        v41 = (__int64)&v27[2 * *v27 + 1];
        v42 = (unsigned __int64)((int)v41 + *(_DWORD *)(v41 + 4) - v27[4] - v32) >> 2;
        v43 = (int)v42;
        if ( (int)v42 > 0 )
        {
          v44 = v38 - v37;
          do
          {
            *(_DWORD *)v37 = *(_DWORD *)&v37[v44];
            v37 += 4;
            --v43;
          }
          while ( v43 );
        }
        goto LABEL_36;
      }
      v29 = v58;
      v59 = v60;
      v58 = 0;
      FastRegion::CRegion::FreeMemory(this);
      *this = (FastRegion::CRegion *)v27;
      *v28 = v29;
    }
    else
    {
      *(_DWORD *)*this = 0;
    }
LABEL_36:
    v45 = v59;
    if ( v60 != v59 && v59 )
    {
      v46 = GetProcessHeap();
      HeapFree(v46, 0, v45);
    }
    goto LABEL_17;
  }
  return v4;
}
