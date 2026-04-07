/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x180075340
 * Callers:
 *     ?CreateAnimationTriggerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x18009A5E8 (-CreateAnimationTriggerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCAnimationTriggerProxy.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBaseGeometryProxy@@QEAA@XZ @ 0x18006942C (--0CBaseGeometryProxy@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InitializeFromSharedHandle@CAnimationTriggerProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x1800A8B00 (-InitializeFromSharedHandle@CAnimationTriggerProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CAnimationTriggerProxy>(
        __int64 a1,
        void *a2,
        CBaseObject **a3)
{
  CBaseGeometryProxy *v6; // rax
  CMILRefCountBase *v7; // rax
  CBaseObject *v8; // rbx
  CAnimationTriggerProxy *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi

  *a3 = 0LL;
  v6 = (CBaseGeometryProxy *)DefaultHeap::AllocClear(0x18uLL);
  if ( !v6 )
  {
    v8 = 0LL;
    goto LABEL_7;
  }
  *(_OWORD *)v6 = 0LL;
  *((_QWORD *)v6 + 2) = 0LL;
  v7 = CBaseGeometryProxy::CBaseGeometryProxy(v6);
  v8 = v7;
  if ( !v7 )
  {
LABEL_7:
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x83u, 0LL);
    goto LABEL_8;
  }
  CMILRefCountBase::AddRef(v7);
  v10 = CAnimationTriggerProxy::InitializeFromSharedHandle(v9, *(struct IDwmChannel **)(a1 + 24), a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x89u, 0LL);
  }
  else
  {
    *a3 = v8;
    v11 = 0;
  }
LABEL_8:
  if ( v8 )
    CBaseObject::Release(v8);
  return v11;
}
