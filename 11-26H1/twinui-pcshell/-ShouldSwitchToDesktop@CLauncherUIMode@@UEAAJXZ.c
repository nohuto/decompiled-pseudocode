/*
 * XREFs of ?ShouldSwitchToDesktop@CLauncherUIMode@@UEAAJXZ @ 0x18039C840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CLauncherUIMode::ShouldSwitchToDesktop(CLauncherUIMode *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 96) & 0x40) == 0 )
    return *((_DWORD *)this + 25) == 0;
  return result;
}
