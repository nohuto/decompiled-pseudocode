/*
 * XREFs of ?PushBoundsDuringActivationRequested@UwpWindowWrapper@@UEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180143BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowWrapper::PushBoundsDuringActivationRequested(__int64 a1)
{
  return UwpWindowWrapper::PushBoundsToAppView(a1 - 24);
}
