/*
 * XREFs of ?FloatColorChannelToByte@@YAEM@Z @ 0x18008D9F0
 * Callers:
 *     DwmpCalculateColorizationColor @ 0x18004EC10 (DwmpCalculateColorizationColor.c)
 * Callees:
 *     ?floor@@YAMM@Z @ 0x180059328 (-floor@@YAMM@Z.c)
 */

__int64 __fastcall FloatColorChannelToByte(float a1)
{
  return (unsigned int)(int)floor((float)(a1 * 255.0) + 0.5);
}
