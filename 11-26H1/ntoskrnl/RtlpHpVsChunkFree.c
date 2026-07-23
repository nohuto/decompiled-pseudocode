/*
 * XREFs of RtlpHpVsChunkFree @ 0x140355330
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14024D340 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSlotFreeList @ 0x14035501C (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1404135D0 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     RtlpHpVsFreeChunkInsert @ 0x14024C3B0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x14024C900 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14027DED0 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x140354AF4 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14047F8C8 (RtlpHpVsSubsegmentCommitPages.c)
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkFree(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        char a5,
        __int64 a6)
{
  ULONG_PTR v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r8
  _RTL_RB_TREE *v9; // r9
  __int64 v10; // r15
  ULONG_PTR v11; // rdx
  int v12; // r13d
  unsigned int v13; // edi
  ULONG_PTR v14; // rdx
  ULONG_PTR v15; // rbx
  int v16; // esi
  unsigned int v17; // r8d
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  unsigned int v22; // edx
  unsigned int v23; // edx
  __int64 v24; // r8
  ULONG_PTR v25; // rbx
  unsigned int v26; // r8d
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r10
  unsigned int v30; // edx
  unsigned int v31; // edx
  __int64 v32; // r8
  ULONG_PTR v33; // rbx
  unsigned int v34; // r8d
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // r10
  unsigned int v38; // edx
  unsigned int v39; // edx
  __int64 v40; // r8
  unsigned int v41; // ebx
  unsigned int v42; // r9d
  unsigned int v43; // r8d
  unsigned __int64 v44; // r13
  unsigned int v45; // r14d
  __int64 v46; // r9
  BOOL v47; // eax
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rdx
  int v52; // edx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r13
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rbx
  __int64 v57; // rdi
  unsigned __int64 v58; // rdx
  unsigned int v59; // r9d
  struct _KLOCK_ENTRIES *v60; // r9
  volatile signed __int64 *v61; // r8
  signed __int64 i; // rdx
  signed __int64 v63; // rax
  ULONG_PTR v64; // rax
  unsigned int v66; // [rsp+30h] [rbp-58h]
  int v67; // [rsp+30h] [rbp-58h]
  ULONG_PTR v68; // [rsp+38h] [rbp-50h]
  ULONG_PTR v69; // [rsp+38h] [rbp-50h]
  ULONG_PTR v70; // [rsp+38h] [rbp-50h]
  int v71; // [rsp+38h] [rbp-50h]
  __int64 v72; // [rsp+38h] [rbp-50h]
  unsigned __int64 v73; // [rsp+38h] [rbp-50h]
  unsigned __int64 v74; // [rsp+38h] [rbp-50h]
  unsigned __int64 v75; // [rsp+48h] [rbp-40h]
  unsigned __int64 v76; // [rsp+90h] [rbp+8h]
  ULONG_PTR v79; // [rsp+A8h] [rbp+20h]

  v79 = a4;
  v76 = a1;
  v6 = a4;
  v7 = a3;
  v66 = 0;
  v8 = a3 + 48;
  v9 = (_RTL_RB_TREE *)a2;
  v10 = a1;
  while ( 1 )
  {
    v11 = v6 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)v6;
    v12 = WORD1(v11);
    v13 = WORD1(v11);
    v14 = HIDWORD(v11);
    *(_BYTE *)(v6 + 6) = (v6 ^ *(_QWORD *)&PspTlsContext.Timer.Processor) >> 48;
    if ( (_WORD)v14 )
    {
      v15 = v6 - 16LL * (unsigned __int16)v14;
      v16 = v6 - 16 * (unsigned __int16)v14;
      v68 = *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)v15 ^ v15;
      a1 = HIWORD(v68);
      if ( !BYTE6(v68) )
      {
        RtlRbRemoveNode(v9 + 1, (PRTL_BALANCED_NODE)(v15 + 8));
        if ( (RtlpHpLfhPerfFlags & 0x20000) != 0 && byte_140FC8BD8 )
          KasanMarkAddressValidNoInline(
            v15,
            16LL * (*(_WORD *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v15) ^ WORD1(v15)));
        v17 = (v16 - v7 + 4127) & 0xFFFFF000;
        v18 = 16
            * (*(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v15) ^ (unsigned __int64)WORD1(v15))
            + 4095;
        v19 = (v16 & 0xFFF) + v18;
        v20 = v18 >> 12;
        v21 = v19 >> 12;
        v22 = (v16 + 16 * (*(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v15) ^ WORD1(v15))
                   - v7) & 0xFFFFF000;
        if ( v17 >= v22 )
          v23 = 0;
        else
          v23 = v22 - v17;
        v24 = *(__int16 *)(v10 + 6);
        a1 = (unsigned int)v20
           + (PspTlsContext.Timer.Processor ^ (unsigned __int16)*(_QWORD *)v15 ^ (unsigned __int16)v15)
           - (v23 >> 12)
           - (_DWORD)v21;
        if ( (_WORD)v24 )
          _InterlockedAdd64((volatile signed __int64 *)(v24 + v10 + 32), (int)a1);
        else
          *(_QWORD *)(v10 + 96) += (int)a1;
        v8 = v7 + 48;
        v9 = (_RTL_RB_TREE *)a2;
        v13 += WORD1(v68);
        v6 = v15;
        v79 = v15;
      }
    }
    v25 = v6 + 16LL * v13;
    if ( v25 < v8 + 16LL * *(unsigned __int16 *)(v7 + 32) )
    {
      v69 = *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)v25 ^ v25;
      a1 = HIWORD(v69);
      if ( !BYTE6(v69) )
      {
        RtlRbRemoveNode(v9 + 1, (PRTL_BALANCED_NODE)(v25 + 8));
        if ( (RtlpHpLfhPerfFlags & 0x20000) != 0 && byte_140FC8BD8 )
          KasanMarkAddressValidNoInline(
            v6 + 16LL * v13,
            16LL * (*(_WORD *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v25) ^ WORD1(v25)));
        v26 = (v25 - v7 + 4127) & 0xFFFFF000;
        v27 = 16
            * (*(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v25) ^ (unsigned __int64)WORD1(v25))
            + 4095;
        v28 = v27 >> 12;
        v29 = ((((_WORD)v6 + 16 * (_WORD)v13) & 0xFFF) + v27) >> 12;
        v30 = (v25 + 16 * (*(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v25) ^ WORD1(v25))
                   - v7) & 0xFFFFF000;
        if ( v26 >= v30 )
          v31 = 0;
        else
          v31 = v30 - v26;
        v32 = *(__int16 *)(v10 + 6);
        a1 = (unsigned int)v28
           + (PspTlsContext.Timer.Processor ^ (unsigned __int16)v25 ^ (unsigned __int16)*(_QWORD *)v25)
           - (v31 >> 12)
           - (_DWORD)v29;
        if ( (_WORD)v32 )
          _InterlockedAdd64((volatile signed __int64 *)(v32 + v10 + 32), (int)a1);
        else
          *(_QWORD *)(v10 + 96) += (int)a1;
        v8 = v7 + 48;
        v13 += WORD1(v69);
      }
    }
    if ( (*(_BYTE *)(v10 + 4) & 1) != 0 )
    {
      v33 = v6 + 16LL * v13;
      if ( v33 < v8 + 16LL * *(unsigned __int16 *)(v7 + 32) )
      {
        v70 = *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)v33 ^ v33;
        a1 = HIWORD(v70);
        if ( !BYTE6(v70) )
        {
          RtlRbRemoveNode((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)(v33 + 8));
          if ( (RtlpHpLfhPerfFlags & 0x20000) != 0 && byte_140FC8BD8 )
            KasanMarkAddressValidNoInline(
              v6 + 16LL * v13,
              16LL * (*(_WORD *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v33) ^ WORD1(v33)));
          v34 = (v33 - v7 + 4127) & 0xFFFFF000;
          v35 = 16
              * (*(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v33) ^ (unsigned __int64)WORD1(v33))
              + 4095;
          v36 = v35 >> 12;
          v37 = ((((_WORD)v6 + 16 * (_WORD)v13) & 0xFFF) + v35) >> 12;
          v38 = (v33
               + 16 * (*(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v33) ^ WORD1(v33))
               - v7) & 0xFFFFF000;
          if ( v34 >= v38 )
            v39 = 0;
          else
            v39 = v38 - v34;
          v40 = *(__int16 *)(v10 + 6);
          a1 = (unsigned int)v36
             + (PspTlsContext.Timer.Processor ^ (unsigned __int16)*(_QWORD *)v33 ^ (unsigned __int16)v33)
             - (v39 >> 12)
             - (_DWORD)v37;
          if ( (_WORD)v40 )
            _InterlockedAdd64((volatile signed __int64 *)(v40 + v10 + 32), (int)a1);
          else
            *(_QWORD *)(v10 + 96) += (int)a1;
          v13 += WORD1(v70);
        }
      }
    }
    if ( v12 != v13 )
    {
      LOWORD(v71) = 0;
      HIWORD(v71) = v13;
      *(_WORD *)(v6 + 2) = ((unsigned int)v6 ^ *(_DWORD *)&PspTlsContext.Timer.Processor ^ v71) >> 16;
      a1 = v6 + 16LL * v13;
      if ( a1 < v7 + 48 + 16LL * *(unsigned __int16 *)(v7 + 32) )
      {
        v72 = 0LL;
        WORD2(v72) = v13;
        *(_WORD *)(a1 + 4) = (*(_QWORD *)&PspTlsContext.Timer.Processor ^ v72 ^ a1) >> 32;
      }
    }
    if ( v13 == *(unsigned __int16 *)(v7 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(v10, v7);
      return v7;
    }
    if ( v13 <= v66 )
      break;
    v41 = v6 - v7;
    v42 = (v6 - v7 + 4127) & 0xFFFFF000;
    a1 = WORD1(v6);
    v43 = (v6 + 16 * (WORD1(v6) ^ *(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v6)) - v7) & 0xFFFFF000;
    if ( v42 >= v43 )
      break;
    a1 = v42 >> 12;
    v44 = *(_QWORD *)(v7 + 16) & (-1LL << a1) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                         - (unsigned __int8)((unsigned __int64)(v43 - 1) >> 12)));
    if ( v43 - v42 < 0x1000 || !v44 )
      break;
    v45 = __popcnt(v44);
    if ( (a5 & 1) == 0 )
    {
      if ( *(__int16 *)(a3 + 36) < 0 )
        goto LABEL_62;
      if ( *(_WORD *)(v10 + 6) )
      {
        v46 = *(_QWORD *)(v10 + 8) ^ v10;
        if ( (*(_BYTE *)(v46 + 0xD) & 8) != 0 )
        {
          v47 = 1;
        }
        else
        {
          v48 = *(__int16 *)((*(_QWORD *)(v10 + 8) ^ v10) + 0x16);
          v49 = *(_QWORD *)(v48 + (*(_QWORD *)(v10 + 8) ^ v10) + 8) >> *(_BYTE *)((*(_QWORD *)(v10 + 8) ^ v10) + 0xB);
          a1 = *(unsigned __int8 *)((*(_QWORD *)(v10 + 8) ^ v10) + 0xC);
          if ( v49 <= 8 )
            v49 = 8LL;
          v50 = *(_QWORD *)(v48 + v46 + 8) >> a1;
          if ( v50 <= 8 )
            v50 = 8LL;
          v73 = *(_QWORD *)(v48 + v46 + 24) + *(_QWORD *)(v48 + v46 + 16) + v45;
          if ( v73 > v49 )
            v47 = (int)RtlpHpEnvCompactionSchedule(*(_QWORD **)((*(_QWORD *)(v10 + 8) ^ v10) + 0x38)) < 0 || v73 > v50;
          else
            v47 = 0;
        }
        if ( !v47 )
          goto LABEL_62;
      }
      else
      {
        v58 = *(_QWORD *)(v10 + 88) >> 7;
        if ( v58 <= 8 )
          v58 = 8LL;
        if ( *(_QWORD *)(v10 + 96) + (unsigned __int64)v45 <= v58 )
        {
LABEL_62:
          v7 = a3;
          if ( *(_WORD *)(v10 + 6) )
          {
            v51 = *(_QWORD *)(*(_QWORD *)(v10 + 8) ^ v10) & a3;
            a1 = *(unsigned __int8 *)((*(_QWORD *)(v10 + 8) ^ v10) + 8);
            if ( (*(_DWORD *)(32 * ((unsigned int)(a3 - v51) >> a1) + v51 + 8) & 4) != 0 )
            {
              v52 = 0;
              do
              {
                _BitScanForward64(&v53, v44);
                v52 += v53;
                v54 = v44 >> v53;
                v67 = v52;
                _BitScanForward64(&v55, ~v54);
                v56 = (((v7 + (unsigned int)(v52 << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v57 = 0LL;
                v75 = (unsigned int)v55;
                v74 = v56 + 8 * ((unsigned int)v55 - 1LL);
                if ( v56 <= v74 )
                {
                  do
                  {
                    if ( v57 && (v56 & 0xFFF) != 0
                      || (v57 = ((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, MmIsAddressValidEx(v56)) )
                    {
                      if ( (*(_QWORD *)v56 & 0x201LL) == 0x201 )
                      {
                        v61 = (volatile signed __int64 *)(((((__int64)(v56 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9)
                                                        - 0x98000000000LL);
                        for ( i = *v61; (i & 0x200) != 0; i = v63 )
                        {
                          if ( (MiFlags & 0x8000000) != 0 )
                            _mm_lfence();
                          v63 = _InterlockedCompareExchange64(v61, i & 0xFFFFFFFFFFFFFDDFuLL | 0x20, i);
                          if ( i == v63 )
                          {
                            _InterlockedDecrement64(&qword_140E2C8C0);
                            break;
                          }
                        }
                      }
                      v56 += 8LL;
                    }
                    else
                    {
                      v56 = ((v57 << 25) + 0x10000000) >> 16;
                    }
                  }
                  while ( v56 <= v74 );
                  v7 = a3;
                  v52 = v67;
                }
                a1 = v75;
                v44 = v54 >> v75;
              }
              while ( v44 );
              v10 = v76;
              v6 = v79;
            }
          }
          break;
        }
      }
    }
    *(_BYTE *)(v6 + 6) = BYTE2(PspTlsContext.Timer.Period) ^ BYTE6(v6) ^ 1;
    *(_DWORD *)(v6 + 8) = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ v6 ^ (v41 >> 12)) | 0x200;
    if ( (*(_BYTE *)(v10 + 5) & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(v10 + 3), a6);
    v59 = v45;
    v7 = a3;
    RtlpHpVsSubsegmentCommitPages(v10, a3, v44, v59, 0);
    if ( (*(_BYTE *)(v10 + 5) & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive((int *)(a2 + 8), *(unsigned __int8 *)(v10 + 3), a6, v60);
    *(_DWORD *)(v6 + 8) &= ~0x200u;
    v8 = a3 + 48;
    v9 = (_RTL_RB_TREE *)a2;
    v79 = v6;
    v66 = v13;
  }
  if ( (*(_BYTE *)(v10 + 4) & 1) != 0 && ((v6 + 32) & 0xFFF) != 0 )
  {
    v64 = RtlpHpVsChunkAlignSplit(a1, v7, v6);
    if ( v64 )
      RtlpHpVsFreeChunkInsert(v10, (_RTL_RB_TREE *)a2, v7, v64);
  }
  RtlpHpVsFreeChunkInsert(v10, (_RTL_RB_TREE *)a2, v7, v6);
  return 0LL;
}
