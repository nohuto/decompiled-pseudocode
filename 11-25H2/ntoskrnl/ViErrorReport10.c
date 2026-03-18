/*
 * XREFs of ViErrorReport10 @ 0x140606638
 * Callers:
 *     IovpCallDriver2 @ 0x140B7D2A0 (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140B95910 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140B95BF0 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140B96230 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140537888 (RtlStringCbPrintfA.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140B8364C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B8369C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}
