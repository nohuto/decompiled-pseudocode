/*
 * XREFs of ?ShouldShowDownloadUI@CLauncherUIMode@@UEAAJXZ @ 0x18039C820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CLauncherUIMode::ShouldShowDownloadUI(CLauncherUIMode *this)
{
  return (*((_DWORD *)this + 18) & 4) == 0;
}
