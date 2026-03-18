/*
 * XREFs of VerifierNtCreateFile @ 0x140B910D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x140537888 (RtlStringCbPrintfA.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViErrorDisplayDescription @ 0x140B8364C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B8369C (ViErrorFinishReport.c)
 */

__int64 __fastcall VerifierNtCreateFile(__int64 a1)
{
  char pszDest[40]; // [rsp+60h] [rbp-68h] BYREF
  const void *retaddr; // [rsp+C8h] [rbp+0h]

  if ( (MmVerifierData & 0x10) != 0 && KeGetCurrentIrql() )
  {
    ViErrorDisplayDescription(586);
    if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", retaddr) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(586, (ULONG_PTR)retaddr, 0LL, 0LL);
  }
  return guard_dispatch_icall_no_overrides(a1);
}
