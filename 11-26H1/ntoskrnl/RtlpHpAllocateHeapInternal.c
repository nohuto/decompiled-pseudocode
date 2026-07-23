/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x14052345C
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x1403542D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403546B4 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpVsContextAllocate @ 0x14024B710 (RtlpHpVsContextAllocate.c)
 *     RtlpHpSegAlloc @ 0x14034D14C (RtlpHpSegAlloc.c)
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14034E850 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLargeAlloc @ 0x140353E20 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpEnvTlsGetValue @ 0x14041CE70 (RtlpHpEnvTlsGetValue.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x14048E8E4 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpHpLfhBlockBitmapAllocateNonAtomic @ 0x1404B7168 (RtlpHpLfhBlockBitmapAllocateNonAtomic.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404C6EF8 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140519218 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x140529D0C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpPgContextAllocate @ 0x14063D010 (RtlpHpPgContextAllocate.c)
 *     RtlHeapZero @ 0x140736E90 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int *a5)
{
  int v5; // r13d
  unsigned __int64 v7; // rbp
  __int64 v9; // rbx
  __int64 BlockShared; // rsi
  unsigned int *v11; // rbx
  unsigned int v12; // edi
  __int64 Value; // rax
  unsigned int *v14; // rsi
  int v15; // r8d
  unsigned int *v16; // rcx
  unsigned __int16 *v17; // r14
  __int64 v18; // r13
  int v19; // edi
  unsigned __int64 v20; // r13
  struct _KTHREAD *CurrentThread; // r10
  unsigned int v22; // edx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v24; // r8
  char *v25; // r9
  unsigned __int64 v26; // r8
  unsigned int NonAtomic; // eax
  signed __int64 v28; // rdi
  signed __int64 v29; // rax
  unsigned int v30; // r8d
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdi
  signed __int64 v33; // rax
  char v34; // dl
  int v35; // r11d
  unsigned __int64 v36; // rdx
  signed __int64 v37; // rtt
  __int64 v38; // r13
  unsigned __int64 v39; // r8
  signed __int64 v40; // rax
  signed __int64 v41; // rax
  signed __int64 v42; // rtt
  signed __int64 v43; // rdx
  __int64 v44; // rcx
  signed __int64 v46; // [rsp+30h] [rbp-48h]
  __int64 v47; // [rsp+38h] [rbp-40h]
  unsigned __int8 v48; // [rsp+3Ch] [rbp-3Ch]
  int v49; // [rsp+3Ch] [rbp-3Ch]
  unsigned __int64 v51; // [rsp+90h] [rbp+18h]
  int v52; // [rsp+98h] [rbp+20h]
  int v53; // [rsp+98h] [rbp+20h]

  v51 = a3;
  v5 = 0;
  v7 = a3;
  v9 = a1;
  if ( (a4 & 0x1000) != 0 )
  {
    BlockShared = RtlpHpPgContextAllocate(a1 + 808);
    LODWORD(a3) = v7;
    if ( BlockShared )
    {
      *a5 = 3;
      return BlockShared;
    }
  }
  if ( v7 >= *(unsigned __int16 *)(v9 + 972) )
    goto LABEL_25;
  v11 = (unsigned int *)(v9 + 896);
  v12 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(unsigned int)(a3 + 15) >> 4)) - 1;
  Value = RtlpHpEnvTlsGetValue(v11[21]);
  if ( !Value )
    Value = RtlpHpLfhThreadDataInitializeSet(v11);
  v14 = &v11[16 * (unsigned __int16)Value];
  v48 = BYTE4(Value);
  v15 = *((unsigned __int16 *)v14 + v12);
  if ( !*((_WORD *)v14 + v12) )
  {
    if ( !RtlpHpLfhBucketCheckAndUpdate((__int64)v11, v12) )
    {
LABEL_24:
      v9 = a1;
      LODWORD(a3) = v7;
LABEL_25:
      v19 = 3;
      if ( v7 > 0x20000 )
      {
        if ( v7 > *(unsigned int *)(v9 + 528) )
        {
          v31 = RtlpHpLargeAlloc((__int128 *)v9, a2, v7, a4);
        }
        else
        {
          v44 = v9 + 512;
          if ( v7 <= *(unsigned int *)(v9 + 336) )
            v44 = v9 + 320;
          v31 = RtlpHpSegAlloc(v44, a2, v7, v7, a4);
        }
      }
      else
      {
        v31 = (unsigned __int64)RtlpHpVsContextAllocate((unsigned __int16 *)(v9 + 704), (unsigned int)a2, a3, a4);
      }
      BlockShared = v31;
      goto LABEL_48;
    }
    v16 = &v11[64 * (unsigned __int64)v48 + 368];
    v15 = *((unsigned __int16 *)v16 + v12);
    if ( v14 != v16 )
      *((_WORD *)v14 + v12) = *((_WORD *)v16 + v12);
  }
  v17 = (unsigned __int16 *)((char *)v11 + (unsigned int)(v15 << 6));
  if ( !v17[2] )
  {
    _m_prefetchw(v17 + 28);
    v28 = *((_QWORD *)v17 + 7);
    if ( (v28 & 0xFFF) != 0 )
    {
      while ( 1 )
      {
        v29 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 7, v28 - 1, v28);
        if ( v28 == v29 )
          break;
        v5 = 1;
        v28 = v29;
        if ( (v29 & 0xFFF) == 0 )
          goto LABEL_20;
      }
      v30 = a2;
      v32 = v28 & 0xFFFFFFFFFFFFF000uLL;
      if ( v32 )
      {
        BlockShared = RtlpHpLfhSubsegmentAllocateBlockShared((__int64)v11, v32, a2, a4);
        if ( !BlockShared )
        {
          v33 = *(_QWORD *)(v32 + 16);
          do
          {
            v46 = v33;
            v34 = BYTE6(v33);
            v35 = v5;
            v49 = HIDWORD(v33);
            v53 = v5;
            if ( BYTE6(v33) == 1 )
              v34 = 2;
            WORD1(v46) = WORD1(v33) + 1;
            BYTE6(v46) = v34;
            v36 = (unsigned __int64)*(unsigned __int16 *)(v32 + 44) << 6;
            v37 = v33;
            v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 16), v46, v33);
          }
          while ( v37 != v33 );
          v7 = v51;
          if ( !*((_BYTE *)v11 + v36 + 92) )
          {
            *((_BYTE *)v11 + v36 + 92) = 1;
            v38 = *(_QWORD *)v11;
            if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(*(_QWORD **)(*(_QWORD *)v11 + 56LL)) )
              RtlpHpEnvCompactionSchedule(*(_QWORD **)(v38 + 56));
            v35 = v53;
          }
          v5 = v35;
          if ( BYTE2(v49) == 1 )
          {
            v39 = (unsigned __int64)(unsigned __int16)v49 << 6;
            _m_prefetchw((char *)v11 + v39 + 8);
            v40 = *(_QWORD *)((char *)v11 + v39 + 8);
            v47 = *(_QWORD *)(v32 + 24);
            *(_QWORD *)(v32 + 24) = v47 ^ (v40 ^ v47) & 0xFFFFFFFFFFFFF000uLL;
            v42 = v40;
            v41 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)((char *)v11 + v39 + 8),
                    v40 & 0xFFF | v32,
                    v40);
            if ( v42 != v41 )
            {
              do
              {
                v43 = v41;
                *(_QWORD *)(v32 + 24) = v47 ^ (v47 ^ v41) & 0xFFFFFFFFFFFFF000uLL;
                v41 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)((char *)v11 + v39 + 8),
                        v32 | v41 & 0xFFF,
                        v41);
              }
              while ( v41 != v43 );
            }
          }
        }
        if ( v5 )
          RtlpHpLfhBucketUpdateAffinityMapping(
            (__int64)v11,
            (volatile signed __int8 *)&v11[16 * (unsigned __int64)v17[1]]);
        goto LABEL_22;
      }
    }
    else
    {
LABEL_20:
      v30 = a2;
    }
    BlockShared = RtlpHpLfhSlotAllocateSlow((__int64)v11, (__int64)v17, v30, a4);
