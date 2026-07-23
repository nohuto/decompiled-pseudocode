/*
 * XREFs of ObQueryRefTraceInformationEx @ 0x1407C72AC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpGetPoolTags @ 0x14077ED58 (ObpGetPoolTags.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall ObQueryRefTraceInformationEx(char *a1, unsigned int a2, unsigned int *a3)
{
  char PreviousMode; // r13
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v6; // r9
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rdi
  char *v10; // r9
  char *v11; // r15
  int PoolTags; // edi
  PVOID P[2]; // [rsp+30h] [rbp-88h] BYREF
  int Src; // [rsp+40h] [rbp-78h] BYREF
  PVOID SparePtr; // [rsp+48h] [rbp-70h]
  char v17; // [rsp+50h] [rbp-68h]
  unsigned __int16 AffinityPrimaryGroup; // [rsp+58h] [rbp-60h]
  __int16 v19; // [rsp+5Ah] [rbp-5Eh]
  void *v20; // [rsp+60h] [rbp-58h]
  unsigned __int16 v21; // [rsp+68h] [rbp-50h]
  __int16 v22; // [rsp+6Ah] [rbp-4Eh]
  void *v23; // [rsp+70h] [rbp-48h]
  int v24; // [rsp+78h] [rbp-40h]
  int v25; // [rsp+7Ch] [rbp-3Ch]

  memset_0(&Src, 0, 0x40uLL);
  *(_OWORD *)P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v4 = 64;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL, 0LL, v6);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ObpStackTraceLock, v7, (__int64)&ObpStackTraceLock);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  Src = 2;
  v17 = v17 & 0xF0 | ((ObpTraceFlags & 2) != 0) | ((unsigned int)ObpTraceFlags >> 2) & 4 | ((unsigned int)ObpTraceFlags >> 5) & 2 | ((unsigned int)ObpTraceFlags >> 4) & 8;
  SparePtr = stru_140E66D40.WaitBlock[0].SparePtr;
  v24 = ObpMaxObjectRefTraces;
  v25 = ObpTracedObjectLimit;
  v10 = a1;
  v11 = a1 + 64;
  if ( (ObpTraceFlags & 0x20) != 0 )
  {
    AffinityPrimaryGroup = ObpStackTraceLock.AffinityPrimaryGroup;
    v19 = ObpStackTraceLock.AffinityPrimaryGroup + 2;
    v20 = a1 + 64;
    v11 += 2 * ((unsigned __int64)(unsigned __int16)(ObpStackTraceLock.AffinityPrimaryGroup + 2) >> 1);
    v4 = (unsigned __int16)(ObpStackTraceLock.AffinityPrimaryGroup + 2) + 64;
  }
  if ( (ObpTraceFlags & 0x10) != 0 )
  {
    PoolTags = ObpGetPoolTags((__int64)P);
    if ( PoolTags < 0 )
      goto LABEL_26;
    v21 = (unsigned __int16)P[0];
    v22 = LOWORD(P[0]) + 2;
    v23 = v11;
    v4 += (unsigned __int16)(LOWORD(P[0]) + 2);
    v10 = a1;
  }
  if ( v4 <= a2 )
  {
    if ( PreviousMode )
      RtlCopyToUser(v10, &Src, 0x40uLL);
    else
      RtlCopyVolatileMemory(v10, &Src, 0x40uLL);
    if ( (ObpTraceFlags & 0x20) != 0 )
    {
      if ( PreviousMode )
        RtlCopyToUser(v20, (void *)ObpStackTraceLock.NpxState, AffinityPrimaryGroup);
      else
        RtlCopyVolatileMemory(v20, (const void *)ObpStackTraceLock.NpxState, AffinityPrimaryGroup);
    }
    if ( (ObpTraceFlags & 0x10) != 0 )
    {
      if ( PreviousMode )
        RtlCopyToUser(v23, P[1], v21);
      else
        RtlCopyVolatileMemory(v23, P[1], v21);
    }
    PoolTags = 0;
  }
  else
  {
    PoolTags = -1073741820;
  }
LABEL_26:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&ObpStackTraceLock);
  KeLeaveGuardedRegion();
  if ( ((int)(PoolTags + 0x80000000) < 0 || PoolTags == -1073741820) && a3 )
    *a3 = v4;
  if ( P[1] )
    ObpTraceFreeMemory(P[1]);
  return (unsigned int)PoolTags;
}
