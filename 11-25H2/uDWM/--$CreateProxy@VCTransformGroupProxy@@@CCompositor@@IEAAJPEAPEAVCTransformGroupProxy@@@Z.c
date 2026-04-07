/*
 * XREFs of ??$CreateProxy@VCTransformGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransformGroupProxy@@@Z @ 0x18006FA24
 * Callers:
 *     ?CreateTransformGroupProxy@CCompositor@@QEAAJPEAPEAVCTransformGroupProxy@@@Z @ 0x1800A9F2C (-CreateTransformGroupProxy@CCompositor@@QEAAJPEAPEAVCTransformGroupProxy@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBaseTransformProxy@@QEAA@XZ @ 0x18006B3DC (--0CBaseTransformProxy@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CTransformGroupProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800D1818 (-Initialize@CTransformGroupProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxy<CTransformGroupProxy>(__int64 a1, CBaseTransformProxy **a2)
{
  CBaseTransformProxy *v4; // rbx
  CTransformGroupProxy *v5; // rcx
  int v6; // eax
  unsigned int v7; // edi

  *a2 = 0LL;
  v4 = (CBaseTransformProxy *)DefaultHeap::AllocClear(0x18uLL);
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    CBaseTransformProxy::CBaseTransformProxy(v4);
    *(_QWORD *)v4 = &CTransform3dGroupProxy::`vftable';
    CMILRefCountBase::AddRef(v4);
    v6 = CTransformGroupProxy::Initialize(v5, *(struct IDwmChannel **)(a1 + 24));
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
