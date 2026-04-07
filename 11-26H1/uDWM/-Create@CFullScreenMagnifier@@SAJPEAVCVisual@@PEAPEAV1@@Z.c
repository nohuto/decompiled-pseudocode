/*
 * XREFs of ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18006B4E0
 * Callers:
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x18006B438 (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z @ 0x18006B5A8 (--0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z.c)
 *     ?Initialize@CFullScreenMagnifier@@AEAAJXZ @ 0x1800774C8 (-Initialize@CFullScreenMagnifier@@AEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CFullScreenMagnifier::Create(struct CVisual *a1, struct CFullScreenMagnifier **a2)
{
  CFullScreenMagnifier *v4; // rax
  CFullScreenMagnifier *v5; // rax
  struct CFullScreenMagnifier *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CFullScreenMagnifier *)DefaultHeap::AllocClear(0x100uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CFullScreenMagnifier::CFullScreenMagnifier(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    v8 = CFullScreenMagnifier::Initialize(v5);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x5Au, 0LL);
    }
    else
    {
      *a2 = v6;
      CBaseObject::AddRef(v6);
    }
    CBaseObject::Release(v6);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x58u, 0LL);
  }
  return v7;
}
