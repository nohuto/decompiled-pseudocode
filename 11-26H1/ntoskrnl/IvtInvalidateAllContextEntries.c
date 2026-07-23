/*
 * XREFs of IvtInvalidateAllContextEntries @ 0x1405A9A28
 * Callers:
 *     IvtInitializeIommu @ 0x140BF5C90 (IvtInitializeIommu.c)
 * Callees:
 *     IvtIommuWaitCommand @ 0x140434918 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x140434A6C (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall IvtInvalidateAllContextEntries(__int64 a1)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v3[1] = 0LL;
  v3[0] = 17LL;
  IvtIommuSendCommand(a1, v3, 0);
  return IvtIommuWaitCommand(a1, 0, 0LL);
}
