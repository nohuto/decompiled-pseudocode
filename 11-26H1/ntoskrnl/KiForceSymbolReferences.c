/*
 * XREFs of KiForceSymbolReferences @ 0x140CCFB88
 * Callers:
 *     KiInitSystem @ 0x140CCFE5C (KiInitSystem.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiForceSymbolReferences(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // rax
  volatile unsigned __int8 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int8 v8; // cf
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
  {
    v4 = KeAbPreAcquire((__int64)&v12, 0LL, 1LL, a4);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&v12, 0LL);
    if ( v4 )
    {
      if ( v8 )
      {
        KeAbPostReleaseEx((struct _KTHREAD *)&v12, v4, v6, v7);
      }
      else if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v5) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v4 + 33), v5, 1);
      }
      else
      {
        *(_BYTE *)(v4 + 10) = 1;
      }
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  ExTryAcquireSpinLockExclusiveAtDpcLevel(&v11);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
