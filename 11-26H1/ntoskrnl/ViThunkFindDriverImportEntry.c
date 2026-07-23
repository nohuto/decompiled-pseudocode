/*
 * XREFs of ViThunkFindDriverImportEntry @ 0x140C3B950
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140C3B260 (VfThunkApplyDriverAddedThunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViThunkFindDriverImportEntry(__int64 **a1, __int64 a2)
{
  __int64 *v2; // rax
  _QWORD *v3; // r8
  unsigned int i; // r9d

  v2 = *a1;
LABEL_2:
  if ( v2 == (__int64 *)a1 )
    return 0LL;
  v3 = v2 + 4;
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)v2 + 6) )
    {
      v2 = (__int64 *)*v2;
      goto LABEL_2;
    }
    if ( a2 == *v3 )
      break;
    v3 += 2;
  }
  return v3[1];
}
