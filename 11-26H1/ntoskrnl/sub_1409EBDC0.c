/*
 * XREFs of sub_1409EBDC0 @ 0x1409EBDC0
 * Callers:
 *     sub_1409EC45C @ 0x1409EC45C (sub_1409EC45C.c)
 *     sub_1409EC554 @ 0x1409EC554 (sub_1409EC554.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409EBF3C @ 0x1409EBF3C (sub_1409EBF3C.c)
 *     sub_1409EC140 @ 0x1409EC140 (sub_1409EC140.c)
 *     sub_1409EC190 @ 0x1409EC190 (sub_1409EC190.c)
 *     sub_140B6F720 @ 0x140B6F720 (sub_140B6F720.c)
 */

__int64 __fastcall sub_1409EBDC0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
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
  v8 = sub_1409EC190(a2, a3, &v17, &v18);
  if ( v8 >= 0 )
  {
    v9 = sub_1409EBF3C(a1, &v18, &v16);
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
        v8 = sub_140B6F720(&v16, a2, v7);
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
  sub_1409EC140(v7);
  SddlpFree(*((void **)&v17 + 1));
  return (unsigned int)v8;
}
