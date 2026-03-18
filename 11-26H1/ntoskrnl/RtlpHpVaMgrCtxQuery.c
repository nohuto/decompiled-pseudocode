/*
 * XREFs of RtlpHpVaMgrCtxQuery @ 0x140350620
 * Callers:
 *     ExpHpCompactHeapCallback @ 0x140346EF0 (ExpHpCompactHeapCallback.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14034FC34 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x14034FD98 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegSegmentInitialize @ 0x1403503FC (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpLargeAlloc @ 0x140351D9C (RtlpHpLargeAlloc.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     ExIsSpecialPoolAddress @ 0x140485074 (ExIsSpecialPoolAddress.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1404AC7C4 (RtlpHpSegMgrVaCtxFree.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140C109D0 (ExpAllocatePoolWithQuotaTag.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x140350720 (RtlCSparseBitmapFindBitSetCapped.c)
 *     RtlpLogHeapFailure @ 0x140521C9C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxQuery(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax

  v4 = a2;
  v6 = (unsigned __int64)(a2 - *(_QWORD *)(a1 + 8)) >> 20;
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 32, 8 * (v6 << *(_DWORD *)(a1 + 24)), 8 * (1LL << *(_DWORD *)(a1 + 24))) == -1
    || (v7 = (v6 << *(_DWORD *)(a1 + 24)) + *(_QWORD *)(a1 + 40)) == 0 )
  {
    RtlpLogHeapFailure(22, v4, 0, 0, 0LL, 0LL);
    return 3221225473LL;
  }
  else
  {
    *(_DWORD *)(a3 + 28) = 0;
    if ( (*(_BYTE *)v7 & 4) != 0 )
      v8 = *(_QWORD *)(v7 + 24);
    else
      v8 = *(unsigned __int16 *)(v7 + 24);
    *(_QWORD *)a3 = v8 << 20;
    v9 = *(unsigned __int8 *)(v7 + 1) + 45LL;
    *(_DWORD *)(a3 + 24) = 16;
    *(_DWORD *)(a3 + 8) = (*(unsigned __int8 *)(a1 + 48 * v9 + 46) >> 1) & 7;
    *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a1 + 48 * v9 + 45);
    *(_QWORD *)(a3 + 16) = v7 + 8;
    return 0LL;
  }
}
