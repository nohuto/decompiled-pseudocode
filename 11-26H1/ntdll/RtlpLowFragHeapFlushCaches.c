/*
 * XREFs of RtlpLowFragHeapFlushCaches @ 0x180002680
 * Callers:
 *     RtlpFlushHeap @ 0x1800020DC (RtlpFlushHeap.c)
 * Callees:
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180001DD4 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpGetReservedBlockSize @ 0x180001E90 (RtlpGetReservedBlockSize.c)
 *     RtlpIsSubSegmentReuseable @ 0x180001ED0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLogHeapSubSegmentFree @ 0x180002E1C (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapFreeEvent @ 0x180002EDC (RtlpLogHeapFreeEvent.c)
 *     RtlpFreeUserBlockToHeap @ 0x180002F80 (RtlpFreeUserBlockToHeap.c)
 *     RtlpFreeUserBlock @ 0x180003280 (RtlpFreeUserBlock.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180006940 (RtlpLocalInfoAllocFromCache.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetHeapProtection @ 0x180076AF0 (RtlpGetHeapProtection.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162C10 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180162C50 (RtlpInterlockedFlushSList.c)
 */

int __fastcall RtlpLowFragHeapFlushCaches(__int64 a1, __int64 a2, __int64 a3, __int64 i)
{
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // r12d
  _DWORD *v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // edi
  struct _PEB *v12; // rax
  __int64 v13; // r12
  struct _PEB *v14; // rsi
  __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  int v21; // eax
  _QWORD **v22; // rbx
  _QWORD *v23; // r14
  int v24; // r15d
  unsigned int v25; // ebp
  __int64 v26; // rsi
  unsigned int v27; // ecx
  ULONG CurrentServiceSessionId; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  signed __int32 v32; // esi
  _WORD *v33; // rcx
  unsigned int v34; // ebp
  signed __int32 v35; // eax
  __int64 v36; // rcx
  volatile signed __int32 *v37; // rdx
  __int64 v38; // rcx
  _QWORD **v39; // rdx
  unsigned int v40; // edx
  __int64 *v41; // rsi
  volatile signed __int32 *v42; // rdi
  signed __int32 v43; // eax
  __int64 v44; // rcx
  volatile signed __int32 *v45; // rdx
  __int64 v46; // rax
  unsigned __int16 *v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rax
  unsigned __int16 ReservedBlockSize; // ax
  void *v51; // rcx
  ULONG HeapProtection; // eax
  signed __int64 v53; // rcx
  __int64 v54; // rcx
  volatile signed __int32 *v55; // rdx
  _QWORD *v56; // rax
  unsigned int v57; // edx
  __int64 v59; // [rsp+30h] [rbp-68h]
  signed __int64 v60; // [rsp+38h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v63; // [rsp+A0h] [rbp+8h]
  __int64 v64; // [rsp+A0h] [rbp+8h]
  unsigned int v65; // [rsp+A8h] [rbp+10h]
  __int64 v66; // [rsp+A8h] [rbp+10h]
  ULONG OldProtect; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v68; // [rsp+B8h] [rbp+20h]

  v5 = 0;
  v59 = 0LL;
  v6 = 0LL;
  v65 = 0;
  v68 = 0LL;
  do
  {
    v7 = 0;
    if ( (*(_BYTE *)(a1 + 4 * v6 + 679) & 1) != 0 )
    {
      v21 = RtlpAffinityState;
      if ( (*(_BYTE *)(a1 + 672) & 1) != 0 )
        v21 = 1;
      v63 = v21;
      if ( !v21 )
        goto LABEL_10;
    }
    else
    {
      v63 = 1;
    }
    do
    {
      if ( v7 )
        v8 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v6 + 2224) + 192LL * v7 - 192);
      else
        v8 = *(_DWORD **)(a1 + 8 * v6 + 1192);
      if ( v8 && v8[41] == 1 )
      {
        v19 = RtlpLocalInfoAllocFromCache(v8, v7);
        v20 = v19;
        if ( v19 )
        {
          *(_DWORD *)(*(_QWORD *)v8 + 36LL) = 0;
          if ( *(_WORD *)(a1 + 24) ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v19 + 8) ^ (v19 >> 4))
            || (v22 = *(_QWORD ***)(v19
                                  - ((unsigned __int64)(*(_DWORD *)(a1 + 24) ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v19 + 8) ^ (unsigned int)(v19 >> 4)) >> 12))) == 0LL )
          {
            RtlpLogHeapFailure(3, *(_QWORD *)(a1 + 24), v19, 0, 0LL, 0LL);
          }
          else
          {
            _m_prefetchw(v22);
            v23 = v22[1];
            v24 = 0;
            v25 = (unsigned __int16)(*(_DWORD *)(v19 + 12) >> 8);
            v26 = *(_QWORD *)(**v22 + 24LL);
            v27 = v26 ^ (unsigned int)v23 ^ *((_DWORD *)v23 + 6) ^ RtlpLFHKey;
            if ( (_QWORD *)((char *)v23 + v25 * HIWORD(v27) + (unsigned __int16)v27) == (_QWORD *)v19 )
            {
              CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
              i = 0LL;
              if ( CurrentServiceSessionId )
                v29 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v29 = 2147353472LL;
              if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                RtlpLogHeapFreeEvent(*(_QWORD *)(v26 + 24), v20 + 16, 2LL, 0LL);
                i = 0LL;
              }
              v30 = 0LL;
              v31 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
              while ( (unsigned int)v30 <= (unsigned int)v31 )
              {
                v32 = *((_DWORD *)v22 + 8);
                if ( v32 >= 0
                  && _InterlockedCompareExchange((volatile signed __int32 *)v22 + 8, v32 | 0x80000000, v32) == v32 )
                {
                  goto LABEL_44;
                }
                v30 = (unsigned int)(v30 + 1);
              }
              v32 = -1;
LABEL_44:
              *(_BYTE *)(v20 + 15) = 0x80;
              v33 = v22 + 2;
              if ( v32 == -1 )
              {
                RtlpInterlockedPushEntrySList(v33, v20 + 16, v31, 0LL);
              }
              else
              {
                _bittestandreset((signed __int32 *)v23[5], v25);
                if ( *v33 )
                {
                  v56 = (_QWORD *)RtlpInterlockedFlushSList(v33, v30, v31, 0LL);
                  while ( v56 )
                  {
                    v57 = *((_DWORD *)v56 - 1);
                    ++v24;
                    v56 = (_QWORD *)*v56;
                    v25 = (unsigned __int16)(v57 >> 8);
                    _bittestandreset((signed __int32 *)v23[5], v25);
                  }
                }
                a3 = (__int64)*v22;
                v34 = v25 << 16;
                if ( ((unsigned __int16)v34 | (unsigned __int16)(v24 + v32 + 1)) != *((_WORD *)v22 + 20)
                  || (i = *(unsigned int *)(a3 + 168),
                      v40 = *(_DWORD *)(*(_QWORD *)a3 + 32LL),
                      *(_DWORD *)(a3 + 164) == 1)
                  && v40 >= (unsigned int)i
                  && v40 - (unsigned int)i < *(_DWORD *)(*(_QWORD *)a3 + 36LL) )
                {
                  *((_DWORD *)v22 + 8) = v34 | (v24 + (unsigned __int16)v32 + 1);
                  if ( (*((_DWORD *)v22 + 11) & 2) == 0 && RtlpIsSubSegmentReuseable(a3, (__int64)v22) )
                  {
                    while ( 1 )
                    {
                      v35 = *((_DWORD *)v22 + 11);
                      if ( !v35 || (v35 & 2) != 0 )
                        break;
                      if ( v35 == _InterlockedCompareExchange((volatile signed __int32 *)v22 + 11, v35 | 2, v35) )
                      {
                        a3 = (__int64)*v22;
                        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                        {
                          if ( (unsigned int)i >= 0x10 )
                          {
                            a3 = *((unsigned __int16 *)*v22 + 86);
                            v38 = *(_QWORD *)(*(_QWORD *)(**v22 + 24LL) + 8 * a3 + 1192) + 144LL;
                            goto LABEL_83;
                          }
                          v36 = ((_BYTE)i + (unsigned __int8)*(_WORD *)(a3 + 174)) & 0xF;
                          v37 = *(volatile signed __int32 **)(a3 + 8 * v36 + 16);
                          if ( v37 )
                          {
                            if ( (v37[11] & 1) == 0
                              && v37 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                                     (volatile signed __int64 *)(a3 + 8 * v36 + 16),
                                                                     (signed __int64)v22,
                                                                     (signed __int64)v37) )
                            {
                              _m_prefetchw((const void *)(v37 + 11));
                              if ( _InterlockedAnd(v37 + 11, 0xFFFFFFFD) != 2 )
                                goto LABEL_28;
                              v38 = **(_QWORD **)v37;
                              *(_QWORD *)v37 = 0LL;
                              v39 = (_QWORD **)(v37 + 12);
                              goto LABEL_84;
                            }
                          }
                          else if ( !_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)(a3 + 8 * v36 + 16),
                                       (signed __int64)v22,
                                       0LL) )
                          {
                            goto LABEL_28;
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v41 = *v22;
                  v42 = (volatile signed __int32 *)_InterlockedExchange64(*v22 + 1, 0LL);
                  if ( v42 )
                  {
                    _m_prefetchw((const void *)(v42 + 11));
                    if ( _InterlockedAnd(v42 + 11, 0xFFFFFFF9) == 6 )
                    {
                      v54 = **(_QWORD **)v42;
                      *(_QWORD *)v42 = 0LL;
LABEL_90:
                      v55 = v42 + 12;
LABEL_91:
                      RtlpInterlockedPushEntrySList(v54, v55, a3, i);
                    }
                    else if ( RtlpIsSubSegmentReuseable((__int64)v41, (__int64)v42) )
                    {
                      while ( 1 )
                      {
                        v43 = *((_DWORD *)v42 + 11);
                        if ( !v43 || (v43 & 2) != 0 )
                          break;
                        if ( v43 == _InterlockedCompareExchange(v42 + 11, v43 | 2, v43) )
                        {
                          a3 = *(_QWORD *)v42;
                          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                          {
                            if ( (unsigned int)i >= 0x10 )
                            {
                              a3 = *(unsigned __int16 *)(*(_QWORD *)v42 + 172LL);
                              v54 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v42 + 24LL) + 8 * a3 + 1192) + 144LL;
                              goto LABEL_90;
                            }
                            v44 = ((_BYTE)i + (unsigned __int8)*(_WORD *)(a3 + 174)) & 0xF;
                            v45 = *(volatile signed __int32 **)(a3 + 8 * v44 + 16);
                            if ( v45 )
                            {
                              if ( (v45[11] & 1) == 0
                                && v45 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                                       (volatile signed __int64 *)(a3 + 8 * v44 + 16),
                                                                       (signed __int64)v42,
                                                                       (signed __int64)v45) )
                              {
                                _m_prefetchw((const void *)(v45 + 11));
                                if ( _InterlockedAnd(v45 + 11, 0xFFFFFFFD) != 2 )
                                  goto LABEL_77;
                                v54 = **(_QWORD **)v45;
                                *(_QWORD *)v45 = 0LL;
                                v55 = v45 + 12;
                                goto LABEL_91;
                              }
                            }
                            else if ( !_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)(a3 + 8 * v44 + 16),
                                         (signed __int64)v42,
                                         0LL) )
                            {
                              goto LABEL_77;
                            }
                          }
                        }
                      }
                    }
                  }
