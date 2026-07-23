/*
 * XREFs of sub_1409EBF3C @ 0x1409EBF3C
 * Callers:
 *     sub_1409EBDC0 @ 0x1409EBDC0 (sub_1409EBDC0.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     sub_140886A3C @ 0x140886A3C (sub_140886A3C.c)
 *     sub_1409EC140 @ 0x1409EC140 (sub_1409EC140.c)
 *     sub_1409EC174 @ 0x1409EC174 (sub_1409EC174.c)
 *     sub_1409EC64C @ 0x1409EC64C (sub_1409EC64C.c)
 */

__int64 __fastcall sub_1409EBF3C(__int64 a1, __int64 a2, __int64 *a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rsi
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rbp
  void *v10; // rdx
  LegacyAutoBoost *v11; // rdi
  int v12; // r14d
  int i; // edi
  int v14; // r13d
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // edi
  int v20; // eax
  struct _KLOCK_ENTRIES *v21; // r9
  int v22; // eax
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h]
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  v24 = a2;
  v4 = (signed __int64 *)(a1 + 176);
  v25 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v11 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 176, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v11, (struct _KTHREAD *)v4);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = 0;
  for ( i = *(_DWORD *)(a1 + 140) - 1; ; i = v16 )
  {
    if ( v12 > i )
    {
      v18 = -1073741198;
      goto LABEL_16;
    }
    v14 = (i + v12) / 2;
    v15 = guard_dispatch_icall_no_overrides(
            *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 136) * v14) + *(_QWORD *)(a1 + 152)),
            v24);
    if ( !v15 )
      break;
    if ( v15 >= 0 )
      v12 = v14 + 1;
    v16 = v14 - 1;
    if ( v15 >= 0 )
      v16 = i;
  }
  v18 = sub_1409EC174(*(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 136) * v14) + *(_QWORD *)(a1 + 152)));
  if ( v18 >= 0 )
  {
    v7 = v17;
    v23 = v17;
  }
LABEL_16:
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((unsigned __int64)v4);
  KeLeaveGuardedRegion();
  if ( v18 == -1073741198 )
  {
    v20 = sub_1409EC64C(v24, &v23);
    v7 = v23;
    v18 = v20;
    if ( v20 < 0 )
      goto LABEL_22;
    v22 = sub_140886A3C(a1, v23, &v25, v21);
    v9 = v25;
    v18 = v22;
    if ( v22 < 0 )
      goto LABEL_22;
    if ( v25 )
    {
      sub_1409EC140(v7);
      v7 = v9;
    }
  }
  else if ( v18 < 0 )
  {
    goto LABEL_22;
  }
  if ( a3 )
  {
    *a3 = v7;
    v7 = 0LL;
  }
LABEL_22:
  sub_1409EC140(v7);
  sub_1409EC140(v9);
  return (unsigned int)v18;
}
