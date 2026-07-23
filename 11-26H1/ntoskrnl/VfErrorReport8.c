/*
 * XREFs of VfErrorReport8 @ 0x140C37A14
 * Callers:
 *     PpvUtilFailDriver @ 0x1405DF948 (PpvUtilFailDriver.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140532380 (VfUtilDbgPrint.c)
 *     RtlStringCbPrintfA @ 0x140578AF8 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140C37AE8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140C37B38 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport8(__int64 a1, const void *a2, const void *a3)
{
  unsigned int v5; // ebx
  char pszDest[80]; // [rsp+30h] [rbp-78h] BYREF

  v5 = a1;
  ViErrorDisplayDescription(a1);
  if ( RtlStringCbPrintfA(pszDest, 0x49uLL, "CulpritAddress = %p, DeviceObject = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(v5, a2, a3, 0LL);
}
