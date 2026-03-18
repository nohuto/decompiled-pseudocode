/*
 * XREFs of OkayToCloseDesktop @ 0x140243F30
 * Callers:
 *     <none>
 * Callees:
 *     CheckHandleFlag @ 0x140186FF8 (CheckHandleFlag.c)
 */

__int64 __fastcall OkayToCloseDesktop(__int64 a1)
{
  unsigned int *v2; // rdi

  v2 = *(unsigned int **)(a1 + 24);
  if ( !*(_BYTE *)(a1 + 40) )
    return 0LL;
  if ( (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 16)) == -1 )
    return 3221225506LL;
  if ( (v2[12] & 0x10) == 0 )
    return 3221225473LL;
  if ( (unsigned int)CheckHandleFlag(*(PRKPROCESS *)(a1 + 16), *v2, *(_QWORD *)(a1 + 32), 2LL) )
    return 2147483665LL;
  return (unsigned int)CheckHandleFlag(*(PRKPROCESS *)(a1 + 16), *v2, *(_QWORD *)(a1 + 32), 1LL) != 0 ? 0x80000011 : 0;
}
