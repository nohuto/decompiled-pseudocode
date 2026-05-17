/*
 * XREFs of RtlpHpReAllocateHeapSlow @ 0x1800B0E90
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x1800B11E4 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpExtrasGet @ 0x1800192E0 (RtlpHpExtrasGet.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18001A070 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpCallInterceptRoutine @ 0x18001C570 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x18002BA50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800895B0 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpLargeReAlloc @ 0x180089604 (RtlpHpLargeReAlloc.c)
 *     RtlpHpReallocComputeSizes @ 0x1800B1670 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSegReAlloc @ 0x1800B1A2C (RtlpHpSegReAlloc.c)
 *     RtlpLogHeapReallocateEvent @ 0x1800B26EC (RtlpLogHeapReallocateEvent.c)
 *     RtlpHpStackTraceAddStack @ 0x1800C0100 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x1801212E4 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpReAllocateHeapSlow(__m128i *a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v4; // r12d
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  int v20; // edi
  __int64 v21; // rdx
  void *UniqueThread; // r8
  __m128i v23; // [rsp+30h] [rbp-50h]
  int v24; // [rsp+40h] [rbp-40h]
  __int128 v25; // [rsp+50h] [rbp-30h] BYREF
  __m128i v26; // [rsp+60h] [rbp-20h]
  unsigned __int64 v27; // [rsp+70h] [rbp-10h]

  v4 = 0;
  if ( a1[1].m128i_i32[2] )
  {
    v19 = RtlpHpExtrasGet((__int64)a1, a3, a2, 0LL);
    if ( v19 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v4 = *(_BYTE *)(v19 + 2) & 0xF;
      if ( (*(_BYTE *)(v19 + 2) & 0xF) != 0 )
      {
        __writegsqword(0x250u, 0LL);
        v20 = RtlpCallInterceptRoutine(v4, (__int64)a1, a3, 5);
        __writegsqword(0x250u, (unsigned __int64)a1[1].m128i_u64 + 4);
        v21 = a1[1].m128i_u32[1];
        if ( (v21 & 0x10) != 0 )
        {
          UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
          if ( a1[14].m128i_i32[0] != (_DWORD)UniqueThread )
            RtlpHpEnvAcquireGlobalLockSharedContended((char *)a1[1].m128i_i64 + 4, v21, UniqueThread);
        }
        if ( v20 < 0 )
          return -1LL;
      }
    }
  }
  v27 = 0LL;
  v24 = 0;
  v23 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v12 = 0LL;
  }
  else if ( (unsigned int)RtlpHpReallocComputeSizes((_DWORD)a1, a3, a4, a2, (__int64)&v25) && v27 >= a4 )
  {
    if ( (_QWORD)v25 != a4 )
    {
      v9 = a2 & 0x10003000;
      if ( (_WORD)a3 )
      {
        v10 = 0;
      }
      else
      {
        v15 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801C78C0, 2 * ((a3 - qword_1801C78B8) >> 20));
        if ( !v15 || (v10 = v15 - 1, v10 == 2) )
        {
          v11 = RtlpHpLargeReAlloc(a1, v9, a3, (__int64)&v25);
LABEL_9:
          v12 = v11;
          if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v13 = v26.m128i_i64[1];
            if ( (a2 & 2) != 0 && v26.m128i_i64[1] > (unsigned __int64)v25 )
              memset_thunk_772440563353939046((void *)(v25 + v11), 0, v26.m128i_i64[1] - v25);
            if ( (a2 & 0x2000) != 0 )
              *(__m128i *)(v13 + v12) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
            v24 = v25;
            v23 = v26;
          }
          goto LABEL_14;
        }
      }
      v11 = RtlpHpSegReAlloc(&a1[12 * v10 + 20], v9, a3, &v25);
      goto LABEL_9;
    }
    v12 = a3;
  }
  else
  {
    v12 = -1LL;
  }
LABEL_14:
  if ( v4 )
  {
    v16 = a3;
    if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v16 = v12;
    RtlpHpExtrasGet((__int64)a1, v16, a2, 0LL);
    __writegsqword(0x250u, 0LL);
    RtlpCallInterceptRoutine(v4, (__int64)a1, v16, 6);
    __writegsqword(0x250u, (unsigned __int64)a1[1].m128i_u64 + 4);
    v17 = a1[1].m128i_u32[1];
    if ( (v17 & 0x10) != 0 )
    {
      v18 = a1[14].m128i_u32[0];
      if ( (_DWORD)v18 != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
        RtlpHpEnvAcquireGlobalLockSharedContended((char *)a1[1].m128i_i64 + 4, v17, v18);
    }
  }
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( RtlpHpStackLoggingEnabled((__int64)a1) )
    {
      RtlpHpStackTraceRemoveStack((__int64)a1, a3);
      RtlpHpStackTraceAddStack(a1, v12);
    }
    if ( a1[1].m128i_i8[4] < 0 )
      RtlpLogHeapReallocateEvent((_DWORD)a1, v12, a3, v24, _mm_srli_si128(v23, 8).m128i_i64[0], 3);
  }
  return v12;
}
