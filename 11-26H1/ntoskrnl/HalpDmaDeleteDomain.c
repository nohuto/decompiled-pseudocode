/*
 * XREFs of HalpDmaDeleteDomain @ 0x1405311C8
 * Callers:
 *     HalpDmaDereferenceDomainObject @ 0x1403444A8 (HalpDmaDereferenceDomainObject.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDmaDeleteDomain(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx

  v3 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 40), a2);
  if ( v3 < 0 )
    KeBugCheckEx(0x1D9u, 0LL, v3, BugCheckParameter3, 0LL);
  HalpMmAllocCtxFree(v4, BugCheckParameter3);
}
