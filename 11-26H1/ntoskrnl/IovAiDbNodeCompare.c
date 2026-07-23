/*
 * XREFs of IovAiDbNodeCompare @ 0x140645B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IovAiDbNodeCompare(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  if ( *a3 <= *a2 )
    return 2 - (unsigned int)(*a3 < *a2);
  else
    return 0LL;
}
