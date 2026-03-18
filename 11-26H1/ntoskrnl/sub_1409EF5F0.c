/*
 * XREFs of sub_1409EF5F0 @ 0x1409EF5F0
 * Callers:
 *     sub_1409EFC8C @ 0x1409EFC8C (sub_1409EFC8C.c)
 *     sub_1409EFD84 @ 0x1409EFD84 (sub_1409EFD84.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 *     sub_1409EF76C @ 0x1409EF76C (sub_1409EF76C.c)
 *     sub_1409EF970 @ 0x1409EF970 (sub_1409EF970.c)
 *     sub_1409EF9C0 @ 0x1409EF9C0 (sub_1409EF9C0.c)
 *     sub_140B6C624 @ 0x140B6C624 (sub_140B6C624.c)
 */

__int64 __fastcall sub_1409EF5F0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v7; // rdi
  int v8; // esi
  int v9; // eax
  struct _KLOCK_ENTRIES *v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // r15
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF

  v7 = 0LL;
  *(_QWORD *)&v16 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v8 = sub_1409EF9C0(a2, a3, &v17, &v18);
  if ( v8 >= 0 )
  {
    v9 = sub_1409EF76C(a1, &v18, &v16);
    v7 = v16;
    v8 = v9;
    if ( v9 >= 0 )
    {
      if ( *(_DWORD *)(v16 + 16) )
        goto LABEL_4;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v13 = (AutoBoost *)KeAbPreAcquire(v7 + 8, 0LL, 0LL, v10);
      v15 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 8), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 8), v13, v7 + 8);
      if ( v15 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v15, v14);
        else
          *((_BYTE *)v15 + 10) = 1;
      }
      if ( !*(_DWORD *)(v7 + 16) )
      {
        v16 = v17;
        v8 = sub_140B6C624(&v16, a2, v7);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 8));
      KeAbPostRelease(v7 + 8);
      KeLeaveGuardedRegion();
      if ( v8 >= 0 )
      {
LABEL_4:
        v8 = *(_DWORD *)(v7 + 20);
        if ( v8 >= 0 && a4 )
        {
          *a4 = v7;
          v7 = 0LL;
        }
      }
    }
  }
  sub_1409EF970(v7);
  SddlpFree(*((void **)&v17 + 1));
  return (unsigned int)v8;
}
