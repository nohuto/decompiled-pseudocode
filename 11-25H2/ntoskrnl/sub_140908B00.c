/*
 * XREFs of sub_140908B00 @ 0x140908B00
 * Callers:
 *     sub_140907938 @ 0x140907938 (sub_140907938.c)
 *     sub_140907BA0 @ 0x140907BA0 (sub_140907BA0.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     sub_140906F0C @ 0x140906F0C (sub_140906F0C.c)
 *     sub_14090763C @ 0x14090763C (sub_14090763C.c)
 *     sub_140907700 @ 0x140907700 (sub_140907700.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     sub_140909220 @ 0x140909220 (sub_140909220.c)
 *     sub_140909250 @ 0x140909250 (sub_140909250.c)
 *     sub_140909280 @ 0x140909280 (sub_140909280.c)
 *     sub_140A0F5DC @ 0x140A0F5DC (sub_140A0F5DC.c)
 */

__int64 __fastcall sub_140908B00(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  signed __int64 *v6; // rbx
  __int64 *v7; // rdi
  int v8; // esi
  int i; // edi
  int v10; // r14d
  __int64 (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rdx
  int v17; // edi
  struct _KTHREAD *v18; // rax
  bool v19; // zf
  _QWORD *v20; // rcx
  struct _KTHREAD *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // r8
  __int64 *v25; // rdi
  _QWORD *v26; // rsi
  void **v27; // rbx
  _QWORD *v28; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v28 = 0LL;
  v6 = (signed __int64 *)(a1 + 128);
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire(a1 + 128, 0LL);
  if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, 0, v7, (unsigned __int64)v6);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = 0;
  for ( i = *(_DWORD *)(a1 + 92) - 1; ; i = v15 )
  {
    if ( v8 > i )
    {
      v17 = -1073741198;
      goto LABEL_20;
    }
    v10 = (i + v8) / 2;
    v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 120);
    v12 = *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 88) * v10) + *(_QWORD *)(a1 + 104));
    if ( v11 == sub_140909220 )
    {
      v13 = sub_140909220(v12, CurrentThread, 8LL);
    }
    else if ( v11 == sub_140909250 )
    {
      v13 = sub_140909250(v12, CurrentThread, 8LL);
    }
    else
    {
      v13 = v11 == sub_140909280 ? sub_140909280(v12, CurrentThread, 8LL) : guard_dispatch_icall_no_overrides(v12);
    }
    v14 = v13;
    if ( !v13 )
      break;
    if ( v13 >= 0 )
      v8 = v10 + 1;
    v15 = v10 - 1;
    if ( v14 >= 0 )
      v15 = i;
  }
  v16 = *(_QWORD **)((unsigned int)(*(_DWORD *)(a1 + 88) * v10) + *(_QWORD *)(a1 + 104));
  if ( v16 )
    _InterlockedAdd64(v16 + 1, 1uLL);
  v28 = v16;
  v17 = 0;
LABEL_20:
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v18 = KeGetCurrentThread();
  v19 = v18->SpecialApcDisable++ == -1;
  if ( v19 && ($727077A9B6E167EAE1398C74674DC5A5 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery();
  if ( v17 == -1073741198 )
  {
    v17 = sub_14090763C(a1, (__int64)CurrentThread, &v28);
    if ( v17 < 0 )
    {
LABEL_35:
      v20 = v28;
      goto LABEL_29;
    }
    v22 = KeGetCurrentThread();
    --v22->SpecialApcDisable;
    v23 = KeAbPreAcquire((__int64)v6, 0LL);
    v25 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, v23, (__int64)v6);
    if ( v25 )
      *((_BYTE *)v25 + 10) = 1;
    v26 = v28;
    v17 = sub_140906F0C((unsigned int *)(a1 + 88), (__int64)v28, v24, *v28, 8, 0xFFFFFFFF);
    if ( v17 >= 0 )
      sub_140A0F5DC(v26);
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KeLeaveGuardedRegion();
  }
  if ( v17 < 0 || !a3 )
    goto LABEL_35;
  v20 = 0LL;
  *a3 = v28;
  v28 = 0LL;
LABEL_29:
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd64(v20 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v27 = (void **)v28;
      if ( (int)sub_140907700(a1, (__int64)v28, -1) >= 0 )
      {
        SddlpFree(v27[3]);
        SddlpFree(v27);
      }
    }
  }
  return (unsigned int)v17;
}
