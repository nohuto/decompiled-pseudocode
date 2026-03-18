/*
 * XREFs of HalpDbgInitSystem @ 0x140BEB610
 * Callers:
 *     <none>
 * Callees:
 *     HalAcpiGetTable @ 0x140579370 (HalAcpiGetTable.c)
 *     KdGetDebugDevice @ 0x1405E37D0 (KdGetDebugDevice.c)
 *     HalpCopyDebugDescriptor @ 0x140CB47D4 (HalpCopyDebugDescriptor.c)
 *     HalpRegisterKdSupportFunctions @ 0x140CB4914 (HalpRegisterKdSupportFunctions.c)
 */

__int64 __fastcall HalpDbgInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 1 )
  {
    HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)HalpCopyDebugDescriptor(*(_QWORD *)(*(_QWORD *)(a3 + 240) + 2800LL));
    HalpRegisterKdSupportFunctions();
    *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock = HalAcpiGetTable(a3, 1346847300);
    KdGetDebugDevice()->Flink = HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink;
  }
  return 0LL;
}