LABEL_22:
    v19 = 2;
    goto LABEL_23;
  }
  v18 = *((_QWORD *)v17 + 7);
  v19 = 2;
  if ( (v18 & 0xFFF) != 0 && (*((_QWORD *)v17 + 7) = v18 - 1, (v20 = v18 & 0xFFFFFFFFFFFFF000uLL) != 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v22 = *(unsigned __int8 *)(v20 + 24) - 8;
    Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
    v24 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
    v52 = LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(v20 + 40) ^ (v20 >> 12);
    v25 = (char *)Blink + v24;
    v26 = (unsigned __int64)Blink ^ v24;
    CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v26 ^ __ROL8__(Blink, 24) ^ (v26 << 16));
    CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v26, 37);
    NonAtomic = RtlpHpLfhBlockBitmapAllocateNonAtomic(
                  (_QWORD *)(v20 + 64),
                  v22,
                  *(unsigned __int8 *)(v20 + 36),
                  BYTE4(v25));
    *(_BYTE *)(v20 + 36) = NonAtomic >> 6;
    BlockShared = v20 + HIWORD(v52) + NonAtomic * (unsigned __int16)v52;
    if ( (a4 & 2) != 0 )
      RtlHeapZero(BlockShared, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  else
  {
    BlockShared = RtlpHpLfhSlotAllocateSlow((__int64)v11, (__int64)v17, a2, a4);
  }
LABEL_23:
  if ( BlockShared == -1 )
    goto LABEL_24;
LABEL_48:
  if ( a5 )
    *a5 = v19;
  return BlockShared;
}
