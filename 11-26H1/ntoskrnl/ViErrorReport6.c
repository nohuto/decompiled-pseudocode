/*
 * XREFs of ViErrorReport6 @ 0x140649438
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140C283A0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140C285A0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver2 @ 0x140C3187C (IovpCallDriver2.c)
 *     IovpCompleteRequest2 @ 0x140C4B8AC (IovpCompleteRequest2.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140532380 (VfUtilDbgPrint.c)
 *     RtlStringCbPrintfA @ 0x140578AF8 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140C37AE8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140C37B38 (ViErrorFinishReport.c)
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
