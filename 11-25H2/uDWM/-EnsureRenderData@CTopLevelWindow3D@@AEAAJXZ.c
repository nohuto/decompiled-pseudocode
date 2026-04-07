/*
 * XREFs of ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18006459C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800904A0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180015204 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x1800153C4 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x1800189C4 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x18001EBF0 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x1800649D8 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x180064A8C (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x180064AF4 (-ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ??4?$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataVisual@@@Z @ 0x180064B14 (--4-$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataV.c)
 *     ?SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z @ 0x18009A378 (-SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::EnsureRenderData(CTopLevelWindow3D *this)
{
  unsigned int v2; // edi
  CBaseObject *v3; // r15
  CBaseObject *v4; // r14
  CMILRefCountBase *v5; // rbx
  CBaseObject *v6; // r12
  CBaseObject *v7; // r13
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  float v13; // xmm1_4
  float v14; // xmm2_4
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  char ShouldFreezeAnimationCVI; // r15
  struct CCachedVisualImageProxy *CVIForAnimation; // rax
  CBaseObject *v26; // rcx
  CBaseObject *v27; // [rsp+30h] [rbp-28h] BYREF
  CMILRefCountBase *v28; // [rsp+38h] [rbp-20h]
  struct tagRECT v29; // [rsp+40h] [rbp-18h] BYREF
  CBaseObject *v30; // [rsp+A0h] [rbp+48h] BYREF
  struct CPushTransformInstruction *v31; // [rsp+A8h] [rbp+50h] BYREF
  struct CPopInstruction *v32; // [rsp+B0h] [rbp+58h] BYREF
  struct CPopInstruction *v33; // [rsp+B8h] [rbp+60h] BYREF

  v2 = 0;
  v3 = 0LL;
  v27 = 0LL;
  v4 = 0LL;
  v31 = 0LL;
  v5 = (CMILRefCountBase *)*((_QWORD *)this + 62);
  v28 = v5;
  if ( v5 )
    CMILRefCountBase::AddRef(v5);
  v6 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  v7 = 0LL;
  v33 = 0LL;
  if ( !*((_DWORD *)this + 58) )
  {
    v9 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 38), &v30);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x390u, 0LL);
      goto LABEL_32;
    }
    v10 = CRenderDataVisual::AddInstruction(this, v30);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x391u, 0LL);
    }
    else
    {
      if ( *((_BYTE *)this + 568) )
        goto LABEL_21;
      CSecondaryWindowRepresentation::GetRelativeWindowRect(*((CSecondaryWindowRepresentation **)this + 37), &v29);
      v11 = 0;
      if ( v29.right - v29.left >= 0 )
        v11 = v29.right - v29.left;
      v12 = 0;
      if ( v29.bottom - v29.top >= 0 )
        v12 = v29.bottom - v29.top;
      if ( v12 <= 0 )
        v13 = FLOAT_0_1;
      else
        v13 = 1.0 / (float)v12;
      if ( v11 <= 0 )
        v14 = FLOAT_0_1;
      else
        v14 = 1.0 / (float)v11;
      v15 = CScaleTransformProxy::Update(*((CScaleTransformProxy **)this + 39), v14, v13, 0.0, 0.0);
      v2 = v15;
      if ( v15 >= 0 )
      {
        v16 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 39), &v31);
        v2 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x39Fu, 0LL);
          v4 = v31;
        }
        else
        {
          v4 = v31;
          v17 = CRenderDataVisual::AddInstruction(this, v31);
          v2 = v17;
          if ( v17 >= 0 )
          {
LABEL_21:
            if ( !*((_QWORD *)this + 62) )
            {
              ShouldFreezeAnimationCVI = CTopLevelWindow3D::ShouldFreezeAnimationCVI(this);
              CVIForAnimation = CSecondaryWindowRepresentation::CreateCVIForAnimation(
                                  *((CSecondaryWindowRepresentation **)this + 37),
                                  ShouldFreezeAnimationCVI);
              v26 = v5;
              v5 = CVIForAnimation;
              v28 = CVIForAnimation;
              if ( v26 )
              {
                CBaseObject::Release(v26);
                CVIForAnimation = v5;
              }
              if ( ShouldFreezeAnimationCVI )
                wil::com_ptr_t<CRenderDataVisual,wil::err_returncode_policy>::operator=(
                  (char *)this + 496,
                  CVIForAnimation);
            }
            v18 = CDrawBitmapInstruction::Create(v5, &v27);
            v2 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x3B2u, 0LL);
              v3 = v27;
              goto LABEL_32;
            }
            v3 = v27;
            v19 = CRenderDataVisual::AddInstruction(this, v27);
            v2 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x3B3u, 0LL);
            }
            else
            {
              if ( !v4 )
                goto LABEL_27;
              v20 = CPopInstruction::Create(&v32);
              v2 = v20;
              if ( v20 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x3B9u, 0LL);
                v6 = v32;
                goto LABEL_32;
              }
              v6 = v32;
              v21 = CRenderDataVisual::AddInstruction(this, v32);
              v2 = v21;
              if ( v21 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x3BAu, 0LL);
              }
              else
              {
LABEL_27:
                if ( !v30 )
                  goto LABEL_30;
                v22 = CPopInstruction::Create(&v33);
                v2 = v22;
                if ( v22 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x3BFu, 0LL);
                  v7 = v33;
                }
                else
                {
                  v7 = v33;
                  v23 = CRenderDataVisual::AddInstruction(this, v33);
                  v2 = v23;
                  if ( v23 >= 0 )
                  {
LABEL_30:
                    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 36) + 440LL) + 201LL) & 0x20) != 0 )
                      CVisualProxy::SetVisualProtectContent(*((CVisualProxy **)this + 2), 1);
                    goto LABEL_32;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x3C0u, 0LL);
                }
              }
            }
LABEL_32:
            if ( v3 )
              CBaseObject::Release(v3);
            goto LABEL_34;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x3A0u, 0LL);
        }
LABEL_34:
        if ( v4 )
          CBaseObject::Release(v4);
        if ( v6 )
          CBaseObject::Release(v6);
        goto LABEL_38;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x39Du, 0LL);
    }
LABEL_38:
    if ( v30 )
      CBaseObject::Release(v30);
    if ( v7 )
      CBaseObject::Release(v7);
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v2;
}
