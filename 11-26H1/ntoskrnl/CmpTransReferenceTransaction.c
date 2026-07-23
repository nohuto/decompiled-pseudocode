/*
 * XREFs of CmpTransReferenceTransaction @ 0x1408F48C4
 * Callers:
 *     CmpTransInitializeTransaction @ 0x1408B2D64 (CmpTransInitializeTransaction.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     CmpTransSearchAddTrans @ 0x1408F2710 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408F3684 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpQueryKeySecurity @ 0x1408F3D50 (CmpQueryKeySecurity.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     TmIsTransactionActive @ 0x140536A70 (TmIsTransactionActive.c)
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
