/*
 * XREFs of RtlpFreeNTHeapInternal @ 0x1800036C0
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x180004680 (RtlpHpTagFreeHeap.c)
 *     RtlFreeHeapFast @ 0x18013FFE0 (RtlFreeHeapFast.c)
 *     RtlFreeHeapFull @ 0x1801400A0 (RtlFreeHeapFull.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x180002EDC (RtlpLogHeapFreeEvent.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x1800030D0 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpValidateLFHBlock @ 0x180003210 (RtlpValidateLFHBlock.c)
 *     RtlpFreeUserBlock @ 0x180003280 (RtlpFreeUserBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x180004150 (RtlpProbeUserBufferSafe.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpCallInterceptRoutine @ 0x180007640 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x180007840 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180016B50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162C10 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180162C50 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpFreeNTHeapInternal(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // r13d
  int v5; // r14d
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 **v11; // rdi
  __int64 *v12; // r15
  int v13; // r12d
  unsigned int v14; // ebp
  __int64 v15; // r10
  unsigned int v16; // eax
  __int64 v17; // r14
  _DWORD *SharedData; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  signed __int32 v22; // ebx
  _WORD *v23; // rcx
  unsigned __int16 v24; // r8
  unsigned __int16 *v25; // rdx
  unsigned int v26; // ebp
  int v27; // eax
  char v28; // r8
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  _DWORD *v31; // rcx
  signed __int32 v32; // eax
  unsigned __int16 *v33; // r9
  unsigned int i; // ecx
  __int64 v35; // rax
  volatile signed __int32 *v36; // rdx
  unsigned __int16 *v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 j; // r8
  __int64 v41; // rsi
  __int64 **v42; // rbx
  signed __int32 v43; // eax
  __int64 v44; // rax
  volatile signed __int32 *v45; // rdx
  __int64 v46; // rcx
  unsigned __int16 *v47; // rbx
  __int64 v48; // r14
  _DWORD *v49; // rsi
  unsigned __int64 v50; // rcx
  ULONG v51; // ebp
  unsigned __int64 v52; // rcx
  __int64 v53; // r9
  signed __int64 v54; // rcx
  unsigned __int64 v55; // r8
  __int64 v56; // rcx
  unsigned __int8 v57; // al
  bool v58; // al
  __int64 v59; // rcx
  __int64 v60; // rdx
  struct _TEB *v61; // rbx
  int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rcx
  _QWORD **v65; // rdx
  _QWORD *v66; // r9
  unsigned int v67; // edx
  int v68; // eax
  __int64 v69; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  _OWORD MemoryInformation[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v73; // [rsp+60h] [rbp-58h]
  ULONG OldProtect; // [rsp+D8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
LABEL_86:
    v57 = RtlpFreeHeap(v7);
    v4 = v57;
    if ( v57 )
      goto LABEL_16;
    return v4;
  }
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v8 = RtlpProbeUserBufferSafe();
  }
  else if ( (a2 & 0xF) != 0 )
  {
    RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
  }
  else
  {
    v8 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
    if ( (*(_BYTE *)(v8 + 15) & 0x3F) == 0 )
    {
      RtlpLogHeapFailure(8, a1, v8, 0, 0LL, 0LL);
      v8 = 0LL;
    }
  }
  if ( !v8 )
  {
LABEL_99:
    v61 = NtCurrentTeb();
    v61->LastStatusValue = -1073741811;
    v61->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
    return v4;
  }
  if ( *(_BYTE *)(v6 - 1) != 5 )
    goto LABEL_11;
  if ( *(char *)(v8 + 15) >= 0 )
  {
    v58 = 1;
    if ( *(_DWORD *)(v7 + 124) )
    {
      v62 = *(_DWORD *)(v7 + 136) ^ *(_DWORD *)(v8 + 8);
      if ( HIBYTE(v62) != ((unsigned __int8)v62 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v7 + 136) ^ *(_WORD *)(v8 + 8)) >> 8) ^ BYTE2(v62))) )
        v58 = 0;
    }
  }
  else
  {
    v58 = RtlpValidateLFHBlock(v7, v8);
  }
  if ( !v58 )
    goto LABEL_98;
  if ( *(char *)(v8 + 15) >= 0 )
  {
    if ( *(_DWORD *)(v7 + 124) )
    {
      LODWORD(v59) = *(_DWORD *)(v8 + 8);
      if ( ((unsigned int)v59 & *(_DWORD *)(v7 + 124)) != 0 )
        LOWORD(v59) = *(_WORD *)(v7 + 136) ^ v59;
    }
    else
    {
      LOWORD(v59) = *(_WORD *)(v8 + 8);
    }
  }
  else
  {
    v59 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v8 + 8) ^ v7 ^ (v8 >> 4))
        ? 0LL
        : *(_QWORD *)(v8
                    - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)v7 ^ (unsigned int)(v8 >> 4)) >> 12));
    LOWORD(v59) = *(_WORD *)(v59 + 36);
  }
  if ( *(_BYTE *)(v8 + 15) == 4 )
  {
    if ( *(_DWORD *)(v7 + 124) )
    {
      v68 = *(_DWORD *)(v8 + 8);
      if ( (v68 & *(_DWORD *)(v7 + 124)) != 0 )
        LOWORD(v68) = *(_WORD *)(v7 + 136) ^ v68;
    }
    else
    {
      LOWORD(v68) = *(_WORD *)(v8 + 8);
    }
    v60 = (unsigned __int16)v59 + *(_QWORD *)(v8 - 16) - (unsigned __int16)v68;
  }
  else
  {
    v60 = 16LL * (unsigned __int16)v59;
  }
  if ( v60 + v8 < v6 )
  {
LABEL_98:
    RtlpLogHeapFailure(3, v7, v8, v6, 0LL, 0LL);
    goto LABEL_99;
  }
  if ( (v5 & 0x3C000102) == 0 )
  {
    v69 = *(_BYTE *)(v6 - 1) == 5 ? v6 - 16LL * *(unsigned __int8 *)(v6 - 16 + 14) : 0LL;
    if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v6 - 8), v7, v6, 3, v69) < 0 )
      goto LABEL_99;
  }
LABEL_11:
  if ( *(char *)(v8 + 15) >= 0 )
    goto LABEL_86;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v7 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4))
    || (v11 = *(__int64 ***)(v8
                           - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)v7 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12))) == 0LL )
  {
    LODWORD(v9) = v7;
LABEL_14:
    RtlpLogHeapFailure(3, v9, v8, 0, 0LL, 0LL);
    goto LABEL_15;
  }
  _m_prefetchw(v11);
  v12 = v11[1];
  v13 = 0;
  v14 = (unsigned __int16)(*(_DWORD *)(v8 + 12) >> 8);
  v15 = *(_QWORD *)(**v11 + 24);
  v16 = RtlpLFHKey ^ v15 ^ *((_DWORD *)v12 + 6) ^ (unsigned int)v12;
  if ( (__int64 *)((char *)v12 + v14 * HIWORD(v16) + (unsigned __int16)v16) != (__int64 *)v8 )
  {
    v9 = *(_QWORD *)(v15 + 24);
    goto LABEL_14;
  }
  v17 = 2147353472LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v19 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v19 = 2147353472LL;
  if ( *(_BYTE *)v19 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(*(_QWORD *)(v15 + 24), v8 + 16, 2);
  v20 = 0LL;
  v21 = 0LL;
  if ( MEMORY[0x7FFE036A] > 1u )
    v20 = 100LL;
  while ( 1 )
  {
    if ( (unsigned int)v21 > (unsigned int)v20 )
    {
      *(_BYTE *)(v8 + 15) = 0x80;
      v23 = v11 + 2;
      goto LABEL_53;
    }
    v22 = *((_DWORD *)v11 + 8);
    if ( v22 >= 0 && _InterlockedCompareExchange((volatile signed __int32 *)v11 + 8, v22 | 0x80000000, v22) == v22 )
      break;
    v21 = (unsigned int)(v21 + 1);
  }
  *(_BYTE *)(v8 + 15) = 0x80;
  v23 = v11 + 2;
  if ( v22 == -1 )
  {
LABEL_53:
    RtlpInterlockedPushEntrySList(v23, v8 + 16, v20, a4);
    goto LABEL_15;
  }
  v24 = v22;
  _bittestandreset((signed __int32 *)v12[5], v14);
  if ( *v23 )
  {
    v66 = (_QWORD *)RtlpInterlockedFlushSList(v23, v21, (unsigned int)v22, a4);
    v24 = v22;
    while ( v66 )
    {
      v67 = *((_DWORD *)v66 - 1);
      ++v13;
      v66 = (_QWORD *)*v66;
      v14 = (unsigned __int16)(v67 >> 8);
      _bittestandreset((signed __int32 *)v12[5], v14);
    }
  }
  v25 = (unsigned __int16 *)*v11;
  v26 = v14 << 16;
  v27 = v26 | (v13 + v24 + 1);
  if ( ((unsigned __int16)v26 | (unsigned __int16)(v13 + v24 + 1)) != *((_WORD *)v11 + 20)
    || (v39 = *((unsigned int *)v25 + 42), j = *(unsigned int *)(*(_QWORD *)v25 + 32LL), *((_DWORD *)v25 + 41) == 1)
    && (unsigned int)j >= (unsigned int)v39
    && (j = (unsigned int)(j - v39), (unsigned int)j < *(_DWORD *)(*(_QWORD *)v25 + 36LL)) )
  {
    *((_DWORD *)v11 + 8) = v27;
    if ( (*((_DWORD *)v11 + 11) & 2) != 0 || !*((_WORD *)v11 + 16) )
      goto LABEL_15;
    if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
      || (v63 = v25[86], (unsigned int)v63 > 0x70)
      || *((_DWORD *)v25 + 40) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v63]
      || (v28 = 1, (unsigned int)(*((_WORD *)v11 + 20) >> 2) <= *((_WORD *)v11 + 16)) )
    {
      v28 = 0;
    }
    v29 = NtCurrentPeb()->SharedData;
    if ( v29 && *v29 )
      v30 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v30 = 2147353482LL;
    if ( *(_BYTE *)v30 )
      goto LABEL_117;
    v31 = NtCurrentPeb()->SharedData;
    if ( v31 && *v31 )
      v17 = (__int64)NtCurrentPeb()->SharedData + 550;
    if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
LABEL_117:
      if ( v28 )
      {
        RtlpLogHeapReuseThresholdActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 24LL) + 24LL), v11[1], v25[86]);
        goto LABEL_15;
      }
    }
    else if ( v28 )
    {
      goto LABEL_15;
    }
    do
    {
      v32 = *((_DWORD *)v11 + 11);
      if ( !v32 || (v32 & 2) != 0 )
        goto LABEL_15;
    }
    while ( v32 != _InterlockedCompareExchange((volatile signed __int32 *)v11 + 11, v32 | 2, v32) );
    v33 = (unsigned __int16 *)*v11;
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x10 )
      {
        RtlpInterlockedPushEntrySList(
          *(_QWORD *)(*(_QWORD *)(**v11 + 24) + 8LL * *((unsigned __int16 *)*v11 + 86) + 1192) + 144LL,
          v11 + 6,
          *((unsigned __int16 *)*v11 + 86),
          v33);
        goto LABEL_15;
      }
      v35 = ((_BYTE)i + (unsigned __int8)v33[87]) & 0xF;
      v36 = *(volatile signed __int32 **)&v33[4 * v35 + 8];
      v37 = &v33[4 * v35];
      if ( v36 )
      {
        if ( (v36[11] & 1) == 0
          && v36 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)v37 + 2,
                                                 (signed __int64)v11,
                                                 (signed __int64)v36) )
        {
          _m_prefetchw((const void *)(v36 + 11));
          if ( _InterlockedAnd(v36 + 11, 0xFFFFFFFD) == 2 )
          {
            v38 = **(_QWORD **)v36;
            *(_QWORD *)v36 = 0LL;
            RtlpInterlockedPushEntrySList(v38, v36 + 12, v37, v33);
          }
          goto LABEL_15;
        }
      }
      else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v37 + 2, (signed __int64)v11, 0LL) )
      {
        goto LABEL_15;
      }
    }
  }
  v41 = (__int64)*v11;
  v42 = (__int64 **)_InterlockedExchange64(*v11 + 1, 0LL);
  if ( v42 )
  {
    _m_prefetchw((char *)v42 + 44);
    if ( _InterlockedAnd((volatile signed __int32 *)v42 + 11, 0xFFFFFFF9) == 6 )
    {
      v64 = **v42;
      *v42 = 0LL;
LABEL_113:
      v65 = v42 + 6;
LABEL_114:
      RtlpInterlockedPushEntrySList(v64, v65, j, v39);
    }
    else if ( *((_WORD *)v42 + 16) && !RtlpIsSubSegmentReuseThresholdExceeded(v41, (__int64)v42) )
    {
      while ( 1 )
      {
        v43 = *((_DWORD *)v42 + 11);
        if ( !v43 || (v43 & 2) != 0 )
          break;
        if ( v43 == _InterlockedCompareExchange((volatile signed __int32 *)v42 + 11, v43 | 2, v43) )
        {
          v39 = (__int64)*v42;
          for ( j = 0LL; ; j = (unsigned int)(j + 1) )
          {
            if ( (unsigned int)j >= 0x10 )
            {
              j = *((unsigned __int16 *)*v42 + 86);
              v64 = *(_QWORD *)(*(_QWORD *)(**v42 + 24) + 8 * j + 1192) + 144LL;
              goto LABEL_113;
            }
            v44 = ((_BYTE)j + (unsigned __int8)*(_WORD *)(v39 + 174)) & 0xF;
            v45 = *(volatile signed __int32 **)(v39 + 8 * v44 + 16);
            v46 = v39 + 8 * v44;
            if ( v45 )
            {
              if ( (v45[11] & 1) == 0
                && v45 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                       (volatile signed __int64 *)(v46 + 16),
                                                       (signed __int64)v42,
                                                       (signed __int64)v45) )
              {
                _m_prefetchw((const void *)(v45 + 11));
                if ( _InterlockedAnd(v45 + 11, 0xFFFFFFFD) != 2 )
                  goto LABEL_77;
                v64 = **(_QWORD **)v45;
                *(_QWORD *)v45 = 0LL;
                v65 = (_QWORD **)(v45 + 12);
                goto LABEL_114;
              }
            }
            else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v46 + 16), (signed __int64)v42, 0LL) )
            {
              goto LABEL_77;
            }
          }
        }
      }
    }
  }
LABEL_77:
  v47 = (unsigned __int16 *)*v11;
  v48 = *(_QWORD *)(*(_QWORD *)v41 + 24LL);
  if ( (*((_BYTE *)v11 + 38) & 3) != 0 )
  {
    v49 = *(_DWORD **)(v48 + 24);
    v50 = (16 * (*((unsigned __int16 *)v11 + 18) + 256LL)) & 0xFFFFFFFFFFFFF000uLL;
    BaseAddress = (PVOID)(((unsigned __int64)v11[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
    OldProtect = 0;
    v51 = 64;
    v52 = (unsigned __int16)((v50 + 4096) >> 4) * (unsigned __int64)*((unsigned __int16 *)v11 + 20);
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    v73 = 0LL;
    RegionSize = 16 * v52;
    if ( (v49[28] & 0x40000) != 0 )
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v49,
             MemoryBasicInformation,
             MemoryInformation,
             0x30uLL,
             0LL) < 0
        || (BYTE4(v73) & 0x60) == 0
        || *(_DWORD **)&MemoryInformation[0] != v49 )
      {
        RtlpLogHeapFailure(0, (_DWORD)v49, 1, DWORD1(v73), 0LL, 0LL);
        v51 = 4;
      }
    }
    else
    {
      v51 = 4;
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, v51, &OldProtect);
  }
  *((_DWORD *)v11[1] + 5) = 0;
  RtlpFreeUserBlock(v48, (unsigned __int8 *)v11[1], j, v39);
  v53 = *((unsigned __int16 *)v11 + 20);
  _m_prefetchw(v47 + 80);
  do
  {
    v54 = *((_QWORD *)v47 + 20);
    v55 = (unsigned int)(v54 - v53) | ((unsigned __int64)(unsigned int)(HIDWORD(v54) - 1) << 32);
  }
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)v47 + 20, v55, v54) != v54 );
  v11[1] = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v48 + 60));
  *((_DWORD *)v11 + 8) = 0;
  _m_prefetchw((char *)v11 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v11 + 11, 0xFFFFFFFE) == 1 )
  {
    v56 = **v11;
    *v11 = 0LL;
    RtlpInterlockedPushEntrySList(v56, v11 + 6, v55, v53);
  }
LABEL_15:
  v7 = a1;
  v6 = a2;
  v4 = 1;
  v5 = a3;
LABEL_16:
  if ( (dword_1801C68A8 & 1) != 0
    && (dword_1801C68A8 & 2) != 0
    && NtCurrentPeb()->ProcessHeap
    && v7 != qword_1801CA198[2 * (unsigned int)dword_18017B028[BYTE1(RtlpHpEnvHandle)]]
    && (v5 & 0x10000000) == 0 )
  {
    RtlpHpStackTraceRemoveStack(v7, v6);
  }
  return v4;
}
