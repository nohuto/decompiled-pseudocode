/*
 * XREFs of RtlHeapTrkInitialize @ 0x180110AB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlRandomEx @ 0x18006EC80 (RtlRandomEx.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x180110F04 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlSetHeapInformation @ 0x180111030 (RtlSetHeapInformation.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x18015F560 (NtQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlHeapTrkInitialize(void *a1)
{
  __int64 result; // rax
  _WORD *v3; // rdi
  __int64 v4; // rsi
  __int64 Heap; // rax
  __int64 v6; // rdx
  __int64 Heap_0; // rax
  _QWORD *v8; // rcx
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // [rsp+50h] [rbp-29h] BYREF
  __int64 v15; // [rsp+58h] [rbp-21h] BYREF
  __int64 v16; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v18; // [rsp+78h] [rbp-1h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  __int64 (__fastcall *v20)(__int64, __int64, unsigned __int64, const void *); // [rsp+90h] [rbp+17h]
  __int32 v21; // [rsp+E0h] [rbp+67h] BYREF
  int v22; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+F8h] [rbp+7Fh] BYREF

  v14 = 0x10000LL;
  v16 = 0LL;
  v23 = 0LL;
  v15 = 0LL;
  if ( Handle )
    return 3221225473LL;
  if ( !a1 || (int)ZwMapViewOfSection(a1, -1LL, &v23, 0LL, 0LL, &v15, &v14, 1, 0, 4) < 0 )
    return 3221225485LL;
  if ( *(_QWORD *)v23 < 0x400uLL )
    return 3221225507LL;
  if ( *(_DWORD *)(v23 + 52) > 0x40u
    || *(_DWORD *)(v23 + 56) > 2u
    || !*(_QWORD *)(v23 + 8)
    || *(_QWORD *)(v23 + 8) == -1LL
    || !*(_QWORD *)(v23 + 16)
    || *(_QWORD *)(v23 + 16) == -1LL
    || !*(_QWORD *)(v23 + 24)
    || *(_QWORD *)(v23 + 24) == -1LL )
  {
    return 3221225485LL;
  }
  result = NtQueryPerformanceCounter(&v16, &qword_1801C77D0);
  if ( (int)result >= 0 )
  {
    if ( qword_1801C77D0 )
    {
      dword_1801C7290 = *(_DWORD *)(v23 + 56);
      v24 = 0LL;
      NtQueryPerformanceCounter(&v24, 0LL);
      v3 = &unk_1801C77B8;
      v21 = v24;
      v4 = 8LL;
      do
      {
        *v3++ = (unsigned int)RtlRandomEx(&v21) % 0x1EEF;
        --v4;
      }
      while ( v4 );
      Heap = RtlpCreateHeap(
               *(_DWORD *)(v23 + 52) == 0 ? 2 : 0,
               0LL,
               (unsigned int)(*(_DWORD *)(v23 + 52) << 20),
               0LL,
               0LL,
               0LL,
               0);
      qword_1801C7798 = Heap;
      if ( Heap )
      {
        v22 = 2;
        RtlSetHeapInformation(Heap, 0LL, &v22);
        dword_1801C7790 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801C77E0, &qword_1801C77A8, 32LL) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801C7778, &qword_1801C7780, 8LL) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801C77A0, &qword_1801C7770, 8LL) )
            {
              qword_1801C7280 = RtlAllocateHeap_0();
              if ( qword_1801C7280 )
              {
                Heap_0 = RtlAllocateHeap_0();
                qword_1801C7288 = Heap_0;
                v6 = Heap_0;
                if ( Heap_0 )
                {
                  v8 = (_QWORD *)qword_1801C7280;
                  Handle = a1;
                  v9 = qword_1801C7280 - Heap_0;
                  dword_1801C720C = 0;
                  v10 = Heap_0 - qword_1801C7280;
                  v11 = 7919LL;
                  do
                  {
                    v12 = (char *)v8 + v10;
                    *v8 = v8;
                    *(_QWORD *)&v12[v9 + 8] = v8;
                    *((_QWORD *)v12 + 1) = v6;
                    v13 = (_QWORD *)((char *)v8 + v10);
                    v8 += 2;
                    *v13 = v13;
                    v6 += 16LL;
                    --v11;
                  }
                  while ( v11 );
                  v17[0] = RtlpHeapTrkInterceptor;
                  v19 = 0LL;
                  HIDWORD(RtlpDefaultHeapDebuggingOptions) = 0;
                  v20 = RtlpHeapTrkLeakCallback;
                  *((_QWORD *)&xmmword_1801CCFC0 + 1) = RtlpHeapTrkLeakCallback;
                  *(_QWORD *)&xmmword_1801CCFC0 = 0LL;
                  v18 = 0LL;
                  v17[1] = 0LL;
                  *((_QWORD *)&xmmword_1801CCFB0 + 1) = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
                  LODWORD(xmmword_1801CCFB0) = _mm_cvtsi128_si32((__m128i)0LL);
                  RtlpEnumProcessHeaps(
                    (__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpSetHeapDebuggingInformation,
                    (__int64)v17,
                    0);
                  NtUnmapViewOfSection(-1LL, v23);
                  return 0LL;
                }
              }
            }
          }
        }
        RtlDestroyHeap(qword_1801C7798, v6);
        qword_1801C7798 = 0LL;
        qword_1801C77A8 = 0LL;
        qword_1801C7280 = 0LL;
        qword_1801C7778 = 0LL;
        qword_1801C7780 = 0LL;
        qword_1801C7288 = 0LL;
        qword_1801C77A0 = 0LL;
        qword_1801C7770 = 0LL;
        if ( v23 )
          NtUnmapViewOfSection(-1LL, v23);
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0LL;
        }
      }
    }
    return 3221225473LL;
  }
  return result;
}
