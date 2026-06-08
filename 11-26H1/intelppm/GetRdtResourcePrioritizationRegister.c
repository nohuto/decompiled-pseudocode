/*
 * XREFs of GetRdtResourcePrioritizationRegister @ 0x140006B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall GetRdtResourcePrioritizationRegister(__int64 a1, unsigned int **a2)
{
  char v2; // r8
  unsigned int *v4; // r9
  unsigned int i; // ecx
  __int64 v6; // rdx
  unsigned int *v7; // rax

  v2 = 0;
  *a2 = 0LL;
  v4 = *(unsigned int **)(a1 + 536);
  if ( v4 && *v4 )
  {
    for ( i = 0; i < *v4; ++i )
    {
      v6 = 26LL * i;
      v7 = &v4[v6 + 2];
      if ( *((_BYTE *)v7 + 80) == 127 && *(_QWORD *)&v4[v6 + 23] == 3215LL && BYTE2(v4[v6 + 22]) == 32 )
      {
        *a2 = v7;
        return 1;
      }
    }
  }
  return v2;
}
