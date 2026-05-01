/*
 * XREFs of ?GetModifierKeyState@ElementHelpers@@YA?AW4ModifierKeys@@XZ @ 0x1804CC9DC
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804BC260 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 ElementHelpers::GetModifierKeyState()
{
  int *v0; // rbx
  unsigned int v1; // edi

  v0 = (int *)&unk_1807B2B20;
  v1 = 0;
  do
  {
    if ( GetKeyState(*v0) < 0 )
      v1 |= v0[1];
    v0 += 2;
  }
  while ( v0 != (int *)&unk_1807B2B48 );
  return v1;
}
