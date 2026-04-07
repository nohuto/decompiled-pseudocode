/*
 * XREFs of ??$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x1800746F4
 * Callers:
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x180029568 (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 * Callees:
 *     ??0CVisualProxy@@QEAA@XZ @ 0x180007B28 (--0CVisualProxy@@QEAA@XZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CRedirectVisualProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800747CC (-Initialize@CRedirectVisualProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CCompositor::CreateProxy<CRedirectVisualProxy>(__int64 a1, CMILRefCountBase **a2)
{
  CMILRefCountBase *v4; // rax
  CMILRefCountBase *v5; // rbx
  CRedirectVisualProxy *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi

  *a2 = 0LL;
  v4 = (CMILRefCountBase *)DefaultHeap::AllocClear(0x20uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_OWORD *)v4 + 1) = 0LL;
    CVisualProxy::CVisualProxy(v4);
    *(_QWORD *)v5 = &CRedirectVisualProxy::`vftable';
    CMILRefCountBase::AddRef(v5);
    v7 = CRedirectVisualProxy::Initialize(v6, *(struct IDwmChannel **)(a1 + 24));
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x6Fu, 0LL);
    }
    else
    {
      *a2 = v5;
      v8 = 0;
    }
  }
  else
  {
    v5 = 0LL;
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x6Du, 0LL);
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v8;
}
