/*
 * XREFs of KscpCopyFromUser @ 0x140C5EBC0
 * Callers:
 *     KasanUmaCopyFromUser @ 0x14071EF20 (KasanUmaCopyFromUser.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpCopyFromUser(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x7FFFFFFF0000LL )
    a2 = 0x7FFFFFFF0000LL;
  return KscpMemcpy(a1, a2);
}
