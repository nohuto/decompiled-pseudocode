/*
 * XREFs of HalpTimerStallExecutionProcessor @ 0x14037D7D0
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x1405847E8 (HalpTimerMeasureFrequencies.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerStallExecutionProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  char v5; // r13
  __int64 Number; // rcx
  _GROUP_AFFINITY v8; // xmm6
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // r14
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v21; // r12
  unsigned __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // r8
  bool v25; // bp
  __int64 v26; // rdx
  unsigned __int64 v27; // kr00_8
  __int64 v28; // r15
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned int j; // eax
  int v35; // ecx
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  _KAFFINITY_EX *Affinity; // r8
  unsigned __int16 i; // cx
  unsigned __int64 v39; // rdx
  _KAFFINITY_EX *v40; // r8
  char v41; // [rsp+30h] [rbp-98h]
  unsigned int v42[3]; // [rsp+34h] [rbp-94h] BYREF
  _GROUP_AFFINITY v43; // [rsp+40h] [rbp-88h] BYREF
  __int128 v44; // [rsp+50h] [rbp-78h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-68h] BYREF
  int v46; // [rsp+C0h] [rbp-8h]

  v3 = *(_DWORD *)(a1 + 224);
  v5 = a3;
  v41 = 0;
  v44 = 0LL;
  PreviousAffinity = 0LL;
  if ( (v3 & 1) == 0
    || (unsigned int)KeNumberProcessors_0 < 2
    || KeGetCurrentIrql() >= 2u
    || (v46 & 0x200) == 0
    || (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
    goto LABEL_24;
  }
  Number = KeGetPcr()->Prcb.Number;
  v8 = 0LL;
  v41 = 1;
  *(_DWORD *)((char *)&v44 + 10) = 0;
  v9 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + Number);
  v10 = 1LL << v9;
  HIWORD(v44) = 0;
  DWORD2(v44) = (unsigned __int16)(v9 >> 6);
  *(_QWORD *)&v44 = 1LL << v9;
  v43.Mask = 0LL;
  if ( (unsigned __int16)(v9 >> 6) < *(_WORD *)&stru_140FC11F0.WaitRegister.Flags
    && (v11 = 8LL * (unsigned __int16)(v9 >> 6), (v10 & *(_QWORD *)((char *)&stru_140FC11F0.116 + v11 + 4)) != 0) )
  {
    v12 = 1;
    v10 &= *(_QWORD *)((char *)&stru_140FC11F0.116 + v11 + 4);
    *(_QWORD *)&v44 = v10;
  }
  else
  {
    v12 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v10);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v42[0] = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(v42);
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) == 0 )
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
    goto LABEL_19;
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  if ( !Next )
  {
    Affinity = CurrentThread->Affinity;
    for ( i = 0; i < Affinity->Count; ++i )
    {
      v39 = Affinity->Bitmap[i];
      if ( v39 )
        goto LABEL_58;
    }
    goto LABEL_19;
  }
  if ( BYTE2(Next[2].Next) )
  {
    if ( BYTE2(Next[2].Next) == 1 )
    {
      v40 = CurrentThread->Affinity;
      for ( i = 0; i < v40->Count; ++i )
      {
        v39 = v40->Bitmap[i];
        if ( v39 )
        {
LABEL_58:
          *(_QWORD *)&v43.Group = i;
          v43.Mask = v39;
          v8 = v43;
          goto LABEL_19;
        }
      }
      goto LABEL_19;
    }
    if ( BYTE2(Next[2].Next) != 2 )
      goto LABEL_19;
  }
  if ( v12 )
  {
    BYTE2(Next[2].Next) = 1;
    v43.Mask = 0LL;
    goto LABEL_20;
  }
LABEL_19:
  v43.Mask = 0LL;
  if ( !v12 )
  {
    CurrentThread->ThreadLock = 0LL;
    goto LABEL_21;
  }
LABEL_20:
  KiSetSystemAffinityThread(CurrentThread, CurrentPrcb, 0LL, &v44, 2048, &v43);
LABEL_21:
  KiProcessDeferredReadyList(CurrentPrcb, &v43, CurrentIrql);
  PreviousAffinity = v8;
  KeGetCurrentIrql();
  if ( v12 && (WORD2(xmmword_140FC0C10) & 0x200) != 0 )
    KiCpuPartitionCheckAffinitization(CurrentThread->Process, CurrentThread, CurrentThread->Affinity, 1LL);
LABEL_24:
  if ( (*(_DWORD *)(a1 + 224) & 0x10000) != 0 )
    v17 = *(_QWORD *)(a1 + 72) + *(_DWORD *)(a1 + 80) * KeGetPcr()->Prcb.Number;
  else
    v17 = *(_QWORD *)(a1 + 72);
  v18 = guard_dispatch_icall_no_overrides(v17, a2, a3);
  v19 = __readcr2();
  __writecr2(v19);
  _R9D = 0;
  v21 = 1LL << *(_DWORD *)(a1 + 220);
  v22 = v18;
  v23 = 0LL;
  v24 = 0LL;
  v42[0] = 0;
  v25 = (KeFeatureBits2 & 0x800000) != 0
     && !qword_140FBB3E0
     && (*(_DWORD *)(a1 + 224) & 0x6000) == 0
     && *(_DWORD *)(a1 + 228) == 5;
  v27 = *(_QWORD *)(a1 + 192) * a2 + 9999999;
  v26 = (v27 * (unsigned __int128)0xD6BF94D5E57A42BDuLL) >> 64;
  v28 = v18;
  v29 = v27 / 0x989680 + 1;
  v30 = v18 + v29;
  if ( v27 / 0x989680 != -1LL )
  {
    do
    {
      if ( v5 )
      {
        if ( v25 )
        {
          v26 = HIDWORD(v30);
          __asm { tpause  r9d }
        }
        else
        {
          v24 = (unsigned int)(v24 + 1);
          v42[0] = v24;
          if ( ((unsigned int)v24 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
            _mm_pause();
          else
            guard_dispatch_icall_no_overrides((unsigned int)v24, v26, v24);
        }
      }
      else
      {
        for ( j = 0; j < 0xC8; ++j )
        {
          _mm_pause();
          v35 = j * HalpGlobalVolatile;
          HalpGlobalVolatile = v35;
        }
      }
      if ( (*(_DWORD *)(a1 + 224) & 0x10000) != 0 )
        v31 = *(_QWORD *)(a1 + 72) + *(_DWORD *)(a1 + 80) * KeGetPcr()->Prcb.Number;
      else
        v31 = *(_QWORD *)(a1 + 72);
      v32 = guard_dispatch_icall_no_overrides(v31, v26, v24);
      if ( v32 < v22 )
        v23 += v21;
      v24 = v42[0];
      v22 = v32;
      v33 = v32 + v23 - v28;
      _R9D = 0;
      v30 = v28 + v29;
    }
    while ( v33 < v29 );
  }
  if ( v41 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
