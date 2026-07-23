/*
 * XREFs of MiIsImageFullyRetpolined @ 0x140B214B0
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140B2137C (MiMarkKernelImageRetpolineBits.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     RtlIsImageFullyRetpolined @ 0x1404F9558 (RtlIsImageFullyRetpolined.c)
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
