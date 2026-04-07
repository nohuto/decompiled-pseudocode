/*
 * XREFs of ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x18006B278
 * Callers:
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z @ 0x1800E012C (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z @ 0x18006B34C (--0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z.c)
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x18006B438 (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CMagnifierControl::Create(struct CVisual *a1, struct CVisual *a2, struct CMagnifierControl **a3)
{
  CMagnifierControl *v6; // rax
  CMagnifierControl *v7; // rax
  struct CMagnifierControl *v8; // rdi
  unsigned int v9; // ebx
  int v11; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (CMagnifierControl *)DefaultHeap::AllocClear(0xC0uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v7 = CMagnifierControl::CMagnifierControl(v6, a1, a2);
  v8 = v7;
  if ( v7 )
  {
    v11 = CMagnifierControl::Initialize(v7);
    v9 = v11;
    if ( v11 >= 0 )
    {
      *a3 = v8;
      CBaseObject::AddRef(v8);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x5Bu, 0LL);
    }
    CBaseObject::Release(v8);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x59u, 0LL);
  }
  return v9;
}
