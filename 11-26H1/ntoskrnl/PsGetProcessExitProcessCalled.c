/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x1404A0210
 * Callers:
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140C431E0 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 4) != 0;
}