LABEL_77:
                  v46 = *v41;
                  v47 = (unsigned __int16 *)*v22;
                  v48 = *(_QWORD *)(v46 + 24);
                  if ( (*((_BYTE *)v22 + 38) & 3) != 0 )
                  {
                    v49 = (__int64)v22[1] + 4151;
                    OldProtect = 0;
                    BaseAddress = (PVOID)(v49 & 0xFFFFFFFFFFFFF000uLL);
                    ReservedBlockSize = RtlpGetReservedBlockSize((__int64)v22);
                    v51 = *(void **)(v48 + 24);
                    RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v22 + 20);
                    HeapProtection = RtlpGetHeapProtection(v51);
                    ZwProtectVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      &BaseAddress,
                      &RegionSize,
                      HeapProtection,
                      &OldProtect);
                  }
                  *((_DWORD *)v22[1] + 5) = 0;
                  RtlpFreeUserBlock(v48, v22[1], a3, i);
                  a3 = (unsigned int)-*((unsigned __int16 *)v22 + 20);
                  _m_prefetchw(v47 + 80);
                  do
                  {
                    v53 = *((_QWORD *)v47 + 20);
                    LODWORD(v60) = v53 + a3;
                    HIDWORD(v60) = HIDWORD(v53) - 1;
                  }
                  while ( _InterlockedCompareExchange64((volatile signed __int64 *)v47 + 20, v60, v53) != v53 );
                  v22[1] = 0LL;
                  _InterlockedAdd((volatile signed __int32 *)(v48 + 60), 1u);
                  *((_DWORD *)v22 + 8) = 0;
                  _m_prefetchw((char *)v22 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v22 + 11, 0xFFFFFFFE) == 1 )
                  {
                    v38 = **v22;
                    *v22 = 0LL;
LABEL_83:
                    v39 = v22 + 6;
LABEL_84:
                    RtlpInterlockedPushEntrySList(v38, v39, a3, i);
                  }
                }
              }
            }
            else
            {
              RtlpLogHeapFailure(3, *(_QWORD *)(v26 + 24), v19, 0, 0LL, 0LL);
            }
          }
        }
