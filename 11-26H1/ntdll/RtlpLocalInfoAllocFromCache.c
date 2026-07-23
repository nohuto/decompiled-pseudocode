/*
 * XREFs of RtlpLocalInfoAllocFromCache @ 0x180006940
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180002680 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x180001ED0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x180002020 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpSetSegmentInfo @ 0x180007690 (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x180007840 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800952F8 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x1800953FC (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlpInterlockedPopEntrySList @ 0x180162BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162C10 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x180162C80 (InterlockedPushListSList.c)
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
  _SLIST_ENTRY *v12; // r15
  _SLIST_HEADER *v13; // rbp
  PSLIST_ENTRY v14; // rsi
  __int64 v15; // r8
  _QWORD *v16; // r9
  signed __int32 v17; // eax
  __int64 j; // r8
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  char v21; // dl
  _DWORD *v22; // rcx
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  signed __int32 v26; // eax
  __int64 v27; // rax
  __int64 **v28; // rdx
  _QWORD *v29; // rcx
  signed __int32 v30; // eax
  __int64 v31; // rcx
  _QWORD **v32; // rdx
  __int64 v33; // rsi
  struct _TEB *v34; // r9
  unsigned __int64 v35; // r10
  __int64 v36; // r11
  char v37; // cl
  int v38; // r11d
  unsigned __int64 v39; // rdx
  __int64 v40; // rdi
  _QWORD *v41; // r9
  unsigned int v42; // r11d
  __int64 v45; // rax
  int v48; // r9d
  unsigned __int64 v49; // r8
  volatile signed __int64 *v50; // r12
  unsigned __int16 *v51; // r15
  unsigned __int16 *v52; // rax
  volatile signed __int64 *v53; // rsi
  unsigned int v54; // r14d
  volatile signed __int64 *v55; // rbx
  __int64 v56; // rbp
  volatile signed __int32 *v57; // rdx
  unsigned __int16 *v58; // r12
  _SLIST_HEADER *v59; // rbp
  PSLIST_ENTRY v60; // rax
  __int64 v61; // r8
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
  char *v79; // rcx
  __int64 v80; // rax
  signed __int32 v81; // eax
  __int64 v82; // rax
  _QWORD *v83; // rcx
  signed __int32 v84; // ett
  PSLIST_ENTRY v85; // rax
  __int64 v86; // rcx
  volatile signed __int64 *v87; // [rsp+30h] [rbp-58h]
  unsigned __int16 *v90; // [rsp+A0h] [rbp+18h]
  __int64 v91; // [rsp+A8h] [rbp+20h]

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
          v79 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
          if ( *v79 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
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
      v33 = *(_QWORD *)(v3 + 8);
      if ( v33 && *(_QWORD *)v3 == v2 && (_WORD)v8 )
      {
        v34 = NtCurrentTeb();
        v35 = RtlpSearchWidth[*(unsigned __int16 *)(v2 + 172)];
        v36 = BYTE2(v34->HeapThreadData);
        if ( (_BYTE)v36 == HIBYTE(v34->HeapThreadData) )
        {
          v73 = qword_1801C5F00;
          do
          {
            v74 = v73 ^ (v73 >> 12) ^ ((v73 ^ (v73 >> 12)) << 25) ^ ((v73 ^ (v73 >> 12) ^ ((v73 ^ (v73 >> 12)) << 25)) >> 27);
            v75 = v73;
            v73 = _InterlockedCompareExchange64(&qword_1801C5F00, v74, v73);
          }
          while ( v75 != v73 );
          v37 = 29 * v74;
          HIBYTE(v34->HeapThreadData) = v37;
        }
        else
        {
          v37 = BYTE2(v34->HeapThreadData);
        }
        BYTE2(v34->HeapThreadData) = v37 + 1;
        v38 = RtlpLowFragHeapRandomData[v36];
        v39 = *(_QWORD *)(v33 + 32);
        v40 = *(_QWORD *)(v33 + 40);
        if ( v39 >= 0x40 )
        {
          v70 = (_QWORD *)(v40 + 8 * ((v39 - 1) >> 6));
          v41 = (_QWORD *)(v40 + 8 * ((unsigned __int64)(unsigned int)(v8 >> 16) >> 6));
          do
          {
            if ( *v41 != -1LL )
              break;
            if ( v41 == v70 )
              v41 = *(_QWORD **)(v33 + 40);
            else
              ++v41;
          }
          while ( v41 != (_QWORD *)(v40 + 8 * ((unsigned __int64)(unsigned int)(v8 >> 16) >> 6)) );
          if ( v41 == v70 && (v76 = v39 & 0x3F) != 0 )
          {
            v2 = a1;
            if ( v76 < v35 )
              LODWORD(v35) = *(_DWORD *)(v33 + 32) & 0x3F;
          }
          else
          {
            v2 = a1;
          }
        }
        else
        {
          v41 = *(_QWORD **)(v33 + 40);
          if ( v39 >= v35 )
            LODWORD(v39) = v35;
          LODWORD(v35) = v39;
        }
        v42 = (unsigned int)(v35 * v38) >> 8;
        if ( (unsigned int)v35 >= 0x40 )
        {
          v45 = -1LL;
        }
        else
        {
          _RAX = ~*v41;
          __asm { tzcnt   rdx, rax }
          LOBYTE(v42) = _RDX + v42;
          v45 = ((1LL << v35) - 1) << _RDX;
        }
        _RAX = ~__ROR8__(*v41 | ~v45, v42);
        __asm { tzcnt   rax, rax }
        LODWORD(_RAX) = ((_BYTE)v42 + (_BYTE)_RAX) & 0x3F;
        *v41 |= 1LL << _RAX;
        v48 = _RAX + ((unsigned int)(((__int64)v41 - *(_QWORD *)(v33 + 40)) >> 3) << 6);
        *(_DWORD *)(v3 + 32) = ((unsigned __int16)v8 - 1) | (v48 << 16);
        v49 = v48 * ((*(_DWORD *)(v33 + 24) ^ (unsigned int)v33 ^ (unsigned int)v5 ^ (unsigned int)RtlpLFHKey) >> 16)
            + v33
            + ((unsigned __int16)v33 ^ (unsigned __int16)v5 ^ (unsigned __int16)*(_DWORD *)(v33 + 24) ^ (unsigned __int64)(unsigned __int16)RtlpLFHKey);
        if ( (*(_BYTE *)(v49 + 15) & 0x3F) != 0 )
        {
          RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 24LL) + 24LL), v49, 0, 0LL, 0LL);
LABEL_87:
          v49 = 0LL;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 32) = v8;
        v49 = 0LL;
      }
      if ( v4 && HIDWORD(RtlpAffinityState) + 1 < (unsigned int)RtlpAffinityState )
        _InterlockedCompareExchange(
          (_DWORD *)&RtlpAffinityState + 1,
          2 * (HIDWORD(RtlpAffinityState) + 1) - 1,
          SHIDWORD(RtlpAffinityState));
      if ( v49 )
        return v49;
    }
    v50 = (volatile signed __int64 *)(v2 + 16);
    v91 = *(_QWORD *)v2;
    v87 = (volatile signed __int64 *)(v2 + 16);
LABEL_62:
    v51 = (unsigned __int16 *)(v2 + 172);
    v9 = 0LL;
    v90 = (unsigned __int16 *)(v2 + 172);
    while ( 2 )
    {
      v52 = v90;
      v53 = 0LL;
      v54 = 0;
      v55 = v50;
      v56 = 16LL;
      do
      {
        v57 = (volatile signed __int32 *)*v55;
        v58 = v52;
        v90 = v52;
        if ( *v55 && *((unsigned __int16 *)v57 + 16) > v54 )
        {
          if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
            || (v71 = *v52, (unsigned int)v71 > 0x70)
            || *(_DWORD *)(a1 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v71]
            || (v65 = 1, (unsigned int)(*((_WORD *)v57 + 20) >> 2) <= *((_WORD *)v57 + 16)) )
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
              v9 = (volatile signed __int32 *)*v55;
              v54 = *((unsigned __int16 *)v57 + 16);
              v53 = v55;
              goto LABEL_66;
            }
          }
          if ( !v65 )
            goto LABEL_85;
          RtlpLogHeapReuseThresholdActivate(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
            *((_QWORD *)v57 + 1),
            *v58);
        }
LABEL_66:
        ++v55;
        v52 = v51;
        --v56;
      }
      while ( v56 );
      v50 = v87;
      if ( v53 )
      {
        v59 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v91 + 24) + 8LL * *v90 + 1192) + 144LL);
        while ( 1 )
        {
          v60 = RtlpInterlockedPopEntrySList(v59);
          v62 = (_QWORD **)v60;
          v63 = v60;
          if ( !v60 )
            break;
          v62 = (_QWORD **)&v60[-3];
          if ( (*((_DWORD *)&v60[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v62, a1) )
            {
              RtlpInterlockedPushEntrySList(v59, v63, v61, v16);
              v62 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)v62 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v62 + 11, 0xFFFFFFFD) == 2 )
          {
            v77 = **v62;
            *v62 = 0LL;
            RtlpInterlockedPushEntrySList(v77, v60, v61, v16);
          }
        }
        if ( v9 != (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                v53,
                                                (signed __int64)v62,
                                                (signed __int64)v9) )
        {
          if ( v62 )
            RtlpInterlockedPushEntrySList(v59, v62 + 6, v61, v16);
          continue;
        }
        if ( !v62 )
          *(_WORD *)(a1 + 174) = (unsigned __int8)(((__int64)v53 - a1 - 16) >> 3);
        if ( v9 )
        {
          _m_prefetchw((const void *)(v9 + 11));
          if ( _InterlockedAnd(v9 + 11, 0xFFFFFFFD) != 2 )
            goto LABEL_15;
          v64 = **(_QWORD **)v9;
          *(_QWORD *)v9 = 0LL;
          RtlpInterlockedPushEntrySList(v64, v9 + 12, v61, v16);
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
    v13 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v91 + 24) + 8LL * *v90 + 1192) + 144LL);
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
        v86 = **(_QWORD **)v9;
        *(_QWORD *)v9 = 0LL;
        RtlpInterlockedPushEntrySList(v86, v14, v15, v16);
        goto LABEL_183;
      }
      if ( !(unsigned int)RtlpSetSegmentInfo(&v14[-3], a1) )
      {
        v14->Next = v11;
        v85 = v14;
        v11 = v14;
        if ( v10 )
          v85 = v12;
        ++v10;
        v12 = v85;
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
        v17 = *((_DWORD *)v9 + 11);
        v2 = a1;
        if ( !v17 || (v17 & 6) != 0 )
          goto LABEL_2;
      }
      while ( v17 != _InterlockedCompareExchange(v9 + 11, v17 | 6, v17) );
      j = *(_QWORD *)v9;
      if ( *(_QWORD *)v9 != a1 )
      {
        _m_prefetchw((const void *)(v9 + 11));
        if ( _InterlockedAnd(v9 + 11, 0xFFFFFFF9) != 6 )
        {
          if ( !RtlpIsSubSegmentReuseable(j, (__int64)v9) )
            continue;
          do
          {
            v81 = *((_DWORD *)v9 + 11);
            if ( !v81 || (v81 & 2) != 0 )
              goto LABEL_2;
          }
          while ( v81 != _InterlockedCompareExchange(v9 + 11, v81 | 2, v81) );
          v16 = *(_QWORD **)v9;
          for ( j = 0LL; ; j = (unsigned int)(j + 1) )
          {
            if ( (unsigned int)j >= 0x10 )
            {
LABEL_164:
              RtlpInterlockedPushEntrySList(
                *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v9 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v9 + 172LL)
                          + 1192)
              + 144LL,
                v9 + 12,
                *(unsigned __int16 *)(*(_QWORD *)v9 + 172LL),
                v16);
              goto LABEL_2;
            }
            v82 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v16 + 87)) & 0xF;
            v28 = (__int64 **)v16[v82 + 2];
            v83 = &v16[v82];
            if ( v28 )
            {
              if ( (*((_DWORD *)v28 + 11) & 1) == 0
                && v28 == (__int64 **)_InterlockedCompareExchange64(v83 + 2, (signed __int64)v9, (signed __int64)v28) )
              {
                _m_prefetchw((char *)v28 + 44);
                v30 = *((_DWORD *)v28 + 11);
                do
                {
                  v84 = v30;
                  v30 = _InterlockedCompareExchange((volatile signed __int32 *)v28 + 11, v30 & 0xFFFFFFFD, v30);
                }
                while ( v84 != v30 );
LABEL_44:
                if ( v30 == 2 )
                {
                  v31 = **v28;
                  *v28 = 0LL;
                  v32 = v28 + 6;
                  goto LABEL_168;
                }
                goto LABEL_2;
              }
            }
            else if ( !_InterlockedCompareExchange64(v83 + 2, (signed __int64)v9, 0LL) )
            {
              goto LABEL_2;
            }
          }
        }
        goto LABEL_167;
      }
      v19 = NtCurrentPeb()->SharedData;
      if ( v19 && *v19 )
        v20 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v20 = 2147353472LL;
      if ( *(_BYTE *)v20 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), *((_QWORD *)v9 + 1));
      v9 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(a1 + 8), (__int64)v9);
      if ( v9 )
      {
        _m_prefetchw((const void *)(v9 + 11));
        if ( _InterlockedAnd(v9 + 11, 0xFFFFFFF9) != 6 )
        {
          if ( *((_WORD *)v9 + 16) )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v80 = *v90, (unsigned int)v80 > 0x70)
              || *(_DWORD *)(a1 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v80]
              || (v21 = 1, (unsigned int)(*((_WORD *)v9 + 20) >> 2) <= *((_WORD *)v9 + 16)) )
            {
              v21 = 0;
            }
            v22 = NtCurrentPeb()->SharedData;
            if ( v22 && *v22 )
              v23 = (__int64)NtCurrentPeb()->SharedData + 560;
            else
              v23 = 2147353482LL;
            if ( *(_BYTE *)v23
              || ((v24 = NtCurrentPeb()->SharedData) == 0LL || !*v24
                ? (v25 = 2147353472LL)
                : (v25 = (__int64)NtCurrentPeb()->SharedData + 550),
                  *(_BYTE *)v25 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
            {
              if ( !v21 )
                goto LABEL_35;
              RtlpLogHeapReuseThresholdActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
                *((_QWORD *)v9 + 1),
                *v90);
            }
            else if ( !v21 )
            {
LABEL_35:
              while ( 1 )
              {
                v26 = *((_DWORD *)v9 + 11);
                if ( !v26 || (v26 & 2) != 0 )
                  break;
                if ( v26 == _InterlockedCompareExchange(v9 + 11, v26 | 2, v26) )
                {
                  v16 = *(_QWORD **)v9;
                  for ( j = 0LL; (unsigned int)j < 0x10; j = (unsigned int)(j + 1) )
                  {
                    v27 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v16 + 87)) & 0xF;
                    v28 = (__int64 **)v16[v27 + 2];
                    v29 = &v16[v27];
                    if ( v28 )
                    {
                      if ( (*((_DWORD *)v28 + 11) & 1) == 0
                        && v28 == (__int64 **)_InterlockedCompareExchange64(
                                                v29 + 2,
                                                (signed __int64)v9,
                                                (signed __int64)v28) )
                      {
                        _m_prefetchw((char *)v28 + 44);
                        v30 = _InterlockedAnd((volatile signed __int32 *)v28 + 11, 0xFFFFFFFD);
                        goto LABEL_44;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(v29 + 2, (signed __int64)v9, 0LL) )
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
        v32 = (_QWORD **)(v9 + 12);
        v31 = **(_QWORD **)v9;
        *(_QWORD *)v9 = 0LL;
LABEL_168:
        RtlpInterlockedPushEntrySList(v31, v32, j, v16);
        continue;
      }
      continue;
    }
    return 0LL;
  }
}
