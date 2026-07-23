/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x1404ABC3C
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x1404ABC54 (LdrUnloadAlternateResourceModuleEx.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModule(PVOID DllHandle)
{
  ULONG v1; // edx

  return LdrUnloadAlternateResourceModuleEx(DllHandle, v1);
}
