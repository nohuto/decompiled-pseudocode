/*
 * XREFs of ?GetCurrentThemeForOverrides@ImmersiveContextMenuHelper@@YAPEAXPEAUHWND__@@W4ImmersiveContextMenuOptions@@_N@Z @ 0x1806877E8
 * Callers:
 *     ?OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveContextMenuOptions@@@Z @ 0x180687A70 (-OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveCont.c)
 * Callees:
 *     <none>
 */

HTHEME __fastcall ImmersiveContextMenuHelper::GetCurrentThemeForOverrides(HWND a1, char a2)
{
  char v2; // bp
  const wchar_t *v3; // rdi
  const WCHAR *v4; // rbx
  const WCHAR *v6; // rdx
  HTHEME result; // rax
  HWND Parent; // rax

  v2 = byte_1808DDD69;
  v3 = L"LightMode_ImmersiveStart::Menu";
  v4 = L"DarkMode_ImmersiveStart::Menu";
  if ( (a2 & 8) == 0 )
    v3 = L"ImmersiveStart::Menu";
  v6 = L"DarkMode_ImmersiveStart::Menu";
  if ( !byte_1808DDD69 )
    v6 = v3;
  result = OpenThemeData(a1, v6);
  if ( !result )
  {
    if ( !v2 )
      v4 = v3;
    Parent = GetParent(a1);
    return OpenThemeData(Parent, v4);
  }
  return result;
}
