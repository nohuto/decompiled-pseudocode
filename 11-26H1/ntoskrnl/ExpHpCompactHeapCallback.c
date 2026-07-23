/*
 * XREFs of ExpHpCompactHeapCallback @ 0x140348F70
 * Callers:
 *     ExpPoolCompact @ 0x140348F20 (ExpPoolCompact.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14025019C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpFreeHeap @ 0x140349090 (RtlpHpFreeHeap.c)
 *     RtlpHpHeapCompact @ 0x140349464 (RtlpHpHeapCompact.c)
 *     RtlpDynamicLookasideFlush @ 0x140349D28 (RtlpDynamicLookasideFlush.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1403526A0 (RtlpHpVaMgrCtxQuery.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpHpCompactHeapCallback(__int64 a1)
{
  _QWORD *v3; // rbx
  ULONG_PTR v4; // rdi
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+60h] [rbp+8h]
  int v12; // [rsp+64h] [rbp+Ch]

  if ( *(_QWORD *)(a1 + 56) )
  {
    v3 = (_QWORD *)RtlpDynamicLookasideFlush();
    while ( 1 )
    {
      v4 = (ULONG_PTR)v3;
      if ( !v3 )
        goto LABEL_2;
      v3 = (_QWORD *)*v3;
      v9 = 0LL;
      if ( (_WORD)v4 )
        break;
      v6 = RtlCSparseBitmapBitmaskRead((__int64)&ExpUuidLock.CycleTime, 2 * ((v4 - ExpUuidLock.ThreadLock) >> 20));
      if ( v6 )
      {
        v5 = v6 - 1;
        if ( v5 != 2 )
          goto LABEL_9;
      }
      v9 = 0LL;
      v10 = 0LL;
      RtlpHpVaMgrCtxQuery(&ExpUuidLock.TrapFrame, v4, &v9);
      v8 = *(_QWORD *)v10;
LABEL_10:
      if ( !v8 )
        KeBugCheckEx(0xC2u, 0LL, 0LL, v4, 0LL);
      RtlpHpFreeHeap(v8, v4);
    }
    v5 = 0;
LABEL_9:
    v11 = 0x100000;
    v12 = 0x1000000;
    v7 = (unsigned int)*(&v11 + v5);
    v8 = (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)((v4 & ~(v7 - 1)) + 0x10) ^ v4 & ~(v7 - 1))
       - 192LL * v5
       - 320;
    goto LABEL_10;
  }
LABEL_2:
  RtlpHpHeapCompact(a1);
  return 0LL;
}
