/*
 * XREFs of HalpIvtFindReservedDomain @ 0x1405B1F6C
 * Callers:
 *     IvtGetBlockedDomain @ 0x1404F9C14 (IvtGetBlockedDomain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpIvtFindReservedDomain(__int64 a1, int a2)
{
  unsigned int *v2; // r10
  __int64 v3; // r9
  unsigned int i; // r8d
  __int64 v5; // rax

  v2 = *(unsigned int **)(a1 + 352);
  v3 = 0LL;
  for ( i = 0; i < *v2; ++i )
  {
    v5 = *(_QWORD *)&v2[4 * i + 4];
    if ( **(_DWORD **)v5 == 1 && *(unsigned __int16 *)(*(_QWORD *)v5 + 12LL) == a2 )
      return (__int64)&v2[4 * i + 2];
  }
  return v3;
}
