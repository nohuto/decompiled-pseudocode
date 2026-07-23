/*
 * XREFs of IommupHvMapDeviceLogicalRange @ 0x1404754D4
 * Callers:
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404749BC (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpIommuDomainMapLogicalRange @ 0x14047578C (HalpIommuDomainMapLogicalRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvMapDeviceLogicalRange(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG_PTR a5)
{
  int v5; // eax
  ULONG_PTR BugCheckParameter4; // rbx
  int v8; // edi
  int v9; // eax
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+64h] [rbp+Ch]
  unsigned __int64 v13; // [rsp+70h] [rbp+18h]
  unsigned __int64 v14; // [rsp+78h] [rbp+20h]

  v5 = *(_DWORD *)(BugCheckParameter3 + 48);
  BugCheckParameter4 = a5;
  v12 = 0;
  v11 = v5;
  v13 = (unsigned __int64)(a4 + 4095) >> 12;
  v14 = a3 >> 12;
  v8 = guard_dispatch_icall_no_overrides(&v11, a2);
  if ( v8 < 0 )
  {
    v9 = guard_dispatch_icall_no_overrides(&v11, BugCheckParameter4);
    if ( v9 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v9, BugCheckParameter3, BugCheckParameter4);
  }
  return (unsigned int)v8;
}
