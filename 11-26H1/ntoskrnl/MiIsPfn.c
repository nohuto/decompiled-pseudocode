/*
 * XREFs of MiIsPfn @ 0x14042D9E0
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x14095C9CC (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140AEC50C (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x140AEC740 (MiRotateToFrameBuffer.c)
 *     MiReplaceRotateWithDemandZero @ 0x140AECA38 (MiReplaceRotateWithDemandZero.c)
 *     MmRelocatePfnList @ 0x140B6D1F4 (MmRelocatePfnList.c)
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C007C4 (MiAddPostHibernateZeroPagesToBitmap.c)
 *     MiMarkHiberNotCachedPte @ 0x140C00BA0 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140C00D60 (MiMarkNonPagedHiberPhasePte.c)
 *     MiConvertHiberPhasePte @ 0x140C05BC0 (MiConvertHiberPhasePte.c)
 *     MmIsMdlPageLocked @ 0x140C436B4 (MmIsMdlPageLocked.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfn(unsigned __int64 a1)
{
  return a1 <= qword_140E2D7A0 && (*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0;
}
