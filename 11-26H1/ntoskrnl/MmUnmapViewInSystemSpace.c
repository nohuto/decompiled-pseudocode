/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x140AE2510
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DCBD0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404A7338 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1404B2744 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpMapResourceFile @ 0x140618490 (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x1406CD094 (ExpDeleteSiloState.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  MiRemoveFromSystemSpace((ULONG_PTR)MappedBase);
  return 0;
}
