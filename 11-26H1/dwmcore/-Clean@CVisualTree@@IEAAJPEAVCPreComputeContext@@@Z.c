/*
 * XREFs of ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F5F0
 * Callers:
 *     ?ComputeBounds@CRedirectedVisualContent@@QEAAXXZ @ 0x1801BC494 (-ComputeBounds@CRedirectedVisualContent@@QEAAXXZ.c)
 *     ?GetBounds@CVisualBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E1BA0 (-GetBounds@CVisualBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?Merge@CTreeDirty@@AEAAXII@Z @ 0x18005953C (-Merge@CTreeDirty@@AEAAXII@Z.c)
 *     ?GetUnoptimizedBounds@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005B090 (-GetUnoptimizedBounds@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x18008D530 (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18008D838 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ @ 0x18008F4D0 (-ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??0CPreComputeContext@@QEAA@XZ @ 0x18020B4C4 (--0CPreComputeContext@@QEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180218990 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x18021CF30 (-SetFullDirty@CTreeDirty@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?SetRedrawRects@CTreeDirty@@AEAAXXZ @ 0x1802377C4 (-SetRedrawRects@CTreeDirty@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualTree::Clean(CVisualTree *this, struct CPreComputeContext *a2)
{
  CComposition *v2; // rax
  __int64 v3; // rsi
  CPreComputeContext *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v19; // rax
  CPreComputeContext *v20; // rbp
  int v21; // eax
  unsigned int v22; // r14d
  __int64 v23; // r8
  unsigned int i; // edx
  HANDLE ProcessHeap; // rax
  CPreComputeContext *v26; // rax
  CPreComputeContext *v27; // rbp
  const struct D2D_RECT_F *UnoptimizedBounds; // rax
  _QWORD v29[4]; // [rsp+20h] [rbp-38h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = g_pComposition;
  v3 = 0LL;
  v5 = a2;
  v6 = 0LL;
  if ( g_pComposition )
    v6 = *((_QWORD *)g_pComposition + 110);
  if ( *((_QWORD *)this + 15) == v6 || (v7 = *((_QWORD *)this + 9)) == 0 || !*(_BYTE *)(v7 + 96) )
  {
LABEL_5:
    v8 = 0LL;
    if ( v2 )
      v8 = *((_QWORD *)v2 + 110);
    if ( *((_QWORD *)this + 15) == v8 )
      return 0LL;
    if ( *((_BYTE *)this + 2628) )
    {
      (*(void (__fastcall **)(CVisualTree *, struct CPreComputeContext *, CPreComputeContext *))(*(_QWORD *)this + 232LL))(
        this,
        a2,
        v5);
      *((_BYTE *)this + 2628) = 0;
    }
    v9 = *((_BYTE *)this + 2630);
    *((_QWORD *)this + 15) = 0LL;
    *((_BYTE *)this + 2437) = 0;
    *(_WORD *)((char *)this + 2439) = 0;
    *((_BYTE *)this + 2436) = v9 == 0;
    *(_OWORD *)((char *)this + 2420) = *(_OWORD *)(*((_QWORD *)this + 14) + 2504LL);
    if ( v9 )
    {
      if ( *((_BYTE *)this + 2438) )
        *((_BYTE *)this + 2438) = 0;
      *((_DWORD *)this + 32) = 0;
      *((_BYTE *)this + 564) = 0;
      if ( !*((_BYTE *)this + 2438) )
        CTreeDirty::ClearDirtyRectAnnotationLists((CVisualTree *)((char *)this + 112));
    }
    if ( (*(unsigned __int8 (__fastcall **)(CVisualTree *, struct CPreComputeContext *, CPreComputeContext *))(*(_QWORD *)this + 192LL))(
           this,
           a2,
           v5) )
    {
      v10 = *((_QWORD *)this + 598);
      v11 = (*((_QWORD *)this + 599) - v10) >> 3;
      if ( v11 )
      {
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v29, v10, v11);
        *((_QWORD *)this + 599) += -8 * v12;
      }
    }
    v13 = (*(__int64 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 224LL))(this);
    v15 = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64, CVisualTree *))(*(_QWORD *)v13 + 24LL))(v13, this);
    v16 = (*(__int64 (__fastcall **)(CVisualTree *, __int64, __int64))(*(_QWORD *)this + 224LL))(this, v14, v15);
    v17 = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
    if ( !(*(unsigned __int8 (__fastcall **)(CVisualTree *, __int64))(*(_QWORD *)this + 192LL))(this, v17) )
    {
LABEL_19:
      if ( !*((_BYTE *)this + 2436) )
      {
        while ( 1 )
        {
          CRectangleCollection<8>::EnsureWeights((__int64)this + 128);
          v23 = 1LL;
LABEL_41:
          if ( (unsigned int)v23 >= *((_DWORD *)this + 32) )
            break;
          for ( i = 0; ; ++i )
          {
            if ( i >= (unsigned int)v23 )
            {
              v23 = (unsigned int)(v23 + 1);
              goto LABEL_41;
            }
            if ( *((float *)this + 2 * i + 2 * ((unsigned int)(v23 * (v23 - 1)) >> 1) + 70) < 0.5 )
              break;
          }
          CTreeDirty::Merge((CVisualTree *)((char *)this + 112), i, v23);
        }
      }
      *((_BYTE *)this + 2437) = 1;
      if ( *((_BYTE *)this + 2439) )
      {
        CTreeDirty::SetRedrawRects((CVisualTree *)((char *)this + 112));
        CTreeDirty::SetFullDirty((CVisualTree *)((char *)this + 112));
        *(_WORD *)((char *)this + 2439) = 0;
      }
      else if ( *((_BYTE *)this + 2440) )
      {
        CTreeDirty::SetFullDirty((CVisualTree *)((char *)this + 112));
        *((_BYTE *)this + 2440) = 0;
      }
      if ( g_pComposition )
        v3 = *((_QWORD *)g_pComposition + 110);
      *((_QWORD *)this + 15) = v3;
      return 0LL;
    }
    v19 = *((_QWORD *)this + 3);
    if ( *(_DWORD *)(v19 + 6368) )
    {
      if ( !*(_BYTE *)(v19 + 6461) )
      {
        UnoptimizedBounds = (const struct D2D_RECT_F *)CTreeDirty::GetUnoptimizedBounds(
                                                         (__int64)this + 112,
                                                         (__int64)v29);
        if ( IsEmpty(UnoptimizedBounds) )
          goto LABEL_32;
        v19 = *((_QWORD *)this + 3);
      }
      *((_BYTE *)this + 2439) = 1;
      *(_BYTE *)(v19 + 6461) = 0;
    }
LABEL_32:
    if ( *(_DWORD *)(*((_QWORD *)this + 3) + 6376LL) )
      *((_BYTE *)this + 2440) = 1;
    goto LABEL_19;
  }
  v20 = 0LL;
  if ( !a2 )
  {
    ProcessHeap = GetProcessHeap();
    v26 = (CPreComputeContext *)HeapAlloc(ProcessHeap, 0, 0x608uLL);
    v27 = v26;
    if ( !v26 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    memset_0(v26, 0, 0x608uLL);
    v5 = CPreComputeContext::CPreComputeContext(v27);
    v20 = v5;
  }
  v21 = CPreComputeContext::PreCompute(v5, this);
  v22 = v21;
  if ( v21 >= 0 )
  {
    if ( v20 )
    {
      CPreComputeContext::~CPreComputeContext(v20);
      operator delete(v20, 0x608uLL);
    }
    v2 = g_pComposition;
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    (wil::details::in1diag3 *)retaddr,
    (void *)0x18B,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualtree.cpp",
    (const char *)(unsigned int)v21);
  if ( v20 )
  {
    CPreComputeContext::~CPreComputeContext(v20);
    operator delete(v20, 0x608uLL);
  }
  return v22;
}
