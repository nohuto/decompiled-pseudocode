/*
 * XREFs of RtlpHpMetadataAlloc @ 0x18002DB90
 * Callers:
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpFlsHeapAlloc @ 0x180072AB8 (RtlpFlsHeapAlloc.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800A0CF4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpAllocateHeapMetadata @ 0x1800BCC20 (RtlpAllocateHeapMetadata.c)
 *     RtlpHpStackTraceAddStack @ 0x1800BD890 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800E387C (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpHeapAllocate @ 0x1800E6ECC (RtlpHpHeapAllocate.c)
 *     RtlpHpTagRunOnceInit @ 0x180101B10 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1801156A4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x18014F440 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackDbAllocRoutine @ 0x18014F4A0 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014F8A0 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlpHpVsContextAllocate @ 0x18005E3D4 (RtlpHpVsContextAllocate.c)
 *     RtlRunOnceExecuteOnce @ 0x18008F320 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DC7B4 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpSegAlloc @ 0x1800DD93C (RtlpHpSegAlloc.c)
 *     RtlpLogHeapAllocateEvent @ 0x180112C8C (RtlpLogHeapAllocateEvent.c)
 */

__int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int128 v4; // xmm0
  __int64 v5; // rsi
  _RTL_RUN_ONCE *v9; // rbx
  unsigned __int64 Value; // rbx
  __int64 HeapInternal; // rax
  int v13; // ecx
  _QWORD Parameter[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = *a4;
  v5 = 0LL;
  Parameter[0] = *(_QWORD *)a4;
  BYTE3(Parameter[0]) = 0;
  Parameter[1] = 0LL;
  v9 = (_RTL_RUN_ONCE *)&qword_1801CA198[2 * (unsigned int)dword_18017B028[BYTE1(v4)]];
  BYTE1(Parameter[0]) = dword_18017B028[BYTE1(Parameter[0])];
  if ( !v9->Value && RtlRunOnceExecuteOnce(v9 + 1, RtlpHpMetadataHeapCreate, Parameter, 0LL) < 0 )
    return v5;
  Value = v9->Value;
  LODWORD(v15) = 3;
  switch ( a3 )
  {
    case 2:
      HeapInternal = RtlpHpVsContextAllocate(Value + 704, (unsigned int)a2, (unsigned int)a2, 0LL);
LABEL_4:
      v5 = HeapInternal;
      break;
    case 0:
      HeapInternal = RtlpHpAllocateHeapInternal((PVOID)Value, (__int64)&v15);
      goto LABEL_4;
    case 1:
      v13 = 512;
      if ( a1 <= *(unsigned int *)(Value + 336) )
        v13 = 320;
      HeapInternal = RtlpHpSegAlloc((int)Value + v13, a1, a1, a2, a2 < a1 ? 0x2000000 : 0);
      goto LABEL_4;
  }
  if ( *(char *)(Value + 20) < 0 )
    RtlpLogHeapAllocateEvent(Value, v5, a1);
  return v5;
}
