/*
 * XREFs of BiRemoveEntryFromBootOrder @ 0x14089A594
 * Callers:
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x14089A4FC (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiRemoveEntryFromBootOrder(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  unsigned int v6; // r10d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  v3 = *a2;
  v4 = 0LL;
  if ( *a2 )
  {
    while ( *(_DWORD *)(a1 + 4 * v4) != a3 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( (_DWORD)v4 == v3 )
      return result;
  }
  v6 = v3 - 1;
  *a2 = v6;
  if ( (unsigned int)v4 < v6 )
  {
    do
    {
      v7 = (unsigned int)(v4 + 1);
      v8 = (unsigned int)v4;
      result = *(unsigned int *)(a1 + 4 * v7);
      LODWORD(v4) = v4 + 1;
      *(_DWORD *)(a1 + 4 * v8) = result;
    }
    while ( (unsigned int)v7 < v6 );
  }
  return result;
}