LABEL_28:
        v6 = v68;
      }
      ++v7;
    }
    while ( v7 < v63 );
    v5 = v65;
LABEL_10:
    ++v5;
    ++v6;
    v65 = v5;
    v68 = v6;
  }
  while ( v5 < 0x81 );
  v9 = a1 + 96;
  v10 = 12LL;
  v64 = a1 + 96;
  v66 = 12LL;
  do
  {
    v11 = 0;
    v12 = (struct _PEB *)RtlpInterlockedFlushSList(v9, v6, a3, i);
    v13 = v59;
    v14 = v12;
    if ( v12 )
    {
      do
      {
        v15 = (__int64)v14;
        v14 = *(struct _PEB **)&v14->InheritedAddressSpace;
        v16 = 1LL << *(_BYTE *)(v15 + 16);
        if ( v16 > 0xF0000 )
          v16 = 983040LL;
        v17 = v16 + *(unsigned __int16 *)(v15 + 18);
        v13 += v17;
        RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), (PVOID)v15);
        ++v11;
        LODWORD(v12) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v12 )
        {
          v12 = NtCurrentPeb();
          v18 = (__int64)v12->SharedData + 550;
        }
        else
        {
          v18 = 2147353472LL;
        }
        if ( *(_BYTE *)v18 )
        {
          v12 = NtCurrentPeb();
          if ( (v12->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
            LODWORD(v12) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v15, v17, 0, 1);
          }
        }
      }
      while ( v14 );
      v9 = v64;
      v10 = v66;
      v59 = v13;
      if ( v11 )
        _InterlockedAdd((volatile signed __int32 *)(v64 + 16), -v11);
    }
    v9 += 48LL;
    --v10;
    v64 = v9;
    v66 = v10;
  }
  while ( v10 );
  if ( v13 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 72), -v13);
  return (int)v12;
}
