/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x14034E5F0
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14034E850 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentIncBlockCounts(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        _DWORD *a5,
        int a6,
        KIRQL *a7)
{
  int v7; // r14d
  KIRQL v10; // r12
  char v11; // cl
  __int64 v12; // r15
  signed __int16 *v13; // rbx
  unsigned int v14; // r13d
  int v15; // edi
  signed __int16 v16; // ax
  signed __int16 v17; // tt
  int v18; // edi
  signed __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  volatile LONG *v23; // rcx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v25; // rax
  void *v26; // rdx
  AutoBoost *v27; // rcx
  AutoBoost *v28; // [rsp+20h] [rbp-38h]
  signed __int16 *v29; // [rsp+28h] [rbp-30h]
  __int64 v30; // [rsp+68h] [rbp+10h]

  v7 = a6;
  if ( a6 )
    v10 = *a7;
  else
    v10 = -1;
  v11 = *(_BYTE *)(a2 + 38);
  v12 = 2LL * ((unsigned int)a3 >> 12 >> v11);
  v13 = (signed __int16 *)(a2 + v12 + 8LL * *(unsigned __int8 *)(a2 + 24));
  _m_prefetchw(v13);
  v14 = -1;
  LODWORD(v30) = 0;
  v15 = 0;
  v29 = &v13[((unsigned int)(a3 + (_DWORD)a4 - 1) >> 12 >> v11) - ((unsigned int)a3 >> 12 >> v11) + 1];
  if ( v13 >= v29 )
    goto LABEL_16;
  do
  {
    while ( 1 )
    {
      v16 = *v13;
      while ( v16 > 0 )
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange16(v13, v16 + 1, v16);
        if ( v17 == v16 )
          goto LABEL_7;
      }
      if ( v7 )
        break;
      v23 = (volatile LONG *)(a2 + 56);
      v7 = 1;
      if ( *(_BYTE *)(a1 + 73) )
      {
        v10 = ExAcquireSpinLockExclusive(v23);
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v25 = (AutoBoost *)KeAbPreAcquire((__int64)v23, 0LL, 0LL, a4);
        v27 = v25;
        v28 = v25;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 56), 0LL) )
        {
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 56), v25, a2 + 56);
          v27 = v28;
        }
        if ( v27 )
        {
          if ( (KiAbpGlobalState & 1) == 0 )
          {
            *((_BYTE *)v27 + 10) = 1;
            goto LABEL_30;
          }
          AutoBoost::KiAbpPostAcquire(v27, v26);
          v10 = -1;
        }
        else
        {
LABEL_30:
          v10 = -1;
        }
      }
    }
    if ( v16 )
    {
      ++v15;
      v30 = v12 >> 1;
      if ( v14 == -1 )
        v14 = v12 >> 1;
    }
    else
    {
      --v15;
    }
    *v13 = v16 + 1;
LABEL_7:
    ++v13;
    v12 += 2LL;
  }
  while ( v13 < v29 );
  if ( v15 )
  {
    v18 = v15 << 12 << *(_BYTE *)(a2 + 38);
    v19 = v18 / 4096;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 74) + a1 + 24), v19);
    if ( v19 > 0 )
    {
      v20 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
      if ( !*(_BYTE *)(v20 + a1 + 92) )
      {
        *(_BYTE *)(v20 + a1 + 92) = 1;
        if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)a1 + 56LL)) == 1
             ? HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase)
             : LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock)) )
          RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)a1 + 56LL), (v18 >> 31) & 0xFFF, a3, a4);
      }
    }
  }
  if ( v14 == -1 )
  {
LABEL_16:
    if ( v7 )
      RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a2 + 56));
  }
  else
  {
    *a5 = v30 - v14 + 1;
    *a7 = v10;
  }
  return v14;
}
