/*
 * XREFs of VerifierNtReadFile @ 0x140C46090
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilDbgPrint @ 0x140532380 (VfUtilDbgPrint.c)
 *     RtlStringCbPrintfA @ 0x140578AF8 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViErrorDisplayDescription @ 0x140C37AE8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140C37B38 (ViErrorFinishReport.c)
 */

__int64 __fastcall VerifierNtReadFile(__int64 a1, __int64 a2)
{
  char pszDest[40]; // [rsp+58h] [rbp-80h] BYREF
  const void *retaddr; // [rsp+D8h] [rbp+0h]

  if ( (MmVerifierData & 0x10) != 0 && KeGetCurrentIrql() )
  {
    ViErrorDisplayDescription(586);
    if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", retaddr) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(586, (ULONG_PTR)retaddr, 0LL, 0LL);
  }
  return guard_dispatch_icall_no_overrides(a1, a2);
}
