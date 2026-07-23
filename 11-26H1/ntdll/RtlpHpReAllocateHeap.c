/*
 * XREFs of RtlpHpReAllocateHeap @ 0x180080D58
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeReAlloc @ 0x1800710A8 (RtlpHpLargeReAlloc.c)
 *     RtlpHpReAllocateHeapSlow @ 0x180080A04 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpReallocComputeSizes @ 0x1800811E0 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSegReAlloc @ 0x18008159C (RtlpHpSegReAlloc.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x180121080 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpReAllocateHeap(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD *v6; // rcx
  __int64 HeapSlow; // rbx
  unsigned int v8; // edi
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h]
  unsigned __int64 v18; // [rsp+50h] [rbp-18h]

  v6 = (_DWORD *)(a1 + 20);
  HeapSlow = a3;
  __writegsqword(0x250u, (unsigned __int64)v6);
  v8 = (a2 | *v6) & 0x10003FFA;
  if ( ((a2 | *v6) & 0x3FF8) != 0 )
  {
    if ( (((unsigned __int8)a2 | *(_BYTE *)v6) & 0x10) != 0 )
    {
      v15 = *(unsigned int *)(a1 + 224);
      if ( (_DWORD)v15 != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
        RtlpHpEnvAcquireGlobalLockSharedContended(v6, v8, v15);
    }
    HeapSlow = RtlpHpReAllocateHeapSlow(a1, v8, (char *)HeapSlow, a4);
  }
  else
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    {
      HeapSlow = 0LL;
      goto LABEL_13;
    }
    if ( !(unsigned int)RtlpHpReallocComputeSizes(a1, a3, a4, v8, (__int64)&v16) || v18 < a4 )
    {
      HeapSlow = -1LL;
      goto LABEL_13;
    }
    if ( (_QWORD)v16 != a4 )
    {
      v9 = v8 & 0x10003000;
      if ( (_WORD)HeapSlow )
      {
        v10 = 0;
      }
      else
      {
        v14 = RtlCSparseBitmapBitmaskRead(
                (__int64)&BaseAddress,
                2 * ((unsigned __int64)(HeapSlow - qword_1801C6908) >> 20));
        if ( !v14 || (v10 = v14 - 1, v10 == 2) )
        {
          v11 = RtlpHpLargeReAlloc((_RTL_SRWLOCK *)a1, v9, (char *)HeapSlow, (__int64)&v16);
LABEL_9:
          HeapSlow = v11;
          if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v12 = *((_QWORD *)&v17 + 1);
            if ( (v8 & 2) != 0 && *((_QWORD *)&v17 + 1) > (unsigned __int64)v16 )
              memset_thunk_772440563353939046((void *)(v16 + v11), 0, *((_QWORD *)&v17 + 1) - v16);
            if ( (v8 & 0x2000) != 0 )
              *(__m128i *)(v12 + HeapSlow) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
          }
          goto LABEL_13;
        }
      }
      v11 = RtlpHpSegReAlloc(a1 + 192LL * v10 + 320, v9, HeapSlow, &v16);
      goto LABEL_9;
    }
  }
LABEL_13:
  __writegsqword(0x250u, 0LL);
  return HeapSlow;
}
