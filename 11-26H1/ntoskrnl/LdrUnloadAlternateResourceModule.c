/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x1404B272C
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x1404B2744 (LdrUnloadAlternateResourceModuleEx.c)
 */

__int64 __fastcall LdrUnloadAlternateResourceModule(__int64 a1)
{
  return LdrUnloadAlternateResourceModuleEx(a1);
}
