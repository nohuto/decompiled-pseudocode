/*
 * XREFs of ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180006C44
 * Callers:
 *     ?CreateVisualProxy@CCompositor@@QEAAJPEAPEAVCVisualProxy@@@Z @ 0x180070100 (-CreateVisualProxy@CCompositor@@QEAAJPEAPEAVCVisualProxy@@@Z.c)
 * Callees:
 *     ?Initialize@CVisualProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x180007640 (-Initialize@CVisualProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CVisualProxy@@QEAA@XZ @ 0x180007B28 (--0CVisualProxy@@QEAA@XZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxy<CVisualProxy>(__int64 a1, CBaseObject **a2)
{
  CVisualProxy *v4; // rax
  CMILRefCountBase *v5; // rax
  CBaseObject *v6; // rbx
  CVisualProxy *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi

  *a2 = 0LL;
  v4 = (CVisualProxy *)DefaultHeap::AllocClear(0x20uLL);
  if ( !v4 )
  {
    v6 = 0LL;
    goto LABEL_9;
  }
  *(_OWORD *)v4 = 0LL;
  *((_OWORD *)v4 + 1) = 0LL;
  v5 = CVisualProxy::CVisualProxy(v4);
  v6 = v5;
  if ( !v5 )
  {
LABEL_9:
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Du, 0LL);
    goto LABEL_5;
  }
  CMILRefCountBase::AddRef(v5);
  v8 = CVisualProxy::Initialize(v7, *(struct IDwmChannel **)(a1 + 24));
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x6Fu, 0LL);
  }
  else
  {
    *a2 = v6;
    v9 = 0;
  }
LABEL_5:
  if ( v6 )
    CBaseObject::Release(v6);
  return v9;
}
