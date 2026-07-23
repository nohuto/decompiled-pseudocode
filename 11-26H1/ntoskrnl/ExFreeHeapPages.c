/*
 * XREFs of ExFreeHeapPages @ 0x1403483D8
 * Callers:
 *     ExGetBigPoolInfo @ 0x140348148 (ExGetBigPoolInfo.c)
 *     ExPoolCleanupExpansionTable @ 0x140524D04 (ExPoolCleanupExpansionTable.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14025019C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpFreeHeap @ 0x140349090 (RtlpHpFreeHeap.c)
 *     RtlpHpQueryVA @ 0x140352540 (RtlpHpQueryVA.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 ExFreeHeapPages(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, ...)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG_PTR v8; // rcx
  char v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  if ( (_WORD)BugCheckParameter3 )
  {
    v4 = 0;
LABEL_5:
    v11 = 0x100000000100000LL;
    v7 = *((unsigned int *)va + v4);
    v8 = (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)((BugCheckParameter3 & ~(v7 - 1)) + 0x10) ^ BugCheckParameter3 & ~(v7 - 1))
       - 192LL * v4
       - 320;
    goto LABEL_6;
  }
  v5 = RtlCSparseBitmapBitmaskRead(
         (__int64)&ExpUuidLock.CycleTime,
         2 * ((BugCheckParameter3 - ExpUuidLock.ThreadLock) >> 20));
  if ( v5 )
  {
    v4 = v5 - 1;
    if ( v4 != 2 )
      goto LABEL_5;
  }
  v11 = 0LL;
  RtlpHpQueryVA(BugCheckParameter3, v6, (__int64 *)va, &v10);
  v8 = *(_QWORD *)v11;
LABEL_6:
  if ( !v8 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  return RtlpHpFreeHeap(v8, BugCheckParameter3);
}
