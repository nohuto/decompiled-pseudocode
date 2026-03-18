/*
 * XREFs of ExpSvmDereferenceDevice @ 0x1406D20D0
 * Callers:
 *     ExFreeSvmAsid @ 0x1404CE2AC (ExFreeSvmAsid.c)
 *     ExpShareAddressSpaceWithDevice @ 0x1406D1A1C (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_DWORD *P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v7; // r14d
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rsi
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // ecx
  int v15; // eax
  _QWORD *v16; // rcx
  PVOID *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  int v22; // [rsp+68h] [rbp+20h] BYREF

  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->SpecialApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1], 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.ApcStateFill[16], 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1],
      v8,
      (__int64)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1]);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = (unsigned int)(P[8] - 1);
  v13 = P[9] - 1;
  P[8] = v12;
  P[9] = v13;
  if ( !v13 || !(_DWORD)v12 )
  {
    v14 = 0;
    if ( !(_DWORD)v12 )
    {
      v22 = 1;
      v14 = 1;
    }
    v15 = v14;
    if ( !v13 && !*((_BYTE *)P + 18) )
    {
      v15 = v14 | 6;
      v22 = v14 | 6;
    }
    if ( v15 )
      v7 = guard_dispatch_icall_no_overrides(*((_QWORD *)P + 6), &v22);
    if ( !P[9] )
    {
      v7 = guard_dispatch_icall_no_overrides(a2, *((_QWORD *)P + 22));
      _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
      *((_BYTE *)P + 16) = 1;
    }
    if ( !P[8] )
    {
      v16 = *(_QWORD **)P;
      if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v17 = (PVOID *)*((_QWORD *)P + 1), *v17 != P) )
        __fastfail(3u);
      *v17 = v16;
      v16[1] = v17;
      guard_dispatch_icall_no_overrides(*((_QWORD *)P + 6), v12);
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1].Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1]);
  KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1]);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v19, v18);
  return v7;
}
