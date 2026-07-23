/*
 * XREFs of HalpIommuProcessReservedDomains @ 0x140BF1D4C
 * Callers:
 *     HalpIommuInitializeAll @ 0x140C1378C (HalpIommuInitializeAll.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuConstructReservedPageTable @ 0x140BF1C40 (HalpIommuConstructReservedPageTable.c)
 */

__int64 __fastcall HalpIommuProcessReservedDomains(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  int v5; // edi
  int v6; // edi
  __int64 v7; // rbp
  __int64 result; // rax

  v2 = *(_DWORD **)(a2 + 528);
  if ( !v2 )
    return 0LL;
  v5 = *(_DWORD *)(a2 + 464);
  if ( (v5 & 0x100) == 0 )
    return 0LL;
  v6 = (unsigned __int16)v5 >> 13;
  v7 = 0LL;
  if ( !*v2 )
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 16), **(unsigned int **)(a2 + 528));
  while ( 1 )
  {
    result = HalpIommuConstructReservedPageTable(a1, *(PHYSICAL_ADDRESS **)&v2[2 * v7 + 2], v6 + 1);
    if ( (int)result < 0 )
      break;
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *v2 )
      return guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 16), **(unsigned int **)(a2 + 528));
  }
  return result;
}
