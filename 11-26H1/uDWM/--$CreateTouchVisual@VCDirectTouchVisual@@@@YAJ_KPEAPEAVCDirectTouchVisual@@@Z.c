/*
 * XREFs of ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800060D4
 * Callers:
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180005D94 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18005F274 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800A9128 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x1800034E0 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ??0CDirectTouchVisual@@IEAA@_K@Z @ 0x180005C90 (--0CDirectTouchVisual@@IEAA@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CContainerVisual@@KAPEAX_K@Z @ 0x180085CD8 (--2CContainerVisual@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CDirectTouchVisual>(unsigned __int64 a1, CBaseObject **a2)
{
  CDirectTouchVisual *v4; // rax
  struct tagSIZE *v5; // rax
  CBaseObject *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // eax

  if ( !a2 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x3Cu, 0LL);
    return v7;
  }
  v4 = (CDirectTouchVisual *)CContainerVisual::operator new(0x160uLL);
  if ( !v4 )
  {
    v6 = 0LL;
    goto LABEL_7;
  }
  v5 = (struct tagSIZE *)CDirectTouchVisual::CDirectTouchVisual(v4, a1);
  v6 = (CBaseObject *)v5;
  if ( !v5 )
  {
LABEL_7:
    v7 = -2147024882;
    v8 = 64;
    goto LABEL_8;
  }
  v7 = CDirectTouchVisual::Initialize(v5);
  if ( (v7 & 0x80000000) == 0 )
  {
    *a2 = v6;
    return v7;
  }
  v8 = 66;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v8, 0LL);
  if ( v6 )
    CBaseObject::Release(v6);
  return v7;
}
