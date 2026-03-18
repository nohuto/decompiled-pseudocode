/*
 * XREFs of MiIsImageFullyRetpolined @ 0x140B1F430
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140B1F2FC (MiMarkKernelImageRetpolineBits.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     RtlIsImageFullyRetpolined @ 0x1404FFD68 (RtlIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiIsImageFullyRetpolined(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 112) )
    return (*(_DWORD *)(*(_QWORD *)((*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 96) & 0xFFFFFFFFFFFFFFF8uLL)
                                  + 32)
                      + 72LL) >> 5) & 1;
  else
    return RtlIsImageFullyRetpolined(*(_QWORD *)(a1 + 48));
}
