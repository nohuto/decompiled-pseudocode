/*
 * XREFs of ??$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800690B4
 * Callers:
 *     ?CreateCombinedGeometryProxy@CCompositor@@QEAAJPEAPEAVCCombinedGeometryProxy@@@Z @ 0x180040C38 (-CreateCombinedGeometryProxy@CCompositor@@QEAAJPEAPEAVCCombinedGeometryProxy@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBaseGeometryProxy@@QEAA@XZ @ 0x18006942C (--0CBaseGeometryProxy@@QEAA@XZ.c)
 *     ?Initialize@CCombinedGeometryProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x180069534 (-Initialize@CCombinedGeometryProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxy<CCombinedGeometryProxy>(__int64 a1, CBaseGeometryProxy **a2)
{
  CBaseGeometryProxy *v4; // rbx
  CCombinedGeometryProxy *v5; // rcx
  int v6; // eax
  unsigned int v7; // edi

  *a2 = 0LL;
  v4 = (CBaseGeometryProxy *)DefaultHeap::AllocClear(0x18uLL);
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    CBaseGeometryProxy::CBaseGeometryProxy(v4);
    *(_QWORD *)v4 = &CTransform3dGroupProxy::`vftable';
    CMILRefCountBase::AddRef(v4);
    v6 = CCombinedGeometryProxy::Initialize(v5, *(struct IDwmChannel **)(a1 + 24));
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x6Fu, 0LL);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x6Du, 0LL);
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return v7;
}
