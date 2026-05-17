/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x1800DF844
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpVsContextAllocate @ 0x180012CA4 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18003F520 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLargeAlloc @ 0x18008A18C (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180092C30 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800933DC (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpGCTimerSchedule @ 0x1800961E4 (RtlpHpGCTimerSchedule.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800BF1B0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1800C14C0 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpSegAlloc @ 0x1800E0094 (RtlpHpSegAlloc.c)
 *     RtlpHpPgContextAllocate @ 0x18010CAD0 (RtlpHpPgContextAllocate.c)
 *     RtlHeapZero @ 0x1801642D0 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpAllocateHeapInternal(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int *a5)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 Slow; // rdi
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned int v14; // ecx
  __int64 v15; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v17; // rdi
  int v18; // edx
  unsigned __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // r13
  int v22; // r15d
  __int64 v23; // r11
  unsigned __int64 v24; // r11
  struct _TEB *v25; // r9
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned int v30; // r10d
  _DWORD *v31; // r8
  __int16 v35; // ax
  int v36; // r14d
  signed __int64 v37; // rbx
  signed __int64 v38; // rax
  unsigned int v39; // r8d
  unsigned __int64 v40; // rbx
  struct _TEB *v41; // r8
  unsigned __int64 v42; // rdx
  unsigned int v43; // r10d
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // edi
  volatile signed __int64 *v49; // rdx
  signed __int64 v50; // r9
  __int64 v55; // r8
  unsigned __int64 v58; // rax
  unsigned int v59; // eax
  signed __int64 v61; // rcx
  signed __int64 v62; // rax
  unsigned int v63; // eax
  unsigned int v64; // r15d
  __int64 v65; // rdi
  __int16 v66; // ax
  signed __int64 v67; // rax
  char v68; // dl
  unsigned __int64 v69; // rdx
  signed __int64 v70; // rtt
  unsigned __int64 v71; // r8
  signed __int64 v72; // rax
  __int64 v73; // r9
  signed __int64 v74; // rax
  signed __int64 v75; // rtt
  signed __int64 v76; // rdx
  __int64 v77; // rax
  int v78; // r10d
  unsigned __int8 v80; // [rsp+30h] [rbp-98h]
  int v81; // [rsp+34h] [rbp-94h]
  unsigned int v82; // [rsp+34h] [rbp-94h]
  signed __int64 v83; // [rsp+38h] [rbp-90h]
  unsigned __int8 v84; // [rsp+3Ch] [rbp-8Ch]
  unsigned int v85; // [rsp+40h] [rbp-88h]
  int v86; // [rsp+4Ch] [rbp-7Ch]
  int v87; // [rsp+50h] [rbp-78h]
  __int64 v88; // [rsp+58h] [rbp-70h]
  __int64 v89; // [rsp+60h] [rbp-68h]

  v5 = a4;
  v6 = a3;
  v85 = a4;
  v7 = a2;
  v8 = a1;
  if ( (a4 & 0x1000) != 0 )
  {
    Slow = RtlpHpPgContextAllocate(a1 + 808, a2, a3, a4);
    v10 = v6;
    LODWORD(a2) = v7;
    if ( Slow )
    {
      *a5 = 3;
      return Slow;
    }
  }
  else
  {
    v10 = a3;
  }
  if ( v6 >= *(unsigned __int16 *)(v8 + 972) )
    goto LABEL_85;
  v11 = v10 + 2;
  v12 = v8 + 896;
  if ( (_DWORD)a2 == v10 )
    v11 = v10;
  v13 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v11 + 15) >> 4] - 1;
  v14 = (unsigned __int16)*(_DWORD *)(v12 + 84);
  if ( v14 < 0x40 )
  {
    v15 = __readgsqword(8 * v14 + 5248);
    goto LABEL_12;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v15 = (__int64)TlsExpansionSlots[v14 - 64];
LABEL_12:
    if ( v15 )
      goto LABEL_14;
  }
  v15 = RtlpHpLfhThreadDataInitializeSet(v12);
LABEL_14:
  v17 = v12 + ((unsigned __int16)v15 << 6);
  v84 = BYTE4(v15);
  v18 = *(unsigned __int16 *)(v17 + 2 * v13);
  if ( !*(_WORD *)(v17 + 2 * v13) )
  {
    if ( !RtlpHpLfhBucketCheckAndUpdate(v12, v13) )
    {
LABEL_84:
      v8 = a1;
LABEL_85:
      v22 = 3;
      if ( v6 > 0x20000 )
      {
        if ( v6 > *(unsigned int *)(v8 + 528) )
        {
          v77 = RtlpHpLargeAlloc(v8, v7, v6, v5);
        }
        else
        {
          v78 = v8 + 512;
          if ( v6 <= *(unsigned int *)(v8 + 336) )
            v78 = v8 + 320;
          v77 = RtlpHpSegAlloc(v78, v7, v6, v6, v5);
        }
      }
      else
      {
        v77 = RtlpHpVsContextAllocate((_BYTE *)(v8 + 704), v7, v6, v5);
      }
      Slow = v77;
      goto LABEL_93;
    }
    v19 = v12 + ((unsigned __int64)v84 << 8) + 1472;
    v18 = *(unsigned __int16 *)(v19 + 2 * v13);
    if ( v17 != v19 )
      *(_WORD *)(v17 + 2 * v13) = *(_WORD *)(v19 + 2 * v13);
  }
  v20 = v18 << 6;
  v21 = v12 + v20;
  v22 = 2;
  if ( *(_WORD *)(v21 + 4) )
  {
    v23 = *(_QWORD *)(v21 + 56);
    if ( (v23 & 0xFFF) != 0 && (*(_QWORD *)(v21 + 56) = v23 - 1, (v24 = v23 & 0xFFFFFFFFFFFFF000uLL) != 0) )
    {
      v25 = NtCurrentTeb();
      v26 = v25->RngState[0];
      v27 = v25->RngState[1];
      v81 = qword_1801C6EC8 ^ *(_DWORD *)(v24 + 40) ^ (v24 >> 12);
      v28 = (v27 + v26) >> 32;
      v29 = v26 ^ v27;
      v30 = *(unsigned __int8 *)(v24 + 24) - 8;
      v25->RngState[1] = __ROL8__(v29, 37);
      v25->RngState[0] = v29 ^ __ROL8__(v26, 24) ^ (v29 << 16);
      v31 = (_DWORD *)(v24 + 64 + 8LL * *(unsigned __int8 *)(v24 + 36));
      while ( *v31 == -1 )
      {
        if ( v31 == (_DWORD *)(v24 + 64 + 8 * (v30 - 1LL)) )
          v31 = (_DWORD *)(v24 + 64);
        else
          v31 += 2;
      }
      _RAX = 1LL << ((unsigned __int16)((unsigned __int8)v28 * (unsigned __int16)__popcnt((unsigned int)~*v31)) >> 8);
      __asm
      {
        pdep    rcx, rax, rcx
        tzcnt   rdx, rcx
      }
      *(_QWORD *)v31 |= ((-(__int64)((unsigned int)v7 < (unsigned __int16)v81) & 0x100000000LL) + 1) << _RDX;
      LODWORD(_RAX) = _RDX + 4 * ((_DWORD)v31 - (v24 + 64));
      *(_BYTE *)(v24 + 36) = (unsigned int)_RAX >> 5;
      Slow = v24 + (unsigned __int16)v81 * (_DWORD)_RAX + (unsigned int)HIWORD(v81);
      if ( (v5 & 2) != 0 )
        RtlHeapZero(Slow, ((unsigned int)v7 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (unsigned int)v7 < (unsigned __int16)v81 )
      {
        v35 = v81 - v7;
        if ( (unsigned __int16)v81 - (_DWORD)v7 == 1 )
          v35 = 0x8000;
        *(_WORD *)((unsigned __int16)v81 + Slow - 2) = v35;
      }
    }
    else
    {
      Slow = RtlpHpLfhSlotAllocateSlow(v12, v12 + v20, v7, v5);
    }
    goto LABEL_83;
  }
  v36 = 0;
  _m_prefetchw((const void *)(v21 + 56));
  v37 = *(_QWORD *)(v21 + 56);
  if ( (v37 & 0xFFF) == 0 )
  {
LABEL_36:
    v39 = v7;
LABEL_37:
    Slow = RtlpHpLfhSlotAllocateSlow(v12, v21, v39, v85);
    goto LABEL_80;
  }
  while ( 1 )
  {
    v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 56), v37 - 1, v37);
    if ( v37 == v38 )
      break;
    v36 = 1;
    v37 = v38;
    if ( (v38 & 0xFFF) == 0 )
      goto LABEL_36;
  }
  v39 = v7;
  v40 = v37 & 0xFFFFFFFFFFFFF000uLL;
  if ( !v40 )
    goto LABEL_37;
  v41 = NtCurrentTeb();
  v42 = v41->RngState[1];
  v87 = qword_1801C6EC8 ^ *(_DWORD *)(v40 + 40) ^ (v40 >> 12);
  v43 = *(unsigned __int8 *)(v40 + 24) - 8;
  v88 = (-(__int64)((unsigned int)v7 < (unsigned __int16)v87) & 0x100000000LL) + 1;
  v44 = v41->RngState[0];
  v45 = v42 + v44;
  v46 = v44 ^ v42;
  v41->RngState[1] = __ROL8__(v46, 37);
  v41->RngState[0] = v46 ^ __ROL8__(v44, 24) ^ (v46 << 16);
  v82 = *(unsigned __int8 *)(v40 + 50);
  v47 = v40 + 64 + 8 * (v43 - 1LL);
  v80 = *(_BYTE *)(v40 + 39);
  v48 = BYTE4(v45);
  v89 = v47;
  v49 = (volatile signed __int64 *)(v40 + 64 + 8LL * *(unsigned __int8 *)(v40 + 36));
  while ( 1 )
  {
    v50 = *v49;
    _R8 = (unsigned int)~*(_DWORD *)v49;
    if ( *(_DWORD *)v49 != -1 )
      break;
LABEL_53:
    if ( v49 == (volatile signed __int64 *)v47 )
      v49 = (volatile signed __int64 *)(v40 + 64);
    else
      ++v49;
  }
  while ( 1 )
  {
    if ( (qword_1801C6EE8 & 4) != 0 )
    {
      _RAX = 1LL << ((unsigned __int16)(v48 * __popcnt(_R8)) >> 8);
      __asm
      {
        pdep    rcx, rax, r8
        tzcnt   r10, rcx
      }
      v55 = v88 << _R10;
    }
    else
    {
      if ( v49 == (volatile signed __int64 *)v47 || v82 != 32 )
      {
        __asm { tzcnt   rcx, r8 }
        _BitScanReverse64(&v58, _R8);
        v59 = v58 - _RCX + 1;
        if ( v82 < v59 )
          v59 = v82;
        v48 = _RCX + ((v59 * v48) >> 8);
        _R8 = __ROR8__(_R8, v48);
        __asm { tzcnt   r10, r8 }
        LODWORD(_R10) = v48 + _R10;
      }
      else
      {
        _RAX = (unsigned int)__ROR4__(_R8, v48);
        __asm { tzcnt   r10, rax }
        LODWORD(_R10) = ((_BYTE)v48 + (_BYTE)_R10) & 0x1F;
      }
      v55 = v88 << _R10;
    }
    v61 = v50;
    v62 = _InterlockedCompareExchange64(v49, v50 | v55, v50);
    v50 = v62;
    if ( v62 == v61 )
      break;
    v47 = v89;
    v63 = ~(_DWORD)v62;
    _R8 = v63;
    if ( !v63 )
      goto LABEL_53;
  }
  v64 = _R10 + 4 * ((_DWORD)v49 - (v40 + 64));
  *(_BYTE *)(v40 + 36) = v64 >> 5;
  v65 = HIWORD(v87) + (unsigned __int16)v87 * v64;
  if ( v80 <= 1u )
  {
    if ( v64 > *(unsigned __int16 *)(v40 + 48) )
      RtlpHpLfhSubsegmentPrefetch(v12, v40, v65, (unsigned __int16)v87);
  }
  else if ( (int)RtlpHpLfhSubsegmentCommitBlock(v12, v40, v65) < 0 )
  {
    Slow = 0LL;
    if ( v64 != -1 )
    {
      _InterlockedAnd64(
        (volatile signed __int64 *)(v40 + 8LL * (v64 >> 5) + 64),
        __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v64 & 0x1F));
      goto LABEL_69;
    }
    v22 = 2;
    goto LABEL_68;
  }
  Slow = v40 + v65;
  v22 = 2;
  if ( (v85 & 2) != 0 )
    RtlHeapZero(Slow, ((unsigned int)v7 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (unsigned int)v7 < (unsigned __int16)v87 )
  {
    v66 = v87 - v7;
    if ( (unsigned __int16)v87 - (_DWORD)v7 == 1 )
      v66 = 0x8000;
    *(_WORD *)((unsigned __int16)v87 + Slow - 2) = v66;
  }
LABEL_68:
  if ( !Slow )
  {
LABEL_69:
    v67 = *(_QWORD *)(v40 + 16);
    do
    {
      v83 = v67;
      v68 = BYTE6(v67);
      v86 = HIDWORD(v67);
      if ( BYTE6(v67) == 1 )
        v68 = 2;
      WORD1(v83) = WORD1(v67) + 1;
      BYTE6(v83) = v68;
      v69 = (unsigned __int64)*(unsigned __int16 *)(v40 + 44) << 6;
      v70 = v67;
      v67 = _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 16), v83, v67);
    }
    while ( v70 != v67 );
    v6 = a3;
    if ( !*(_BYTE *)(v69 + v12 + 92) )
    {
      *(_BYTE *)(v69 + v12 + 92) = 1;
      if ( !(_DWORD)qword_1801C7278 )
        RtlpHpGCTimerSchedule();
    }
    if ( BYTE2(v86) == 1 )
    {
      v71 = (unsigned __int64)(unsigned __int16)v86 << 6;
      _m_prefetchw((const void *)(v71 + v12 + 8));
      v72 = *(_QWORD *)(v71 + v12 + 8);
      v73 = *(_QWORD *)(v40 + 24);
      *(_QWORD *)(v40 + 24) = v73 ^ (v73 ^ v72) & 0xFFFFFFFFFFFFF000uLL;
      v75 = v72;
      v74 = _InterlockedCompareExchange64((volatile signed __int64 *)(v71 + v12 + 8), v72 & 0xFFF | v40, v72);
      if ( v75 != v74 )
      {
        do
        {
          v76 = v74;
          *(_QWORD *)(v40 + 24) = v73 ^ (v74 ^ v73) & 0xFFFFFFFFFFFFF000uLL;
          v74 = _InterlockedCompareExchange64((volatile signed __int64 *)(v71 + v12 + 8), v40 | v74 & 0xFFF, v74);
        }
        while ( v74 != v76 );
      }
    }
    v22 = 2;
  }
LABEL_80:
  if ( v36 )
    RtlpHpLfhBucketUpdateAffinityMapping(
      v12,
      (volatile signed __int8 *)(v12 + ((unsigned __int64)*(unsigned __int16 *)(v21 + 2) << 6)));
  v5 = v85;
LABEL_83:
  if ( Slow == -1LL )
    goto LABEL_84;
LABEL_93:
  if ( a5 )
    *a5 = v22;
  return Slow;
}
