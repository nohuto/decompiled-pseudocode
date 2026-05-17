/*
 * XREFs of RtlpLowFragHeapFlushCaches @ 0x1800175A0
 * Callers:
 *     RtlpFlushHeap @ 0x180016FFC (RtlpFlushHeap.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x180016DF0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLogHeapSubSegmentFree @ 0x180017D3C (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapFreeEvent @ 0x180017DFC (RtlpLogHeapFreeEvent.c)
 *     RtlpFreeUserBlockToHeap @ 0x180017EA0 (RtlpFreeUserBlockToHeap.c)
 *     RtlpFreeUserBlock @ 0x1800181A0 (RtlpFreeUserBlock.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18001B870 (RtlpLocalInfoAllocFromCache.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180038104 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpGetHeapProtection @ 0x18007F750 (RtlpGetHeapProtection.c)
 *     RtlpGetReservedBlockSize @ 0x1800C9730 (RtlpGetReservedBlockSize.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162D10 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180162D50 (RtlpInterlockedFlushSList.c)
 */

struct _PEB *__fastcall RtlpLowFragHeapFlushCaches(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  unsigned int v4; // r12d
  _DWORD *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // edi
  struct _PEB *result; // rax
  __int64 v10; // r12
  struct _PEB *v11; // rsi
  struct _PEB *v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdi
  int v24; // eax
  _QWORD **v25; // rbx
  _QWORD *v26; // r14
  int v27; // r15d
  unsigned int v28; // ebp
  __int64 v29; // rsi
  __int64 v30; // rcx
  char *v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // edx
  unsigned int v34; // r8d
  signed __int32 v35; // esi
  _WORD *v36; // rcx
  __int64 *v37; // r8
  unsigned int v38; // ebp
  signed __int32 v39; // eax
  unsigned __int16 *v40; // r8
  unsigned int i; // r9d
  __int64 v42; // rcx
  volatile signed __int32 *v43; // rdx
  __int64 v44; // rcx
  _QWORD **v45; // rdx
  __int64 j; // r9
  signed __int64 v47; // rdx
  __int64 *v48; // rsi
  volatile signed __int32 *v49; // rdi
  signed __int32 v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rax
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v57; // rcx
  unsigned int HeapProtection; // eax
  int v59; // r8d
  signed __int64 v60; // rcx
  __int64 v61; // rcx
  volatile signed __int32 *v62; // rdx
  _QWORD *v63; // rax
  unsigned int v64; // edx
  __int64 v65; // [rsp+30h] [rbp-68h]
  signed __int64 v66; // [rsp+38h] [rbp-60h]
  unsigned __int64 v67; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v68[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v69; // [rsp+A0h] [rbp+8h]
  __int64 v70; // [rsp+A0h] [rbp+8h]
  unsigned int v71; // [rsp+A8h] [rbp+10h]
  __int64 v72; // [rsp+A8h] [rbp+10h]
  int v73; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v74; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  v65 = 0LL;
  v3 = 0LL;
  v71 = 0;
  v74 = 0LL;
  do
  {
    v4 = 0;
    if ( (*(_BYTE *)(a1 + 4 * v3 + 679) & 1) != 0 )
    {
      v24 = RtlpAffinityState;
      if ( (*(_BYTE *)(a1 + 672) & 1) != 0 )
        v24 = 1;
      v69 = v24;
      if ( !v24 )
        goto LABEL_10;
    }
    else
    {
      v69 = 1;
    }
    do
    {
      if ( v4 )
        v5 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 2224) + 192LL * v4 - 192);
      else
        v5 = *(_DWORD **)(a1 + 8 * v3 + 1192);
      if ( v5 && v5[41] == 1 )
      {
        v20 = RtlpLocalInfoAllocFromCache(v5, v4);
        v23 = v20;
        if ( v20 )
        {
          *(_DWORD *)(*(_QWORD *)v5 + 36LL) = 0;
          if ( *(_WORD *)(a1 + 24) ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v20 + 8) ^ (v20 >> 4))
            || (v25 = *(_QWORD ***)(v20
                                  - ((unsigned __int64)(*(_DWORD *)(a1 + 24) ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v20 + 8) ^ (unsigned int)(v20 >> 4)) >> 12))) == 0LL )
          {
            RtlpLogHeapFailure(3, *(_QWORD *)(a1 + 24), v20, 0, 0LL, 0LL);
          }
          else
          {
            _m_prefetchw(v25);
            v26 = v25[1];
            v27 = 0;
            v28 = (unsigned __int16)(*(_DWORD *)(v20 + 12) >> 8);
            v29 = *(_QWORD *)(**v25 + 24LL);
            v30 = (unsigned int)v29 ^ (unsigned int)v26 ^ *((_DWORD *)v26 + 6) ^ (unsigned int)RtlpLFHKey;
            v31 = (char *)v26 + v28 * WORD1(v30) + (unsigned __int16)v30;
            if ( v31 == (char *)v20 )
            {
              if ( (unsigned int)RtlGetCurrentServiceSessionId(v30, v31, v21, v22) )
                v32 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v32 = 2147353472LL;
              if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v29 + 24), v23 + 16, 2LL, 0LL);
              v33 = 0;
              v34 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
              while ( v33 <= v34 )
              {
                v35 = *((_DWORD *)v25 + 8);
                if ( v35 >= 0
                  && _InterlockedCompareExchange((volatile signed __int32 *)v25 + 8, v35 | 0x80000000, v35) == v35 )
                {
                  goto LABEL_44;
                }
                ++v33;
              }
              v35 = -1;
LABEL_44:
              *(_BYTE *)(v23 + 15) = 0x80;
              v36 = v25 + 2;
              if ( v35 == -1 )
              {
                RtlpInterlockedPushEntrySList(v36, v23 + 16);
              }
              else
              {
                _bittestandreset((signed __int32 *)v26[5], v28);
                if ( *v36 )
                {
                  v63 = (_QWORD *)RtlpInterlockedFlushSList(v36);
                  while ( v63 )
                  {
                    v64 = *((_DWORD *)v63 - 1);
                    ++v27;
                    v63 = (_QWORD *)*v63;
                    v28 = (unsigned __int16)(v64 >> 8);
                    _bittestandreset((signed __int32 *)v26[5], v28);
                  }
                }
                v37 = *v25;
                v38 = v28 << 16;
                if ( ((unsigned __int16)v38 | (unsigned __int16)(v27 + v35 + 1)) != *((_WORD *)v25 + 20)
                  || (j = *((unsigned int *)v37 + 42), v47 = *(unsigned int *)(*v37 + 32), *((_DWORD *)v37 + 41) == 1)
                  && (unsigned int)v47 >= (unsigned int)j
                  && (v47 = (unsigned int)(v47 - j), (unsigned int)v47 < *(_DWORD *)(*v37 + 36)) )
                {
                  *((_DWORD *)v25 + 8) = v38 | (v27 + (unsigned __int16)v35 + 1);
                  if ( (*((_DWORD *)v25 + 11) & 2) == 0 && RtlpIsSubSegmentReuseable((__int64)v37, (__int64)v25) )
                  {
                    while ( 1 )
                    {
                      v39 = *((_DWORD *)v25 + 11);
                      if ( !v39 || (v39 & 2) != 0 )
                        break;
                      if ( v39 == _InterlockedCompareExchange((volatile signed __int32 *)v25 + 11, v39 | 2, v39) )
                      {
                        v40 = (unsigned __int16 *)*v25;
                        for ( i = 0; ; ++i )
                        {
                          if ( i >= 0x10 )
                          {
                            v44 = *(_QWORD *)(*(_QWORD *)(**v25 + 24LL) + 8LL * *((unsigned __int16 *)*v25 + 86) + 1192)
                                + 144LL;
                            goto LABEL_83;
                          }
                          v42 = ((_BYTE)i + (unsigned __int8)v40[87]) & 0xF;
                          v43 = *(volatile signed __int32 **)&v40[4 * v42 + 8];
                          if ( v43 )
                          {
                            if ( (v43[11] & 1) == 0
                              && v43 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                                     (volatile signed __int64 *)&v40[4 * v42 + 8],
                                                                     (signed __int64)v25,
                                                                     (signed __int64)v43) )
                            {
                              _m_prefetchw((const void *)(v43 + 11));
                              if ( _InterlockedAnd(v43 + 11, 0xFFFFFFFD) != 2 )
                                goto LABEL_28;
                              v44 = **(_QWORD **)v43;
                              *(_QWORD *)v43 = 0LL;
                              v45 = (_QWORD **)(v43 + 12);
                              goto LABEL_84;
                            }
                          }
                          else if ( !_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)&v40[4 * v42 + 8],
                                       (signed __int64)v25,
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
                  v48 = *v25;
                  v49 = (volatile signed __int32 *)_InterlockedExchange64(*v25 + 1, 0LL);
                  if ( v49 )
                  {
                    _m_prefetchw((const void *)(v49 + 11));
                    if ( _InterlockedAnd(v49 + 11, 0xFFFFFFF9) == 6 )
                    {
                      v61 = **(_QWORD **)v49;
                      *(_QWORD *)v49 = 0LL;
LABEL_90:
                      v62 = v49 + 12;
LABEL_91:
                      RtlpInterlockedPushEntrySList(v61, v62);
                    }
                    else if ( RtlpIsSubSegmentReuseable((__int64)v48, (__int64)v49) )
                    {
                      while ( 1 )
                      {
                        v50 = *((_DWORD *)v49 + 11);
                        if ( !v50 || (v50 & 2) != 0 )
                          break;
                        if ( v50 == _InterlockedCompareExchange(v49 + 11, v50 | 2, v50) )
                        {
                          v37 = *(__int64 **)v49;
                          for ( j = 0LL; ; j = (unsigned int)(j + 1) )
                          {
                            if ( (unsigned int)j >= 0x10 )
                            {
                              v61 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v49 + 24LL)
                                              + 8LL * *(unsigned __int16 *)(*(_QWORD *)v49 + 172LL)
                                              + 1192)
                                  + 144LL;
                              goto LABEL_90;
                            }
                            v51 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v37 + 87)) & 0xF;
                            v47 = v37[v51 + 2];
                            if ( v47 )
                            {
                              if ( (*(_DWORD *)(v47 + 44) & 1) == 0
                                && v47 == _InterlockedCompareExchange64(&v37[v51 + 2], (signed __int64)v49, v47) )
                              {
                                _m_prefetchw((const void *)(v47 + 44));
                                if ( _InterlockedAnd((volatile signed __int32 *)(v47 + 44), 0xFFFFFFFD) != 2 )
                                  goto LABEL_77;
                                v61 = **(_QWORD **)v47;
                                *(_QWORD *)v47 = 0LL;
                                v62 = (volatile signed __int32 *)(v47 + 48);
                                goto LABEL_91;
                              }
                            }
                            else if ( !_InterlockedCompareExchange64(&v37[v51 + 2], (signed __int64)v49, 0LL) )
                            {
                              goto LABEL_77;
                            }
                          }
                        }
                      }
                    }
                  }
LABEL_77:
                  v52 = *v48;
                  v53 = (__int64)*v25;
                  v54 = *(_QWORD *)(v52 + 24);
                  if ( (*((_BYTE *)v25 + 38) & 3) != 0 )
                  {
                    v55 = (__int64)v25[1] + 4151;
                    v73 = 0;
                    v68[0] = v55 & 0xFFFFFFFFFFFFF000uLL;
                    ReservedBlockSize = RtlpGetReservedBlockSize(v25, v47, v37, j);
                    v57 = *(_QWORD *)(v54 + 24);
                    v67 = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v25 + 20);
                    HeapProtection = RtlpGetHeapProtection(v57, 1LL);
                    ZwProtectVirtualMemory(-1LL, v68, &v67, HeapProtection, &v73);
                  }
                  *((_DWORD *)v25[1] + 5) = 0;
                  RtlpFreeUserBlock(v54, v25[1], v37, j);
                  v59 = -*((unsigned __int16 *)v25 + 20);
                  _m_prefetchw((const void *)(v53 + 160));
                  do
                  {
                    v60 = *(_QWORD *)(v53 + 160);
                    LODWORD(v66) = v60 + v59;
                    HIDWORD(v66) = HIDWORD(v60) - 1;
                  }
                  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 160), v66, v60) != v60 );
                  v25[1] = 0LL;
                  _InterlockedAdd((volatile signed __int32 *)(v54 + 60), 1u);
                  *((_DWORD *)v25 + 8) = 0;
                  _m_prefetchw((char *)v25 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v25 + 11, 0xFFFFFFFE) == 1 )
                  {
                    v44 = **v25;
                    *v25 = 0LL;
LABEL_83:
                    v45 = v25 + 6;
LABEL_84:
                    RtlpInterlockedPushEntrySList(v44, v45);
                  }
                }
              }
            }
            else
            {
              RtlpLogHeapFailure(3, *(_QWORD *)(v29 + 24), v20, 0, 0LL, 0LL);
            }
          }
        }
