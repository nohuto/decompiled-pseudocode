/*
 * XREFs of ?MapToChildNavDir@ElementHelpers@@YAII@Z @ 0x1804C6B68
 * Callers:
 *     ?KeyDown@CSwitchItemGrid@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804C69C0 (-KeyDown@CSwitchItemGrid@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804CDF70 (-KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 * Callees:
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 */

__int64 __fastcall ElementHelpers::MapToChildNavDir(ElementHelpers *this)
{
  switch ( (_DWORD)this )
  {
    case 1:
      goto LABEL_7;
    case 2:
      goto LABEL_11;
    case 3:
      LODWORD(this) = 8 - ((unsigned int)Mirror_IsThreadRTL() != 0);
      return (unsigned int)this;
    case 4:
      LODWORD(this) = ((unsigned int)Mirror_IsThreadRTL() != 0) + 7;
      return (unsigned int)this;
    case 5:
LABEL_11:
      LODWORD(this) = 7;
      return (unsigned int)this;
    case 6:
LABEL_7:
      LODWORD(this) = 8;
      break;
  }
  return (unsigned int)this;
}
