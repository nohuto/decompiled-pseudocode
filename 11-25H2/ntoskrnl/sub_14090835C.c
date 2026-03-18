/*
 * XREFs of sub_14090835C @ 0x14090835C
 * Callers:
 *     sub_140907BA0 @ 0x140907BA0 (sub_140907BA0.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     sub_140906F68 @ 0x140906F68 (sub_140906F68.c)
 *     sub_1409077D4 @ 0x1409077D4 (sub_1409077D4.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     sub_140907850 @ 0x140907850 (sub_140907850.c)
 *     sub_140909220 @ 0x140909220 (sub_140909220.c)
 *     sub_140909250 @ 0x140909250 (sub_140909250.c)
 *     sub_140909280 @ 0x140909280 (sub_140909280.c)
 *     sub_1409093BC @ 0x1409093BC (sub_1409093BC.c)
 *     sub_140909F40 @ 0x140909F40 (sub_140909F40.c)
 *     WbCreateHeapExecutedBlock @ 0x14090A030 (WbCreateHeapExecutedBlock.c)
 */

__int64 __fastcall sub_14090835C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rdi
  int v9; // esi
  __int64 v10; // r12
  int i; // edi
  int v12; // r15d
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  bool v16; // sf
  int v17; // eax
  __int64 v18; // rdx
  int v19; // edi
  __int64 v20; // rbx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // [rsp+70h] [rbp+40h] BYREF
  __int64 v29; // [rsp+78h] [rbp+48h]
  __int64 v30; // [rsp+88h] [rbp+58h] BYREF

  v29 = a2;
  v28 = 0LL;
  v5 = (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56));
  v30 = 0LL;
  sub_1409093BC(a1, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), 0, v8, a1 + 48);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = 0;
  v10 = *(_QWORD *)(a2 + 272);
  for ( i = *(_DWORD *)(a1 + 12) - 1; ; i = v17 )
  {
    if ( v9 > i )
    {
      v19 = -1073741198;
      goto LABEL_20;
    }
    v12 = (i + v9) / 2;
    v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 40);
    v14 = *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 8) * v12) + *(_QWORD *)(a1 + 24));
    if ( v13 == sub_140909220 )
    {
      v15 = sub_140909220(v14, v10, 8LL);
    }
    else if ( v13 == sub_140909250 )
    {
      v15 = sub_140909250(v14, v10, 8LL);
    }
    else
    {
      v15 = v13 == sub_140909280 ? sub_140909280(v14, v10, 8LL) : guard_dispatch_icall_no_overrides(v14);
    }
    v16 = v15 < 0;
    if ( !v15 )
      break;
    if ( v15 >= 0 )
      v9 = v12 + 1;
    v17 = v12 - 1;
    if ( !v16 )
      v17 = i;
  }
  v18 = *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 8) * v12) + *(_QWORD *)(a1 + 24));
  if ( v18 && !_InterlockedIncrement64((volatile signed __int64 *)(v18 + 80)) )
  {
    v19 = -1073741595;
  }
  else
  {
    v19 = 0;
    v28 = v18;
  }
LABEL_20:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KeLeaveGuardedRegion();
  if ( v19 == -1073741198 )
  {
    v26 = WbCreateHeapExecutedBlock(a1, v29, &v28);
    v20 = v28;
    v19 = v26;
    if ( v26 < 0 )
      goto LABEL_26;
    v19 = sub_140906F68(a1, v28, &v30);
    if ( v19 < 0 )
      goto LABEL_26;
    v27 = v30;
    if ( v30 )
    {
      sub_1409077D4(a1, v20);
      v20 = v27;
      v30 = 0LL;
      v28 = v27;
    }
  }
  else
  {
    v20 = v28;
    if ( v19 < 0 )
      goto LABEL_26;
  }
  sub_140909F40(a1, v20);
  if ( a3 )
  {
    *a3 = v20;
    v20 = 0LL;
    v28 = 0LL;
  }
LABEL_26:
  if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 80), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v22 = v28;
    v23 = *(_QWORD *)(v28 + 40);
    if ( v23 )
    {
      sub_140907850(a1, v23);
      *(_QWORD *)(v22 + 40) = 0LL;
      *(_QWORD *)(v22 + 24) = 0LL;
      *(_QWORD *)(v22 + 32) = 0LL;
      *(_DWORD *)(v22 + 72) = 0;
    }
    SddlpFree((void *)v22);
  }
  if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 80), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v24 = v30;
    v25 = *(_QWORD *)(v30 + 40);
    if ( v25 )
    {
      sub_140907850(a1, v25);
      *(_QWORD *)(v24 + 40) = 0LL;
      *(_QWORD *)(v24 + 24) = 0LL;
      *(_QWORD *)(v24 + 32) = 0LL;
      *(_DWORD *)(v24 + 72) = 0;
    }
    SddlpFree((void *)v24);
  }
  return (unsigned int)v19;
}
