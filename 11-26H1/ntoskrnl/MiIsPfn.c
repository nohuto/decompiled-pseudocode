/*
 * XREFs of MiIsPfn @ 0x14041A8F0
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140AEF51C (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x140AEF750 (MiRotateToFrameBuffer.c)
 *     MiReplaceRotateWithDemandZero @ 0x140AEFA48 (MiReplaceRotateWithDemandZero.c)
 *     MmRelocatePfnList @ 0x140B705C4 (MmRelocatePfnList.c)
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C069D4 (MiAddPostHibernateZeroPagesToBitmap.c)
 *     MiMarkHiberNotCachedPte @ 0x140C06DB0 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140C06F70 (MiMarkNonPagedHiberPhasePte.c)
 *     MiConvertHiberPhasePte @ 0x140C0BDD0 (MiConvertHiberPhasePte.c)
 *     MmIsMdlPageLocked @ 0x140C496C4 (MmIsMdlPageLocked.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfn(unsigned __int64 a1)
{
  return a1 <= qword_140E2D920 && (*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0;
}
