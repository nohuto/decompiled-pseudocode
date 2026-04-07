/*
 * XREFs of ?GetLuminosityOpacity@TaskbarAcrylic@@YANK@Z @ 0x18006D4A4
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800945D0 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

double __fastcall TaskbarAcrylic::GetLuminosityOpacity(TaskbarAcrylic *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ecx

  v1 = BYTE2(this) + 5 * BYTE1(this) + 2 * (unsigned __int8)this;
  if ( (_BYTE)this == BYTE1(this) && BYTE1(this) == BYTE2(this) )
  {
    v3 = (unsigned int)this & 0xFFFFFF;
    if ( v1 > 0x400 )
    {
      if ( v3 == 16579836 )
        return DOUBLE_0_85;
      return DOUBLE_0_9;
    }
    return DOUBLE_0_96;
  }
  else
  {
    if ( v1 > 0x400 )
      return DOUBLE_0_9;
    return DOUBLE_0_8;
  }
}
