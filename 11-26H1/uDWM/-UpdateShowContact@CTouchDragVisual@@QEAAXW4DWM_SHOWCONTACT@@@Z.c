/*
 * XREFs of ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x1800796A4
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18005EA9C (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTouchDragVisual::UpdateShowContact(CVisual *a1, char a2, __int64 a3)
{
  float v3; // xmm0_4

  if ( (a2 & 4) != 0 )
    v3 = FLOAT_1_0;
  else
    v3 = 0.0;
  CVisual::SetOpacity(a1, v3, a3);
}
