/*
 * XREFs of IommuFinalizeDeviceReset @ 0x14059E740
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuFinalizeDeviceReset(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  KSPIN_LOCK *v4; // rbp
  char v5; // r15
  _QWORD *v6; // rsi
  volatile signed __int32 *v7; // rbx
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  AutoBoost *v10; // rdi
  unsigned __int8 CurrentIrql; // r14
  KSPIN_LOCK i; // rdi
  KSPIN_LOCK *v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edx

  v4 = *(KSPIN_LOCK **)(a1 + 88);
  v5 = 0;
  v6 = (_QWORD *)v4[3];
  if ( HalpHvIommu )
    return 3221225659LL;
  v7 = (volatile signed __int32 *)(v6 + 49);
  if ( !v6[41] || !v6[42] )
    return 3221225659LL;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)(v6 + 49), 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64(v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6 + 49, v8, (__int64)(v6 + 49));
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v9) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v10 + 33), v9, 1);
    }
    else
    {
      *((_BYTE *)v10 + 10) = 1;
    }
  }
  guard_dispatch_icall_no_overrides(v6[2], v4[5]);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock(v4 + 2);
  for ( i = v4[7]; (KSPIN_LOCK *)i != v4 + 7; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 40) )
    {
      *(_BYTE *)(i + 40) = 0;
      v5 = 1;
      KxAcquireSpinLock(v6 + 50);
      v13 = v4 + 11;
      v14 = 512LL;
      do
      {
        v15 = *((_DWORD *)v13 + 1);
        if ( (v15 & 1) != 0 && ((v15 >> 1) & 0xFFFFF) == *(_DWORD *)(*(_QWORD *)(i + 32) + 16LL) )
          *v13 = 0LL;
        ++v13;
        --v14;
      }
      while ( v14 );
      KxReleaseSpinLock(v6 + 50);
      guard_dispatch_icall_no_overrides(v6[2], v4[5]);
    }
  }
  KxReleaseSpinLock(v4 + 2);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6 + 49);
  KeAbPostRelease((unsigned __int64)(v6 + 49));
  return v5 == 0 ? 0xC0000225 : 0;
}
