/*
 * XREFs of ComputeEventEntryHash @ 0x14000B96C
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14000B5E0 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeEventEntryHash(char a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v3; // r10d
  unsigned __int64 i; // rdx
  int v6; // eax
  unsigned __int8 v7; // cl
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 j; // r9
  int v11; // eax

  v3 = 0;
  for ( i = 0LL; i < 8; ++i )
  {
    v6 = *(unsigned __int8 *)(a3 + i + 16);
    v3 = (1025 * (v3 + v6)) ^ ((1025 * (v3 + v6)) >> 6);
  }
  v7 = a1 + 2;
  if ( v7 < a2 )
  {
    v8 = a3 + 16LL * v7;
    v9 = (unsigned __int8)(a2 - v7);
    do
    {
      for ( j = 0LL; j < *(unsigned int *)(v8 + 8); v3 = (1025 * (v3 + v11)) ^ ((1025 * (v3 + v11)) >> 6) )
        v11 = *(unsigned __int8 *)(*(_QWORD *)v8 + j++);
      v8 += 16LL;
      --v9;
    }
    while ( v9 );
  }
  return 32769 * ((9 * v3) ^ ((9 * v3) >> 11));
}
