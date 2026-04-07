/*
 * XREFs of ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18008A690
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180070CC0 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTouchDragVisual::UpdateShowContact(__int64 a1, int a2)
{
  float v2; // xmm0_4

  *(_DWORD *)(a1 + 416) = a2;
  if ( (a2 & 4) != 0 )
    v2 = *(float *)(a1 + 272);
  else
    v2 = 0.0;
  CVisual::SetOpacity((CVisual *)a1, v2);
}
