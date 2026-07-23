/*
 * XREFs of CmpTransIsTransActive @ 0x14050CC2C
 * Callers:
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 * Callees:
 *     TmIsTransactionActive @ 0x140536A70 (TmIsTransactionActive.c)
 *     CmpTransGetTransPtr @ 0x140AA4B40 (CmpTransGetTransPtr.c)
 */

__int64 __fastcall CmpTransIsTransActive(char a1)
{
  struct _KTRANSACTION *TransPtr; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)CmpTransGetTransPtr() == 0;
  TransPtr = (struct _KTRANSACTION *)CmpTransGetTransPtr();
  return TmIsTransactionActive(TransPtr);
}
