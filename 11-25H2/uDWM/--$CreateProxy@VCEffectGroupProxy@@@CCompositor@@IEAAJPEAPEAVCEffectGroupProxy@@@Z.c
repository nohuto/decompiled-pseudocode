/*
 * XREFs of ??$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x180006180
 * Callers:
 *     ?CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x1800373D0 (-CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 * Callees:
 *     ?Initialize@CEffectGroupProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x180006318 (-Initialize@CEffectGroupProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CResourceProxy@@IEAA@XZ @ 0x1800088BC (--0CResourceProxy@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxy<CEffectGroupProxy>(__int64 a1, CResourceProxy **a2)
{
  CResourceProxy *v4; // rbx
  CEffectGroupProxy *v5; // rcx
  int v6; // eax
  unsigned int v7; // edi

  *a2 = 0LL;
  v4 = (CResourceProxy *)DefaultHeap::AllocClear(0x18uLL);
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    CResourceProxy::CResourceProxy(v4);
    *(_QWORD *)v4 = &CTransform3dGroupProxy::`vftable';
    CMILRefCountBase::AddRef(v4);
    v6 = CEffectGroupProxy::Initialize(v5, *(struct IDwmChannel **)(a1 + 24));
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6Fu, 0LL);
    }
    else
    {
      *a2 = v4;
      v7 = 0;
    }
  }
  else
  {
    v4 = 0LL;
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Du, 0LL);
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return v7;
}
