/*
 * XREFs of ?ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z @ 0x180180E8C
 * Callers:
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18018020C (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180180B1C (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ControllerProcessor::ValidateBounds(struct tagRECT *a1)
{
  return a1->top < a1->bottom && a1->left < a1->right;
}
