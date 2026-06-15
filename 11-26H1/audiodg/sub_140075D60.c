/*
 * XREFs of sub_140075D60 @ 0x140075D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14007BC30 @ 0x14007BC30 (sub_14007BC30.c)
 */

__int64 __fastcall sub_140075D60(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)a1 )
    return sub_14007BC30((LPCRITICAL_SECTION)(a1 + 72), (PSRWLOCK)(a1 + 32));
  return result;
}
