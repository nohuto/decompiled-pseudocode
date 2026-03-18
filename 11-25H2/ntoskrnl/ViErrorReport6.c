/*
 * XREFs of ViErrorReport6 @ 0x140606770
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140B73FC0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140B741C0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver2 @ 0x140B7D2A0 (IovpCallDriver2.c)
 *     IovpCompleteRequest2 @ 0x140B96E04 (IovpCompleteRequest2.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140537888 (RtlStringCbPrintfA.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140B8364C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B8369C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport6(__int64 a1, const void *a2, const void *a3, int a4)
{
  __int64 v4; // rbp
  unsigned int v7; // ebx
  char pszDest[96]; // [rsp+30h] [rbp-98h] BYREF

  v4 = a4;
  v7 = a1;
  ViErrorDisplayDescription(a1);
  if ( RtlStringCbPrintfA(pszDest, 0x57uLL, "CulpritAddress = %p, Irp = %p, Status = 0x%x.\n", a2, a3, v4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(v7, a2, a3, v4);
}