LABEL_28:
        v3 = v74;
      }
      ++v4;
    }
    while ( v4 < v69 );
    v2 = v71;
LABEL_10:
    ++v2;
    ++v3;
    v71 = v2;
    v74 = v3;
  }
  while ( v2 < 0x81 );
  v6 = a1 + 96;
  v7 = 12LL;
  v70 = a1 + 96;
  v72 = 12LL;
  do
  {
    v8 = 0;
    result = (struct _PEB *)RtlpInterlockedFlushSList(v6);
    v10 = v65;
    v11 = result;
    if ( result )
    {
      do
      {
        v12 = v11;
        v11 = *(struct _PEB **)&v11->InheritedAddressSpace;
        v13 = 1LL << LOBYTE(v12->ImageBaseAddress);
        if ( v13 > 0xF0000 )
          v13 = 983040LL;
        v14 = v13 + WORD1(v12->ImageBaseAddress);
        v10 += v14;
        RtlpFreeUserBlockToHeap(*(_QWORD *)(a1 + 24), v12);
        ++v8;
        result = (struct _PEB *)RtlGetCurrentServiceSessionId(v16, v15, v17, v18);
        if ( (_DWORD)result )
        {
          result = NtCurrentPeb();
          v19 = (__int64)result->SharedData + 550;
        }
        else
        {
          v19 = 2147353472LL;
        }
        if ( *(_BYTE *)v19 )
        {
          result = NtCurrentPeb();
          if ( (result->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v12, v14, 0LL);
            result = (struct _PEB *)RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), (_DWORD)v12, v14, 0, 1);
          }
        }
      }
      while ( v11 );
      v6 = v70;
      v7 = v72;
      v65 = v10;
      if ( v8 )
        _InterlockedAdd((volatile signed __int32 *)(v70 + 16), -v8);
    }
    v6 += 48LL;
    --v7;
    v70 = v6;
    v72 = v7;
  }
  while ( v7 );
  if ( v10 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 72), -v10);
  return result;
}
