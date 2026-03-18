/*
 * XREFs of OkayToCloseWindowStation @ 0x140186F70
 * Callers:
 *     <none>
 * Callees:
 *     CheckHandleFlag @ 0x140186FF8 (CheckHandleFlag.c)
 */

__int64 __fastcall OkayToCloseWindowStation(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 40) )
    return 0LL;
  if ( (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 16)) == -1 )
    return 3221225506LL;
  if ( (unsigned int)CheckHandleFlag(*(PRKPROCESS *)(a1 + 16)) )
    return 2147483665LL;
  return (unsigned int)CheckHandleFlag(*(PRKPROCESS *)(a1 + 16)) != 0 ? 0x80000011 : 0;
}
