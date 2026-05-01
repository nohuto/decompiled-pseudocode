/*
 * XREFs of ?GetRuntimeClassName@CJumpViewExperienceEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18038D140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CJumpViewExperienceEventArgs::GetRuntimeClassName(CJumpViewExperienceEventArgs *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.JumpViewExperienceEventArgs", 0x3Du, a2);
}
