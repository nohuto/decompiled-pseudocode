/*
 * XREFs of ?GetExperienceId@UwpWindowWrapperBase@@UEAAPEBGXZ @ 0x180222AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall UwpWindowWrapperBase::GetExperienceId(HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[38], 0LL);
}
