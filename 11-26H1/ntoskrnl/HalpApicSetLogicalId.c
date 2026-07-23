/*
 * XREFs of HalpApicSetLogicalId @ 0x1405A46D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicSetLogicalId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx

  v2 = 0;
  if ( HalpApicX2Mode )
    return (unsigned int)-1073741637;
  switch ( *(_DWORD *)a2 )
  {
    case 4:
      guard_dispatch_icall_no_overrides(208LL, 0LL);
      if ( !HalpApicClusterModeEnabled )
        return v2;
      v9 = 0xFFFFFFFLL;
      v8 = 224LL;
LABEL_13:
      guard_dispatch_icall_no_overrides(v8, v9);
      return v2;
    case 5:
      HalpApicClusterModeEnabled = 0;
      guard_dispatch_icall_no_overrides(224LL, 0xFFFFFFFFLL);
      v8 = 208LL;
      v9 = (unsigned int)(*(_DWORD *)(a2 + 8) << 24);
      goto LABEL_13;
    case 6:
      HalpApicClusterModeEnabled = 1;
      guard_dispatch_icall_no_overrides(224LL, 0xFFFFFFFLL);
      if ( (unsigned int)guard_dispatch_icall_no_overrides(224LL, v4) == 0xFFFFFFF )
      {
        v6 = (*(unsigned __int16 *)(a2 + 12) | (unsigned __int16)(16 * *(_WORD *)(a2 + 8))) << 24;
        guard_dispatch_icall_no_overrides(208LL, v6);
        if ( (unsigned int)guard_dispatch_icall_no_overrides(208LL, v7) == v6 )
          return v2;
        guard_dispatch_icall_no_overrides(208LL, 0LL);
      }
      return 3221225659LL;
  }
  return (unsigned int)-1073741637;
}
