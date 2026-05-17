/*
 * XREFs of RtlpLocalInfoAllocFromCache @ 0x18001B870
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x1800175A0 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x180016DF0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x180016F40 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpSetSegmentInfo @ 0x18001C5C0 (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x18001C770 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180071E44 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180071F48 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     RtlpInterlockedPopEntrySList @ 0x180162CD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162D10 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x180162D80 (InterlockedPushListSList.c)
 */

unsigned __int64 __fastcall RtlpLocalInfoAllocFromCache(__int64 a1, char a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  int v4; // r15d
  __int64 v5; // r14
  unsigned int v6; // r9d
  unsigned int i; // edx
  signed __int32 v8; // r8d
  volatile signed __int32 *v9; // rdi
  unsigned int v10; // r14d
  _SLIST_ENTRY *v11; // rbx
  struct _SLIST_ENTRY *v12; // r15
  union _SLIST_HEADER *v13; // rbp
  PSLIST_ENTRY v14; // rsi
  __int64 v15; // r9
  signed __int32 v16; // eax
  __int64 *v17; // r8
  _DWORD *v18; // rcx
  __int64 v19; // rcx
  char v20; // dl
  _DWORD *v21; // rcx
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  __int64 v24; // rcx
  signed __int32 v25; // eax
  __int64 *v26; // r9
  unsigned int k; // r8d
  __int64 v28; // rax
  __int64 **v29; // rdx
  __int64 *v30; // rcx
  signed __int32 v31; // eax
  __int64 v32; // rcx
  _QWORD **v33; // rdx
  __int64 v34; // rsi
  struct _TEB *v35; // r9
  unsigned __int64 v36; // r10
  __int64 v37; // r11
  char v38; // cl
  int v39; // r11d
  unsigned __int64 v40; // rdx
  __int64 v41; // rdi
  _QWORD *v42; // r9
  unsigned int v43; // r11d
  __int64 v46; // rax
  int v49; // r9d
  unsigned __int64 v50; // r8
  volatile signed __int64 *v51; // r12
  unsigned __int16 *v52; // r15
  unsigned __int16 *v53; // rax
  volatile signed __int64 *v54; // rsi
  unsigned int v55; // r14d
  volatile signed __int64 *v56; // rbx
  __int64 v57; // rbp
  volatile signed __int32 *v58; // rdx
  unsigned __int16 *v59; // r12
  union _SLIST_HEADER *v60; // rbp
  PSLIST_ENTRY v61; // rax
  _QWORD **v62; // rbx
  PSLIST_ENTRY v63; // r14
  __int64 v64; // rcx
  char v65; // r9
  _DWORD *SharedData; // rcx
  __int64 v67; // rcx
  _DWORD *v68; // rcx
  __int64 v69; // rcx
  _QWORD *v70; // rbp
  __int64 v71; // rax
  unsigned __int64 v73; // rax
  signed __int64 v74; // rcx
  unsigned __int64 v75; // rtt
  unsigned int v76; // edx
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  char *v83; // rcx
  __int64 v84; // rax
  signed __int32 v85; // eax
  __int64 *v86; // r9
  unsigned int j; // r8d
  __int64 v88; // rax
  __int64 *v89; // rcx
  signed __int32 v90; // ett
  PSLIST_ENTRY v91; // rax
  __int64 v92; // rcx
  volatile signed __int64 *v93; // [rsp+30h] [rbp-58h]
  unsigned __int16 *v96; // [rsp+A0h] [rbp+18h]
  __int64 v97; // [rsp+A8h] [rbp+20h]

  v2 = a1;
LABEL_2:
  while ( 2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( v3 )
    {
      v4 = 0;
      v5 = *(_QWORD *)(*(_QWORD *)v2 + 24LL);
      if ( (HIWORD(*(_DWORD *)(v3 + 32)) & 0x8000u) != 0 )
      {
        v4 = 1;
        v78 = v5 + 4LL * *(unsigned __int16 *)(v2 + 172);
        if ( (*(_BYTE *)(v78 + 679) & 1) == 0
          && (int)RtlpAffinitizeSegmentInfoForBucket(*(_QWORD *)(*(_QWORD *)v2 + 24LL), *(unsigned __int8 *)(v78 + 678)) >= 0 )
        {
          *(_BYTE *)(v78 + 679) |= 1u;
          v83 = (unsigned int)RtlGetCurrentServiceSessionId(v80, v79, v81, v82)
              ? (char *)NtCurrentPeb()->SharedData + 550
              : (char *)2147353472;
          if ( *v83 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v5 + 24), *(unsigned __int8 *)(v78 + 678));
        }
      }
      v6 = 0;
      if ( MEMORY[0x7FFE036A] > 1u )
        v6 = 100;
      for ( i = 0; ; ++i )
      {
        if ( i > v6 )
          goto LABEL_87;
        v8 = *(_DWORD *)(v3 + 32);
        if ( (v8 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v8 )
            goto LABEL_87;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 32), v8 | 0x80000000, v8) == v8 )
            break;
        }
      }
      if ( v8 == -1 )
        goto LABEL_87;
      v34 = *(_QWORD *)(v3 + 8);
      if ( v34 && *(_QWORD *)v3 == v2 && (_WORD)v8 )
      {
        v35 = NtCurrentTeb();
        v36 = RtlpSearchWidth[*(unsigned __int16 *)(v2 + 172)];
        v37 = BYTE2(v35->HeapThreadData);
        if ( (_BYTE)v37 == HIBYTE(v35->HeapThreadData) )
        {
          v73 = qword_1801C6F00;
          do
          {
            v74 = v73 ^ (v73 >> 12) ^ ((v73 ^ (v73 >> 12)) << 25) ^ ((v73 ^ (v73 >> 12) ^ ((v73 ^ (v73 >> 12)) << 25)) >> 27);
            v75 = v73;
            v73 = _InterlockedCompareExchange64(&qword_1801C6F00, v74, v73);
          }
          while ( v75 != v73 );
          v38 = 29 * v74;
          HIBYTE(v35->HeapThreadData) = v38;
        }
        else
        {
          v38 = BYTE2(v35->HeapThreadData);
        }
        BYTE2(v35->HeapThreadData) = v38 + 1;
        v39 = RtlpLowFragHeapRandomData[v37];
        v40 = *(_QWORD *)(v34 + 32);
        v41 = *(_QWORD *)(v34 + 40);
        if ( v40 >= 0x40 )
        {
          v70 = (_QWORD *)(v41 + 8 * ((v40 - 1) >> 6));
          v42 = (_QWORD *)(v41 + 8 * ((unsigned __int64)(unsigned int)(v8 >> 16) >> 6));
          do
          {
            if ( *v42 != -1LL )
              break;
            if ( v42 == v70 )
              v42 = *(_QWORD **)(v34 + 40);
            else
              ++v42;
          }
          while ( v42 != (_QWORD *)(v41 + 8 * ((unsigned __int64)(unsigned int)(v8 >> 16) >> 6)) );
          if ( v42 == v70 && (v76 = v40 & 0x3F) != 0 )
          {
            v2 = a1;
            if ( v76 < v36 )
              LODWORD(v36) = *(_DWORD *)(v34 + 32) & 0x3F;
          }
          else
          {
            v2 = a1;
          }
        }
        else
        {
          v42 = *(_QWORD **)(v34 + 40);
          if ( v40 >= v36 )
            LODWORD(v40) = v36;
          LODWORD(v36) = v40;
        }
        v43 = (unsigned int)(v36 * v39) >> 8;
        if ( (unsigned int)v36 >= 0x40 )
        {
          v46 = -1LL;
        }
        else
        {
          _RAX = ~*v42;
          __asm { tzcnt   rdx, rax }
          LOBYTE(v43) = _RDX + v43;
          v46 = ((1LL << v36) - 1) << _RDX;
        }
        _RAX = ~__ROR8__(*v42 | ~v46, v43);
        __asm { tzcnt   rax, rax }
        LODWORD(_RAX) = ((_BYTE)v43 + (_BYTE)_RAX) & 0x3F;
        *v42 |= 1LL << _RAX;
        v49 = _RAX + ((unsigned int)(((__int64)v42 - *(_QWORD *)(v34 + 40)) >> 3) << 6);
        *(_DWORD *)(v3 + 32) = ((unsigned __int16)v8 - 1) | (v49 << 16);
        v50 = v49 * ((*(_DWORD *)(v34 + 24) ^ (unsigned int)v34 ^ (unsigned int)v5 ^ (unsigned int)RtlpLFHKey) >> 16)
            + v34
            + ((unsigned __int16)v34 ^ (unsigned __int16)v5 ^ (unsigned __int16)*(_DWORD *)(v34 + 24) ^ (unsigned __int64)(unsigned __int16)RtlpLFHKey);
        if ( (*(_BYTE *)(v50 + 15) & 0x3F) != 0 )
        {
          RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 24LL) + 24LL), v50, 0, 0LL, 0LL);
