/*
 * XREFs of sub_1409EE860 @ 0x1409EE860
 * Callers:
 *     sub_1409ECE3C @ 0x1409ECE3C (sub_1409ECE3C.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     sub_1409ED958 @ 0x1409ED958 (sub_1409ED958.c)
 *     sub_1409EEB98 @ 0x1409EEB98 (sub_1409EEB98.c)
 *     sub_1409EEBF4 @ 0x1409EEBF4 (sub_1409EEBF4.c)
 */

__int64 __fastcall sub_1409EE860(__int64 a1, __int64 a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  AutoBoost *v9; // rax
  void *v10; // rdx
  int v11; // r8d
  AutoBoost *v12; // rdi
  __int64 v13; // r10
  __int64 v14; // r13
  int v15; // r12d
  int v16; // edi
  int v17; // ebp
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rdx
  int v21; // edi
  __int64 v24; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 48);
  --CurrentThread->SpecialApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire(a1 + 48, 0LL, 0LL, a4);
  v12 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (__int64)v5);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v10);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = *(_QWORD *)(a2 + 48);
  v14 = a1 + 8;
  v15 = 0;
  v16 = *(_DWORD *)(a1 + 12) - 1;
  v24 = v13;
  v17 = 0;
  while ( 1 )
  {
    if ( v15 > v16 )
    {
      v21 = -1073741198;
      goto LABEL_18;
    }
    v17 = (v16 + v15) / 2;
    v18 = guard_dispatch_icall_no_overrides(
            *(_QWORD *)((unsigned int)(*(_DWORD *)v14 * v17) + *(_QWORD *)(v14 + 16)),
            v13);
    if ( !v18 )
      break;
    v13 = v24;
    v19 = v17 - 1;
    if ( v18 >= 0 )
      v19 = v16;
    v16 = v19;
    if ( v18 >= 0 )
      v15 = ++v17;
  }
  v21 = sub_1409ED958(*(_QWORD *)((unsigned int)(*(_DWORD *)v14 * v17) + *(_QWORD *)(v14 + 16)));
  if ( v21 >= 0 )
  {
    if ( a3 )
      *a3 = v20;
    goto LABEL_24;
  }
LABEL_18:
  if ( v21 == -1073741198 )
  {
    v21 = sub_1409EEB98(v14, a2, v11, *(_QWORD *)(a2 + 48), 8, v17);
    if ( v21 >= 0 )
    {
      v21 = sub_1409ED958(a2);
      if ( v21 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v21 = sub_1409EEBF4(a1, a2);
      }
    }
  }
LABEL_24:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveGuardedRegion();
  return (unsigned int)v21;
}
