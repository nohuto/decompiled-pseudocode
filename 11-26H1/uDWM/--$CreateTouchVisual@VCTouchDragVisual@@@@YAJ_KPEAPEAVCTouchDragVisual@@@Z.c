/*
 * XREFs of ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800734BC
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x180083220 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x180087620 (--0CTouchDragVisual@@IEAA@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateTouchVisual<CTouchDragVisual>(unsigned __int64 a1, CBaseObject **a2)
{
  CTouchDragVisual *v4; // rax
  CTouchDragVisual *v5; // rax
  CBaseObject *v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x3Cu, 0LL);
    return v7;
  }
  v4 = (CTouchDragVisual *)DefaultHeap::AllocClear(0x1A8uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CTouchDragVisual::CTouchDragVisual(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = CTouchDragVisual::Initialize(v5);
    if ( (v7 & 0x80000000) == 0 )
    {
      *a2 = v6;
      return v7;
    }
    v8 = 66;
  }
  else
  {
    v7 = -2147024882;
    v8 = 64;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8, 0LL);
  if ( v6 )
    CBaseObject::Release(v6);
  return v7;
}
