/*
 * XREFs of RtlpHpMetadataAlloc @ 0x180043620
 * Callers:
 *     RtlpHpLargeAlloc @ 0x18008A18C (RtlpHpLargeAlloc.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x18008D4B8 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpHeapAllocate @ 0x18008D814 (RtlpHpHeapAllocate.c)
 *     RtlpFlsHeapAlloc @ 0x1800937F8 (RtlpFlsHeapAlloc.c)
 *     RtlpAllocateHeapMetadata @ 0x180094660 (RtlpAllocateHeapMetadata.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800A1BC4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpStackTraceAddStack @ 0x1800C0100 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpTagRunOnceInit @ 0x1801023C0 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180115EC4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x18014F590 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackDbAllocRoutine @ 0x18014F5F0 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014F9F0 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlpHpVsContextAllocate @ 0x180012CA4 (RtlpHpVsContextAllocate.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DF844 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpSegAlloc @ 0x1800E0094 (RtlpHpSegAlloc.c)
 *     RtlpLogHeapAllocateEvent @ 0x1801131DC (RtlpLogHeapAllocateEvent.c)
 */

__int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int128 v4; // xmm0
  __int64 v5; // rsi
  __int64 *v9; // rbx
  __int64 v10; // rbx
  __int64 HeapInternal; // rax
  int v13; // ecx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = *a4;
  v5 = 0LL;
  v14[0] = *(_QWORD *)a4;
  BYTE3(v14[0]) = 0;
  v14[1] = 0LL;
  v9 = &qword_1801CB148[2 * (unsigned int)dword_18017C068[BYTE1(v4)]];
  BYTE1(v14[0]) = dword_18017C068[BYTE1(v14[0])];
  if ( !*v9 && (int)RtlRunOnceExecuteOnce(v9 + 1, RtlpHpMetadataHeapCreate, v14, 0LL) < 0 )
    return v5;
  v10 = *v9;
  v15 = 3;
  switch ( a3 )
  {
    case 2:
      HeapInternal = RtlpHpVsContextAllocate((_BYTE *)(v10 + 704), a2, a2, 0);
LABEL_4:
      v5 = HeapInternal;
      break;
    case 0:
      HeapInternal = RtlpHpAllocateHeapInternal(v10, a1, a1, 0, (__int64)&v15);
      goto LABEL_4;
    case 1:
      v13 = 512;
      if ( a1 <= *(unsigned int *)(v10 + 336) )
        v13 = 320;
      HeapInternal = RtlpHpSegAlloc((int)v10 + v13, a1, a1, a2, a2 < a1 ? 0x2000000 : 0);
      goto LABEL_4;
  }
  if ( *(char *)(v10 + 20) < 0 )
    RtlpLogHeapAllocateEvent(v10, v5, a1);
  return v5;
}
