/*
 * XREFs of KasanMarkAddressValidNoInline @ 0x140523160
 * Callers:
 *     RtlpHpVsFreeChunkInsert @ 0x14024AA50 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCreate @ 0x14024ACAC (RtlpHpVsSubsegmentCreate.c)
 *     MiUnmapContiguousMemory @ 0x140343628 (MiUnmapContiguousMemory.c)
 *     ExpFreeHeapSpecialPool @ 0x140345B28 (ExpFreeHeapSpecialPool.c)
 *     RtlpHpVsChunkFree @ 0x1403532B0 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsSubsegmentFree @ 0x140353CE8 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x140378D40 (RtlpHpVsFreeChunkRemove.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     MmDeleteKernelStack @ 0x1404162AC (MmDeleteKernelStack.c)
 *     KasanWrapperRtlRestoreContext @ 0x14047DE40 (KasanWrapperRtlRestoreContext.c)
 *     KasanDriverLoadImageInternal @ 0x140523630 (KasanDriverLoadImageInternal.c)
 *     KasanDriverUnloadImage @ 0x1405DD480 (KasanDriverUnloadImage.c)
 *     KasanHibernationResume @ 0x1405DD6F0 (KasanHibernationResume.c)
 *     MmFreeIsrStack @ 0x140875EE8 (MmFreeIsrStack.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
