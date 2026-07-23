/*
 * XREFs of HalpIommuFreeRemappingTableEntry @ 0x14058A3A8
 * Callers:
 *     HalpIrtFreeIndex @ 0x1407875AC (HalpIrtFreeIndex.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuFreeRemappingTableEntry(unsigned int a1)
{
  ULONG_PTR *v1; // rbx
  unsigned int v3; // r8d
  ULONG_PTR *v4; // rcx

  v1 = (ULONG_PTR *)HalpIommuList;
  v3 = 0;
  while ( v1 != &HalpIommuList )
  {
    v4 = v1;
    v1 = (ULONG_PTR *)*v1;
    if ( (v4[58] & 0x40) != 0 )
    {
      if ( v4[21] )
      {
        v3 = guard_dispatch_icall_no_overrides(v4[2], a1);
        if ( v3 != -1073741594 )
          break;
      }
    }
  }
  return v3;
}
