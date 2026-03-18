/*
 * XREFs of ExIsSpecialPoolAddress @ 0x140485074
 * Callers:
 *     ExReturnPoolQuota @ 0x140264B30 (ExReturnPoolQuota.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     ExQueryPoolBlockSize @ 0x1406CBF90 (ExQueryPoolBlockSize.c)
 *     DifpLwSPProcessPostPoolAlloc @ 0x140C431DC (DifpLwSPProcessPostPoolAlloc.c)
 *     ExFreePoolSanityChecks @ 0x140C4345C (ExFreePoolSanityChecks.c)
 *     VfHandlePoolAlloc @ 0x140C44300 (VfHandlePoolAlloc.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14024E83C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVaMgrCtxQuery @ 0x140350620 (RtlpHpVaMgrCtxQuery.c)
 *     ExpHpIsSpecialPoolHeap @ 0x140485148 (ExpHpIsSpecialPoolHeap.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rcx
  ULONG_PTR v5; // rcx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+60h] [rbp+8h]
  int v10; // [rsp+64h] [rbp+Ch]

  if ( (_WORD)BugCheckParameter3 )
  {
    v2 = 0;
LABEL_5:
    v9 = 0x100000;
    v10 = 0x1000000;
    v4 = (unsigned int)*(&v9 + v2);
    v5 = (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)((BugCheckParameter3 & -v4) + 0x10) ^ BugCheckParameter3 & -v4)
       - 192LL * v2
       - 320;
    goto LABEL_6;
  }
  v3 = RtlCSparseBitmapBitmaskRead(
         (__int64)&ExpUuidLock.ThreadLock,
         2 * ((BugCheckParameter3 - (unsigned __int64)ExpUuidLock.StackBase) >> 20));
  if ( v3 )
  {
    v2 = v3 - 1;
    if ( v2 != 2 )
      goto LABEL_5;
  }
  v7 = 0LL;
  v8 = 0LL;
  RtlpHpVaMgrCtxQuery((__int64)&ExpUuidLock.FirstArgument, BugCheckParameter3, (__int64)&v7);
  v5 = *(_QWORD *)v8;
LABEL_6:
  if ( !v5 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  return ExpHpIsSpecialPoolHeap();
}
