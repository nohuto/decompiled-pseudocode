/*
 * XREFs of ViErrorReport1 @ 0x14064569C
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140C22390 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140C22590 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x140C2B2B8 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140C2B86C (IovpCallDriver2.c)
 *     IovpExamineIrpStackForwarding @ 0x140C2BC5C (IovpExamineIrpStackForwarding.c)
 *     IovpValidateStatusInformation @ 0x140C2BDFC (IovpValidateStatusInformation.c)
 *     VfAfterCallDriver @ 0x140C2C09C (VfAfterCallDriver.c)
 *     VfPnpVerifyIrpStackDownward @ 0x140C3AA50 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140C3ABE0 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x140C3ADE0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140C3AEC0 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140C3B250 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140C3B340 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140C3B380 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140C3B480 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140C3B5E0 (VfWmiVerifyNewRequest.c)
 *     VfIoInitializeIrp @ 0x140C45954 (VfIoInitializeIrp.c)
 *     IovFreeIrpPrivate @ 0x140C459C0 (IovFreeIrpPrivate.c)
 *     IovpCompleteRequest1 @ 0x140C45D70 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest4 @ 0x140C460FC (IovpCompleteRequest4.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x14052FE80 (VfUtilDbgPrint.c)
 *     RtlStringCbPrintfA @ 0x140576648 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140C31AD8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140C31B28 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