LABEL_87:
          v50 = 0LL;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 32) = v8;
        v50 = 0LL;
      }
      if ( v4 && HIDWORD(RtlpAffinityState) + 1 < (unsigned int)RtlpAffinityState )
        _InterlockedCompareExchange(
          (_DWORD *)&RtlpAffinityState + 1,
          2 * (HIDWORD(RtlpAffinityState) + 1) - 1,
          SHIDWORD(RtlpAffinityState));
      if ( v50 )
        return v50;
    }
    v51 = (volatile signed __int64 *)(v2 + 16);
    v97 = *(_QWORD *)v2;
    v93 = (volatile signed __int64 *)(v2 + 16);
LABEL_62:
    v52 = (unsigned __int16 *)(v2 + 172);
    v9 = 0LL;
    v96 = (unsigned __int16 *)(v2 + 172);
    while ( 2 )
    {
      v53 = v96;
      v54 = 0LL;
      v55 = 0;
      v56 = v51;
      v57 = 16LL;
      do
      {
        v58 = (volatile signed __int32 *)*v56;
        v59 = v53;
        v96 = v53;
        if ( *v56 && *((unsigned __int16 *)v58 + 16) > v55 )
        {
          if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
            || (v71 = *v53, (unsigned int)v71 > 0x70)
            || *(_DWORD *)(a1 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v71]
            || (v65 = 1, (unsigned int)(*((_WORD *)v58 + 20) >> 2) <= *((_WORD *)v58 + 16)) )
          {
            v65 = 0;
          }
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
            v67 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v67 = 2147353482LL;
          if ( !*(_BYTE *)v67 )
          {
            v68 = NtCurrentPeb()->SharedData;
            if ( v68 && *v68 )
              v69 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v69 = 2147353472LL;
            if ( !*(_BYTE *)v69 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
            {
              if ( v65 )
                goto LABEL_66;
LABEL_85:
              v9 = (volatile signed __int32 *)*v56;
              v55 = *((unsigned __int16 *)v58 + 16);
              v54 = v56;
              goto LABEL_66;
            }
          }
          if ( !v65 )
            goto LABEL_85;
          RtlpLogHeapReuseThresholdActivate(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
            *((_QWORD *)v58 + 1),
            *v59);
        }
LABEL_66:
        ++v56;
        v53 = v52;
        --v57;
      }
      while ( v57 );
      v51 = v93;
      if ( v54 )
      {
        v60 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v97 + 24) + 8LL * *v96 + 1192) + 144LL);
        while ( 1 )
        {
          v61 = RtlpInterlockedPopEntrySList(v60);
          v62 = (_QWORD **)v61;
          v63 = v61;
          if ( !v61 )
            break;
          v62 = (_QWORD **)&v61[-3];
          if ( (*((_DWORD *)&v61[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v62, a1) )
            {
              RtlpInterlockedPushEntrySList(v60, v63);
              v62 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)v62 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v62 + 11, 0xFFFFFFFD) == 2 )
          {
            v77 = **v62;
            *v62 = 0LL;
            RtlpInterlockedPushEntrySList(v77, v61);
          }
        }
        if ( v9 != (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                v54,
                                                (signed __int64)v62,
                                                (signed __int64)v9) )
        {
          if ( v62 )
            RtlpInterlockedPushEntrySList(v60, v62 + 6);
          continue;
        }
        if ( !v62 )
          *(_WORD *)(a1 + 174) = (unsigned __int8)(((__int64)v54 - a1 - 16) >> 3);
        if ( v9 )
        {
          _m_prefetchw((const void *)(v9 + 11));
          if ( _InterlockedAnd(v9 + 11, 0xFFFFFFFD) != 2 )
            goto LABEL_15;
          v64 = **(_QWORD **)v9;
          *(_QWORD *)v9 = 0LL;
          RtlpInterlockedPushEntrySList(v64, v9 + 12);
          v2 = a1;
          goto LABEL_62;
        }
      }
      else
      {
        v9 = 0LL;
      }
      break;
    }
    v10 = 0;
    v11 = 0LL;
    v12 = 0LL;
    v13 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v97 + 24) + 8LL * *v96 + 1192) + 144LL);
    v14 = RtlpInterlockedPopEntrySList(v13);
    if ( !v14 )
      goto LABEL_14;
    while ( 2 )
    {
      v9 = (volatile signed __int32 *)&v14[-3];
      if ( (*((_DWORD *)&v14[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v9 + 11));
        if ( _InterlockedAnd(v9 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_183;
LABEL_186:
        v92 = **(_QWORD **)v9;
        *(_QWORD *)v9 = 0LL;
        RtlpInterlockedPushEntrySList(v92, v14);
        goto LABEL_183;
      }
      if ( !(unsigned int)RtlpSetSegmentInfo(&v14[-3], a1) )
      {
        v14->Next = v11;
        v91 = v14;
        v11 = v14;
        if ( v10 )
          v91 = v12;
        ++v10;
        v12 = v91;
        goto LABEL_183;
      }
      _m_prefetchw((const void *)(v9 + 11));
      if ( _InterlockedAnd(v9 + 11, 0xFFFFFFFD) == 2 )
        goto LABEL_186;
      if ( RtlpIsSubSegmentReuseable(a1, (__int64)&v14[-3]) )
        break;
LABEL_183:
      v9 = 0LL;
      v14 = RtlpInterlockedPopEntrySList(v13);
      if ( v14 )
        continue;
      break;
    }
    if ( v10 )
      InterlockedPushListSList(v13, v11, v12, v10);
LABEL_14:
    if ( v9 )
    {
LABEL_15:
      *((_BYTE *)v9 + 43) = a2;
      do
      {
        v16 = *((_DWORD *)v9 + 11);
        v2 = a1;
        if ( !v16 || (v16 & 6) != 0 )
          goto LABEL_2;
      }
      while ( v16 != _InterlockedCompareExchange(v9 + 11, v16 | 6, v16) );
      v17 = *(__int64 **)v9;
      if ( *(_QWORD *)v9 != a1 )
      {
        _m_prefetchw((const void *)(v9 + 11));
        if ( _InterlockedAnd(v9 + 11, 0xFFFFFFF9) != 6 )
        {
          if ( !RtlpIsSubSegmentReuseable((__int64)v17, (__int64)v9) )
            continue;
          do
          {
            v85 = *((_DWORD *)v9 + 11);
            if ( !v85 || (v85 & 2) != 0 )
              goto LABEL_2;
          }
          while ( v85 != _InterlockedCompareExchange(v9 + 11, v85 | 2, v85) );
          v86 = *(__int64 **)v9;
          for ( j = 0; ; ++j )
          {
            if ( j >= 0x10 )
            {
LABEL_164:
              RtlpInterlockedPushEntrySList(
                *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v9 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v9 + 172LL)
                          + 1192)
              + 144LL,
                v9 + 12);
              goto LABEL_2;
            }
            v88 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v86 + 87)) & 0xF;
            v29 = (__int64 **)v86[v88 + 2];
            v89 = &v86[v88];
            if ( v29 )
            {
              if ( (*((_DWORD *)v29 + 11) & 1) == 0
                && v29 == (__int64 **)_InterlockedCompareExchange64(v89 + 2, (signed __int64)v9, (signed __int64)v29) )
              {
                _m_prefetchw((char *)v29 + 44);
                v31 = *((_DWORD *)v29 + 11);
                do
                {
                  v90 = v31;
                  v31 = _InterlockedCompareExchange((volatile signed __int32 *)v29 + 11, v31 & 0xFFFFFFFD, v31);
                }
                while ( v90 != v31 );
LABEL_44:
                if ( v31 == 2 )
                {
                  v32 = **v29;
                  *v29 = 0LL;
                  v33 = v29 + 6;
                  goto LABEL_168;
                }
                goto LABEL_2;
              }
            }
            else if ( !_InterlockedCompareExchange64(v89 + 2, (signed __int64)v9, 0LL) )
            {
              goto LABEL_2;
            }
          }
        }
        goto LABEL_167;
      }
      v18 = NtCurrentPeb()->SharedData;
      if ( v18 && *v18 )
        v19 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v19 = 2147353472LL;
      if ( *(_BYTE *)v19 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
          *((_QWORD *)v9 + 1),
          (__int64)v17,
          v15);
      v9 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(a1 + 8), (__int64)v9);
      if ( v9 )
      {
        _m_prefetchw((const void *)(v9 + 11));
        if ( _InterlockedAnd(v9 + 11, 0xFFFFFFF9) != 6 )
        {
          if ( *((_WORD *)v9 + 16) )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v84 = *v96, (unsigned int)v84 > 0x70)
              || *(_DWORD *)(a1 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v84]
              || (v20 = 1, (unsigned int)(*((_WORD *)v9 + 20) >> 2) <= *((_WORD *)v9 + 16)) )
            {
              v20 = 0;
            }
            v21 = NtCurrentPeb()->SharedData;
            if ( v21 && *v21 )
              v22 = (__int64)NtCurrentPeb()->SharedData + 560;
            else
              v22 = 2147353482LL;
            if ( *(_BYTE *)v22
              || ((v23 = NtCurrentPeb()->SharedData) == 0LL || !*v23
                ? (v24 = 2147353472LL)
                : (v24 = (__int64)NtCurrentPeb()->SharedData + 550),
                  *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
            {
              if ( !v20 )
                goto LABEL_35;
              RtlpLogHeapReuseThresholdActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
                *((_QWORD *)v9 + 1),
                *v96);
            }
            else if ( !v20 )
            {
LABEL_35:
              while ( 1 )
              {
                v25 = *((_DWORD *)v9 + 11);
                if ( !v25 || (v25 & 2) != 0 )
                  break;
                if ( v25 == _InterlockedCompareExchange(v9 + 11, v25 | 2, v25) )
                {
                  v26 = *(__int64 **)v9;
                  for ( k = 0; k < 0x10; ++k )
                  {
                    v28 = ((_BYTE)k + (unsigned __int8)*((_WORD *)v26 + 87)) & 0xF;
                    v29 = (__int64 **)v26[v28 + 2];
                    v30 = &v26[v28];
                    if ( v29 )
                    {
                      if ( (*((_DWORD *)v29 + 11) & 1) == 0
                        && v29 == (__int64 **)_InterlockedCompareExchange64(
                                                v30 + 2,
                                                (signed __int64)v9,
                                                (signed __int64)v29) )
                      {
                        _m_prefetchw((char *)v29 + 44);
                        v31 = _InterlockedAnd((volatile signed __int32 *)v29 + 11, 0xFFFFFFFD);
                        goto LABEL_44;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(v30 + 2, (signed __int64)v9, 0LL) )
                    {
                      goto LABEL_2;
                    }
                  }
                  goto LABEL_164;
                }
              }
            }
          }
          continue;
        }
LABEL_167:
        v33 = (_QWORD **)(v9 + 12);
        v32 = **(_QWORD **)v9;
        *(_QWORD *)v9 = 0LL;
LABEL_168:
        RtlpInterlockedPushEntrySList(v32, v33);
        continue;
      }
      continue;
    }
    return 0LL;
  }
}
