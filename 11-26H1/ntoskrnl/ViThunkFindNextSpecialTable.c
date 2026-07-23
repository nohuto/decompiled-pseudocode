/*
 * XREFs of ViThunkFindNextSpecialTable @ 0x140C3B98C
 * Callers:
 *     VfThunkAddSpecialDriverThunks @ 0x140C3B11C (VfThunkAddSpecialDriverThunks.c)
 *     ViThunkFindAllSpecialTables @ 0x140C3B7DC (ViThunkFindAllSpecialTables.c)
 * Callees:
 *     <none>
 */

PVOID *__fastcall ViThunkFindNextSpecialTable(__int64 a1, unsigned int a2, PVOID *a3)
{
  PVOID *v3; // r9
  __int64 i; // rdx

  v3 = 0LL;
  if ( !a3 )
    a3 = (PVOID *)ViVerifierDriverAddedSpecialThunkListHead;
  while ( a3 != &ViVerifierDriverAddedSpecialThunkListHead )
  {
    for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      if ( *(PVOID *)(a1 + 8 * i) == a3[2] )
      {
        v3 = a3;
        if ( a3 )
          return v3;
        break;
      }
    }
    a3 = (PVOID *)*a3;
  }
  return v3;
}
