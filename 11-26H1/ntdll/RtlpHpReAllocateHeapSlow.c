/*
 * XREFs of RtlpHpReAllocateHeapSlow @ 0x180080A04
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180080D58 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpExtrasGet @ 0x1800043C0 (RtlpHpExtrasGet.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpCallInterceptRoutine @ 0x180007640 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180016B50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpLargeReAlloc @ 0x1800710A8 (RtlpHpLargeReAlloc.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800809B0 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpReallocComputeSizes @ 0x1800811E0 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSegReAlloc @ 0x18008159C (RtlpHpSegReAlloc.c)
 *     RtlpLogHeapReallocateEvent @ 0x18008225C (RtlpLogHeapReallocateEvent.c)
 *     RtlpHpStackTraceAddStack @ 0x1800BD890 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x180121080 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpReAllocateHeapSlow(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  int v4; // r12d
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  int v21; // edi
  __int64 v22; // rdx
  void *UniqueThread; // r8
  __m128i v24; // [rsp+30h] [rbp-50h]
  int v25; // [rsp+40h] [rbp-40h]
  __int128 v26; // [rsp+50h] [rbp-30h] BYREF
  __m128i v27; // [rsp+60h] [rbp-20h]
  unsigned __int64 v28; // [rsp+70h] [rbp-10h]

  v4 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v20 = RtlpHpExtrasGet((_RTL_SRWLOCK *)a1, (unsigned __int64)a3, a2, 0LL);
    if ( v20 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v4 = *(_BYTE *)(v20 + 2) & 0xF;
      if ( (*(_BYTE *)(v20 + 2) & 0xF) != 0 )
      {
        __writegsqword(0x250u, 0LL);
        v21 = RtlpCallInterceptRoutine(v4, a1, (__int64)a3, 5u, v20 + 16);
        __writegsqword(0x250u, a1 + 20);
        v22 = *(unsigned int *)(a1 + 20);
        if ( (v22 & 0x10) != 0 )
        {
          UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
          if ( *(_DWORD *)(a1 + 224) != (_DWORD)UniqueThread )
            RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v22, UniqueThread);
        }
        if ( v21 < 0 )
          return -1LL;
      }
    }
  }
  v28 = 0LL;
  v25 = 0;
  v24 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v12 = 0LL;
  }
  else if ( (unsigned int)RtlpHpReallocComputeSizes(a1, (_DWORD)a3, a4, a2, (__int64)&v26) && v28 >= a4 )
  {
    if ( (_QWORD)v26 != a4 )
    {
      v9 = a2 & 0x10003000;
      if ( (_WORD)a3 )
      {
        v10 = 0;
      }
      else
      {
        v15 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)&a3[-qword_1801C6908] >> 20));
        if ( !v15 || (v10 = v15 - 1, v10 == 2) )
        {
          v11 = RtlpHpLargeReAlloc((_RTL_SRWLOCK *)a1, v9, a3, (__int64)&v26);
LABEL_9:
          v12 = v11;
          if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v13 = v27.m128i_i64[1];
            if ( (a2 & 2) != 0 && v27.m128i_i64[1] > (unsigned __int64)v26 )
              memset_thunk_772440563353939046((void *)(v26 + v11), 0, v27.m128i_i64[1] - v26);
            if ( (a2 & 0x2000) != 0 )
              *(__m128i *)(v13 + v12) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
            v25 = v26;
            v24 = v27;
          }
          goto LABEL_14;
        }
      }
      v11 = RtlpHpSegReAlloc(a1 + 192LL * v10 + 320, v9, a3, &v26);
      goto LABEL_9;
    }
    v12 = (__int64)a3;
  }
  else
  {
    v12 = -1LL;
  }
LABEL_14:
  if ( v4 )
  {
    v16 = (unsigned __int64)a3;
    if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v16 = v12;
    v17 = RtlpHpExtrasGet((_RTL_SRWLOCK *)a1, v16, a2, 0LL);
    __writegsqword(0x250u, 0LL);
    RtlpCallInterceptRoutine(v4, a1, v16, 6u, v17 + 16);
    __writegsqword(0x250u, a1 + 20);
    v18 = *(unsigned int *)(a1 + 20);
    if ( (v18 & 0x10) != 0 )
    {
      v19 = *(unsigned int *)(a1 + 224);
      if ( (_DWORD)v19 != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
        RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v18, v19);
    }
  }
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( RtlpHpStackLoggingEnabled(a1) )
    {
      RtlpHpStackTraceRemoveStack(a1, (__int64)a3);
      RtlpHpStackTraceAddStack(a1, v12);
    }
    if ( *(char *)(a1 + 20) < 0 )
      RtlpLogHeapReallocateEvent(a1, v12, (_DWORD)a3, v25, _mm_srli_si128(v24, 8).m128i_i64[0], 3);
  }
  return v12;
}
