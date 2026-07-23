/*
 * XREFs of ExIsSpecialPoolAddress @ 0x14047E9E4
 * Callers:
 *     ExReturnPoolQuota @ 0x1402640A0 (ExReturnPoolQuota.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     ExQueryPoolBlockSize @ 0x1406CFFC0 (ExQueryPoolBlockSize.c)
 *     DifpLwSPProcessPostPoolAlloc @ 0x140C491EC (DifpLwSPProcessPostPoolAlloc.c)
 *     ExFreePoolSanityChecks @ 0x140C4946C (ExFreePoolSanityChecks.c)
 *     VfHandlePoolAlloc @ 0x140C4A310 (VfHandlePoolAlloc.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14025019C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1403526A0 (RtlpHpVaMgrCtxQuery.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14047EAB8 (ExpHpIsSpecialPoolHeap.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
         (__int64)&ExpUuidLock.CycleTime,
         2 * ((BugCheckParameter3 - ExpUuidLock.ThreadLock) >> 20));
  if ( v3 )
  {
    v2 = v3 - 1;
    if ( v2 != 2 )
      goto LABEL_5;
  }
  v7 = 0LL;
  v8 = 0LL;
  RtlpHpVaMgrCtxQuery((__int64)&ExpUuidLock.TrapFrame, BugCheckParameter3, (__int64)&v7);
  v5 = *(_QWORD *)v8;
LABEL_6:
  if ( !v5 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  return ExpHpIsSpecialPoolHeap();
}
