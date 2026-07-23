/*
 * XREFs of ViErrorReport4 @ 0x140649394
 * Callers:
 *     IovpCallDriver2 @ 0x140C3187C (IovpCallDriver2.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140532380 (VfUtilDbgPrint.c)
 *     RtlStringCbPrintfA @ 0x140578AF8 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140C37AE8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140C37B38 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport4(__int64 a1, const void *a2, const void **a3, int a4, int a5)
{
  __int64 v5; // rsi
  char pszDest[128]; // [rsp+40h] [rbp-A8h] BYREF

  v5 = a4;
  ViErrorDisplayDescription(548LL);
  if ( RtlStringCbPrintfA(
         pszDest,
         0x7CuLL,
         "CulpritAddress = %p, Irp = %p, ExpectedStatus = 0x%x, ActualStatus = 0x%x.\n",
         a2,
         *a3,
         v5,
         a5) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(548LL, a2, *a3, v5);
}
