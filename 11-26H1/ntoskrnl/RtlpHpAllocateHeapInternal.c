/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x140520DB8
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x140352250 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x140352630 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpVsContextAllocate @ 0x140249DB0 (RtlpHpVsContextAllocate.c)
 *     RtlpHpSegAlloc @ 0x14034B0CC (RtlpHpSegAlloc.c)
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14034C7D0 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034D650 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLargeAlloc @ 0x140351D9C (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14035402C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpEnvTlsGetValue @ 0x14042FE40 (RtlpHpEnvTlsGetValue.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x140494D94 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404CD4C4 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x14052769C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpPgContextAllocate @ 0x14063A000 (RtlpHpPgContextAllocate.c)
 *     RtlHeapZero @ 0x1407322C0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int *a5)
{
  int v5; // r15d
  unsigned __int64 v7; // rbp
  __int64 v9; // rbx
  __int64 Slow; // rdi
  unsigned int *v11; // rbx
  unsigned int v12; // edi
  __int64 Value; // rax
  unsigned int *v14; // rsi
  int v15; // r8d
  unsigned int *v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r11
  int v19; // esi
  unsigned __int64 v20; // r11
  struct _KTHREAD *CurrentThread; // r9
  unsigned int v22; // r10d
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v24; // r8
  char *v25; // rdx
  unsigned __int64 v26; // r8
  _QWORD *v27; // r8
  signed __int64 v31; // rsi
  signed __int64 v32; // rax
  unsigned int v33; // r8d
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rsi
  int v36; // r9d
  signed __int64 v37; // rax
  char v38; // dl
  unsigned __int64 v39; // rdx
  signed __int64 v40; // rtt
  __int64 v41; // r15
  unsigned __int64 v42; // r8
  signed __int64 v43; // rax
  signed __int64 v44; // rax
  signed __int64 v45; // rtt
  signed __int64 v46; // rdx
  __int64 v47; // rcx
  signed __int64 v49; // [rsp+30h] [rbp-48h]
  __int64 v50; // [rsp+38h] [rbp-40h]
  unsigned __int8 v51; // [rsp+3Ch] [rbp-3Ch]
  int v52; // [rsp+3Ch] [rbp-3Ch]
  int v54; // [rsp+98h] [rbp+20h]
  int v55; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v7 = a3;
  v9 = a1;
  if ( (a4 & 0x1000) != 0 )
  {
    Slow = RtlpHpPgContextAllocate(a1 + 808);
    LODWORD(a3) = v7;
    if ( Slow )
    {
      *a5 = 3;
      return Slow;
    }
  }
  if ( v7 >= *(unsigned __int16 *)(v9 + 972) )
    goto LABEL_32;
  v11 = (unsigned int *)(v9 + 896);
  v12 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(unsigned int)(a3 + 15) >> 4)) - 1;
  Value = RtlpHpEnvTlsGetValue(v11[21]);
  if ( !Value )
    Value = RtlpHpLfhThreadDataInitializeSet(v11);
  v14 = &v11[16 * (unsigned __int16)Value];
  v51 = BYTE4(Value);
  v15 = *((unsigned __int16 *)v14 + v12);
  if ( !*((_WORD *)v14 + v12) )
  {
    if ( !RtlpHpLfhBucketCheckAndUpdate((__int64)v11, v12) )
    {
LABEL_31:
      v9 = a1;
      LODWORD(a3) = v7;
LABEL_32:
      v19 = 3;
      if ( v7 > 0x20000 )
      {
        if ( v7 > *(unsigned int *)(v9 + 528) )
        {
          v34 = RtlpHpLargeAlloc((__int128 *)v9, a2, v7, a4);
        }
        else
        {
          v47 = v9 + 512;
          if ( v7 <= *(unsigned int *)(v9 + 336) )
            v47 = v9 + 320;
          v34 = RtlpHpSegAlloc(v47, a2, v7, v7, a4);
        }
      }
      else
      {
        v34 = (unsigned __int64)RtlpHpVsContextAllocate((unsigned __int16 *)(v9 + 704), (unsigned int)a2, a3, a4);
      }
      Slow = v34;
      goto LABEL_54;
    }
    v16 = &v11[64 * (unsigned __int64)v51 + 368];
    v15 = *((unsigned __int16 *)v16 + v12);
    if ( v14 != v16 )
      *((_WORD *)v14 + v12) = *((_WORD *)v16 + v12);
  }
  v17 = (__int64)v11 + (unsigned int)(v15 << 6);
  if ( *(_WORD *)(v17 + 4) )
  {
    v18 = *(_QWORD *)(v17 + 56);
    v19 = 2;
    if ( (v18 & 0xFFF) != 0 && (*(_QWORD *)(v17 + 56) = v18 - 1, (v20 = v18 & 0xFFFFFFFFFFFFF000uLL) != 0) )
    {
      CurrentThread = KeGetCurrentThread();
      v22 = *(unsigned __int8 *)(v20 + 24) - 8;
      Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
      v24 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
      v54 = LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(v20 + 40) ^ (v20 >> 12);
      v25 = (char *)Blink + v24;
      v26 = (unsigned __int64)Blink ^ v24;
      CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v26, 37);
      CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v26 ^ __ROL8__(Blink, 24) ^ (v26 << 16));
      v27 = (_QWORD *)(v20 + 64 + 8LL * *(unsigned __int8 *)(v20 + 36));
      while ( *v27 == -1LL )
      {
        if ( v27 == (_QWORD *)(v20 + 64 + 8 * (v22 - 1LL)) )
          v27 = (_QWORD *)(v20 + 64);
        else
          ++v27;
      }
      _RAX = 1LL << ((unsigned __int16)(BYTE4(v25) * (unsigned __int16)__popcnt(~*v27)) >> 8);
      __asm { pdep    rcx, rax, rcx }
      *v27 |= _RCX;
      __asm { tzcnt   rcx, rcx }
      LODWORD(_RAX) = 8 * ((_DWORD)v27 - (v20 + 64)) + _RCX;
      *(_BYTE *)(v20 + 36) = (unsigned int)_RAX >> 6;
      Slow = v20 + (unsigned __int16)v54 * (_DWORD)_RAX + (unsigned int)HIWORD(v54);
      if ( (a4 & 2) != 0 )
        RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    else
    {
      Slow = RtlpHpLfhSlotAllocateSlow((__int64)v11, v17, a2, a4);
    }
    goto LABEL_30;
  }
  _m_prefetchw((const void *)(v17 + 56));
  v31 = *(_QWORD *)(v17 + 56);
  if ( (v31 & 0xFFF) != 0 )
  {
    while ( 1 )
    {
      v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 56), v31 - 1, v31);
      if ( v31 == v32 )
        break;
      v5 = 1;
      v31 = v32;
      if ( (v32 & 0xFFF) == 0 )
        goto LABEL_25;
    }
    v33 = a2;
    v35 = v31 & 0xFFFFFFFFFFFFF000uLL;
    if ( v35 )
    {
      Slow = RtlpHpLfhSubsegmentAllocateBlockShared((__int64)v11, v35, a2, a4);
      v36 = v5;
      if ( !Slow )
      {
        v37 = *(_QWORD *)(v35 + 16);
        do
        {
          v49 = v37;
          v38 = BYTE6(v37);
          v52 = HIDWORD(v37);
          if ( BYTE6(v37) == 1 )
            v38 = 2;
          WORD1(v49) = WORD1(v37) + 1;
          BYTE6(v49) = v38;
          v39 = (unsigned __int64)*(unsigned __int16 *)(v35 + 44) << 6;
          v40 = v37;
          v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 16), v49, v37);
        }
        while ( v40 != v37 );
        v55 = v5;
        if ( !*((_BYTE *)v11 + v39 + 92) )
        {
          *((_BYTE *)v11 + v39 + 92) = 1;
          v41 = *(_QWORD *)v11;
          if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(*(_QWORD **)(*(_QWORD *)v11 + 56LL)) )
            RtlpHpEnvCompactionSchedule(*(_QWORD **)(v41 + 56));
          v36 = v55;
        }
        v5 = v36;
        if ( BYTE2(v52) == 1 )
        {
          v42 = (unsigned __int64)(unsigned __int16)v52 << 6;
          _m_prefetchw((char *)v11 + v42 + 8);
          v43 = *(_QWORD *)((char *)v11 + v42 + 8);
          v50 = *(_QWORD *)(v35 + 24);
          *(_QWORD *)(v35 + 24) = v50 ^ (v43 ^ v50) & 0xFFFFFFFFFFFFF000uLL;
          v45 = v43;
          v44 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)((char *)v11 + v42 + 8),
                  v43 & 0xFFF | v35,
                  v43);
          if ( v45 != v44 )
          {
            do
            {
              v46 = v44;
              *(_QWORD *)(v35 + 24) = v50 ^ (v44 ^ v50) & 0xFFFFFFFFFFFFF000uLL;
              v44 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)((char *)v11 + v42 + 8),
                      v35 | v44 & 0xFFF,
                      v44);
            }
            while ( v44 != v46 );
          }
        }
      }
      goto LABEL_27;
    }
  }
  else
  {
LABEL_25:
    v33 = a2;
  }
  Slow = RtlpHpLfhSlotAllocateSlow((__int64)v11, v17, v33, a4);
LABEL_27:
  if ( v5 )
    RtlpHpLfhBucketUpdateAffinityMapping(
      (__int64)v11,
      (volatile signed __int8 *)&v11[16 * (unsigned __int64)*(unsigned __int16 *)(v17 + 2)]);
  v19 = 2;
LABEL_30:
  if ( Slow == -1 )
    goto LABEL_31;
LABEL_54:
  if ( a5 )
    *a5 = v19;
  return Slow;
}
