/*
 * XREFs of ?SendSetOpacity@CVisual@@IEAAJN@Z @ 0x1800054B8
 * Callers:
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x180005420 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180005470 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x1800055E8 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x1800056D8 (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x180081F80 (-CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisual::SendSetOpacity(CVisualProxy **this, double a2)
{
  int v3; // eax
  unsigned int v4; // r8d
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v9; // eax
  CEffectGroupProxy *v10; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 < 1.0 )
  {
    v10 = 0LL;
    v3 = CCompositor::CreateEffectGroupProxy(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6), &v10);
    v5 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x2EFu, 0LL);
    }
    else
    {
      v6 = CEffectGroupProxy::Update(v10, a2, v4, 0LL);
      v5 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2F2u, 0LL);
      }
      else
      {
        v7 = CVisualProxy::SetEffect(this[2], v10);
        v5 = v7;
        if ( v7 >= 0 )
        {
          if ( v10 )
            CBaseObject::Release(v10);
          return v5;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2F5u, 0LL);
      }
    }
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v10);
    return v5;
  }
  v9 = CVisualProxy::SetEffect(this[2], 0LL);
  v5 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2F9u, 0LL);
  return v5;
}
