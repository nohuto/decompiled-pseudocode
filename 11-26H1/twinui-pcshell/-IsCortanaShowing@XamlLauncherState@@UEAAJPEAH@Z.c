/*
 * XREFs of ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x180181A80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180181AF0 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 */

__int64 __fastcall XamlLauncherState::IsCortanaShowing(XamlLauncherState *this, int *a2)
{
  *a2 = XamlLauncherState::IsCortanaVisible((XamlLauncherState *)((char *)this - 8));
  return 0LL;
}
