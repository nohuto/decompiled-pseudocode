/*
 * XREFs of RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14034E850
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14034E5F0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x14034F64C (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlHeapZero @ 0x140736E90 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentAllocateBlockShared(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // r13d
  signed __int64 *v9; // r11
  struct _KTHREAD *CurrentThread; // r8
  unsigned int v11; // ebp
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v13; // rdx
  char *v14; // r9
  unsigned __int64 v15; // rdx
  int v16; // esi
  unsigned __int8 v17; // r14
  unsigned int v18; // ecx
  signed __int64 *v19; // rbx
  signed __int64 *v20; // rdx
  signed __int64 v21; // r8
  unsigned int v26; // esi
  __int64 v27; // rbx
  char v28; // cl
  int v29; // r10d
  __int64 v30; // r8
  int v31; // ebp
  __int64 v32; // rax
  signed __int16 *v33; // r14
  int v34; // r15d
  __int64 v35; // rax
  struct _KLOCK_ENTRIES *v36; // r9
  signed __int16 *v37; // rbp
  signed __int16 v38; // ax
  signed __int16 v39; // tt
  __int64 v40; // rdx
  int v41; // r11d
  unsigned int v42; // ebp
  int v43; // eax
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v47; // rbx
  unsigned __int64 v50; // rax
  unsigned int v51; // eax
  __int64 v53; // rdx
  unsigned __int8 v54; // al
  char v55; // cl
  __int64 v56; // rdx
  unsigned int v57; // r11d
  __int64 v58; // rcx
  unsigned __int64 v59; // r14
  unsigned int v60; // r15d
  __int64 v61; // r9
  unsigned int v62; // esi
  unsigned __int64 v63; // rcx
  char v65; // cl
  __int64 v66; // rdx
  char *v67; // r8
  int v68; // ebp
  int v69; // edx
  char *v70; // rcx
  signed __int16 v71; // ax
  int v72; // kr00_4
  signed __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  KIRQL v76[4]; // [rsp+40h] [rbp-68h] BYREF
  int v77; // [rsp+44h] [rbp-64h] BYREF
  int v78; // [rsp+48h] [rbp-60h]
  unsigned int v79; // [rsp+4Ch] [rbp-5Ch]
  __int64 v80; // [rsp+50h] [rbp-58h]
  __int64 v81; // [rsp+58h] [rbp-50h]
  unsigned int v82; // [rsp+60h] [rbp-48h]
  int v83; // [rsp+64h] [rbp-44h]
  unsigned int v84; // [rsp+B8h] [rbp+10h]
  char v85; // [rsp+B8h] [rbp+10h]

  v6 = a2 >> 12;
  v7 = (unsigned int)*(unsigned __int8 *)(a2 + 24) - 8;
  v8 = a3;
  v9 = (signed __int64 *)(a2 + 64);
  CurrentThread = KeGetCurrentThread();
  v77 = LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v11 = (unsigned __int16)v77;
  Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
  v13 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
  v14 = (char *)Blink + v13;
  v15 = (unsigned __int64)Blink ^ v13;
  v16 = BYTE4(v14);
  CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v15, 37);
  CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v15 ^ __ROL8__(Blink, 24) ^ (v15 << 16));
  v17 = *(_BYTE *)(a2 + 39);
  v18 = *(unsigned __int8 *)(a2 + 50);
  v19 = &v9[v7 - 1];
  v84 = v18;
  v20 = &v9[*(unsigned __int8 *)(a2 + 36)];
LABEL_2:
  v21 = *v20;
  while ( 1 )
  {
    _R8 = ~v21;
    if ( !_R8 )
    {
      if ( v20 == v19 )
        v20 = v9;
      else
        ++v20;
      goto LABEL_2;
    }
    if ( (PspTlsContext.WaitBlockFill5[32] & 4) != 0 )
    {
      _RAX = 1LL << ((unsigned __int16)(v16 * __popcnt(_R8)) >> 8);
      __asm
      {
        pdep    r10, rax, r8
        tzcnt   r9, r10
      }
    }
    else
    {
      if ( v20 == v19 || v18 != 64 )
      {
        __asm { tzcnt   rcx, r8 }
        _BitScanReverse64(&v50, _R8);
        v79 = _RCX;
        v51 = v50 - _RCX + 1;
        if ( v84 < v51 )
          v51 = v84;
        v16 = _RCX + ((v51 * v16) >> 8);
        _R8 = __ROR8__(_R8, v16);
        __asm { tzcnt   r9, r8 }
        LODWORD(_R9) = v16 + _R9;
      }
      else
      {
        _R8 = __ROR8__(_R8, v16);
        __asm { tzcnt   r9, r8 }
        LODWORD(_R9) = ((_BYTE)v16 + (_BYTE)_R9) & 0x3F;
      }
      _R10 = 1LL << _R9;
    }
    _m_prefetchw(v20);
    v21 = _InterlockedOr64(v20, _R10);
    if ( (_R10 & v21) == 0 )
      break;
    v18 = v84;
  }
  v26 = _R9 + 8 * ((_DWORD)v20 - (_DWORD)v9);
  *(_BYTE *)(a2 + 36) = v26 >> 6;
  v27 = HIWORD(v77) + v11 * v26;
  if ( v17 <= 1u )
  {
    if ( v26 > *(unsigned __int16 *)(a2 + 48) )
      RtlpHpLfhSubsegmentPrefetch(a1, a2, (unsigned int)v27, v11);
    goto LABEL_28;
  }
  v28 = *(_BYTE *)(a2 + 38);
  v29 = 0;
  v77 = 0;
  v83 = 0;
  v79 = (unsigned int)v27 >> 12;
  v30 = (unsigned int)v27 >> 12 >> v28;
  v31 = *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)v6;
  v76[0] = -1;
  v80 = 2 * v30;
  v32 = *(unsigned __int8 *)(a2 + 24);
  v82 = ((unsigned int)v27 + (LOWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ v31) - 1) >> 12;
  v33 = (signed __int16 *)(a2 + 2 * v30 + 8 * v32);
  _m_prefetchw(v33);
  LODWORD(v81) = (unsigned __int8)v77;
  v34 = 0;
  v35 = (v82 >> v28) - (unsigned int)v30 + 1;
  v78 = -1;
  v36 = (struct _KLOCK_ENTRIES *)&v33[v35];
  if ( v33 >= (signed __int16 *)v36 )
  {
LABEL_28:
    v47 = a2 + v27;
    if ( (a4 & 2) != 0 )
      RtlHeapZero(v47, (v8 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    return v47;
  }
  LOBYTE(v30) = -1;
  v37 = &v33[v35];
  v85 = -1;
  do
  {
    while ( 1 )
    {
      v38 = *v33;
      while ( v38 > 0 )
      {
        v39 = v38;
        v38 = _InterlockedCompareExchange16(v33, v38 + 1, v38);
        if ( v39 == v38 )
        {
          v40 = v80;
          v41 = v78;
          goto LABEL_17;
        }
      }
      if ( v29 )
        break;
      v53 = *(unsigned __int8 *)(a1 + 73);
      v77 = 1;
      v54 = RtlpHpAcquireLockExclusive((int *)(a2 + 56), v53, v30, v36);
      v29 = 1;
      v30 = v54;
      v85 = v54;
    }
    v40 = v80;
    v41 = v78;
    if ( v38 )
    {
      ++v34;
      v81 = v80 >> 1;
      if ( v78 == -1 )
        v41 = v80 >> 1;
      v78 = v41;
    }
    else
    {
      --v34;
    }
    *v33 = v38 + 1;
LABEL_17:
    ++v33;
    v80 = v40 + 2;
  }
  while ( v33 < v37 );
  v42 = v82;
  v8 = a3;
  if ( v34 )
  {
    v43 = (v34 << 12 << *(_BYTE *)(a2 + 38)) / 4096;
    v44 = v43;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 74) + a1 + 24), v43);
    if ( v43 > 0 )
    {
      v45 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
      if ( !*(_BYTE *)(v45 + a1 + 92) )
      {
        *(_BYTE *)(v45 + a1 + 92) = 1;
        if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)a1 + 56LL)) == 1
             ? HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase)
             : LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock)) )
        {
          RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)a1 + 56LL), v44, v30, v36);
          LOBYTE(v30) = v85;
          v29 = v77;
          v41 = v78;
        }
      }
    }
  }
  if ( v41 == -1 )
  {
    if ( v29 )
      RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a2 + 56));
    goto LABEL_28;
  }
  v55 = *(_BYTE *)(a2 + 38);
  v77 = v81 - v41 + 1;
  v56 = (unsigned int)(v77 << 12 << v55);
  v57 = v41 << 12 << v55;
  v58 = *(_QWORD *)a1;
  v76[0] = v30;
  v81 = v56;
  v59 = v57 + a2;
  v60 = v57;
  if ( (int)guard_dispatch_icall_no_overrides(v58, v59, (unsigned int)v56) >= 0 )
  {
    v62 = v81;
    RtlpHpLfhSubsegmentIncBlockCounts(a1, a2, v60, (struct _KLOCK_ENTRIES *)(unsigned int)v81, &v77, 1, v76);
    v63 = v59 + v62;
    if ( (RtlpHpLfhPerfFlags & 2) != 0 && v59 < v63 )
    {
      do
        v59 += 4096LL;
      while ( v59 < v63 );
    }
    goto LABEL_28;
  }
  v65 = *(_BYTE *)(a2 + 38);
  v66 = v79 >> v65;
  v67 = (char *)(a2 + 2 * (v66 + 4LL * *(unsigned __int8 *)(a2 + 24)));
  _m_prefetchw(v67);
  v68 = (v42 >> v65) - v66;
  v69 = 0;
  v70 = &v67[2 * (v68 + 1)];
  if ( v67 < v70 )
  {
    do
    {
      v71 = _InterlockedDecrement16((volatile signed __int16 *)v67);
      if ( v71 )
      {
        if ( v71 == -1 )
          --v69;
      }
      else
      {
        ++v69;
      }
      v67 += 2;
    }
    while ( v67 < v70 );
    if ( v69 )
    {
      v72 = v69 << 12 << *(_BYTE *)(a2 + 38);
      v73 = v72 / 4096;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 74) + a1 + 24), v73);
      if ( v73 > 0 )
      {
        v74 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
        if ( !*(_BYTE *)(v74 + a1 + 92) )
        {
          *(_BYTE *)(v74 + a1 + 92) = 1;
          if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)a1 + 56LL)) == 1
               ? HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase)
               : LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock)) )
            RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)a1 + 56LL), (v72 >> 31) & 0xFFF, v67, v61);
        }
      }
    }
  }
  RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a2 + 56));
  if ( v26 != -1 )
    _InterlockedAnd64(
      (volatile signed __int64 *)(a2 + 8 * ((unsigned __int64)v26 >> 6) + 64),
      __ROL8__(-2LL, v26 & 0x3F));
  return 0LL;
}
