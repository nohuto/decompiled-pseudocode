/*
 * XREFs of ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180030520
 * Callers:
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180024B8C (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x1800301C4 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EF64 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800AAF14 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDirectTouchVisual@@IEAA@_K@Z @ 0x18003090C (--0CDirectTouchVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180032130 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CDirectTouchVisual>(unsigned __int64 a1, CBaseObject **a2)
{
  CDirectTouchVisual *v4; // rax
  CDirectTouchVisual *v5; // rax
  CBaseObject *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // eax

  if ( !a2 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u, 0LL);
    return v7;
  }
  v4 = (CDirectTouchVisual *)DefaultHeap::AllocClear(0x180uLL);
  if ( v4 )
  {
    v5 = CDirectTouchVisual::CDirectTouchVisual(v4, a1);
    v6 = v5;
    if ( v5 )
    {
      v7 = CDirectTouchVisual::Initialize(v5);
      if ( (v7 & 0x80000000) == 0 )
      {
        *a2 = v6;
        return v7;
      }
      v8 = 63;
      goto LABEL_5;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = -2147024882;
  v8 = 61;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8, 0LL);
  if ( v6 )
    CBaseObject::Release(v6);
  return v7;
}
