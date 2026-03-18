/*
 * XREFs of ObQueryRefTraceInformation @ 0x140B5E750
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ObpGetPoolTags @ 0x14077C264 (ObpGetPoolTags.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 */

__int64 __fastcall ObQueryRefTraceInformation(char *a1, unsigned int a2, unsigned int *a3, struct _KLOCK_ENTRIES *a4)
{
  char PreviousMode; // r12
  unsigned int v6; // esi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  AutoBoost *v9; // rdi
  char v10; // dl
  char *v11; // r9
  char *v12; // r15
  char v13; // al
  int PoolTags; // edi
  PVOID P[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 Src; // [rsp+40h] [rbp-68h] BYREF
  void *v18[2]; // [rsp+50h] [rbp-58h]
  void *v19; // [rsp+60h] [rbp-48h]

  Src = 0LL;
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  *(_OWORD *)P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 40;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F132C8, 0LL, 0LL, a4);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140F132C8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F132C8, v8, (__int64)&stru_140F132C8);
  v10 = 1;
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, (void *)1);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v11 = a1;
  v12 = a1 + 40;
  v13 = Src;
  if ( (ObpTraceFlags & 2) != 0 )
    v13 = v10;
  LOBYTE(Src) = v13;
  BYTE1(Src) = v10 & ((unsigned __int8)ObpTraceFlags >> 6);
  if ( (ObpTraceFlags & 0x20) != 0 )
  {
    WORD4(Src) = stru_140F132C8.SavedApcState.ApcListHead[0].Flink;
    WORD5(Src) = LOWORD(stru_140F132C8.SavedApcState.ApcListHead[0].Flink) + 2;
    v18[0] = a1 + 40;
    v12 += 2
         * ((unsigned __int64)(unsigned __int16)(LOWORD(stru_140F132C8.SavedApcState.ApcListHead[0].Flink) + 2) >> 1);
    v6 = (unsigned __int16)(LOWORD(stru_140F132C8.SavedApcState.ApcListHead[0].Flink) + 2) + 40;
  }
  if ( (ObpTraceFlags & 0x10) != 0 )
  {
    PoolTags = ObpGetPoolTags((__int64)P);
    if ( PoolTags < 0 )
      goto LABEL_28;
    LOWORD(v18[1]) = P[0];
    WORD1(v18[1]) = LOWORD(P[0]) + 2;
    v19 = v12;
    v6 += (unsigned __int16)(LOWORD(P[0]) + 2);
    v11 = a1;
  }
  if ( v6 <= a2 )
  {
    if ( PreviousMode )
      RtlCopyToUser(v11, &Src, 0x28uLL);
    else
      RtlCopyVolatileMemory(v11, &Src, 0x28uLL);
    if ( (ObpTraceFlags & 0x20) != 0 )
    {
      if ( PreviousMode )
        RtlCopyToUser(v18[0], stru_140F132C8.SavedApcState.ApcListHead[0].Blink, WORD4(Src));
      else
        RtlCopyVolatileMemory(v18[0], stru_140F132C8.SavedApcState.ApcListHead[0].Blink, WORD4(Src));
    }
    if ( (ObpTraceFlags & 0x10) != 0 )
    {
      if ( PreviousMode )
        RtlCopyToUser(v19, P[1], LOWORD(v18[1]));
      else
        RtlCopyVolatileMemory(v19, P[1], LOWORD(v18[1]));
    }
    PoolTags = 0;
  }
  else
  {
    PoolTags = -1073741820;
  }
LABEL_28:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F132C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F132C8.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140F132C8);
  KeLeaveGuardedRegion();
  if ( ((int)(PoolTags + 0x80000000) < 0 || PoolTags == -1073741820) && a3 )
    *a3 = v6;
  if ( P[1] )
    ObpTraceFreeMemory(P[1]);
  return (unsigned int)PoolTags;
}
