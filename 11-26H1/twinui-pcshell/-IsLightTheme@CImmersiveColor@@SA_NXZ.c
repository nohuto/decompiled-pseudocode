/*
 * XREFs of ?IsLightTheme@CImmersiveColor@@SA_NXZ @ 0x18016DB14
 * Callers:
 *     ?DrawGrabber@GhostDivider@@AEAAXXZ @ 0x18016D968 (-DrawGrabber@GhostDivider@@AEAAXXZ.c)
 *     ?GetColor@GhostDivider@@AEAAKXZ @ 0x1802BB6F8 (-GetColor@GhostDivider@@AEAAKXZ.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18016DB4C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

bool CImmersiveColor::IsLightTheme(void)
{
  __int64 Color; // rax

  Color = CImmersiveColor::GetColor(215LL);
  return (_WORD)Color == 0xFFFF && BYTE2(Color) == 0xFF;
}
