/*
 * XREFs of IommupHvUnmapDeviceLogicalRange @ 0x140474A70
 * Callers:
 *     IommuUnmapLogicalRange @ 0x1404748C0 (IommuUnmapLogicalRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404749BC (HalpIommuDomainUnmapLogicalRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvUnmapDeviceLogicalRange(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(BugCheckParameter3 + 48);
  result = guard_dispatch_icall_no_overrides(&v5, BugCheckParameter4);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1D9u, 1uLL, (int)result, BugCheckParameter3, BugCheckParameter4);
  return result;
}
