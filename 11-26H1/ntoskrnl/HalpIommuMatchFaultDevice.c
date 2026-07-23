/*
 * XREFs of HalpIommuMatchFaultDevice @ 0x1405A2A58
 * Callers:
 *     HalpIommuReportIommuFault @ 0x1405A2AB0 (HalpIommuReportIommuFault.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuMatchFaultDevice(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  v4 = 0;
  if ( !*(_DWORD *)a1 )
    return a2 == *(_QWORD *)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 12) | (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 8) << 16);
  while ( v4 < *a4 )
  {
    v6 = 4LL * v4;
    v7 = *(_QWORD *)&a4[v6 + 2];
    if ( v5 >= v7 && v5 < *(_QWORD *)&a4[v6 + 4] + v7 )
      return 1;
    ++v4;
  }
  return 0;
}
