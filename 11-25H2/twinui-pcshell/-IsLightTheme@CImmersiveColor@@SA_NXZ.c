/*
 * XREFs of ?IsLightTheme@CImmersiveColor@@SA_NXZ @ 0x180158B54
 * Callers:
 *     ?DrawGrabber@GhostDivider@@AEAAXXZ @ 0x1801589A8 (-DrawGrabber@GhostDivider@@AEAAXXZ.c)
 *     ?GetColor@GhostDivider@@AEAAKXZ @ 0x1802C4740 (-GetColor@GhostDivider@@AEAAKXZ.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180158B8C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

bool CImmersiveColor::IsLightTheme(void)
{
  __int64 Color; // rax

  Color = CImmersiveColor::GetColor(215LL);
  return (_WORD)Color == 0xFFFF && BYTE2(Color) == 0xFF;
}
