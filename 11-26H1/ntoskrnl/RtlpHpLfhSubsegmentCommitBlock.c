/*
 * XREFs of RtlpHpLfhSubsegmentCommitBlock @ 0x14034EE40
 * Callers:
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCommitBlock(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  struct _KLOCK_ENTRIES *v3; // r9
  int v6; // r10d
  __int64 v7; // rdx
  __int64 v8; // r13
  signed __int16 *v9; // rbx
  __int64 v10; // rax
  int v11; // r14d
  signed __int16 *v12; // rbp
  signed __int16 v13; // ax
  signed __int16 v14; // tt
  __int64 v15; // r8
  int v16; // ebp
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  volatile LONG *v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v24; // rax
  void *v25; // rdx
  AutoBoost *v26; // rcx
  char v27; // cl
  __int64 v28; // r14
  unsigned int v29; // r13d
  int v30; // ebx
  __int64 v31; // r8
  unsigned __int64 v32; // r9
  char v33; // cl
  __int64 v34; // r11
  volatile signed __int16 *v35; // r10
  int v36; // ebx
  int v37; // edx
  unsigned __int64 v38; // r9
  __int64 v39; // r8
  bool v40; // zf
  unsigned __int16 v41; // ax
  int v42; // eax
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  unsigned int v48; // edx
  char *v49; // rax
  char *v50; // rdx
  signed __int16 v51; // cx
  int v52; // ebp
  signed __int64 v53; // rcx
  unsigned __int64 v54; // rcx
  unsigned __int8 v56; // [rsp+30h] [rbp-58h]
  unsigned int v57; // [rsp+34h] [rbp-54h]
  __int64 v58; // [rsp+38h] [rbp-50h]
  AutoBoost *v59; // [rsp+40h] [rbp-48h]
  int v60; // [rsp+98h] [rbp+10h]
  unsigned int v61; // [rsp+A0h] [rbp+18h]
  unsigned int v62; // [rsp+A8h] [rbp+20h]

  v3 = (struct _KLOCK_ENTRIES *)*(unsigned __int8 *)(a2 + 38);
  v57 = a3 >> 12;
  v56 = 0;
  v6 = 0;
  v7 = a3 >> 12 >> (char)v3;
  v60 = 0;
  v8 = 2 * v7;
  v62 = (a3
       - 1
       + (LOWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)(a2 >> 12))) >> 12;
  v9 = (signed __int16 *)(a2 + 2 * v7 + 8LL * *(unsigned __int8 *)(a2 + 24));
  _m_prefetchw(v9);
  LODWORD(v58) = v56;
  v61 = -1;
  v10 = (v62 >> (char)v3) - (unsigned int)v7 + 1;
  v11 = v56;
  if ( v9 >= &v9[v10] )
    return 0LL;
  v12 = &v9[v10];
  do
  {
    while ( 1 )
    {
      v13 = *v9;
      while ( v13 > 0 )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange16(v9, v13 + 1, v13);
        if ( v14 == v13 )
        {
          v15 = v61;
          goto LABEL_7;
        }
      }
      if ( v6 )
        break;
      v22 = (volatile LONG *)(a2 + 56);
      v60 = 1;
      if ( *((_BYTE *)a1 + 73) )
      {
        ExAcquireSpinLockExclusive(v22);
        goto LABEL_30;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v24 = (AutoBoost *)KeAbPreAcquire((__int64)v22, 0LL, 0LL, v3);
      v26 = v24;
      v59 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 56), 0LL) )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 56), v24, a2 + 56);
        v26 = v59;
      }
      if ( v26 )
      {
        if ( (KiAbpGlobalState & 1) == 0 )
        {
          *((_BYTE *)v26 + 10) = 1;
          goto LABEL_30;
        }
        AutoBoost::KiAbpPostAcquire(v26, v25);
        v6 = 1;
      }
      else
      {
LABEL_30:
        v6 = 1;
      }
    }
    v15 = v61;
    if ( v13 )
    {
      ++v11;
      v58 = v8 >> 1;
      if ( v61 == -1 )
        v15 = (unsigned int)(v8 >> 1);
      v61 = v15;
    }
    else
    {
      --v11;
    }
    *v9 = v13 + 1;
LABEL_7:
    ++v9;
    v8 += 2LL;
  }
  while ( v9 < v12 );
  v16 = 0;
  if ( v11 )
  {
    v17 = (v11 << 12 << *(_BYTE *)(a2 + 38)) / 4096;
    v18 = v17;
    _InterlockedAdd64((_QWORD *)((char *)a1 + *((__int16 *)a1 + 37) + 24), v17);
    if ( v17 > 0 )
    {
      v19 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
      if ( !*((_BYTE *)a1 + v19 + 92) )
      {
        *((_BYTE *)a1 + v19 + 92) = 1;
        if ( !(BYTE1(**(_QWORD **)(*a1 + 56LL)) == 1
             ? HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase)
             : LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock)) )
        {
          RtlpHpEnvCompactionSchedule(*(_QWORD *)(*a1 + 56LL), v18, v15, v3);
          v6 = v60;
          LODWORD(v15) = v61;
        }
      }
    }
  }
  if ( (_DWORD)v15 == -1 )
  {
    if ( v6 )
      RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a2 + 56));
    return 0LL;
  }
  v27 = *(_BYTE *)(a2 + 38);
  v28 = (unsigned int)((_DWORD)v15 << 12 << v27);
  v29 = ((_DWORD)v58 - (_DWORD)v15 + 1) << 12 << v27;
  v30 = guard_dispatch_icall_no_overrides(*a1, a2 + v28, v29);
  v31 = *(unsigned __int8 *)(a2 + 38);
  v32 = a2 + 8LL * *(unsigned __int8 *)(a2 + 24);
  v33 = *(_BYTE *)(a2 + 38);
  if ( v30 < 0 )
  {
    v48 = v57 >> v33;
    v49 = (char *)(v32 + 2LL * (v57 >> v33));
    _m_prefetchw(v49);
    v50 = &v49[2 * ((v62 >> v33) - v48) + 2];
    if ( v49 < v50 )
    {
      do
      {
        v51 = _InterlockedDecrement16((volatile signed __int16 *)v49);
        if ( v51 )
        {
          if ( v51 == -1 )
            --v16;
        }
        else
        {
          ++v16;
        }
        v49 += 2;
      }
      while ( v49 < v50 );
      if ( v16 )
      {
        v52 = v16 << 12 << *(_BYTE *)(a2 + 38);
        v53 = v52 / 4096;
        _InterlockedAdd64((_QWORD *)((char *)a1 + *((__int16 *)a1 + 37) + 24), v53);
        if ( v53 > 0 )
        {
          v54 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
          if ( !*((_BYTE *)a1 + v54 + 92) )
          {
            *((_BYTE *)a1 + v54 + 92) = 1;
            if ( !(BYTE1(**(_QWORD **)(*a1 + 56LL)) == 1
                 ? HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase)
                 : LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock)) )
              RtlpHpEnvCompactionSchedule(*(_QWORD *)(*a1 + 56LL), (v52 >> 31) & 0xFFF, v31, v32);
          }
        }
      }
    }
    RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a2 + 56));
    return (unsigned int)v30;
  }
  else
  {
    v34 = 2LL * ((unsigned int)v28 >> 12 >> v33);
    v35 = (volatile signed __int16 *)(v32 + v34);
    _m_prefetchw((const void *)(v32 + v34));
    v36 = -1;
    v37 = 0;
    v38 = v32 + v34 + 2LL * (((v29 + (_DWORD)v28 - 1) >> 12 >> v33) - ((unsigned int)v28 >> 12 >> v33) + 1);
    if ( (unsigned __int64)v35 >= v38 )
      goto LABEL_45;
    do
    {
      v39 = *(unsigned __int16 *)v35;
      while ( (__int16)v39 > 0 )
      {
        v41 = _InterlockedCompareExchange16(v35, v39 + 1, v39);
        v40 = (_WORD)v39 == v41;
        v39 = v41;
        if ( v40 )
          goto LABEL_36;
      }
      if ( (_WORD)v39 )
      {
        ++v37;
        if ( v36 == -1 )
          v36 = v34 >> 1;
      }
      else
      {
        --v37;
      }
      LOWORD(v39) = v39 + 1;
      *v35 = v39;
LABEL_36:
      ++v35;
      v34 += 2LL;
    }
    while ( (unsigned __int64)v35 < v38 );
    if ( v37 )
    {
      v42 = (v37 << 12 << *(_BYTE *)(a2 + 38)) / 4096;
      v43 = v42;
      _InterlockedAdd64((_QWORD *)((char *)a1 + *((__int16 *)a1 + 37) + 24), v42);
      if ( v42 > 0 )
      {
        v44 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
        if ( !*((_BYTE *)a1 + v44 + 92) )
        {
          *((_BYTE *)a1 + v44 + 92) = 1;
          if ( !(BYTE1(**(_QWORD **)(*a1 + 56LL)) == 1
               ? HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase)
               : LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock)) )
            RtlpHpEnvCompactionSchedule(*(_QWORD *)(*a1 + 56LL), v43, v39, v38);
        }
      }
    }
    if ( v36 == -1 )
LABEL_45:
      RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a2 + 56));
    v46 = a2 + v28;
    v47 = a2 + v28 + v29;
    if ( (RtlpHpLfhPerfFlags & 2) != 0 && v46 < v47 )
    {
      do
        v46 += 4096LL;
      while ( v46 < v47 );
    }
    return 0LL;
  }
}
