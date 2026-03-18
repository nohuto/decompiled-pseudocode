/*
 * XREFs of RtlpHpAllocateHeap @ 0x140397A80
 * Callers:
 *     ExAllocateHeapPages @ 0x140346060 (ExAllocateHeapPages.c)
 *     ExAllocateHeapPool @ 0x1403987D0 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpVsContextAllocate @ 0x140249DB0 (RtlpHpVsContextAllocate.c)
 *     RtlpHpSegAlloc @ 0x14034B0CC (RtlpHpSegAlloc.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x14034CDC0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x14034D5CC (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034D650 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLargeAlloc @ 0x140351D9C (RtlpHpLargeAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x140352630 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14035402C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404CD4C4 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x14052769C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlHeapZero @ 0x1407322C0 (RtlHeapZero.c)
 */

_BYTE *__fastcall RtlpHpAllocateHeap(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  unsigned __int64 v3; // r10
  int v4; // r14d
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r9
  __int64 Slow; // r15
  unsigned __int64 v10; // r10
  unsigned int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  int v16; // r8d
  unsigned __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // r11
  unsigned __int64 v21; // r11
  struct _KTHREAD *CurrentThread; // r9
  unsigned int v23; // r10d
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v25; // r8
  char *v26; // rdx
  unsigned __int64 v27; // r8
  _QWORD *v28; // r8
  unsigned __int64 i; // rcx
  int v33; // edi
  signed __int64 v34; // rbx
  signed __int64 v35; // rax
  unsigned __int64 v36; // rbx
  struct _KTHREAD *v37; // r8
  __int64 v38; // rbp
  struct _LIST_ENTRY *v39; // rcx
  unsigned __int64 v40; // rdx
  char *v41; // r9
  unsigned __int64 v42; // rdx
  int v43; // r11d
  unsigned int v44; // r14d
  __int64 v45; // rbp
  _QWORD *v46; // rdx
  unsigned __int64 v53; // rax
  unsigned int v54; // eax
  signed __int64 v56; // rax
  unsigned int v57; // ebp
  __int64 v58; // r14
  __int64 v59; // r14
  signed __int64 v60; // rax
  char v61; // dl
  unsigned __int64 v62; // rdx
  signed __int64 v63; // rtt
  unsigned __int64 v65; // r8
  signed __int64 v66; // rax
  unsigned __int64 v67; // r9
  signed __int64 v68; // rax
  signed __int64 v69; // rtt
  signed __int64 v70; // rdx
  __int64 v71; // rdx
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  int v74; // [rsp+34h] [rbp-74h]
  unsigned __int64 v75; // [rsp+40h] [rbp-68h]
  _QWORD *v76; // [rsp+48h] [rbp-60h]
  int v77; // [rsp+4Ch] [rbp-5Ch]
  unsigned __int64 *v78; // [rsp+50h] [rbp-58h]
  __int64 v79; // [rsp+B0h] [rbp+8h]
  int v81; // [rsp+C0h] [rbp+18h]
  int v82; // [rsp+C0h] [rbp+18h]
  unsigned __int8 v83; // [rsp+C8h] [rbp+20h]
  signed __int64 v84; // [rsp+C8h] [rbp+20h]
  unsigned __int8 v85; // [rsp+CCh] [rbp+24h]

  v79 = a1;
  v3 = a2;
  v4 = a3 & 0x3FFA;
  v81 = v4;
  if ( (a3 & 0x3FF8) != 0 )
    return (_BYTE *)RtlpHpAllocateHeapSlow(a1, a2, a3 & 0x3FFA);
  v6 = a2;
  if ( a2 <= 1 )
    v6 = 1LL;
  v75 = v6;
  if ( v6 >= *(unsigned __int16 *)(a1 + 972) )
    goto LABEL_11;
  v7 = a1 + 896;
  v76 = (_QWORD *)(a1 + 896);
  v8 = (*(_DWORD *)(a1 + 980) >> 13) & 0x3FFFF;
  Slow = 0LL;
  v10 = ((unsigned __int64)*(unsigned int *)(a1 + 980) >> 4) & 0x1FF;
  _BitScanReverse(&v11, v8);
  v12 = (unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(unsigned int)(v6 + 15) >> 4)) - 1;
  v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v11 - 2)
                              + 8 * (v8 ^ (unsigned int)(1 << v11))
                              + 8)
                  + 8 * v10);
  if ( !v13 )
    v13 = RtlpHpLfhThreadDataInitializeSet(v7);
  v14 = v7 + ((unsigned __int16)v13 << 6);
  v85 = BYTE4(v13);
  v15 = *(unsigned __int16 *)(v14 + 2 * v12);
  if ( !*(_WORD *)(v14 + 2 * v12) )
  {
    if ( !RtlpHpLfhBucketCheckAndUpdate(v7, (unsigned int)v12, v15) )
    {
      v3 = a2;
      a1 = v79;
LABEL_11:
      v16 = v6;
LABEL_12:
      if ( v6 <= 0x20000 )
        return RtlpHpVsContextAllocate((unsigned __int16 *)(a1 + 704), (unsigned int)v3, v16, v4);
      if ( v6 > *(unsigned int *)(a1 + 528) )
        return (_BYTE *)RtlpHpLargeAlloc((__int128 *)a1, v3, v6, v4);
      v71 = a1 + 320;
      v72 = *(unsigned int *)(a1 + 336);
      v73 = a1 + 512;
      if ( v6 <= v72 )
        v73 = v71;
      return (_BYTE *)RtlpHpSegAlloc(v73, v3, v6, v6, v4);
    }
    v18 = v7 + ((unsigned __int64)v85 << 8) + 1472;
    LODWORD(v15) = *(unsigned __int16 *)(2 * v12 + v18);
    if ( v14 != v18 )
      *(_WORD *)(v14 + 2 * v12) = *(_WORD *)(2 * v12 + v18);
  }
  v19 = v7 + (unsigned int)((_DWORD)v15 << 6);
  if ( *(_WORD *)(v19 + 4) )
  {
    v20 = *(_QWORD *)(v19 + 56);
    if ( (v20 & 0xFFF) != 0 && (*(_QWORD *)(v19 + 56) = v20 - 1, (v21 = v20 & 0xFFFFFFFFFFFFF000uLL) != 0) )
    {
      CurrentThread = KeGetCurrentThread();
      v23 = *(unsigned __int8 *)(v21 + 24) - 8;
      Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
      v25 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
      v82 = LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(v21 + 40) ^ (v21 >> 12);
      v26 = (char *)Blink + v25;
      v27 = (unsigned __int64)Blink ^ v25;
      CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v27, 37);
      CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v27 ^ __ROL8__(Blink, 24) ^ (v27 << 16));
      v28 = (_QWORD *)(v21 + 64 + 8LL * *(unsigned __int8 *)(v21 + 36));
      for ( i = ~*v28; *v28 == -1LL; i = ~*v28 )
      {
        if ( v28 == (_QWORD *)(v21 + 64 + 8 * (v23 - 1LL)) )
          v28 = (_QWORD *)(v21 + 64);
        else
          ++v28;
      }
      _RAX = 1LL << ((unsigned __int16)(BYTE4(v26) * (unsigned __int16)__popcnt(i)) >> 8);
      __asm { pdep    rcx, rax, rcx }
      *v28 |= _RCX;
      __asm { tzcnt   rcx, rcx }
      LODWORD(_RCX) = 8 * ((_DWORD)v28 - (v21 + 64)) + _RCX;
      *(_BYTE *)(v21 + 36) = (unsigned int)_RCX >> 6;
      Slow = v21 + (_DWORD)_RCX * (unsigned __int16)v82 + (unsigned int)HIWORD(v82);
      if ( (v4 & 2) != 0 )
        RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    else
    {
      Slow = RtlpHpLfhSlotAllocateSlow(v7);
    }
    goto LABEL_77;
  }
  v33 = 0;
  _m_prefetchw((const void *)(v19 + 56));
  v34 = *(_QWORD *)(v19 + 56);
  if ( (v34 & 0xFFF) == 0 )
    goto LABEL_30;
  while ( 1 )
  {
    v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 56), v34 - 1, v34);
    if ( v34 == v35 )
      break;
    v33 = 1;
    v34 = v35;
    if ( (v35 & 0xFFF) == 0 )
      goto LABEL_30;
  }
  v36 = v34 & 0xFFFFFFFFFFFFF000uLL;
  if ( !v36 )
  {
LABEL_30:
    Slow = RtlpHpLfhSlotAllocateSlow(v7);
    goto LABEL_75;
  }
  v37 = KeGetCurrentThread();
  v38 = (unsigned int)*(unsigned __int8 *)(v36 + 24) - 8;
  v39 = v37[1].SchedulerApc.ApcListEntry.Blink;
  v40 = (unsigned __int64)v37[1].SchedulerApc.Reserved[0];
  v74 = LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(v36 + 40) ^ (v36 >> 12);
  v78 = (unsigned __int64 *)(v36 + 24);
  v41 = (char *)v39 + v40;
  v42 = (unsigned __int64)v39 ^ v40;
  v43 = BYTE4(v41);
  v37[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v42, 37);
  v37[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v42 ^ __ROL8__(v39, 24) ^ (v42 << 16));
  v44 = *(unsigned __int8 *)(v36 + 50);
  v83 = *(_BYTE *)(v36 + 39);
  v45 = v36 + 64 + 8 * (v38 - 1);
  v46 = (_QWORD *)(v36 + 64 + 8LL * *(unsigned __int8 *)(v36 + 36));
