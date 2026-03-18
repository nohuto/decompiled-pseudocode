/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x14024E83C
 * Callers:
 *     MmBuildMdlForNonPagedPool @ 0x14024C4E0 (MmBuildMdlForNonPagedPool.c)
 *     MiUpdateNonPagedPoolNoSteal @ 0x14024E3BC (MiUpdateNonPagedPoolNoSteal.c)
 *     ExFreeHeapPages @ 0x140346358 (ExFreeHeapPages.c)
 *     ExpHpCompactHeapCallback @ 0x140346EF0 (ExpHpCompactHeapCallback.c)
 *     RtlpHpFreeHeap @ 0x140347010 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataFree @ 0x1403524BC (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x140352630 (RtlpHpAllocateHeapSlow.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     ExIsSpecialPoolAddress @ 0x140485074 (ExIsSpecialPoolAddress.c)
 *     RtlpHpMetadataCommit @ 0x1404DF41C (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x140637FB0 (RtlpHpExtrasSetPresent.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140C109D0 (ExpAllocatePoolWithQuotaTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    v2 = (_bittest64(*(const signed __int64 **)a1, a2 >> 15) != 0) + 1;
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> a2) & 3LL;
  else
    return 0LL;
}
