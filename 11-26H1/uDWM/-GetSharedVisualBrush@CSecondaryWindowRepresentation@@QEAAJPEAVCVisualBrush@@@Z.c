/*
 * XREFs of ?GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800BF560
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B612C (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x1800C9A60 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180022944 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x1800293B4 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x180073D88 (-GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA-AW4TLWRootVisualType@@XZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4CVisualBrush@@QEAAAEAV0@AEBV0@@Z @ 0x180095DA0 (--4CVisualBrush@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z @ 0x18009B794 (-Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z.c)
 *     ??4CVisualBrush@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800AD5DC (--4CVisualBrush@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetSharedVisualBrush@CTransitionWindowSnapshot@@QEAAJPEAVCVisualBrush@@PEAM@Z @ 0x1800D03F4 (-GetSharedVisualBrush@CTransitionWindowSnapshot@@QEAAJPEAVCVisualBrush@@PEAM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSecondaryWindowRepresentation::GetSharedVisualBrush(
        CSecondaryWindowRepresentation *this,
        struct CVisualBrush *a2)
{
  CTransitionWindowSnapshot *v4; // rcx
  int SharedVisualBrush; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct CVisual *RootVisualNoAddRef; // rdi
  CWindowData *RepresentationWindowData; // rax
  int TLWRootVisualType; // eax
  _QWORD *v11; // r8
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)v13 = 0LL;
  v4 = (CTransitionWindowSnapshot *)*((_QWORD *)this + 31);
  if ( !v4 )
  {
    if ( (*((_DWORD *)this + 10) & 0x100) != 0 )
      RootVisualNoAddRef = 0LL;
    else
      RootVisualNoAddRef = (struct CVisual *)*((_QWORD *)this + 6);
    RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64));
    if ( CWindowData::IsImmersiveWindow(RepresentationWindowData) && *((_DWORD *)this + 18) == 3 )
    {
      RootVisualNoAddRef = (struct CVisual *)*((_QWORD *)this + 26);
    }
    else if ( !RootVisualNoAddRef
           && *((_QWORD *)CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64))
              + 55) )
    {
      TLWRootVisualType = CSecondaryWindowRepresentation::GetTLWRootVisualType((__int64)this);
      RootVisualNoAddRef = (struct CVisual *)CTopLevelWindow::GetRootVisualNoAddRef(v11, TLWRootVisualType);
    }
    CVisualBrush::operator=(v13, (__int64 *)a2);
    SharedVisualBrush = CVisualBrush::Reset(
                          (CVisualBrush *)v13,
                          RootVisualNoAddRef,
                          &TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::sc_rcEmpty,
                          0LL);
    v6 = SharedVisualBrush;
    if ( SharedVisualBrush < 0 )
    {
      v7 = 850LL;
      goto LABEL_15;
    }
LABEL_16:
    CVisualBrush::operator=((__int64 *)a2, v13);
    v6 = 0;
    goto LABEL_17;
  }
  SharedVisualBrush = CTransitionWindowSnapshot::GetSharedVisualBrush(
                        v4,
                        (struct CVisualBrush *)v13,
                        (float *)this + 50);
  v6 = SharedVisualBrush;
  if ( SharedVisualBrush >= 0 )
    goto LABEL_16;
  v7 = 822LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"clientcore\\windows\\dwm\\udwm\\secondarywindowrepresentation.cpp",
    (const char *)(unsigned int)SharedVisualBrush);
LABEL_17:
  CVisualBrush::~CVisualBrush((CVisualBrush *)v13);
  return v6;
}
