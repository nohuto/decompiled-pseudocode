/*
 * XREFs of ??1CLockedInputSpace@@QEAA@XZ @ 0x1401397B0
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1401E07D0 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockedInputSpace::~CLockedInputSpace(PERESOURCE **this)
{
  ExReleaseResourceAndLeaveCriticalRegion(*this[1]);
}
