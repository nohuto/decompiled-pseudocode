/*
 * XREFs of HalpIommuRegisterDispatchTable @ 0x140CB0000
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall HalpIommuRegisterDispatchTable(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR result; // rax

  if ( LOBYTE(HalpDeviceBlockUnblockPushLock.ThreadLock) )
    KeBugCheckEx(0x5Cu, 0xA000uLL, BugCheckParameter2, HalIommuDispatch, 0LL);
  result = HalIommuDispatch;
  LOBYTE(HalpDeviceBlockUnblockPushLock.ThreadLock) = 1;
  *(_QWORD *)HalIommuDispatch = HalpIommuSupportEnabled;
  return result;
}
