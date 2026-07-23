/*
 * XREFs of IommuBeginDeviceReset @ 0x14059DD00
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
 */

__int64 __fastcall IommuBeginDeviceReset(__int64 a1, _DWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // si
  KSPIN_LOCK *v6; // rbp
  _QWORD *v7; // rax
  unsigned __int64 *v8; // rbx
  AutoBoost *v9; // rax
  volatile unsigned __int8 *v10; // rdx
  AutoBoost *v11; // rdi
  unsigned __int8 CurrentIrql; // di
  KSPIN_LOCK i; // rdx

  v4 = 0;
  if ( HalpHvIommu )
    return 3221225659LL;
  v6 = *(KSPIN_LOCK **)(a1 + 88);
  v7 = (_QWORD *)v6[3];
  v8 = v7 + 49;
  if ( !v7[41] || !v7[42] )
    return 3221225659LL;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)(v7 + 49), 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v10) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v11 + 33), v10, 1);
    }
    else
    {
      *((_BYTE *)v11 + 10) = 1;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock(v6 + 2);
  for ( i = v6[7]; (KSPIN_LOCK *)i != v6 + 7; i = *(_QWORD *)i )
  {
    if ( !a2 || *(_DWORD *)(*(_QWORD *)(i + 32) + 16LL) == *a2 )
    {
      *(_BYTE *)(i + 40) = 1;
      v4 = 1;
    }
  }
  KxReleaseSpinLock(v6 + 2);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  KeAbPostRelease((unsigned __int64)v8);
  return v4 == 0 ? 0xC0000225 : 0;
}
