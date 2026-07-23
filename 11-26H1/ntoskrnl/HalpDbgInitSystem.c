/*
 * XREFs of HalpDbgInitSystem @ 0x140BF1610
 * Callers:
 *     <none>
 * Callees:
 *     HalAcpiGetTable @ 0x14057B8A0 (HalAcpiGetTable.c)
 *     KdGetDebugDevice @ 0x1405E6140 (KdGetDebugDevice.c)
 *     HalpCopyDebugDescriptor @ 0x140CBA814 (HalpCopyDebugDescriptor.c)
 *     HalpRegisterKdSupportFunctions @ 0x140CBA954 (HalpRegisterKdSupportFunctions.c)
 */

__int64 __fastcall HalpDbgInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 1 )
  {
    *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock = HalpCopyDebugDescriptor(*(_QWORD *)(*(_QWORD *)(a3 + 240) + 2800LL));
    HalpRegisterKdSupportFunctions();
    HalpDeviceBlockUnblockPushLock.RelativeTimerBias = HalAcpiGetTable(a3, 1346847300);
    *(_QWORD *)&KdGetDebugDevice()->Header.Lock = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock;
  }
  return 0LL;
}
