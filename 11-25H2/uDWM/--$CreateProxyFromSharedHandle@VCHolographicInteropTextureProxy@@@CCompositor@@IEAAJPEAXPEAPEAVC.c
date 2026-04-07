/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCHolographicInteropTextureProxy@@@Z @ 0x1800A9C88
 * Callers:
 *     ?CreateHolographicInteropTextureProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCHolographicInteropTextureProxy@@@Z @ 0x1800A9EE4 (-CreateHolographicInteropTextureProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCHolographicI.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CResourceProxy@@IEAA@XZ @ 0x1800088BC (--0CResourceProxy@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InitializeFromSharedHandle@CHolographicInteropTextureProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x1800B6948 (-InitializeFromSharedHandle@CHolographicInteropTextureProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 */

__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CHolographicInteropTextureProxy>(
        __int64 a1,
        void *a2,
        CBaseObject **a3)
{
  CBaseObject *v6; // rbx
  CHolographicInteropTextureProxy *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  CBaseObject *v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = (CBaseObject *)DefaultHeap::AllocClear(0x18uLL);
  v11 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    CResourceProxy::CResourceProxy(v6);
    *(_QWORD *)v6 = &CTransform3dGroupProxy::`vftable';
    v11 = v6;
    CMILRefCountBase::AddRef(v6);
    v8 = CHolographicInteropTextureProxy::InitializeFromSharedHandle(v7, *(struct IDwmChannel **)(a1 + 24), a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x89u, 0LL);
    }
    else
    {
      *a3 = v6;
      v9 = 0;
    }
  }
  else
  {
    v11 = 0LL;
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x83u, 0LL);
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v11);
  return v9;
}