LABEL_33:
  for ( _R8 = ~*v46; *v46 == -1LL; _R8 = ~*v46 )
  {
    if ( v46 == (_QWORD *)v45 )
      v46 = (_QWORD *)(v36 + 64);
    else
      ++v46;
  }
  while ( 1 )
  {
    if ( (PspTlsContext.WaitBlockFill5[32] & 4) != 0 )
    {
      _RAX = 1LL << ((unsigned __int16)(v43 * __popcnt(_R8)) >> 8);
      __asm
      {
        pdep    r9, rax, r8
        tzcnt   r10, r9
      }
    }
    else
    {
      if ( v46 == (_QWORD *)v45 || v44 != 64 )
      {
        __asm { tzcnt   rcx, r8 }
        _BitScanReverse64(&v53, _R8);
        v54 = v53 - _RCX + 1;
        if ( v44 < v54 )
          v54 = v44;
        v43 = _RCX + ((v54 * v43) >> 8);
        _R8 = __ROR8__(_R8, v43);
        __asm { tzcnt   r10, r8 }
        LODWORD(_R10) = v43 + _R10;
      }
      else
      {
        _R8 = __ROR8__(_R8, v43);
        __asm { tzcnt   r10, r8 }
        LODWORD(_R10) = ((_BYTE)v43 + (_BYTE)_R10) & 0x3F;
      }
      _R9 = 1LL << _R10;
    }
    _m_prefetchw(v46);
    v56 = _InterlockedOr64(v46, _R9);
    if ( (_R9 & v56) == 0 )
      break;
    _R8 = ~v56;
    if ( v56 == -1 )
    {
      if ( v46 == (_QWORD *)v45 )
        v46 = (_QWORD *)(v36 + 64);
      else
        ++v46;
      goto LABEL_33;
    }
  }
  v7 = (__int64)v76;
  v57 = _R10 + 8 * ((_DWORD)v46 - (v36 + 64));
  *(_BYTE *)(v36 + 36) = v57 >> 6;
  v58 = HIWORD(v74) + (unsigned __int16)v74 * v57;
  if ( v83 <= 1u )
  {
    if ( v57 > *(unsigned __int16 *)(v36 + 48) )
      RtlpHpLfhSubsegmentPrefetch((__int64)v76, v36, v58, (unsigned __int16)v74);
    goto LABEL_58;
  }
  if ( (int)RtlpHpLfhSubsegmentCommitBlock(v76, v36, v58) >= 0 )
  {
LABEL_58:
    v59 = v36 + v58;
    if ( (v81 & 2) != 0 )
      RtlHeapZero(v59, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    goto LABEL_60;
  }
  v59 = 0LL;
  if ( v57 != -1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 8LL * (v57 >> 6) + 64), __ROL8__(-2LL, v57 & 0x3F));
    goto LABEL_61;
  }
