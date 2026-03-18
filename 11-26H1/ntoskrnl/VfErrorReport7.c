/*
 * XREFs of VfErrorReport7 @ 0x140C3196C
 * Callers:
 *     PpvUtilFailDriver @ 0x1405DCFE0 (PpvUtilFailDriver.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x14052FE80 (VfUtilDbgPrint.c)
 *     RtlStringCbPrintfA @ 0x140576648 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140C31AD8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140C31B28 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport7(__int64 a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-98h] BYREF

  ViErrorDisplayDescription(585LL);
  if ( RtlStringCbPrintfA(
         pszDest,
         0x6EuLL,
         "CulpritAddress = %p, DeviceObject1 = %p, DeviceObject2 = %p.\n",
         a2,
         a3,
         a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(585LL, a2, a3, a4);
}
