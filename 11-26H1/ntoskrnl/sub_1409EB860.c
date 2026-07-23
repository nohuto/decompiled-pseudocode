/*
 * XREFs of sub_1409EB860 @ 0x1409EB860
 * Callers:
 *     sub_140B3B01C @ 0x140B3B01C (sub_140B3B01C.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     sub_140886DDC @ 0x140886DDC (sub_140886DDC.c)
 *     sub_1409EBBDC @ 0x1409EBBDC (sub_1409EBBDC.c)
 *     sub_1409ED7B4 @ 0x1409ED7B4 (sub_1409ED7B4.c)
 */

__int64 __fastcall sub_1409EB860(__int64 a1, int a2, __int64 *a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  void *v9; // rdx
  LegacyAutoBoost *v10; // rbx
  int v11; // ebx
  int v12; // esi
  int v13; // r14d
  int v14; // ebp
  __int64 v15; // rax
  int v16; // ecx
  int v17; // ebp
  __int64 v18; // rdx
  struct _KTHREAD *v19; // rcx
  bool v20; // zf
  struct _KLOCK_ENTRIES *v22; // r9
  struct _KTHREAD *v23; // rax
  AutoBoost *v24; // rax
  void *v25; // rdx
  __int64 v26; // r8
  AutoBoost *v27; // rdi
  int v28; // r14d
  unsigned int v29; // esi
  __int64 v30; // r12
  __int64 v31; // rax
  unsigned int v32; // ecx
  __int64 *v33; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v33 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = 0LL;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E3EAA8, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E3EAA8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E3EAA8.Header.Lock, 0, v10, &stru_140E3EAA8);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = 0;
  v12 = HIDWORD(qword_140E3EA80) - 1;
  v13 = -1073741198;
  while ( v11 <= v12 )
  {
    v14 = (v12 + v11) / 2;
    v15 = guard_dispatch_icall_no_overrides(*(_QWORD *)((unsigned int)(qword_140E3EA80 * v14) + qword_140E3EA90), a1);
    if ( !v15 )
    {
      v13 = 0;
      v8 = *(_QWORD *)((unsigned int)(qword_140E3EA80 * v14) + qword_140E3EA90);
      if ( v8 )
        _InterlockedIncrement64((volatile signed __int64 *)(v8 + 232));
      v33 = (__int64 *)v8;
      break;
    }
    if ( v15 >= 0 )
      v11 = v14 + 1;
    v16 = v14 - 1;
    if ( v15 >= 0 )
      v16 = v12;
    v12 = v16;
  }
  v17 = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E3EAA8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E3EAA8.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E3EAA8);
  v19 = KeGetCurrentThread();
  v20 = v19->SpecialApcDisable++ == -1;
  if ( v20 && ($241382875694CED3D471BC5892DE3337 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery((__int64)v19, v18);
  if ( v13 != -1073741198 )
    goto LABEL_23;
  if ( a2 )
  {
    v13 = sub_1409ED7B4(a1, &v33);
    if ( v13 < 0 )
    {
      v8 = (__int64)v33;
      goto LABEL_25;
    }
    v23 = KeGetCurrentThread();
    --v23->SpecialApcDisable;
    v24 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E3EAA8, 0LL, 0LL, v22);
    v27 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E3EAA8, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E3EAA8, v24, (__int64)&stru_140E3EAA8);
    if ( v27 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v27, v25);
      else
        *((_BYTE *)v27 + 10) = 1;
    }
    v8 = (__int64)v33;
    v28 = HIDWORD(qword_140E3EA80) - 1;
    v29 = 0;
    v30 = *v33;
    while ( v17 <= v28 )
    {
      v29 = (v28 + v17) / 2;
      v31 = guard_dispatch_icall_no_overrides(*(_QWORD *)((unsigned int)qword_140E3EA80 * v29 + qword_140E3EA90), v30);
      if ( !v31 )
        break;
      v32 = v29 - 1;
      if ( v31 >= 0 )
        v32 = v28;
      v28 = v32;
      if ( v31 >= 0 )
        v17 = ++v29;
    }
    v13 = sub_140886DDC((unsigned int *)&qword_140E3EA80, v8, v26, v29);
    if ( v13 >= 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(v8 + 232));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E3EAA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E3EAA8.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E3EAA8);
    KeLeaveGuardedRegion();
    if ( v13 >= 0 )
    {
LABEL_23:
      if ( a3 )
      {
        *a3 = v8;
        v8 = 0LL;
      }
    }
  }
LABEL_25:
  if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 232), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    sub_1409EBBDC(v8);
  return (unsigned int)v13;
}
