/*
 * XREFs of MiRevertRelocations @ 0x14099F750
 * Callers:
 *     MiValidateSectionRevertRelocations @ 0x14099E24C (MiValidateSectionRevertRelocations.c)
 * Callees:
 *     MiPerformFixups @ 0x14099FD30 (MiPerformFixups.c)
 */

unsigned __int64 __fastcall MiRevertRelocations(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v3; // rdi
  unsigned __int64 result; // rax
  unsigned int v5; // ebx
  int v9; // esi

  v3 = a2 + 128;
  result = *(_QWORD *)(a2 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = 0;
  while ( v3 )
  {
    v9 = a3 - v5;
    if ( *(_DWORD *)(v3 + 44) - *(_DWORD *)(v3 + 52) <= a3 - v5 )
      v9 = *(_DWORD *)(v3 + 44) - *(_DWORD *)(v3 + 52);
    while ( v9 )
    {
      result = MiPerformFixups(a1 + (v5++ << 12), a2, 0LL, 41);
      if ( v5 >= a3 )
        return result;
      --v9;
    }
    result = *(unsigned int *)(v3 + 52);
    v5 += result;
    if ( v5 >= a3 )
      break;
    v3 = *(_QWORD *)(v3 + 16);
  }
  return result;
}
