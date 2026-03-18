/*
 * XREFs of ExLookupHandleTableEntry @ 0x140446220
 * Callers:
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A33250 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A5D8F0 (NtAlertThreadByThreadId.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExLookupHandleTableEntry(__int64 a1, __int16 a2)
{
  if ( (a2 & 0x3FC) != 0 )
    return ExpLookupHandleTableEntry();
  else
    return 0LL;
}
