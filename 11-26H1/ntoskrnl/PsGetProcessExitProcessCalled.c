/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x1404A6B80
 * Callers:
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140C3D1D0 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 4) != 0;
}
