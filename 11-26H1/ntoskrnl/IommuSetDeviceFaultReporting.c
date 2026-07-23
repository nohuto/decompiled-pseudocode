/*
 * XREFs of IommuSetDeviceFaultReporting @ 0x1405A20C0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IommuSetDeviceFaultReporting(void *a1, int a2, char a3, _QWORD *a4)
{
  char v4; // si
  _QWORD *v9; // rbx
  unsigned __int8 CurrentIrql; // di
  void **i; // rax
  __int64 result; // rax

  v4 = 0;
  if ( !HalpHvIommu || !HalpHvParaVirtIommuDomain )
    return 3221225659LL;
  v9 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  KxAcquireSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.InitialStack);
  for ( i = (void **)IommuInterfaceStateChangeCallbackPushLock.SListFaultAddress;
        i != &IommuInterfaceStateChangeCallbackPushLock.SListFaultAddress;
        i = (void **)*i )
  {
    if ( i[2] == a1 && *((_DWORD *)i + 6) == a2 )
    {
      v9 = i[4];
      v4 = 1;
      break;
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.InitialStack);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( !v4 )
    return 3221225485LL;
  if ( a3 )
    v9[12] = *a4;
  result = 3221225474LL;
  v9[12] = 0LL;
  v9[13] = 0LL;
  return result;
}
