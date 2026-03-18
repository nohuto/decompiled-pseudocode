/*
 * XREFs of AMLIIterateParentNext @ 0x14001E874
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x14001E71C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyDeviceCheck @ 0x140041ADC (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x140041DFC (OSNotifyDeviceEnum.c)
 *     GetOpRegionScopeWorker @ 0x140047EC0 (GetOpRegionScopeWorker.c)
 *     AcpiHandleInternalNotify @ 0x140065F50 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIGetParent @ 0x14001E8A8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall AMLIIterateParentNext(__int64 a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent(a1);
  AMLIDereferenceHandleEx(a1);
  return v2;
}
