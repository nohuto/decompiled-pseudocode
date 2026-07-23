/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x1800DC7B4
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18002DB90 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180029A90 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpVsContextAllocate @ 0x18005E3D4 (RtlpHpVsContextAllocate.c)
 *     RtlpHpGCTimerSchedule @ 0x180063B84 (RtlpHpGCTimerSchedule.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x180071D60 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x180072340 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1800BEC50 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpSegAlloc @ 0x1800DD93C (RtlpHpSegAlloc.c)
 *     RtlpHpPgContextAllocate @ 0x18010C620 (RtlpHpPgContextAllocate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117744 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlHeapZero @ 0x1801641D0 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpAllocateHeapInternal(
        char *BaseAddress,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int *a5)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbp
  char *v8; // rbx
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
  __int64 v20; // r13
  int v21; // r15d
  __int64 v22; // r11
  unsigned int v23; // r8d
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
  unsigned __int64 v39; // rbx
  struct _TEB *v40; // r8
  unsigned __int64 v41; // rdx
  unsigned int v42; // r10d
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // edi
  volatile signed __int64 *v48; // rdx
  signed __int64 v49; // r9
  __int64 v54; // r8
  unsigned __int64 v57; // rax
  unsigned int v58; // eax
  signed __int64 v60; // rcx
  signed __int64 v61; // rax
  unsigned int v62; // eax
  unsigned int v63; // r15d
  __int64 v64; // rdi
  __int16 v65; // ax
  signed __int64 v66; // rax
  char v67; // dl
  unsigned __int64 v68; // rdx
  signed __int64 v69; // rtt
  unsigned __int64 v70; // r8
  signed __int64 v71; // rax
  __int64 v72; // r9
  signed __int64 v73; // rax
  signed __int64 v74; // rtt
  signed __int64 v75; // rdx
  __int64 v76; // rax
  int v77; // r10d
  unsigned __int8 v79; // [rsp+30h] [rbp-98h]
  int v81; // [rsp+38h] [rbp-90h]
  unsigned int v82; // [rsp+38h] [rbp-90h]
  signed __int64 v83; // [rsp+40h] [rbp-88h]
  unsigned __int8 v84; // [rsp+44h] [rbp-84h]
  int v85; // [rsp+4Ch] [rbp-7Ch]
  int v86; // [rsp+50h] [rbp-78h]
  __int64 v87; // [rsp+58h] [rbp-70h]
  __int64 v88; // [rsp+60h] [rbp-68h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = BaseAddress;
  if ( (a4 & 0x1000) != 0 )
  {
    Slow = RtlpHpPgContextAllocate(BaseAddress + 808, a2, a3);
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
  if ( v6 >= *((unsigned __int16 *)v8 + 486) )
    goto LABEL_83;
  v11 = v10 + 2;
  v12 = (__int64)(v8 + 896);
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
LABEL_82:
      v8 = BaseAddress;
LABEL_83:
      v21 = 3;
      if ( v6 > 0x20000 )
      {
        if ( v6 > *((unsigned int *)v8 + 132) )
        {
          v76 = (__int64)RtlpHpLargeAlloc(v8, v7, v6, v5);
        }
        else
        {
          v77 = (_DWORD)v8 + 512;
          if ( v6 <= *((unsigned int *)v8 + 84) )
            v77 = (_DWORD)v8 + 320;
          v76 = RtlpHpSegAlloc(v77, v7, v6, v6, v5);
        }
      }
      else
      {
        v76 = RtlpHpVsContextAllocate(v8 + 704, v7, v6, v5);
      }
      Slow = v76;
      goto LABEL_91;
    }
    v19 = v12 + ((unsigned __int64)v84 << 8) + 1472;
    v18 = *(unsigned __int16 *)(v19 + 2 * v13);
    if ( v17 != v19 )
      *(_WORD *)(v17 + 2 * v13) = *(_WORD *)(v19 + 2 * v13);
  }
  v20 = v12 + (unsigned int)(v18 << 6);
  v21 = 2;
  if ( *(_WORD *)(v20 + 4) )
  {
    v22 = *(_QWORD *)(v20 + 56);
    v23 = v7;
    if ( (v22 & 0xFFF) != 0 )
    {
      *(_QWORD *)(v20 + 56) = v22 - 1;
      v24 = v22 & 0xFFFFFFFFFFFFF000uLL;
      if ( v24 )
      {
        v25 = NtCurrentTeb();
        v26 = v25->RngState[0];
        v27 = v25->RngState[1];
        v81 = qword_1801C5EC8 ^ *(_DWORD *)(v24 + 40) ^ (v24 >> 12);
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
        goto LABEL_81;
      }
    }
LABEL_37:
    Slow = RtlpHpLfhSlotAllocateSlow(v12, v20, v23, v5);
    goto LABEL_81;
  }
  v36 = 0;
  _m_prefetchw((const void *)(v20 + 56));
  v37 = *(_QWORD *)(v20 + 56);
  if ( (v37 & 0xFFF) == 0 )
  {
LABEL_35:
    v23 = v7;
LABEL_36:
    v5 = a4;
    goto LABEL_37;
  }
  while ( 1 )
  {
    v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 56), v37 - 1, v37);
    if ( v37 == v38 )
      break;
    v36 = 1;
    v37 = v38;
    if ( (v38 & 0xFFF) == 0 )
      goto LABEL_35;
  }
  v23 = v7;
  v39 = v37 & 0xFFFFFFFFFFFFF000uLL;
  if ( !v39 )
    goto LABEL_36;
  v40 = NtCurrentTeb();
  v41 = v40->RngState[1];
  v86 = qword_1801C5EC8 ^ *(_DWORD *)(v39 + 40) ^ (v39 >> 12);
  v42 = *(unsigned __int8 *)(v39 + 24) - 8;
  v87 = (-(__int64)((unsigned int)v7 < (unsigned __int16)v86) & 0x100000000LL) + 1;
  v43 = v40->RngState[0];
  v44 = v41 + v43;
  v45 = v43 ^ v41;
  v40->RngState[1] = __ROL8__(v45, 37);
  v40->RngState[0] = v45 ^ __ROL8__(v43, 24) ^ (v45 << 16);
  v82 = *(unsigned __int8 *)(v39 + 50);
  v46 = v39 + 64 + 8 * (v42 - 1LL);
  v79 = *(_BYTE *)(v39 + 39);
  v47 = BYTE4(v44);
  v88 = v46;
  v48 = (volatile signed __int64 *)(v39 + 64 + 8LL * *(unsigned __int8 *)(v39 + 36));
  while ( 1 )
  {
    v49 = *v48;
    _R8 = (unsigned int)~*(_DWORD *)v48;
    if ( *(_DWORD *)v48 != -1 )
      break;
LABEL_53:
    if ( v48 == (volatile signed __int64 *)v46 )
      v48 = (volatile signed __int64 *)(v39 + 64);
    else
      ++v48;
  }
  while ( 1 )
  {
    if ( (qword_1801C5EE8 & 4) != 0 )
    {
      _RAX = 1LL << ((unsigned __int16)(v47 * __popcnt(_R8)) >> 8);
      __asm
      {
        pdep    rcx, rax, r8
        tzcnt   r10, rcx
      }
      v54 = v87 << _R10;
    }
    else
    {
      if ( v48 == (volatile signed __int64 *)v46 || v82 != 32 )
      {
        __asm { tzcnt   rcx, r8 }
        _BitScanReverse64(&v57, _R8);
        v58 = v57 - _RCX + 1;
        if ( v82 < v58 )
          v58 = v82;
        v47 = _RCX + ((v58 * v47) >> 8);
        _R8 = __ROR8__(_R8, v47);
        __asm { tzcnt   r10, r8 }
        LODWORD(_R10) = v47 + _R10;
      }
      else
      {
        _RAX = (unsigned int)__ROR4__(_R8, v47);
        __asm { tzcnt   r10, rax }
        LODWORD(_R10) = ((_BYTE)v47 + (_BYTE)_R10) & 0x1F;
      }
      v54 = v87 << _R10;
    }
    v60 = v49;
    v61 = _InterlockedCompareExchange64(v48, v49 | v54, v49);
    v49 = v61;
    if ( v61 == v60 )
      break;
    v46 = v88;
    v62 = ~(_DWORD)v61;
    _R8 = v62;
    if ( !v62 )
      goto LABEL_53;
  }
  v63 = _R10 + 4 * ((_DWORD)v48 - (v39 + 64));
  *(_BYTE *)(v39 + 36) = v63 >> 5;
  v64 = HIWORD(v86) + (unsigned __int16)v86 * v63;
  if ( v79 <= 1u )
  {
    if ( v63 > *(unsigned __int16 *)(v39 + 48) )
      RtlpHpLfhSubsegmentPrefetch(v12, v39, v64, (unsigned __int16)v86);
    goto LABEL_61;
  }
  if ( (int)RtlpHpLfhSubsegmentCommitBlock(v12, v39, v64) >= 0 )
  {
LABEL_61:
    Slow = v39 + v64;
    if ( (a4 & 2) != 0 )
      RtlHeapZero(Slow, ((unsigned int)v7 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned int)v7 < (unsigned __int16)v86 )
    {
      v65 = v86 - v7;
      if ( (unsigned __int16)v86 - (_DWORD)v7 == 1 )
        v65 = 0x8000;
      *(_WORD *)((unsigned __int16)v86 + Slow - 2) = v65;
    }
    goto LABEL_67;
  }
  Slow = 0LL;
  if ( v63 != -1 )
  {
    _InterlockedAnd64(
      (volatile signed __int64 *)(v39 + 8LL * (v63 >> 5) + 64),
      __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v63 & 0x1F));
    goto LABEL_68;
  }
