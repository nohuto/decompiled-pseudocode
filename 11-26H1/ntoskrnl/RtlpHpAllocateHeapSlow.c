/*
 * XREFs of RtlpHpAllocateHeapSlow @ 0x1403546B4
 * Callers:
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14025019C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpCallInterceptRoutine @ 0x14035492C (RtlpCallInterceptRoutine.c)
 *     RtlpHpCalculateAllocSize @ 0x140354980 (RtlpHpCalculateAllocSize.c)
 *     RtlpHpExtrasAppend @ 0x1403549B4 (RtlpHpExtrasAppend.c)
 *     RtlpHpSegFreeInternal @ 0x140354B48 (RtlpHpSegFreeInternal.c)
 *     RtlpHpLfhContextFree @ 0x140355DF0 (RtlpHpLfhContextFree.c)
 *     RtlpHpLargeFree @ 0x14035645C (RtlpHpLargeFree.c)
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpLogHeapAllocateEvent @ 0x140530058 (RtlpLogHeapAllocateEvent.c)
 */

__int64 __fastcall RtlpHpAllocateHeapSlow(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebp
  unsigned int v5; // esi
  int v8; // eax
  int v9; // r9d
  __int64 HeapInternal; // rbx
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // ecx
  __int64 v15; // r10
  __int64 v16; // r10
  __int64 v17; // r8
  char v18; // cl
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r11
  __int64 v21; // rdx
  __int64 v23; // rax
  unsigned int v24; // [rsp+60h] [rbp+18h] BYREF
  __int64 v25; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v24 = 0;
  v4 = 0;
  v25 = 0LL;
  v5 = a3;
  if ( (a3 & 0x20) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( v4 )
    {
      v5 = a3 | 8;
      if ( (int)RtlpCallInterceptRoutine(v4, a1, 0, 1, (__int64)&v25) < 0 )
        return 0LL;
      v3 = v25;
    }
  }
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v8 = RtlpHpCalculateAllocSize(v3 + a2, v5, a3, v5 & 0x10003002);
  HeapInternal = RtlpHpAllocateHeapInternal(a1, a2, v8, v9, (__int64)&v24);
  if ( HeapInternal )
  {
    if ( (v5 & 0x20002F08) != 0 )
    {
      v12 = RtlpHpExtrasAppend(a1, HeapInternal, a2, v11, v25, v5);
      if ( v4 )
      {
        v13 = v12 + 16;
        *(_BYTE *)(v12 + 2) ^= (v4 ^ *(_BYTE *)(v12 + 2)) & 0xF;
        if ( (int)RtlpCallInterceptRoutine(v4, a1, HeapInternal, 2, v12 + 16) < 0 )
        {
          RtlpCallInterceptRoutine(v4, a1, HeapInternal, 3, v13);
          if ( (_WORD)HeapInternal )
          {
            v14 = 0;
LABEL_9:
            v15 = 512LL;
            if ( v14 != 1 )
              v15 = 320LL;
            v16 = a1 + v15;
            v17 = *(_QWORD *)v16 & HeapInternal;
            if ( (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)(v17 + 0x10) ^ v17) == v16 )
            {
              v18 = *(_BYTE *)(v16 + 8);
              v19 = v17 + 32 * ((unsigned __int64)(unsigned int)(HeapInternal - v17) >> v18);
              v20 = v19 - 32LL * *(unsigned __int8 *)(v19 + 26);
              v21 = v17 + ((unsigned int)((__int64)(v20 - v17) >> 5) << v18);
              if ( *(_BYTE *)(v20 + 24) + (v21 == HeapInternal) == 11 )
                RtlpHpLfhContextFree(*(_QWORD *)(v16 + 24), v21, HeapInternal);
              else
                RtlpHpSegFreeInternal(v16, HeapInternal, v20, 0LL);
            }
            else
            {
              RtlpLogHeapFailure(9, *(_QWORD *)(v16 + 56), HeapInternal, 0, 0LL, 0LL);
            }
            return 0LL;
          }
          v23 = RtlCSparseBitmapBitmaskRead(
                  (__int64)&ExpUuidLock.CycleTime,
                  2 * ((HeapInternal - ExpUuidLock.ThreadLock) >> 20));
          if ( v23 )
          {
            v14 = v23 - 1;
            if ( (_DWORD)v23 != 3 )
              goto LABEL_9;
          }
          RtlpHpLargeFree(a1, HeapInternal);
          return 0LL;
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 20) & 0x80u) != 0 )
      RtlpLogHeapAllocateEvent(a1, HeapInternal, a2, v24);
  }
  return HeapInternal;
}
