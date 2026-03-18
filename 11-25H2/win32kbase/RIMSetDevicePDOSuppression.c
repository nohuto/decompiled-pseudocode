/*
 * XREFs of RIMSetDevicePDOSuppression @ 0x140148D60
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x14007A364 (RIMUpdateDeviceForInputMode.c)
 * Callees:
 *     ?SetDevicePDOSuppression@RIM@InputTraceLogging@@SAXPEBURIMDEV@@E@Z @ 0x140148DF0 (-SetDevicePDOSuppression@RIM@InputTraceLogging@@SAXPEBURIMDEV@@E@Z.c)
 */

int __fastcall RIMSetDevicePDOSuppression(__int64 a1, unsigned __int8 a2)
{
  bool v2; // zf
  int result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int8 InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  InputBuffer = a2;
  v2 = *(_QWORD *)(a1 + 208) == 0LL;
  IoStatusBlock = 0LL;
  if ( v2 || !*(_QWORD *)(a1 + 216) )
    return 0;
  InputTraceLogging::RIM::SetDevicePDOSuppression((const struct RIMDEV *)a1, a2);
  result = ZwDeviceIoControlFile(
             *(HANDLE *)(a1 + 208),
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0xB0268u,
             &InputBuffer,
             1u,
             0LL,
             0);
  if ( result >= 0 )
    return IoStatusBlock.Status;
  return result;
}
