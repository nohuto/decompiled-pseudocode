/*
 * XREFs of ?v_PushBoundsToAppView@UwpWindowWrapper@@EEAAXXZ @ 0x1801F6690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowWrapper::v_PushBoundsToAppView(UwpWindowWrapper *this)
{
  UwpWindowWrapper::PushBoundsToAppView((__int64)this - 8, *((_DWORD *)this + 74));
}
