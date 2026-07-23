/*
 * XREFs of IommupHvMapDeviceLogical @ 0x1404750C0
 * Callers:
 *     IommuMapLogicalRangeEx @ 0x140474E60 (IommuMapLogicalRangeEx.c)
 *     HalpIommuDomainMapLogical @ 0x140475068 (HalpIommuDomainMapLogical.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvMapDeviceLogical(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        ULONG_PTR a5)
{
  int v7; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  int v9; // ebp
  int v11; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]

  if ( *(_BYTE *)(BugCheckParameter3 + 52) )
    return 3221225485LL;
  v7 = *(_DWORD *)(BugCheckParameter3 + 48);
  BugCheckParameter4 = a5;
  v13 = 0;
  v12 = v7;
  v9 = guard_dispatch_icall_no_overrides(&v12, a2);
  if ( v9 < 0 )
  {
    v11 = guard_dispatch_icall_no_overrides(&v12, BugCheckParameter4);
    if ( v11 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v11, BugCheckParameter3, BugCheckParameter4);
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}
