/*
 * XREFs of HalpIommuInterruptRoutine @ 0x14058E740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpIommuInterruptRoutine(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // rbx
  unsigned int v3; // edi
  char v4; // si
  ULONG_PTR *v5; // rcx
  int v6; // eax

  v2 = (ULONG_PTR *)HalpIommuList;
  v3 = 0;
  v4 = 0;
  while ( v2 != &HalpIommuList )
  {
    v5 = v2;
    v2 = (ULONG_PTR *)*v2;
    v6 = *((_DWORD *)v5 + 116);
    if ( (v6 & 0x20) != 0 || (v6 & 0x180) != 0 )
    {
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v5[2], a2) )
      {
        v4 = 1;
        guard_dispatch_icall_no_overrides(v3, a2);
      }
    }
    ++v3;
  }
  return v4;
}
