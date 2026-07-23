/*
 * XREFs of KscpCopyToUser @ 0x140C64C20
 * Callers:
 *     KasanUmaCopyToUser @ 0x140723DA0 (KasanUmaCopyToUser.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpCopyToUser(unsigned __int64 a1, __int64 a2)
{
  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  return KscpMemcpy(a1, a2);
}
