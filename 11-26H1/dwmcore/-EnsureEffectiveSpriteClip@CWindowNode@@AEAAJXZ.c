/*
 * XREFs of ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180193F90
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800DF2D0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180169910 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180202650 (-RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB760 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800EA480 (--1CRegionShape@@UEAA@XZ.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800EA824 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x18012F694 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::EnsureEffectiveSpriteClip(CWindowNode *this)
{
  _QWORD *v1; // rbx
  bool v2; // zf
  unsigned int v4; // r14d
  struct CShape *v5; // rdi
  int SpriteClipShape; // eax
  CShape *v7; // rcx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  _BYTE **v12; // rax
  __int64 *AccumShape; // rax
  __int64 v14; // rdx
  int v15; // [rsp+28h] [rbp-69h]
  struct CShape *v16; // [rsp+38h] [rbp-59h] BYREF
  CShape *v17; // [rsp+40h] [rbp-51h] BYREF
  char v18; // [rsp+48h] [rbp-49h]
  struct tagRECT v19; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v20[2]; // [rsp+68h] [rbp-29h] BYREF
  FastRegion::CRegion *v21; // [rsp+78h] [rbp-19h] BYREF
  int v22; // [rsp+80h] [rbp-11h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v1 = (_QWORD *)((char *)this + 880);
  v2 = (*((_BYTE *)this + 896) & 1) == 0;
  v4 = 0;
  v16 = 0LL;
  v5 = 0LL;
  if ( v2 )
    CShapePtr::~CShapePtr((CWindowNode *)((char *)this + 880));
  if ( !*v1 )
  {
    v17 = 0LL;
    v20[0] = &CRegionShape::`vftable';
    v21 = (FastRegion::CRegion *)&v22;
    v18 = 0;
    v20[1] = 0LL;
    v22 = 0;
    v23 = 0LL;
    if ( *((_QWORD *)this + 101) )
    {
      SpriteClipShape = CWindowNode::GetSpriteClipShape(this, (struct CShapePtr *)&v17);
      v4 = SpriteClipShape;
      if ( SpriteClipShape < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SpriteClipShape, 0x5E9u, 0LL);
LABEL_7:
        CRegionShape::~CRegionShape((CRegionShape *)v20);
        CShapePtr::~CShapePtr((CShapePtr *)&v17);
        return v4;
      }
      v7 = v17;
    }
    else
    {
      v19.right = *((_DWORD *)this + 180);
      v19.bottom = *((_DWORD *)this + 181);
      *(_QWORD *)&v19.left = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v23);
      v8 = CRegion::TryAddRectangles(&v21, &v19, 1u);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1D1,
          (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
          (const char *)(unsigned int)v8,
          v15);
      CShapePtr::~CShapePtr((CShapePtr *)&v17);
      v7 = (CShape *)v20;
      v18 = 0;
      v17 = (CShape *)v20;
    }
    v9 = -2003304309;
    if ( v7 )
    {
      v10 = CShape::CopyShape(v7, 0LL, &v16);
      v9 = v10;
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x155u, 0LL);
        v5 = v16;
        goto LABEL_15;
      }
      v5 = v16;
    }
    v4 = v9;
    if ( v9 >= 0 )
    {
      if ( *((_BYTE *)this + 744) )
      {
        v16 = 0LL;
        v12 = (_BYTE **)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 103);
        AccumShape = (__int64 *)CGdiSpriteBitmap::GetAccumShape(*v12, (CShapePtr *)&v19, 0);
        v4 = CShape::Combine((__int64)v5, v14, *AccumShape, 0LL, 1, &v16);
        CShapePtr::~CShapePtr((CShapePtr *)&v19);
        if ( (v4 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x603u, 0LL);
LABEL_16:
          CRegionShape::~CRegionShape((CRegionShape *)v20);
          CShapePtr::~CShapePtr((CShapePtr *)&v17);
          if ( v5 )
            (**(void (__fastcall ***)(struct CShape *, __int64))v5)(v5, 1LL);
          return v4;
        }
        if ( v5 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v5)(v5, 1LL);
        v5 = v16;
      }
      CShapePtr::~CShapePtr((CWindowNode *)((char *)this + 880));
      *((_QWORD *)this + 110) = v5;
      *((_BYTE *)this + 888) = 1;
      *((_BYTE *)this + 896) |= 1u;
      goto LABEL_7;
    }
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x5F8u, 0LL);
    goto LABEL_16;
  }
  return v4;
}
