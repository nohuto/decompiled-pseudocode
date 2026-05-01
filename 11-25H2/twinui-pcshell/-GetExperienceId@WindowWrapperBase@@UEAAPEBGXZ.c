/*
 * XREFs of ?GetExperienceId@WindowWrapperBase@@UEAAPEBGXZ @ 0x180223B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall WindowWrapperBase::GetExperienceId(HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[37], 0LL);
}
