/*
 * XREFs of CmpRollbackTransactionArray @ 0x1408D0204
 * Callers:
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmpParseKey @ 0x1408CB3F0 (CmpParseKey.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     TmRollbackEnlistment @ 0x1405347D0 (TmRollbackEnlistment.c)
 *     CmpRollbackLightWeightTransaction @ 0x1408AE484 (CmpRollbackLightWeightTransaction.c)
 *     CmpRetryBackOff @ 0x140B3C68C (CmpRetryBackOff.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpRollbackTransactionArray(unsigned int a1, PKENLISTMENT *a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  PKENLISTMENT *v8; // r14
  __int64 v9; // rbp
  PKENLISTMENT v10; // rdi
  int v11; // eax
  int v12; // esi

  v4 = 0;
  if ( a1 )
  {
    v8 = a2;
    v9 = a1;
    do
    {
      if ( ((unsigned __int8)*v8 & 1) != 0 )
      {
        v10 = (PKENLISTMENT)((unsigned __int64)*v8 & 0xFFFFFFFFFFFFFFFEuLL);
        v11 = CmpRollbackLightWeightTransaction((__int64)v10);
      }
      else
      {
        v11 = TmRollbackEnlistment(*v8, 0LL);
        v10 = *v8;
      }
      v12 = v11;
      ObfDereferenceObject(v10);
      if ( v12 < 0 && v4 >= 0 && (((v12 + 1072103405) & 0xFFFFFFFC) != 0 || v12 == -1072103404) )
        v4 = v12;
      ++v8;
      --v9;
    }
    while ( v9 );
    ExFreePoolWithTag(a2, 0x36344D43u);
  }
  CmpRetryBackOff(a4);
  return (unsigned int)v4;
}
