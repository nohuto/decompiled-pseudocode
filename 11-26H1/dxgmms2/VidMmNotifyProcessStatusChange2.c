/*
 * XREFs of VidMmNotifyProcessStatusChange2 @ 0x1400A67A0
 * Callers:
 *     <none>
 * Callees:
 *     UpdateProcessStatusBudgetingInfo @ 0x1400A6654 (UpdateProcessStatusBudgetingInfo.c)
 */

void __fastcall VidMmNotifyProcessStatusChange2(DXGPROCESS *a1)
{
  UpdateProcessStatusBudgetingInfo(a1);
}
