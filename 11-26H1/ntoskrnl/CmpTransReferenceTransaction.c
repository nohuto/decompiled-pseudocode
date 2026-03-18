/*
 * XREFs of CmpTransReferenceTransaction @ 0x1408EE304
 * Callers:
 *     CmpTransInitializeTransaction @ 0x1408AC920 (CmpTransInitializeTransaction.c)
 *     CmQueryKey @ 0x1408C5660 (CmQueryKey.c)
 *     CmpTransSearchAddTrans @ 0x1408EC150 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408ED0C4 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpQueryKeySecurity @ 0x1408ED790 (CmpQueryKeySecurity.c)
 *     CmpCreateKeyBody @ 0x1408FBCB0 (CmpCreateKeyBody.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     TmIsTransactionActive @ 0x1405345F0 (TmIsTransactionActive.c)
 */

__int64 __fastcall CmpTransReferenceTransaction(__int64 a1)
{
  unsigned int v1; // ebx
  struct _KTRANSACTION *v2; // rdi

  v1 = 0;
  v2 = (struct _KTRANSACTION *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1 & 1) == 0 )
  {
    PsReferenceSiloContext((void *)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
    if ( TmIsTransactionActive(v2) )
      return v1;
    ObfDereferenceObject(v2);
    return (unsigned int)-1072103421;
  }
  if ( v2->OutcomeEvent.Header.LockNV )
    return (unsigned int)-1072103421;
  PsReferenceSiloContext((void *)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
  return v1;
}
