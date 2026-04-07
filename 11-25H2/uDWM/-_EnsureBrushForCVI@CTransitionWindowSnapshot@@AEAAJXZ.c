/*
 * XREFs of ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180051C28
 * Callers:
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180051944 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180053CE0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001F500 (-CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18001F50C (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBr.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureBrushForCVI(CTransitionWindowSnapshot *this)
{
  unsigned int v1; // edi
  int v3; // eax
  __int64 v4; // rdx
  CMILRefCountBase *v5; // rbx
  int v6; // eax
  CBaseObject *v8; // rcx
  __int64 v9; // [rsp+50h] [rbp-58h]
  __int64 v10; // [rsp+68h] [rbp-40h]
  CMILRefCountBase *v11; // [rsp+70h] [rbp-38h] BYREF
  __int128 v12; // [rsp+78h] [rbp-30h] BYREF
  __int128 v13; // [rsp+88h] [rbp-20h] BYREF

  v1 = 0;
  v11 = 0LL;
  if ( *((_QWORD *)this + 32) )
    return v1;
  v3 = CCompositor::CreateImageLegacyMilBrushProxy(
         *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v11);
  v5 = v11;
  v1 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xCBu, 0LL);
    goto LABEL_5;
  }
  v10 = *((_QWORD *)this + 31);
  v13 = _xmm;
  v12 = _xmm;
  v6 = CImageLegacyMilBrushProxy::Update(
         (__int64)v11,
         v4,
         (__int64)&v13,
         (__int64)&v12,
         0LL,
         1u,
         1,
         0LL,
         0LL,
         1,
         v9,
         0,
         0,
         v10);
  v1 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xE6u, 0LL);
    goto LABEL_5;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 32);
  if ( v8 )
    CBaseObject::Release(v8);
  *((_QWORD *)this + 32) = v5;
  if ( v5 )
  {
    CMILRefCountBase::AddRef(v5);
LABEL_5:
    if ( v5 )
      CBaseObject::Release(v5);
  }
  return v1;
}