LABEL_60:
  Slow = v59;
  if ( !v59 )
  {
LABEL_61:
    v60 = *(_QWORD *)(v36 + 16);
    do
    {
      v84 = v60;
      v61 = BYTE6(v60);
      v77 = HIDWORD(v60);
      if ( BYTE6(v60) == 1 )
        v61 = 2;
      WORD1(v84) = WORD1(v60) + 1;
      BYTE6(v84) = v61;
      v62 = (unsigned __int64)*(unsigned __int16 *)(v36 + 44) << 6;
      v63 = v60;
      v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 16), v84, v60);
    }
    while ( v63 != v60 );
    if ( !*(_BYTE *)(v62 + v7 + 92) )
    {
      *(_BYTE *)(v62 + v7 + 92) = 1;
      if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v7 + 56LL)) == 1
           ? *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.Tag
           : ExSaPageGroupDescriptorArrayLock.SystemCallNumber) )
        RtlpHpEnvCompactionSchedule(*(_QWORD **)(*(_QWORD *)v7 + 56LL));
    }
    if ( BYTE2(v77) == 1 )
    {
      v65 = v7 + ((unsigned __int64)(unsigned __int16)v77 << 6);
      _m_prefetchw((const void *)(v65 + 8));
      v66 = *(_QWORD *)(v65 + 8);
      v67 = *v78;
      *v78 ^= (*v78 ^ v66) & 0xFFFFFFFFFFFFF000uLL;
      v69 = v66;
      v68 = _InterlockedCompareExchange64((volatile signed __int64 *)(v65 + 8), v36 | v66 & 0xFFF, v66);
      if ( v69 != v68 )
      {
        do
        {
          v70 = v68;
          *v78 = v67 ^ (v67 ^ v68) & 0xFFFFFFFFFFFFF000uLL;
          v68 = _InterlockedCompareExchange64((volatile signed __int64 *)(v65 + 8), v36 | v68 & 0xFFF, v68);
        }
        while ( v68 != v70 );
      }
    }
  }
  v4 = v81;
  v6 = v75;
LABEL_75:
  if ( v33 )
    RtlpHpLfhBucketUpdateAffinityMapping(
      v7,
      (volatile signed __int8 *)(v7 + ((unsigned __int64)*(unsigned __int16 *)(v19 + 2) << 6)));
LABEL_77:
  v16 = v6;
  if ( Slow == -1 )
  {
    v3 = a2;
    a1 = v79;
    goto LABEL_12;
  }
  return (_BYTE *)Slow;
}
