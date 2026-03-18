/*
 * XREFs of ComputeEventEntryHash @ 0x140057670
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1400572EC (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeEventEntryHash(char a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v3; // r10d
  unsigned __int64 i; // rdx
  int v6; // eax
  unsigned __int8 v7; // cl
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 j; // r9
  int v12; // eax

  v3 = 0;
  for ( i = 0LL; i < 8; ++i )
  {
    v6 = *(unsigned __int8 *)(a3 + i + 16);
    v3 = (1025 * (v3 + v6)) ^ ((1025 * (v3 + v6)) >> 6);
  }
  v7 = a1 + 2;
  if ( v7 < a2 )
  {
    v9 = a3 + 16LL * v7;
    v10 = (unsigned __int8)(a2 - v7);
    do
    {
      for ( j = 0LL; j < *(unsigned int *)(v9 + 8); v3 = (1025 * (v3 + v12)) ^ ((1025 * (v3 + v12)) >> 6) )
        v12 = *(unsigned __int8 *)(*(_QWORD *)v9 + j++);
      v9 += 16LL;
      --v10;
    }
    while ( v10 );
  }
  return 32769 * ((9 * v3) ^ ((9 * v3) >> 11));
}
