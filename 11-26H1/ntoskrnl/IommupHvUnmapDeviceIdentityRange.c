/*
 * XREFs of IommupHvUnmapDeviceIdentityRange @ 0x140474850
 * Callers:
 *     HalpIommuDomainUnmapIdentityRange @ 0x140474774 (HalpIommuDomainUnmapIdentityRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvUnmapDeviceIdentityRange(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(BugCheckParameter3 + 52) )
    return 3221225485LL;
  v4 = *(unsigned int *)(BugCheckParameter3 + 48);
  result = guard_dispatch_icall_no_overrides(&v4, a2);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1D9u, 1uLL, (int)result, BugCheckParameter3, 0LL);
  return result;
}