LABEL_67:
  if ( !Slow )
  {
LABEL_68:
    v66 = *(_QWORD *)(v39 + 16);
    do
    {
      v83 = v66;
      v67 = BYTE6(v66);
      v85 = HIDWORD(v66);
      if ( BYTE6(v66) == 1 )
        v67 = 2;
      WORD1(v83) = WORD1(v66) + 1;
      BYTE6(v83) = v67;
      v68 = (unsigned __int64)*(unsigned __int16 *)(v39 + 44) << 6;
      v69 = v66;
      v66 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 16), v83, v66);
    }
    while ( v69 != v66 );
    v6 = a3;
    if ( !*(_BYTE *)(v68 + v12 + 92) )
    {
      *(_BYTE *)(v68 + v12 + 92) = 1;
      if ( !(_DWORD)qword_1801C6278 )
        RtlpHpGCTimerSchedule();
    }
    if ( BYTE2(v85) == 1 )
    {
      v70 = (unsigned __int64)(unsigned __int16)v85 << 6;
      _m_prefetchw((const void *)(v70 + v12 + 8));
      v71 = *(_QWORD *)(v70 + v12 + 8);
      v72 = *(_QWORD *)(v39 + 24);
      *(_QWORD *)(v39 + 24) = v72 ^ (v72 ^ v71) & 0xFFFFFFFFFFFFF000uLL;
      v74 = v71;
      v73 = _InterlockedCompareExchange64((volatile signed __int64 *)(v70 + v12 + 8), v71 & 0xFFF | v39, v71);
      if ( v74 != v73 )
      {
        do
        {
          v75 = v73;
          *(_QWORD *)(v39 + 24) = v72 ^ (v73 ^ v72) & 0xFFFFFFFFFFFFF000uLL;
          v73 = _InterlockedCompareExchange64((volatile signed __int64 *)(v70 + v12 + 8), v39 | v73 & 0xFFF, v73);
        }
        while ( v73 != v75 );
      }
    }
  }
  if ( v36 )
    RtlpHpLfhBucketUpdateAffinityMapping(v12, v12 + ((unsigned __int64)*(unsigned __int16 *)(v20 + 2) << 6));
  v5 = a4;
  v21 = 2;
LABEL_81:
  if ( Slow == -1LL )
    goto LABEL_82;
LABEL_91:
  if ( a5 )
    *a5 = v21;
  return Slow;
}
