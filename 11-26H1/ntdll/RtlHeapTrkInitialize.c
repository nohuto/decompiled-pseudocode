/*
 * XREFs of RtlHeapTrkInitialize @ 0x180110640
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x18006D090 (RtlDestroyHeap.c)
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 *     RtlRandomEx @ 0x18008F0D0 (RtlRandomEx.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x180110A94 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlSetHeapInformation @ 0x180110BC0 (RtlSetHeapInformation.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x18015F460 (NtQueryPerformanceCounter.c)
 */

NTSTATUS __fastcall RtlHeapTrkInitialize(void *a1)
{
  NTSTATUS result; // eax
  _WORD *v3; // rdi
  __int64 v4; // rsi
  void *Heap; // rax
  char *Heap_0; // rax
  char *v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r10
  char *v10; // r8
  __int64 v11; // r9
  char *v12; // rax
  _QWORD *v13; // rax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-29h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+58h] [rbp-21h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v18; // [rsp+78h] [rbp-1h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  __int64 (__fastcall *v20)(__int64, __int64, unsigned __int64, const void *); // [rsp+90h] [rbp+17h]
  ULONG Seed; // [rsp+E0h] [rbp+67h] BYREF
  int HeapInformation; // [rsp+E8h] [rbp+6Fh] BYREF
  PVOID BaseAddress; // [rsp+F0h] [rbp+77h] BYREF
  LARGE_INTEGER v24; // [rsp+F8h] [rbp+7Fh] BYREF

  ViewSize = 0x10000LL;
  PerformanceCounter.QuadPart = 0LL;
  BaseAddress = 0LL;
  SectionOffset.QuadPart = 0LL;
  if ( SectionHandle )
    return -1073741823;
  if ( !a1
    || ZwMapViewOfSection(
         a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewShare,
         0,
         4u) < 0 )
  {
    return -1073741811;
  }
  if ( *(_QWORD *)BaseAddress < 0x400uLL )
    return -1073741789;
  if ( *((_DWORD *)BaseAddress + 13) > 0x40u
    || *((_DWORD *)BaseAddress + 14) > 2u
    || !*((_QWORD *)BaseAddress + 1)
    || *((_QWORD *)BaseAddress + 1) == -1LL
    || !*((_QWORD *)BaseAddress + 2)
    || *((_QWORD *)BaseAddress + 2) == -1LL
    || !*((_QWORD *)BaseAddress + 3)
    || *((_QWORD *)BaseAddress + 3) == -1LL )
  {
    return -1073741811;
  }
  result = NtQueryPerformanceCounter(&PerformanceCounter, &PerformanceFrequency);
  if ( result >= 0 )
  {
    if ( PerformanceFrequency.QuadPart )
    {
      dword_1801C6290 = *((_DWORD *)BaseAddress + 14);
      v24.QuadPart = 0LL;
      NtQueryPerformanceCounter(&v24, 0LL);
      v3 = &unk_1801C6818;
      Seed = v24.LowPart;
      v4 = 8LL;
      do
      {
        *v3++ = RtlRandomEx(&Seed) % 0x1EEF;
        --v4;
      }
      while ( v4 );
      Heap = (void *)RtlpCreateHeap(
                       *((_DWORD *)BaseAddress + 13) == 0 ? 2 : 0,
                       0LL,
                       (unsigned int)(*((_DWORD *)BaseAddress + 13) << 20),
                       0LL,
                       0LL,
                       0LL,
                       0);
      HeapHandle = Heap;
      if ( Heap )
      {
        HeapInformation = 2;
        RtlSetHeapInformation(Heap, HeapCompatibilityInformation, &HeapInformation, 4uLL);
        dword_1801C67E0 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801C6830, &qword_1801C6800, 32LL) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801C67C8, &qword_1801C67D0, 8LL) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801C67E8, &qword_1801C67C0, 8LL) )
            {
              qword_1801C6280 = (__int64)RtlAllocateHeap_0(HeapHandle, 0, 0x1EEF0uLL);
              if ( qword_1801C6280 )
              {
                Heap_0 = (char *)RtlAllocateHeap_0(HeapHandle, 0, 0x1EEF0uLL);
                qword_1801C6288 = (__int64)Heap_0;
                v7 = Heap_0;
                if ( Heap_0 )
                {
                  v8 = (_QWORD *)qword_1801C6280;
                  SectionHandle = a1;
                  v9 = qword_1801C6280 - (_QWORD)Heap_0;
                  dword_1801C620C = 0;
                  v10 = &Heap_0[-qword_1801C6280];
                  v11 = 7919LL;
                  do
                  {
                    v12 = (char *)v8 + (_QWORD)v10;
                    *v8 = v8;
                    *(_QWORD *)&v12[v9 + 8] = v8;
                    *((_QWORD *)v12 + 1) = v7;
                    v13 = (_QWORD *)((char *)v8 + (_QWORD)v10);
                    v8 += 2;
                    *v13 = v13;
                    v7 += 16;
                    --v11;
                  }
                  while ( v11 );
                  v17[0] = RtlpHeapTrkInterceptor;
                  v19 = 0LL;
                  dword_1801CBFEC = 0;
                  v20 = RtlpHeapTrkLeakCallback;
                  *((_QWORD *)&xmmword_1801CC000 + 1) = RtlpHeapTrkLeakCallback;
                  *(_QWORD *)&xmmword_1801CC000 = 0LL;
                  v18 = 0LL;
                  v17[1] = 0LL;
                  *((_QWORD *)&xmmword_1801CBFF0 + 1) = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
                  LODWORD(xmmword_1801CBFF0) = _mm_cvtsi128_si32((__m128i)0LL);
                  RtlpEnumProcessHeaps(
                    (__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpSetHeapDebuggingInformation,
                    (__int64)v17,
                    0);
                  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                  return 0;
                }
              }
            }
          }
        }
        RtlDestroyHeap(HeapHandle);
        HeapHandle = 0LL;
        qword_1801C6800 = 0LL;
        qword_1801C6280 = 0LL;
        qword_1801C67C8 = 0LL;
        qword_1801C67D0 = 0LL;
        qword_1801C6288 = 0LL;
        qword_1801C67E8 = 0LL;
        qword_1801C67C0 = 0LL;
        if ( BaseAddress )
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        if ( SectionHandle )
        {
          NtClose(SectionHandle);
          SectionHandle = 0LL;
        }
      }
    }
    return -1073741823;
  }
  return result;
}
