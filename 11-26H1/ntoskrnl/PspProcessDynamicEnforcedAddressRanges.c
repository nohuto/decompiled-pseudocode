/*
 * XREFs of PspProcessDynamicEnforcedAddressRanges @ 0x140B688A4
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmIsBelowLowestUserAddress @ 0x14047D050 (MmIsBelowLowestUserAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x14080F0E4 (RtlAddDynamicEnforcedAddressRange.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x14080F220 (RtlRemoveDynamicEnforcedAddressRange.c)
 */

__int64 __fastcall PspProcessDynamicEnforcedAddressRanges(
        struct _EX_RUNDOWN_REF *BugCheckParameter1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int16 a4,
        _DWORD *a5)
{
  unsigned __int64 *v5; // r14
  ULONG_PTR v6; // r15
  unsigned int v7; // esi
  __int64 v9; // rbp
  _KPROCESS *Process; // r12
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned int v12; // esi
  struct _KTHREAD *v13; // r11
  unsigned int v14; // eax
  char v15; // di
  __int64 v16; // rdx
  int v17; // edx
  unsigned __int64 v18; // r8
  int v19; // r10d
  char v20; // di
  AutoBoost *v21; // rax
  void *v22; // rdx
  AutoBoost *v23; // rsi
  __int64 v24; // r13
  int v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // eax
  unsigned int v30; // [rsp+20h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+48h] [rbp-80h]
  _OWORD v36[3]; // [rsp+58h] [rbp-70h] BYREF

  v5 = a2 + 1;
  memset(v36, 0, sizeof(v36));
  v6 = (ULONG_PTR)BugCheckParameter1;
  v7 = a4;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
  RunRef = BugCheckParameter1 + 61;
  if ( ExAcquireRundownProtection_0(BugCheckParameter1 + 61) )
  {
    v13 = CurrentThread;
    v14 = v7;
    v30 = v7;
    v15 = 2;
    v16 = 0LL;
    while ( (unsigned int)v16 < v14 )
    {
      if ( (*(_DWORD *)(&v13[1].SwapListEntry + 1) & 1) != 0 )
      {
        v12 = -1073741749;
        goto LABEL_40;
      }
      if ( (*(_DWORD *)(v6 + 500) & 0x40000008) != 0 )
      {
        v12 = -1073741558;
        goto LABEL_40;
      }
      if ( MmIsBelowLowestUserAddress(*(_QWORD *)(a3 + 24 * v16))
        || (unsigned __int64)v11 + v18 <= v18
        || (unsigned __int64)v11 + v18 > 0x7FFFFFFF0000LL
        || !v11 )
      {
        v12 = -1073741503;
        goto LABEL_40;
      }
      if ( (v19 & 0xFFFFFFFE) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_40;
      }
      v16 = (unsigned int)(v17 + 1);
      v14 = v7;
    }
    if ( (_KPROCESS *)v6 != Process )
    {
      KiStackAttachProcess((_KPROCESS *)v6, 0, (__int64)v36);
      v15 = 3;
    }
    v20 = v15 | 4;
    v21 = (AutoBoost *)KeAbPreAcquire((__int64)v5, 0LL, 0LL, v11);
    v23 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, v21, (__int64)v5);
    if ( v23 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v23, v22);
      else
        *((_BYTE *)v23 + 10) = 1;
    }
    while ( (unsigned int)v9 < v30 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
      {
        v12 = -1073741749;
        goto LABEL_36;
      }
      if ( (*(_DWORD *)(v6 + 500) & 0x40000008) != 0 )
      {
        v12 = -1073741558;
        goto LABEL_36;
      }
      v24 = 3 * v9;
      v25 = *(_DWORD *)(a3 + 24 * v9 + 16);
      v26 = *(_QWORD *)(a3 + 24 * v9);
      v27 = *(_QWORD *)(a3 + 24 * v9 + 8);
      if ( (v25 & 1) != 0 )
        v28 = RtlAddDynamicEnforcedAddressRange(a2, v26, v27);
      else
        v28 = RtlRemoveDynamicEnforcedAddressRange(a2, v26, v27);
      v12 = v28;
      if ( v28 < 0 )
        goto LABEL_36;
      v9 = (unsigned int)(v9 + 1);
      *(_DWORD *)(a3 + 8 * v24 + 16) = v25 | 2;
      v6 = (ULONG_PTR)BugCheckParameter1;
    }
    v12 = 0;
LABEL_36:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((unsigned __int64)v5);
    if ( (v20 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v36, 0);
LABEL_40:
    ExReleaseRundownProtection_0(RunRef);
  }
  else
  {
    v12 = -1073741558;
  }
  KeLeaveCriticalRegion();
  *a5 = v9;
  return v12;
}
