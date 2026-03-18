/*
 * XREFs of VerifierNtReadFile @ 0x140C40080
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilDbgPrint @ 0x14052FE80 (VfUtilDbgPrint.c)
 *     RtlStringCbPrintfA @ 0x140576648 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ViErrorDisplayDescription @ 0x140C31AD8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140C31B28 (ViErrorFinishReport.c)
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
