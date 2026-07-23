/*
 * XREFs of HalpFindSecondaryIcEntry @ 0x140433DD8
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x140430154 (HalpDisableSecondaryInterrupt.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14043394C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x1405920B0 (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140B49A2C (HalpQueryPrimaryInterruptInformation.c)
 *     HalpEnableSecondaryInterrupt @ 0x140B62114 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 */

__int64 __fastcall HalpFindSecondaryIcEntry(unsigned int a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned int v7; // ecx

  v2 = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock);
  v3 = SecondaryIcList;
  v4 = 0LL;
  v5 = v2;
  while ( (__int64 *)v3 != &SecondaryIcList )
  {
    v7 = *(_DWORD *)(v3 + 16);
    if ( a1 >= v7 && a1 < *(_DWORD *)(v3 + 20) + v7 )
    {
      v4 = v3;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 112));
      break;
    }
    v3 = *(_QWORD *)v3;
  }
  KxReleaseSpinLock(&SecondaryIcListSpinLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  __writecr8(v5);
  return v4;
}
