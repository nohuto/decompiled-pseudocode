/*
 * XREFs of ViErrorReport1 @ 0x14064927C
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140C283A0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140C285A0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140C3187C (IovpCallDriver2.c)
 *     IovpExamineIrpStackForwarding @ 0x140C31C6C (IovpExamineIrpStackForwarding.c)
 *     IovpValidateStatusInformation @ 0x140C31E0C (IovpValidateStatusInformation.c)
 *     VfAfterCallDriver @ 0x140C320AC (VfAfterCallDriver.c)
 *     VfPnpVerifyIrpStackDownward @ 0x140C40A60 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140C40BF0 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x140C40DF0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140C40ED0 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140C41260 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140C41350 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140C41390 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140C41490 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140C415F0 (VfWmiVerifyNewRequest.c)
 *     VfIoInitializeIrp @ 0x140C4B964 (VfIoInitializeIrp.c)
 *     IovFreeIrpPrivate @ 0x140C4B9D0 (IovFreeIrpPrivate.c)
 *     IovpCompleteRequest1 @ 0x140C4BD80 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest4 @ 0x140C4C10C (IovpCompleteRequest4.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140532380 (VfUtilDbgPrint.c)
 *     RtlStringCbPrintfA @ 0x140578AF8 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140C37AE8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140C37B38 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
