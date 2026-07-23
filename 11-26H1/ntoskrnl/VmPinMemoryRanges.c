/*
 * XREFs of VmPinMemoryRanges @ 0x1408234A0
 * Callers:
 *     VmPinMemoryRange @ 0x1408233B0 (VmPinMemoryRange.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     VmpPinMemoryRanges @ 0x1406C5B54 (VmpPinMemoryRanges.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SddlpFreeUuidString @ 0x14081E8B4 (SddlpFreeUuidString.c)
 *     VmpPinRangesContextStart @ 0x140823A80 (VmpPinRangesContextStart.c)
 *     VmpUnpinRangeSinglePages @ 0x140823F6C (VmpUnpinRangeSinglePages.c)
 *     VmpLogPin @ 0x14082497C (VmpLogPin.c)
 */

__int64 __fastcall VmPinMemoryRanges(unsigned __int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v7; // r12
  struct _KLOCK_ENTRIES *v8; // r9
  ULONG64 v9; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  _KPROCESS *Process; // rcx
  __int64 v13; // rax
  int v14; // esi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v16; // rdi
  void *v17; // rdx
  LegacyAutoBoost *v18; // r15
  unsigned __int64 v19; // r15
  int v20; // eax
  __int64 v21; // r15
  unsigned __int64 v22; // r14
  volatile LONG *v23; // r12
  int v24; // ecx
  __int64 v25; // r10
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh]
  int v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  unsigned __int64 QpcTimeStamp; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v35; // [rsp+88h] [rbp-78h]
  unsigned __int64 v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  __int128 v38; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-50h]
  __int128 v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+D0h] [rbp-30h]
  char v42[296]; // [rsp+D8h] [rbp-28h] BYREF

  v37 = a3;
  v32 = a2;
  v7 = a1;
  v36 = a1;
  v29 = a4;
  v27 = 0;
  memset_0(v42, 0, 0x120uLL);
  v41 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( stru_140F06A28.InitialStack
    && *(_DWORD *)stru_140F06A28.InitialStack
    && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 32LL) )
  {
    v9 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = a3;
  v30 = a2;
  v28 = 0;
  v11 = v7;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = 16 * a3;
  v14 = 0;
  v35 = v7 + v13;
  CurrentThread = KeGetCurrentThread();
  SpinLock = (PEX_SPIN_LOCK)Process[3].ProcessListEntry.Blink;
  v16 = (signed __int64 *)(SpinLock + 34);
  --CurrentThread->KernelApcDisable;
  QpcTimeStamp = (unsigned __int64)v16;
  v18 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v16, 0LL, 0LL, v8);
  if ( _InterlockedCompareExchange64(v16, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v16, 0, v18, (struct _KTHREAD *)v16);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v18, v17);
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  v19 = v35;
  if ( v7 >= v35 )
  {
LABEL_22:
    if ( v11 == v19 )
      goto LABEL_27;
  }
  else
  {
    while ( 1 )
    {
      SddlpFreeUuidString((void **)&v38);
      v41 = 0LL;
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      v14 = VmpPinRangesContextStart((unsigned int)&v38, (_DWORD)SpinLock, v11, v30, v10, v29, a5, v28);
      if ( v14 < 0 )
        break;
      v20 = VmpPinMemoryRanges(SpinLock, (__int64)&v38, &v27);
      v14 = v20;
      if ( v20 == -1073741267 )
      {
        if ( (v27 & 2) != 0 )
          v10 = 1LL;
        if ( (v27 & 1) != 0 )
          v28 = 1;
      }
      else
      {
        if ( v20 < 0 )
          goto LABEL_22;
        v11 += 16 * v10;
        v30 += 8 * v10;
      }
      if ( v11 >= v19 )
        goto LABEL_22;
    }
  }
  v21 = v32;
  v22 = v7;
  if ( v7 < v11 )
  {
    v23 = SpinLock;
    do
    {
      VmpUnpinRangeSinglePages(v23, 0, 0LL);
      v22 += 16LL;
      v21 += 8LL;
    }
    while ( v22 < v11 );
    v16 = (signed __int64 *)QpcTimeStamp;
    LODWORD(v7) = v36;
  }
LABEL_27:
  if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v16);
  KeAbPostRelease((unsigned __int64)v16);
  KeLeaveCriticalRegion();
  SddlpFreeUuidString((void **)&v38);
  if ( v9 )
  {
    KeQueryUnbiasedInterruptTimePrecise(&v34);
    if ( stru_140F06A28.InitialStack )
    {
      if ( *(_DWORD *)stru_140F06A28.InitialStack && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 32LL) )
        VmpLogPin(v24, 0, v7, v32, v37, v29, a5, v14, v25);
    }
  }
  return (unsigned int)v14;
}
