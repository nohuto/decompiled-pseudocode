/*
 * XREFs of sub_1409E960C @ 0x1409E960C
 * Callers:
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x1404FA178 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     sub_1409E99A0 @ 0x1409E99A0 (sub_1409E99A0.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409E9A1C @ 0x1409E9A1C (sub_1409E9A1C.c)
 *     sub_1409E9B88 @ 0x1409E9B88 (sub_1409E9B88.c)
 *     sub_1409EA1DC @ 0x1409EA1DC (sub_1409EA1DC.c)
 *     sub_1409EB030 @ 0x1409EB030 (sub_1409EB030.c)
 */

__int64 __fastcall sub_1409E960C(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v4; // rbx
  __int64 *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v8; // r9
  void *v9; // rdx
  LegacyAutoBoost *v10; // rbp
  __int64 v11; // r10
  int v12; // ebp
  int i; // r15d
  int v14; // r13d
  __int64 v15; // rax
  int v16; // ecx
  __int64 *v17; // rdx
  int v18; // ebp
  struct _KLOCK_ENTRIES *v19; // r9
  struct _KTHREAD *v20; // rax
  AutoBoost *v21; // rax
  void *v22; // rdx
  AutoBoost *v23; // r15
  __int64 *v24; // rax
  __int64 **v25; // rcx
  __int64 **v26; // rcx
  int v27; // eax
  int v29; // eax
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 *v31; // [rsp+70h] [rbp+8h] BYREF
  __int64 **v32; // [rsp+80h] [rbp+18h]
  __int64 *v33; // [rsp+88h] [rbp+20h] BYREF

  v32 = a3;
  v4 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v6 = 0LL;
  Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline();
  sub_1409E9B88(a1, (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56)));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 48, 0LL, 0LL, v8);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), 0, v10, (struct _KTHREAD *)(a1 + 48));
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = *(_QWORD *)(a2 + 272);
  v12 = 0;
  v30 = v11;
  for ( i = *(_DWORD *)(a1 + 12) - 1; ; i = v16 )
  {
    if ( v12 > i )
    {
      v18 = -1073741198;
      goto LABEL_17;
    }
    v14 = (i + v12) / 2;
    v15 = guard_dispatch_icall_no_overrides(
            *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 8) * v14) + *(_QWORD *)(a1 + 24)),
            v11);
    if ( !v15 )
      break;
    v11 = v30;
    if ( v15 >= 0 )
      v12 = v14 + 1;
    v16 = v14 - 1;
    if ( v15 >= 0 )
      v16 = i;
  }
  v17 = *(__int64 **)((unsigned int)(*(_DWORD *)(a1 + 8) * v14) + *(_QWORD *)(a1 + 24));
  if ( v17 && !_InterlockedIncrement64(v17 + 10) )
  {
    v18 = -1073741595;
  }
  else
  {
    v18 = 0;
    v31 = v17;
    v4 = v17;
  }
LABEL_17:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KeLeaveGuardedRegion();
  if ( v18 == -1073741198 )
  {
    v27 = sub_1409EA1DC(a1, a2, &v31);
    v4 = v31;
    v18 = v27;
    if ( v27 < 0 )
      goto LABEL_40;
    v29 = sub_1409EB030(a1, v31, &v33);
    v6 = v33;
    v18 = v29;
    if ( v29 < 0 )
      goto LABEL_40;
    if ( v33 )
    {
      sub_1409E99A0(a1, v4);
      v4 = v6;
      v6 = 0LL;
    }
  }
  else if ( v18 < 0 )
  {
    goto LABEL_40;
  }
  v20 = KeGetCurrentThread();
  --v20->SpecialApcDisable;
  v21 = (AutoBoost *)KeAbPreAcquire(a1 + 80, 0LL, 0LL, v19);
  v23 = v21;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v21, a1 + 80);
  if ( v23 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v23, v22);
    else
      *((_BYTE *)v23 + 10) = 1;
  }
  if ( (v4[2] & 1) != 0 )
  {
    v24 = (__int64 *)*v4;
    if ( *(__int64 **)(*v4 + 8) != v4
      || (v25 = (__int64 **)v4[1], *v25 != v4)
      || (*v25 = v24, v24[1] = (__int64)v25, v26 = *(__int64 ***)(a1 + 72), *v26 != (__int64 *)(a1 + 64)) )
    {
      __fastfail(3u);
    }
    *v4 = a1 + 64;
    v4[1] = (__int64)v26;
    *v26 = v4;
    *(_QWORD *)(a1 + 72) = v4;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  KeLeaveGuardedRegion();
  if ( v32 )
  {
    *v32 = v4;
    v4 = 0LL;
  }
LABEL_40:
  if ( v4 && _InterlockedExchangeAdd64(v4 + 10, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    if ( v4[5] )
    {
      sub_1409E9A1C(a1);
      v4[5] = 0LL;
      v4[3] = 0LL;
      v4[4] = 0LL;
      *((_DWORD *)v4 + 18) = 0;
    }
    SddlpFree(v4);
  }
  if ( v6 && _InterlockedExchangeAdd64(v6 + 10, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    if ( v6[5] )
    {
      sub_1409E9A1C(a1);
      v6[5] = 0LL;
      v6[3] = 0LL;
      v6[4] = 0LL;
      *((_DWORD *)v6 + 18) = 0;
    }
    SddlpFree(v6);
  }
  return (unsigned int)v18;
}
