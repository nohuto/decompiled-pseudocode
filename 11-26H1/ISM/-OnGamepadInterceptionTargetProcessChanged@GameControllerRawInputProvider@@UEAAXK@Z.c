/*
 * XREFs of ?OnGamepadInterceptionTargetProcessChanged@GameControllerRawInputProvider@@UEAAXK@Z @ 0x1800CDB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GameControllerRawInputProvider::OnGamepadInterceptionTargetProcessChanged(
        GameControllerRawInputProvider *this,
        int a2)
{
  GameControllerRawInputProvider *v2; // rcx

  v2 = (GameControllerRawInputProvider *)((char *)this - 24);
  *((_DWORD *)v2 + 42) = a2;
  GameControllerRawInputProvider::UpdateFocusPids(v2);
}
