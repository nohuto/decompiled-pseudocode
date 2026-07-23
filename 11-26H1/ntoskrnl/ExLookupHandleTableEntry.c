/*
 * XREFs of ExLookupHandleTableEntry @ 0x14043ED20
 * Callers:
 *     PspThreadFromTicket @ 0x140A227F0 (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A4E1B0 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A6A8B0 (NtAlertThreadByThreadId.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExLookupHandleTableEntry(__int64 a1, __int16 a2)
{
  if ( (a2 & 0x3FC) != 0 )
    return ExpLookupHandleTableEntry();
  else
    return 0LL;
}
