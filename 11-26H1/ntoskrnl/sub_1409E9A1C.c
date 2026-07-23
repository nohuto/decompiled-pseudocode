/*
 * XREFs of sub_1409E9A1C @ 0x1409E9A1C
 * Callers:
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 *     sub_1409E960C @ 0x1409E960C (sub_1409E960C.c)
 *     sub_1409E99A0 @ 0x1409E99A0 (sub_1409E99A0.c)
 *     sub_1409EAA0C @ 0x1409EAA0C (sub_1409EAA0C.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     sub_1409EB58C @ 0x1409EB58C (sub_1409EB58C.c)
 */

__int64 __fastcall sub_1409E9A1C(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rbx
  __int64 v8; // r15
  void *v9; // rdx
  LegacyAutoBoost *v10; // rdi
  int v11; // esi
  int i; // edi
  int v13; // ebp
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edi

  CurrentThread = KeGetCurrentThread();
  v5 = (signed __int64 *)(a1 + 224);
  --CurrentThread->SpecialApcDisable;
  v8 = 0LL;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 224, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v10, (struct _KTHREAD *)v5);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = 0;
  for ( i = *(_DWORD *)(a1 + 188) - 1; v11 <= i; i = v15 )
  {
    v13 = (i + v11) / 2;
    v14 = guard_dispatch_icall_no_overrides(
            *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 184) * v13) + *(_QWORD *)(a1 + 200)),
            a2);
    if ( !v14 )
    {
      v16 = 0;
      v8 = *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 184) * v13) + *(_QWORD *)(a1 + 200));
      goto LABEL_15;
    }
    if ( v14 >= 0 )
      v11 = v13 + 1;
    v15 = v13 - 1;
    if ( v14 >= 0 )
      v15 = i;
  }
  v16 = -1073741198;
LABEL_15:
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveGuardedRegion();
  if ( v16 >= 0 )
    return (unsigned int)sub_1409EB58C(v8, a2);
  return (unsigned int)v16;
}
