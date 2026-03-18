/*
 * XREFs of sub_140908DF4 @ 0x140908DF4
 * Callers:
 *     sub_140908780 @ 0x140908780 (sub_140908780.c)
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
 *     sub_140906B5C @ 0x140906B5C (sub_140906B5C.c)
 *     sub_140909110 @ 0x140909110 (sub_140909110.c)
 *     sub_140909220 @ 0x140909220 (sub_140909220.c)
 *     sub_140909250 @ 0x140909250 (sub_140909250.c)
 *     sub_140909280 @ 0x140909280 (sub_140909280.c)
 *     sub_140909DF0 @ 0x140909DF0 (sub_140909DF0.c)
 *     sub_140A13968 @ 0x140A13968 (sub_140A13968.c)
 *     sub_140A75020 @ 0x140A75020 (sub_140A75020.c)
 */

__int64 __fastcall sub_140908DF4(__int64 a1, int a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rbx
  int v8; // edi
  int v9; // r14d
  int v10; // ebx
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // sf
  int v15; // eax
  __int64 v16; // rdx
  struct _KTHREAD *v17; // rax
  bool v18; // zf
  _QWORD *v19; // rcx
  struct _KTHREAD *v21; // rax
  __int64 *v22; // rax
  signed __int8 v23; // cf
  __int64 *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // r8
  _QWORD *v27; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+88h] [rbp+20h] BYREF

  v27 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((__int64)&qword_140E3E728, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E3E728, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E3E728, 0, v7, (unsigned __int64)&qword_140E3E728);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = 0;
  v9 = HIDWORD(qword_140E3E700) - 1;
  v10 = -1073741198;
  while ( v8 <= v9 )
  {
    v11 = (v9 + v8) / 2;
    v12 = *(_QWORD *)((unsigned int)(qword_140E3E700 * v11) + qword_140E3E710);
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3E720 == sub_140909220 )
    {
      v13 = sub_140909220(v12, a1, 8LL);
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3E720 == sub_140909250 )
    {
      v13 = sub_140909250(v12, a1, 8LL);
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3E720 == sub_140909280 )
    {
      v13 = sub_140909280(v12, a1, 8LL);
    }
    else
    {
      v13 = guard_dispatch_icall_no_overrides(v12);
    }
    v14 = v13 < 0;
    if ( !v13 )
    {
      v10 = 0;
      v16 = *(_QWORD *)((unsigned int)(qword_140E3E700 * v11) + qword_140E3E710);
      if ( v16 )
        _InterlockedAdd64((volatile signed __int64 *)(v16 + 232), 1uLL);
      v27 = (_QWORD *)v16;
      break;
    }
    if ( v13 >= 0 )
      v8 = v11 + 1;
    v15 = v11 - 1;
    if ( !v14 )
      v15 = v9;
    v9 = v15;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E3E728, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E3E728);
  KeAbPostRelease((ULONG_PTR)&qword_140E3E728);
  v17 = KeGetCurrentThread();
  v18 = v17->SpecialApcDisable++ == -1;
  if ( v18 && ($727077A9B6E167EAE1398C74674DC5A5 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery();
  if ( v10 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_36;
    v10 = sub_140A75020(a1, &v27);
    if ( v10 < 0 )
      goto LABEL_36;
    v21 = KeGetCurrentThread();
    --v21->SpecialApcDisable;
    v22 = KeAbPreAcquire((__int64)&qword_140E3E728, 0LL);
    v23 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E3E728, 0LL);
    v24 = v22;
    if ( v23 )
      ExfAcquirePushLockExclusiveEx(&qword_140E3E728, v22, (__int64)&qword_140E3E728);
    if ( v24 )
      *((_BYTE *)v24 + 10) = 1;
    v25 = (__int64)v27;
    v28 = -1;
    sub_140909110((unsigned int)&qword_140E3E700, *v27, 8, 0, (__int64)&v28);
    v10 = sub_140906B5C((unsigned int *)&qword_140E3E700, v25, v26, v28);
    if ( v10 >= 0 )
      sub_140A13968(v25);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E3E728, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E3E728);
    KeAbPostRelease((ULONG_PTR)&qword_140E3E728);
    KeLeaveGuardedRegion();
  }
  if ( v10 < 0 || !a3 )
  {
LABEL_36:
    v19 = v27;
    goto LABEL_29;
  }
  v19 = 0LL;
  *a3 = v27;
  v27 = 0LL;
LABEL_29:
  if ( v19 && _InterlockedExchangeAdd64(v19 + 29, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    sub_140909DF0(v27);
  return (unsigned int)v10;
}
