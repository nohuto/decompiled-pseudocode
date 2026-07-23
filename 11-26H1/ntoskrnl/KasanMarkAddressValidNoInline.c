/*
 * XREFs of KasanMarkAddressValidNoInline @ 0x1405257D0
 * Callers:
 *     RtlpHpVsFreeChunkInsert @ 0x14024C3B0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCreate @ 0x14024C60C (RtlpHpVsSubsegmentCreate.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     ExpFreeHeapSpecialPool @ 0x140347BA8 (ExpFreeHeapSpecialPool.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsSubsegmentFree @ 0x140355D68 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14037AAF0 (RtlpHpVsFreeChunkRemove.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     KasanWrapperRtlRestoreContext @ 0x1404777B0 (KasanWrapperRtlRestoreContext.c)
 *     KasanDriverLoadImageInternal @ 0x140525CA0 (KasanDriverLoadImageInternal.c)
 *     KasanDriverUnloadImage @ 0x1405DFDF0 (KasanDriverUnloadImage.c)
 *     KasanHibernationResume @ 0x1405E0060 (KasanHibernationResume.c)
 *     MmFreeIsrStack @ 0x14087C2CC (MmFreeIsrStack.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_BYTE *__fastcall KasanMarkAddressValidNoInline(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  _BYTE *result; // rax
  ULONG_PTR i; // rcx
  int v4; // edx

  if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
    KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3 & 7) != 0 )
    KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
  if ( BugCheckParameter3 + BugCheckParameter4 < BugCheckParameter3 )
    KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, BugCheckParameter4);
  result = (_BYTE *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3));
  for ( i = BugCheckParameter4 >> 3; i; --i )
    *result++ = 0;
  v4 = BugCheckParameter4 & 7;
  if ( v4 )
    *result = v4;
  return result;
}
