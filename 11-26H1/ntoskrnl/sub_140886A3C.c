/*
 * XREFs of sub_140886A3C @ 0x140886A3C
 * Callers:
 *     sub_1409EBF3C @ 0x1409EBF3C (sub_1409EBF3C.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     sub_1409EB368 @ 0x1409EB368 (sub_1409EB368.c)
 *     sub_1409EBD68 @ 0x1409EBD68 (sub_1409EBD68.c)
 *     sub_1409EC140 @ 0x1409EC140 (sub_1409EC140.c)
 *     sub_1409EC174 @ 0x1409EC174 (sub_1409EC174.c)
 */

__int64 __fastcall sub_140886A3C(__int64 a1, __int64 a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // r14
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rsi
  int v13; // eax
  int v14; // r8d
  int v15; // esi
  __int64 v16; // rdx
  int v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+48h] [rbp-18h]
  int v22; // [rsp+4Ch] [rbp-14h]

  v4 = (unsigned __int64 *)(a1 + 176);
  v21 = *(_DWORD *)(a2 + 24);
  v5 = 0LL;
  v20 = *(_QWORD *)(a2 + 32);
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  v18 = 0;
  --CurrentThread->SpecialApcDisable;
  v10 = (AutoBoost *)KeAbPreAcquire(a1 + 176, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v10, (__int64)v4);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = sub_1409EBD68(a1, &v20, &v19, &v18);
  v15 = v13;
  if ( v13 )
  {
    if ( v13 == -1073741198 )
    {
      v15 = sub_1409EB368((int)a1 + 136, a2, v14, (unsigned int)&v20, 16, v18);
      if ( v15 >= 0 )
        v15 = sub_1409EC174(a2);
    }
  }
  else if ( a3 )
  {
    sub_1409EC174(v19);
    *a3 = v16;
    goto LABEL_14;
  }
  v5 = v19;
LABEL_14:
  sub_1409EC140(v5);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  KeLeaveGuardedRegion();
  return (unsigned int)v15;
}
