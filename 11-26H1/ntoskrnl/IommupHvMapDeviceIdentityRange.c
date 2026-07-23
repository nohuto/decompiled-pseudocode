/*
 * XREFs of IommupHvMapDeviceIdentityRange @ 0x1404A3260
 * Callers:
 *     HalpIommuDomainMapIdentityRange @ 0x1404A31E4 (HalpIommuDomainMapIdentityRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvMapDeviceIdentityRange(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // eax
  int v8; // esi
  int v10; // eax
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]

  if ( *(_BYTE *)(BugCheckParameter3 + 52) )
    return 3221225485LL;
  v7 = *(_DWORD *)(BugCheckParameter3 + 48);
  v12 = 0;
  v11 = v7;
  v8 = guard_dispatch_icall_no_overrides(&v11, a2);
  if ( v8 < 0 )
  {
    v10 = guard_dispatch_icall_no_overrides(&v11, a3);
    if ( v10 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v10, BugCheckParameter3, 0LL);
    *a4 = 0LL;
  }
  return (unsigned int)v8;
}
