/*
 * XREFs of VrpBecomeDiffHiveEntryTransitionOwner @ 0x14093C044
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x14093B458 (VrpUnloadDifferencingHive.c)
 *     VrpLoadDifferencingHive @ 0x14093B56C (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

char __fastcall VrpBecomeDiffHiveEntryTransitionOwner(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx

  v4 = (_QWORD *)(a1 + 40);
  if ( *v4 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *v4 = KeGetCurrentThread();
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, a4);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v7);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  return 1;
}
