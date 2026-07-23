/*
 * XREFs of VfGetHookAddressForOriginal @ 0x140C2E3EC
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1407C0BE8 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     <none>
 */

char *__fastcall VfGetHookAddressForOriginal(__int64 a1)
{
  char **v2; // rax
  __int64 v3; // rdx
  char *v4; // r8
  __int64 v5; // r10
  int v6; // r9d
  int v7; // ecx

  v2 = &VfRegularThunks;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    v5 = a1 - (_QWORD)v4;
    do
    {
      v6 = (unsigned __int8)v4[v5];
      v7 = (unsigned __int8)*v4 - v6;
      if ( v7 )
        break;
      ++v4;
    }
    while ( v6 );
    if ( !v7 )
      return v2[1];
    v2 += 7;
  }
  return (char *)v3;
}
