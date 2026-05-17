/*
 * XREFs of RtlpHpSegMgrCommit @ 0x180069E10
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x180069850 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegMgrRelease @ 0x18008A7C4 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrAllocate @ 0x18008B594 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180089D10 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpHeapValidateProtection @ 0x18008B8C0 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x18008BB10 (RtlpHpAllocVA.c)
 *     RtlpHpTlLogVAChange @ 0x18008BD58 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18008C0B4 (RtlpHpVaMgrCtxFree.c)
 *     RtlCSparseBitmapFindBitSetCapped @ 0x18008CDA0 (RtlCSparseBitmapFindBitSetCapped.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r12d
  unsigned int v8; // r15d
  unsigned __int64 v9; // r14
  unsigned int v10; // esi
  __int64 v12; // r9
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // r10d
  volatile signed __int16 *v18; // r13
  void *v19; // rcx
  unsigned __int64 v20; // rsi
  size_t v21; // r14
  signed __int16 v22; // di
  int v23; // r14d
  __int16 v24; // bx
  __int16 v25; // r15
  unsigned int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rtt
  unsigned __int64 v30; // r8
  bool v31; // zf
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  signed __int16 v34; // bx
  __int16 v35; // si
  _QWORD *SchedulerSharedDataSlot; // rdx
  __int64 v37; // rax
  _QWORD *v38; // rcx
  _QWORD *v39; // rcx
  signed __int16 v41; // ax
  int v42; // esi
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // r8
  int v48; // eax
  int v49; // eax
  size_t v50; // r14
  void *v51; // rsi
  int v52; // ebx
  __m128i v53; // xmm1
  unsigned __int64 v54; // rax
  int v55; // eax
  char v56; // cl
  unsigned __int64 v57; // rdi
  _BYTE *v58; // rdi
  __int64 v59; // rax
  __int64 i; // r15
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rcx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rbx
  unsigned __int64 v66; // rcx
  __int64 v67; // rdi
  __m128i v68; // xmm6
  unsigned __int64 v69; // rbx
  unsigned __int64 v70; // rbx
  int v71; // edi
  unsigned __int64 v72; // r11
  unsigned __int64 v73; // r10
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // rdx
  unsigned __int16 v77; // r9
  signed __int16 v78; // ax
  signed __int16 v79; // tt
  __int64 v80; // r9
  unsigned __int64 v81; // xmm1_8
  unsigned __int64 v82; // rcx
  signed __int16 v83; // ax
  signed __int16 v84; // cx
  signed __int16 v85; // r9
  __int16 v86; // dx
  signed __int16 v87; // tt
  unsigned __int64 v88; // [rsp+30h] [rbp-A8h] BYREF
  int v89; // [rsp+38h] [rbp-A0h]
  unsigned int v90; // [rsp+3Ch] [rbp-9Ch]
  __int64 v91; // [rsp+40h] [rbp-98h] BYREF
  int v92; // [rsp+48h] [rbp-90h]
  void *v93; // [rsp+50h] [rbp-88h]
  size_t Size; // [rsp+58h] [rbp-80h]
  signed __int64 v95[2]; // [rsp+60h] [rbp-78h] BYREF
  __m128i v96; // [rsp+70h] [rbp-68h] BYREF
  __m128i v97; // [rsp+80h] [rbp-58h] BYREF

  v7 = a5;
  v8 = a6 & 0xBFFFFFFF;
  v9 = a3;
  v10 = -*(_DWORD *)a1;
  v95[0] = 0LL;
  v92 = a6 & 0x40000000;
  v90 = a6 & 0xBFFFFFFF;
  v12 = a1;
  if ( a5 > 0 )
  {
    if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(a5 << 12, *(_QWORD *)(a1 + 56)) )
      return 3221225773LL;
    v12 = a1;
  }
  if ( (*(_BYTE *)(v12 + 13) & 7) != 0 )
  {
    v14 = ((a2 & 0xFFFFFFFFFFE00000uLL) - qword_1801C7910) >> 20;
    v88 = a2 & 0xFFFFFFFFFFE00000uLL;
    if ( RtlCSparseBitmapFindBitSetCapped(&unk_1801C7928, 8 * (v14 << dword_1801C7920), 8 * (1LL << dword_1801C7920)) == -1
      || (v15 = v14 << dword_1801C7920, !(v15 + qword_1801C7930)) )
    {
      RtlpLogHeapFailure(22, a2 & 0xFFE00000, 0, 0, 0LL, 0LL);
      v16 = 0LL;
    }
    else
    {
      v16 = v15 + qword_1801C7930 + 8;
    }
    if ( a5 <= 0 || (_DWORD)v9 || v10 >= 0x200000 || a2 <= v88 )
    {
      v17 = a7;
    }
    else
    {
      LOBYTE(v17) = a7;
      v89 = a7;
      if ( (a7 & 2) != 0 )
      {
LABEL_18:
        v12 = a1;
        v18 = (volatile signed __int16 *)(v16 + 2 * (v9 >> 9));
        goto LABEL_20;
      }
      v17 = a7 | 1;
    }
    v89 = v17;
    goto LABEL_18;
  }
  LOBYTE(v17) = a7;
  v18 = 0LL;
  v89 = a7;
LABEL_20:
  v19 = (void *)(a2 + (unsigned int)((_DWORD)v9 << 12));
  v20 = (unsigned __int64)v19;
  v21 = (unsigned int)(a4 << 12);
  v93 = v19;
  Size = v21;
  v88 = (unsigned __int64)v19;
  v91 = v21;
  if ( !v18 )
  {
LABEL_63:
    if ( v7 > 0 )
    {
LABEL_64:
      v42 = v92;
      if ( v92 && (v8 & 0x20000000) == 0 )
        v8 |= 0x40000000u;
      v43 = a1;
      v44 = 64LL;
      v45 = *(_QWORD *)(a1 + 56);
      v46 = *(_QWORD *)(v45 + 8);
      v47 = (unsigned __int8)BYTE1(*(_QWORD *)v45);
      if ( (*(_DWORD *)(v45 + 20) & 0x40000000) == 0 )
        v44 = 4LL;
      v97 = *(__m128i *)(a1 + 40);
      v48 = RtlpHpHeapValidateProtection(v45, v44, v47, v46);
      v49 = RtlpHpAllocVA((unsigned int)&v88, (unsigned int)&v91, 0, v8, v48, (__int64)&v97);
      v50 = Size;
      v31 = v42 == 0;
      v51 = v93;
      v52 = v49;
      if ( !v31 && v49 >= 0 && (v8 & 0x40000000) == 0 )
        memset_thunk_772440563353939046(v93, 0, Size);
LABEL_123:
      if ( !v18 )
        return (unsigned int)v52;
      if ( (*v18 & 0x4000) != 0 && v52 >= 0 )
      {
        v82 = 1LL;
        if ( v7 <= 0 )
          v82 = -1LL;
        _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(v43 + 20) + v43 + 8), v82);
        _InterlockedAdd64((volatile signed __int64 *)(v43 + *(__int16 *)(v43 + 20)), v7);
      }
      v83 = *v18;
      while ( 1 )
      {
        v84 = v83;
        v85 = v83;
        if ( (v83 & 0x4000) != 0 )
        {
          if ( v52 < 0 || v7 <= 0 )
            v86 = 0;
          else
            v86 = 0x8000;
          v84 = v86 | v83 & 0x3FFF;
        }
        if ( v7 <= 0 )
        {
          v84 += v7;
        }
        else if ( v52 < 0 )
        {
          v84 -= v7;
        }
        if ( v84 == v83 )
          break;
        v87 = v83;
        v83 = _InterlockedCompareExchange16(v18, v84, v83);
        if ( v87 == v83 )
        {
          if ( (v85 & 0x4000) != 0 )
            RtlReleaseSRWLockExclusive(v95);
          break;
        }
      }
      if ( (v8 & 0x20000000) == 0 || v52 >= 0 || (v89 & 2) != 0 )
        return (unsigned int)v52;
      v12 = a1;
      LOBYTE(v17) = v89 | 1;
      v89 |= 1u;
      v90 = v8 & 0xDFFFFFFF;
      v88 = (unsigned __int64)v51;
      v91 = v50;
      goto LABEL_21;
    }
LABEL_75:
    v43 = a1;
    v53 = *(__m128i *)(a1 + 40);
    if ( v8 == 0x8000 )
    {
      v54 = (v20 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
      v88 = v54;
      v91 = v21 + v20 - v54;
      if ( v21 + v20 == v54 )
      {
        v52 = 0;
LABEL_122:
        v51 = v93;
        v50 = Size;
        goto LABEL_123;
      }
      RtlpHpVaMgrCtxFree(&unk_1801C7908, &v88, &v91, v12);
      v55 = 0;
    }
    else
    {
      v56 = _mm_cvtsi128_si32(_mm_srli_si128(v53, 1));
      if ( (unsigned __int8)(v56 - 2) <= 2u )
      {
        v57 = (v20 - qword_1801C7910) >> 20;
        if ( RtlCSparseBitmapFindBitSetCapped(
               &unk_1801C7928,
               8 * (v57 << dword_1801C7920),
               8 * (1LL << dword_1801C7920)) == -1 )
          v58 = 0LL;
        else
          v58 = (_BYTE *)(qword_1801C7930 + (v57 << dword_1801C7920));
        v59 = (unsigned __int8)v58[1];
        v96.m128i_i64[0] = v20;
        v96.m128i_i64[1] = v21;
        for ( i = 6 * v59; (*v58 & 2) != 0; v58 -= 32 )
          ;
        v61 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)(unsigned __int8)byte_1801C81A6[48 * v59] >> 1) & 7];
        if ( (unsigned int)v61 > 0x100000 )
          goto LABEL_115;
        if ( (unsigned int)v61 < 0x10000 )
          v61 = 0x10000LL;
        v62 = (unsigned int)v61;
        v63 = ~(v61 - 1);
        v64 = v63 & (v20 + v21);
        v65 = v63 & (v20 + v62 - 1);
        v96.m128i_i64[0] = v65;
        v66 = v64 - v65;
        if ( v64 <= v65 )
          v66 = 0LL;
        v96.m128i_i64[1] = v66;
        if ( !v66 )
          goto LABEL_115;
        if ( (*v58 & 4) != 0 )
          goto LABEL_111;
        v67 = qword_1801C8190[i];
        v68 = v96;
        v97 = v96;
        v69 = (v65 - *(_QWORD *)(v67 + 8)) >> 20;
        v70 = RtlCSparseBitmapFindBitSetCapped(
                v67 + 32,
                8 * (v69 << *(_DWORD *)(v67 + 24)),
                8 * (1LL << *(_DWORD *)(v67 + 24))) == -1
            ? 0LL
            : *(_QWORD *)(v67 + 40) + (v69 << *(_DWORD *)(v67 + 24));
        v71 = 0;
        v72 = _mm_srli_si128(v68, 8).m128i_u64[0];
        if ( !v72 )
          goto LABEL_115;
        v73 = v97.m128i_i64[0];
        do
        {
          v74 = *(_QWORD *)(qword_1801C8190[i] + 8)
              + ((v70 - *(_QWORD *)(qword_1801C8190[i] + 40)) >> *(_DWORD *)(qword_1801C8190[i] + 24) << 20);
          v75 = v74 + 0x100000;
          if ( v72 + v73 <= v74 || v75 <= v73 )
          {
            BYTE2(v74) = 0;
            v76 = 0LL;
          }
          else
          {
            if ( v73 > v74 )
              v74 = v73;
            if ( v72 + v73 < v75 )
              v75 = v72 + v73;
            v76 = v75 - v74;
          }
          v77 = ((1 << SBYTE2(v76)) - 1) << (BYTE2(v74) & 0xF);
          _m_prefetchw((const void *)(v70 + 2));
          v78 = *(_WORD *)(v70 + 2);
          do
          {
            v79 = v78;
            v78 = _InterlockedCompareExchange16((volatile signed __int16 *)(v70 + 2), ~v77 & v78, v78);
          }
          while ( v79 != v78 );
          if ( ((unsigned __int16)v78 & v77) != 0 )
            v71 = 2;
          v73 += v76;
          v70 += 32LL;
          v72 -= v76;
        }
        while ( v72 );
        v7 = a5;
        if ( v71 == 2 )
        {
LABEL_111:
          if ( (byte_1801C81A6[8 * i] & 0xE) == 0xA )
            ((void (__fastcall *)(__int64, __int64, __m128i *, unsigned __int64 *, int))(RtlpHpHeapGlobals ^ *(_QWORD *)(qword_1801C8198[i] + 16) ^ qword_1801C8198[i]))(
              RtlpHpHeapGlobals ^ *(_QWORD *)qword_1801C8198[i] ^ qword_1801C8198[i],
              -1LL,
              &v96,
              &v96.m128i_u64[1],
              0x4000);
          else
            ZwFreeVirtualMemory(-1LL, &v96, &v96.m128i_u64[1], 0x4000LL);
          v43 = a1;
          v52 = 0;
          v8 = v90;
        }
        else
        {
LABEL_115:
          v43 = a1;
          v52 = 0;
          v8 = v90;
        }
        goto LABEL_120;
      }
      v80 = (unsigned __int16)v8 & 0xC000;
      if ( v56 == 5 )
      {
        v81 = _mm_srli_si128(v53, 8).m128i_u64[0];
        v55 = ((__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64 *, __int64 *, _DWORD))(RtlpHpHeapGlobals ^ *(_QWORD *)(v81 + 16) ^ v81))(
                RtlpHpHeapGlobals ^ *(_QWORD *)v81 ^ v81,
                -1LL,
                &v88,
                &v91,
                v80);
      }
      else
      {
        v55 = ZwFreeVirtualMemory(-1LL, &v88, &v91, v80);
      }
    }
    v52 = v55;
LABEL_120:
    if ( (RtlpHpHeapFeatures & 0x10) != 0 )
      RtlpHpTlLogVAChange(v8, v91, v88, (unsigned int)v52);
    goto LABEL_122;
  }
LABEL_21:
  v22 = *v18;
  v23 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v24 = v22;
      v25 = v22;
      if ( v7 <= 0 )
        break;
      if ( (v22 & 0x4000) == 0 )
      {
        if ( (v22 & 0x7FF) != 0 )
          goto LABEL_37;
        if ( (v17 & 3) != 0 )
        {
          v31 = (v17 & 2) == 0;
        }
        else
        {
          v26 = *(_BYTE *)(v12 + 13) & 7;
          if ( v26 <= 1 )
          {
            if ( (*(_BYTE *)(v12 + 13) & 8) != 0 )
              goto LABEL_37;
            v32 = v12 + *(__int16 *)(v12 + 22);
            v12 = *(_QWORD *)(v32 + 56);
            v33 = *(_QWORD *)(v32 + 64) + *(_QWORD *)(v32 + 48);
            if ( v33 >= *(_QWORD *)(v32 + 80)
              || v33 >= *(_QWORD *)(v32 + 72)
              && v12 + *(_QWORD *)(v32 + 40) < ((v33 * *(unsigned __int8 *)(v32 + 88)) << 9) / 0x64 )
            {
              goto LABEL_37;
            }
            goto LABEL_46;
          }
          if ( v26 == 2 )
            goto LABEL_37;
          if ( v26 == 3 )
          {
LABEL_46:
            v24 = v22 | 0x4000;
            goto LABEL_37;
          }
          v27 = qword_1801C6F00 ^ ((unsigned __int64)qword_1801C6F00 >> 12) ^ ((qword_1801C6F00 ^ ((unsigned __int64)qword_1801C6F00 >> 12)) << 25) ^ ((qword_1801C6F00 ^ ((unsigned __int64)qword_1801C6F00 >> 12) ^ ((qword_1801C6F00 ^ ((unsigned __int64)qword_1801C6F00 >> 12)) << 25)) >> 27);
          v29 = qword_1801C6F00;
          v28 = _InterlockedCompareExchange64(&qword_1801C6F00, v27, qword_1801C6F00);
          if ( v29 != v28 )
          {
            do
            {
              v30 = v28;
              v27 = v28 ^ (v28 >> 12) ^ ((v28 ^ (v28 >> 12)) << 25) ^ ((v28 ^ (v28 >> 12) ^ ((v28 ^ (v28 >> 12)) << 25)) >> 27);
              v28 = _InterlockedCompareExchange64(&qword_1801C6F00, v27, v28);
            }
            while ( v28 != v30 );
          }
          v31 = (-(int)v27 & 1) == 0;
        }
        if ( !v31 )
          goto LABEL_46;
LABEL_37:
        v34 = v7 + v24;
        goto LABEL_38;
      }
      _mm_pause();
      v22 = *v18;
      v12 = a1;
    }
    if ( v22 >= 0 )
      goto LABEL_62;
    if ( v7 + (v22 & 0x7FF) )
      goto LABEL_37;
    v34 = v22 | 0x4000;
LABEL_38:
    v35 = v34 & 0x4000;
    if ( (v34 & 0x4000) != 0 )
    {
      v23 = 1;
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        v37 = 0LL;
        v38 = SchedulerSharedDataSlot;
        while ( *v38 )
        {
          v37 = (unsigned int)(v37 + 1);
          ++v38;
          if ( (unsigned int)v37 >= 8 )
            goto LABEL_52;
        }
        v39 = &SchedulerSharedDataSlot[v37];
        if ( v39 )
          *v39 = v95;
      }
LABEL_52:
      if ( _interlockedbittestandset64((volatile signed __int32 *)v95, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v95, (__int64)SchedulerSharedDataSlot);
    }
    v41 = _InterlockedCompareExchange16(v18, v34, v22);
    v31 = v22 == v41;
    v22 = v41;
    if ( v31 )
      break;
    if ( v23 )
    {
      RtlReleaseSRWLockExclusive(v95);
      v23 = 0;
    }
    LOBYTE(v17) = v89;
    v12 = a1;
  }
  if ( v7 <= 0 )
  {
    if ( !v35 )
      goto LABEL_149;
    v21 = 0x200000LL;
    v8 = v90;
    v20 = v88 & 0xFFFFFFFFFFE00000uLL;
    v88 &= 0xFFFFFFFFFFE00000uLL;
    v91 = 0x200000LL;
    goto LABEL_75;
  }
  if ( v25 >= 0 )
  {
    if ( v35 )
    {
      v88 &= 0xFFFFFFFFFFE00000uLL;
      v8 = v90 | 0x20000000;
      v91 = 0x200000LL;
      goto LABEL_64;
    }
LABEL_62:
    v8 = v90;
    v21 = v91;
    v20 = v88;
    goto LABEL_63;
  }
LABEL_149:
  _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v7);
  if ( v92 )
    memset_thunk_772440563353939046((void *)(a2 + (a3 << 12)), 0, (unsigned int)(a4 << 12));
  return 0LL;
}
