/*
 * XREFs of CmpTransIsTransActive @ 0x1405131BC
 * Callers:
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 * Callees:
 *     TmIsTransactionActive @ 0x1405345F0 (TmIsTransactionActive.c)
 *     CmpTransGetTransPtr @ 0x140AA3070 (CmpTransGetTransPtr.c)
 */

__int64 __fastcall CmpTransIsTransActive(char a1)
{
  struct _KTRANSACTION *TransPtr; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)CmpTransGetTransPtr() == 0;
  TransPtr = (struct _KTRANSACTION *)CmpTransGetTransPtr();
  return TmIsTransactionActive(TransPtr);
}
