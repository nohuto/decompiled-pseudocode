/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x180003A70
 * Callers:
 *     ?CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18008DBB0 (-CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z.c)
 * Callees:
 *     ?InitializeFromSharedHandle@CVisualTargetProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x180003B60 (-InitializeFromSharedHandle@CVisualTargetProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CResourceProxy@@IEAA@XZ @ 0x1800088BC (--0CResourceProxy@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CVisualTargetProxy>(
        __int64 a1,
        void *a2,
        CResourceProxy **a3)
{
  CResourceProxy *v6; // rbx
  CVisualTargetProxy *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi

  *a3 = 0LL;
  v6 = (CResourceProxy *)DefaultHeap::AllocClear(0x18uLL);
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    CResourceProxy::CResourceProxy(v6);
    *(_QWORD *)v6 = &CTransform3dGroupProxy::`vftable';
    CMILRefCountBase::AddRef(v6);
    v8 = CVisualTargetProxy::InitializeFromSharedHandle(v7, *(struct IDwmChannel **)(a1 + 24), a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x89u, 0LL);
    }
    else
    {
      *a3 = v6;
      v9 = 0;
    }
  }
  else
  {
    v6 = 0LL;
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x83u, 0LL);
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v9;
}
