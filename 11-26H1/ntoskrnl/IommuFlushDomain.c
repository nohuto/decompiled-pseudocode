/*
 * XREFs of IommuFlushDomain @ 0x1405A18D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuFlushDomain(__int64 a1, __int64 a2)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( !HalpHvIommu )
    return 3221225474LL;
  LOBYTE(a2) = *(_BYTE *)(a1 + 52);
  if ( !(_BYTE)a2 )
    return 3221225659LL;
  v3 = *(_DWORD *)(a1 + 48);
  v4 = (unsigned __int8)a2;
  return guard_dispatch_icall_no_overrides(&v3, a2);
}
