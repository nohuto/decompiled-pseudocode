/*
 * XREFs of sub_1409EFF2C @ 0x1409EFF2C
 * Callers:
 *     sub_1409EDA0C @ 0x1409EDA0C (sub_1409EDA0C.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     sub_1409EEB98 @ 0x1409EEB98 (sub_1409EEB98.c)
 *     sub_1409F0198 @ 0x1409F0198 (sub_1409F0198.c)
 *     sub_1409F0248 @ 0x1409F0248 (sub_1409F0248.c)
 *     sub_1409F1144 @ 0x1409F1144 (sub_1409F1144.c)
 */

__int64 __fastcall sub_1409EFF2C(__int64 a1, unsigned int a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  _QWORD *v6; // r15
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v9; // rdi
  void *v10; // rdx
  LegacyAutoBoost *v11; // r13
  unsigned int i; // r12d
  __int64 v13; // rcx
  int v15; // eax
  struct _KLOCK_ENTRIES *v16; // r9
  struct _KTHREAD *v17; // rax
  AutoBoost *v18; // rax
  void *v19; // rdx
  __int64 v20; // r8
  AutoBoost *v21; // rsi
  __int64 v22; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+38h] [rbp-60h] BYREF
  unsigned int *v24; // [rsp+40h] [rbp-58h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  v7 = 0;
  v22 = 0LL;
  if ( a2 > 0x10000 )
  {
    v7 = -1073741811;
    goto LABEL_18;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = (signed __int64 *)(a1 + 224);
  v24 = (unsigned int *)(a1 + 184);
  v11 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 224, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, 0, v11, (struct _KTHREAD *)v9);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 188); ++i )
  {
    v6 = *(_QWORD **)(*(_DWORD *)(a1 + 184) * i + *(_QWORD *)(a1 + 200));
    v7 = sub_1409F0248(v6, a2, &v22);
    if ( v7 < 0 )
      goto LABEL_18;
    v5 = v22;
    if ( v22 )
      break;
  }
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((unsigned __int64)v9);
  KeLeaveGuardedRegion();
  if ( v5 )
    goto LABEL_14;
  v15 = sub_1409F1144(v13, &v23);
  v4 = v23;
  v7 = v15;
  if ( v15 >= 0 )
  {
    v7 = sub_1409F0248(v23, a2, &v22);
    if ( v7 >= 0 )
    {
      v17 = KeGetCurrentThread();
      --v17->SpecialApcDisable;
      v18 = (AutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, v16);
      v21 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v9, v18, (__int64)v9);
      if ( v21 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v21, v19);
        else
          *((_BYTE *)v21 + 10) = 1;
      }
      v7 = sub_1409EEB98(v24, v4, v20, *(_QWORD *)(v4 + 32), 8, 0xFFFFFFFF);
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9);
      KeAbPostRelease((unsigned __int64)v9);
      KeLeaveGuardedRegion();
      if ( v7 >= 0 )
      {
        v5 = v22;
        v6 = (_QWORD *)v4;
        v4 = 0LL;
LABEL_14:
        if ( a3 )
          *a3 = v5;
        if ( a4 )
          a4->Thread = (_KTHREAD *)(v5 + *v6 - v6[4]);
      }
    }
  }
LABEL_18:
  sub_1409F0198((PVOID *)v4);
  return (unsigned int)v7;
}
