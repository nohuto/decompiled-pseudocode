/*
 * XREFs of HamIpcChannelInitialize @ 0x180003898
 * Callers:
 *     HamConnectForStateChangeNotifications @ 0x180002280 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForServicing @ 0x1800036A0 (HamConnectForServicing.c)
 *     HamConnectForExtendedExecution @ 0x180003790 (HamConnectForExtendedExecution.c)
 *     HampConnectionCreate @ 0x180003930 (HampConnectionCreate.c)
 * Callees:
 *     memset_0 @ 0x18001A5BE (memset_0.c)
 */

__int64 (__fastcall *__fastcall HamIpcChannelInitialize(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4))()
{
  __int64 (__fastcall *result)(); // rax

  memset_0(a4, 0, 0x50uLL);
  RtlInitializeSRWLock(a4 + 1);
  a4[6] = a4 + 5;
  a4[5] = a4 + 5;
  a4[7] = &HampConnectionDeliverPayload;
  a4[8] = HampConnectionObjectCompareToObject;
  result = HampConnectionObjectCompareToMessage;
  a4[9] = HampConnectionObjectCompareToMessage;
  return result;
}
