/*
 * XREFs of ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x18002BAA0
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x18002B970 (--0CTouchDragVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x180032090 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CTouchDragVisual>(unsigned __int64 a1, CBaseObject **a2)
{
  CTouchDragVisual *v4; // rax
  CTouchDragVisual *v5; // rax
  CBaseObject *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // eax

  if ( !a2 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u, 0LL);
    return v7;
  }
  v4 = (CTouchDragVisual *)DefaultHeap::AllocClear(0x1A8uLL);
  if ( !v4 )
  {
    v6 = 0LL;
    goto LABEL_7;
  }
  v5 = CTouchDragVisual::CTouchDragVisual(v4, a1);
  v6 = v5;
  if ( !v5 )
  {
LABEL_7:
    v7 = -2147024882;
    v8 = 61;
    goto LABEL_8;
  }
  v7 = CTouchDragVisual::Initialize(v5);
  if ( (v7 & 0x80000000) == 0 )
  {
    *a2 = v6;
    return v7;
  }
  v8 = 63;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8, 0LL);
  if ( v6 )
    CBaseObject::Release(v6);
  return v7;
}
