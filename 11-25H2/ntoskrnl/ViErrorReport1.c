/*
 * XREFs of ViErrorReport1 @ 0x1406065B4
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140B73FC0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140B741C0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140B7D2A0 (IovpCallDriver2.c)
 *     IovpExamineIrpStackForwarding @ 0x140B7D670 (IovpExamineIrpStackForwarding.c)
 *     IovpValidateStatusInformation @ 0x140B7D80C (IovpValidateStatusInformation.c)
 *     VfAfterCallDriver @ 0x140B7DAB4 (VfAfterCallDriver.c)
 *     VfPnpVerifyIrpStackDownward @ 0x140B95780 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140B95910 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x140B95B10 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140B95BF0 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140B95F80 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140B96070 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140B960B0 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140B961B0 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140B96310 (VfWmiVerifyNewRequest.c)
 *     VfIoInitializeIrp @ 0x140B96704 (VfIoInitializeIrp.c)
 *     IovpCompleteRequest1 @ 0x140B96A08 (IovpCompleteRequest1.c)
 *     IovpLocalCompletionRoutine @ 0x140B96B90 (IovpLocalCompletionRoutine.c)
 *     IovFreeIrpPrivate @ 0x140B96F50 (IovFreeIrpPrivate.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140537888 (RtlStringCbPrintfA.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140B8364C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B8369C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
