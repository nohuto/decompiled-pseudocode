/*
 * XREFs of RtlpFreeNTHeapInternal @ 0x1800185E0
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x1800195A0 (RtlpHpTagFreeHeap.c)
 *     RtlFreeHeapFast @ 0x1801400E0 (RtlFreeHeapFast.c)
 *     RtlFreeHeapFull @ 0x1801401A0 (RtlFreeHeapFull.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x180017DFC (RtlpLogHeapFreeEvent.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180017FF0 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpValidateLFHBlock @ 0x180018130 (RtlpValidateLFHBlock.c)
 *     RtlpFreeUserBlock @ 0x1800181A0 (RtlpFreeUserBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x180019070 (RtlpProbeUserBufferSafe.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpCallInterceptRoutine @ 0x18001C570 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x18001C770 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpFreeHeap @ 0x1800233D0 (RtlpFreeHeap.c)
 *     RtlpHpStackTraceRemoveStack @ 0x18002BA50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162D10 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180162D50 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpFreeNTHeapInternal(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // r13d
  int v5; // r14d
  unsigned __int64 v6; // rdi
  _DWORD *v7; // rbp
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
  unsigned int v20; // r8d
  unsigned int v21; // edx
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
  unsigned int v39; // r9d
  unsigned int j; // r8d
  __int64 v41; // rsi
  __int64 **v42; // rbx
  signed __int32 v43; // eax
  __int64 *v44; // r9
  __int64 v45; // rax
  volatile signed __int32 *v46; // rdx
  __int64 *v47; // rcx
  unsigned __int16 *v48; // rbx
  __int64 v49; // r14
  __int64 v50; // rsi
  unsigned __int64 v51; // rcx
  unsigned int v52; // ebp
  unsigned __int64 v53; // rcx
  int v54; // r9d
  signed __int64 v55; // rcx
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
  __int64 v70; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v71; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v72[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v73; // [rsp+60h] [rbp-58h]
  int v77; // [rsp+D8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = (_DWORD *)a1;
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
    v8 = RtlpProbeUserBufferSafe(a1, a2);
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
    v61->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225485LL);
    return v4;
  }
  if ( *(_BYTE *)(v6 - 1) != 5 )
    goto LABEL_11;
  if ( *(char *)(v8 + 15) >= 0 )
  {
    v58 = 1;
    if ( v7[31] )
    {
      v62 = v7[34] ^ *(_DWORD *)(v8 + 8);
      if ( HIBYTE(v62) != ((unsigned __int8)v62 ^ (unsigned __int8)(((unsigned __int16)(*((_WORD *)v7 + 68) ^ *(_WORD *)(v8 + 8)) >> 8) ^ BYTE2(v62))) )
        v58 = 0;
    }
  }
  else
  {
    v58 = RtlpValidateLFHBlock((int)v7, v8);
  }
  if ( !v58 )
    goto LABEL_98;
  if ( *(char *)(v8 + 15) >= 0 )
  {
    if ( v7[31] )
    {
      LODWORD(v59) = *(_DWORD *)(v8 + 8);
      if ( ((unsigned int)v59 & v7[31]) != 0 )
        LOWORD(v59) = *((_WORD *)v7 + 68) ^ v59;
    }
    else
    {
      LOWORD(v59) = *(_WORD *)(v8 + 8);
    }
  }
  else
  {
    v59 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v8 + 8) ^ (unsigned __int16)v7 ^ (v8 >> 4))
        ? 0LL
        : *(_QWORD *)(v8
                    - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)v7 ^ (unsigned int)(v8 >> 4)) >> 12));
    LOWORD(v59) = *(_WORD *)(v59 + 36);
  }
  if ( *(_BYTE *)(v8 + 15) == 4 )
  {
    if ( v7[31] )
    {
      v68 = *(_DWORD *)(v8 + 8);
      if ( (v68 & v7[31]) != 0 )
        LOWORD(v68) = *((_WORD *)v7 + 68) ^ v68;
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
    RtlpLogHeapFailure(3, (_DWORD)v7, v8, v6, 0LL, 0LL);
    goto LABEL_99;
  }
  if ( (v5 & 0x3C000102) == 0 )
  {
    v69 = *(_BYTE *)(v6 - 1) == 5 ? v6 - 16LL * *(unsigned __int8 *)(v6 - 16 + 14) : 0LL;
    if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v6 - 8), (_DWORD)v7, v6, 3, v69) < 0 )
      goto LABEL_99;
  }
LABEL_11:
  if ( *(char *)(v8 + 15) >= 0 )
    goto LABEL_86;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)v7 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4))
    || (v11 = *(__int64 ***)(v8
                           - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)v7 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12))) == 0LL )
  {
    LODWORD(v9) = (_DWORD)v7;
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
    RtlpLogHeapFreeEvent(*(_QWORD *)(v15 + 24), v8 + 16, 2LL, a4);
  v20 = 0;
  v21 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
    v20 = 100;
  while ( 1 )
  {
    if ( v21 > v20 )
    {
      *(_BYTE *)(v8 + 15) = 0x80;
      v23 = v11 + 2;
      goto LABEL_53;
    }
    v22 = *((_DWORD *)v11 + 8);
    if ( v22 >= 0 && _InterlockedCompareExchange((volatile signed __int32 *)v11 + 8, v22 | 0x80000000, v22) == v22 )
      break;
    ++v21;
  }
  *(_BYTE *)(v8 + 15) = 0x80;
  v23 = v11 + 2;
  if ( v22 == -1 )
  {
LABEL_53:
    RtlpInterlockedPushEntrySList(v23, v8 + 16);
    goto LABEL_15;
  }
  v24 = v22;
  _bittestandreset((signed __int32 *)v12[5], v14);
  if ( *v23 )
  {
    v66 = (_QWORD *)RtlpInterlockedFlushSList(v23);
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
    || (v39 = *((_DWORD *)v25 + 42), j = *(_DWORD *)(*(_QWORD *)v25 + 32LL), *((_DWORD *)v25 + 41) == 1)
    && j >= v39
    && (j -= v39, j < *(_DWORD *)(*(_QWORD *)v25 + 36LL)) )
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
          v11 + 6);
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
            RtlpInterlockedPushEntrySList(v38, v36 + 12);
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
      RtlpInterlockedPushEntrySList(v64, v65);
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
          v44 = *v42;
          for ( j = 0; ; ++j )
          {
            if ( j >= 0x10 )
            {
              v64 = *(_QWORD *)(*(_QWORD *)(**v42 + 24) + 8LL * *((unsigned __int16 *)*v42 + 86) + 1192) + 144LL;
              goto LABEL_113;
            }
            v45 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v44 + 87)) & 0xF;
            v46 = (volatile signed __int32 *)v44[v45 + 2];
            v47 = &v44[v45];
            if ( v46 )
            {
              if ( (v46[11] & 1) == 0
                && v46 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                       v47 + 2,
                                                       (signed __int64)v42,
                                                       (signed __int64)v46) )
              {
                _m_prefetchw((const void *)(v46 + 11));
                if ( _InterlockedAnd(v46 + 11, 0xFFFFFFFD) != 2 )
                  goto LABEL_77;
                v64 = **(_QWORD **)v46;
                *(_QWORD *)v46 = 0LL;
                v65 = (_QWORD **)(v46 + 12);
                goto LABEL_114;
              }
            }
            else if ( !_InterlockedCompareExchange64(v47 + 2, (signed __int64)v42, 0LL) )
            {
              goto LABEL_77;
            }
          }
        }
      }
    }
  }
LABEL_77:
  v48 = (unsigned __int16 *)*v11;
  v49 = *(_QWORD *)(*(_QWORD *)v41 + 24LL);
  if ( (*((_BYTE *)v11 + 38) & 3) != 0 )
  {
    v50 = *(_QWORD *)(v49 + 24);
    v51 = (16 * (*((unsigned __int16 *)v11 + 18) + 256LL)) & 0xFFFFFFFFFFFFF000uLL;
    v71 = ((unsigned __int64)v11[1] + 4151) & 0xFFFFFFFFFFFFF000uLL;
    v77 = 0;
    v52 = 64;
    v53 = (unsigned __int16)((v51 + 4096) >> 4) * (unsigned __int64)*((unsigned __int16 *)v11 + 20);
    memset(v72, 0, sizeof(v72));
    v73 = 0LL;
    v70 = 16 * v53;
    if ( (*(_DWORD *)(v50 + 112) & 0x40000) != 0 )
    {
      if ( (int)ZwQueryVirtualMemory(-1LL, v50, 0LL, v72, 48LL, 0LL) < 0
        || (BYTE4(v73) & 0x60) == 0
        || *(_QWORD *)&v72[0] != v50 )
      {
        RtlpLogHeapFailure(0, v50, 1, DWORD1(v73), 0LL, 0LL);
        v52 = 4;
      }
    }
    else
    {
      v52 = 4;
    }
    ZwProtectVirtualMemory(-1LL, &v71, &v70, v52, &v77);
  }
  *((_DWORD *)v11[1] + 5) = 0;
  RtlpFreeUserBlock(v49, (__int64)v11[1], j);
  v54 = *((unsigned __int16 *)v11 + 20);
  _m_prefetchw(v48 + 80);
  do
    v55 = *((_QWORD *)v48 + 20);
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)v48 + 20,
            (unsigned int)(v55 - v54) | ((unsigned __int64)(unsigned int)(HIDWORD(v55) - 1) << 32),
            v55) != v55 );
  v11[1] = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v49 + 60));
  *((_DWORD *)v11 + 8) = 0;
  _m_prefetchw((char *)v11 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v11 + 11, 0xFFFFFFFE) == 1 )
  {
    v56 = **v11;
    *v11 = 0LL;
    RtlpInterlockedPushEntrySList(v56, v11 + 6);
  }
LABEL_15:
  v7 = (_DWORD *)a1;
  v6 = a2;
  v4 = 1;
  v5 = a3;
LABEL_16:
  if ( (dword_1801C7858 & 1) != 0
    && (dword_1801C7858 & 2) != 0
    && NtCurrentPeb()->ProcessHeap
    && v7 != (_DWORD *)qword_1801CB148[2 * (unsigned int)dword_18017C068[BYTE1(RtlpHpEnvHandle)]]
    && (v5 & 0x10000000) == 0 )
  {
    RtlpHpStackTraceRemoveStack(v7, v6);
  }
  return v4;
}
