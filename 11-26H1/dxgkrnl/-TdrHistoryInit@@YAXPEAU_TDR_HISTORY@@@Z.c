/*
 * XREFs of ?TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z @ 0x1403D06A0
 * Callers:
 *     ?TdrInit@@YAXXZ @ 0x1401D9344 (-TdrInit@@YAXXZ.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall TdrHistoryInit(UUID *Uuid)
{
  memset(Uuid, 0, 0xA18uLL);
  if ( ExUuidCreate(Uuid) < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 649;
  }
  Uuid[1].Data1 = KeQueryTimeIncrement();
}
