/*
 * XREFs of CmpTransSearchAddLightWeightTrans @ 0x1408ED0C4
 * Callers:
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408AEE3C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransReferenceTransaction @ 0x1408EE304 (CmpTransReferenceTransaction.c)
 *     CmpTransAllocateTrans @ 0x140AC3B1C (CmpTransAllocateTrans.c)
 *     CmpBindHiveToTrans @ 0x140AC3BE8 (CmpBindHiveToTrans.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpTransSearchAddLightWeightTrans(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v8; // ebp
  unsigned int v9; // edi
  __int64 v10; // rax
  signed __int64 Trans; // rax
  _QWORD *v13; // rsi
  _QWORD *v14; // rax

  v8 = 0;
  v9 = CmpTransReferenceTransaction(a1);
  if ( (v9 & 0x80000000) != 0 )
    return v9;
  v10 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 16);
  if ( v10 )
  {
    *a4 = v10;
    v9 = 0;
    goto LABEL_4;
  }
  if ( !a3 )
  {
    v9 = -1072103422;
    goto LABEL_4;
  }
  Trans = CmpTransAllocateTrans(a1, 0LL, 0LL, a2);
  v13 = (_QWORD *)Trans;
  if ( !Trans )
  {
    v9 = -1073741670;
LABEL_4:
    if ( a1 )
      ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
    if ( !v8 )
      return v9;
LABEL_19:
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    return v9;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 16), Trans, 0LL) )
  {
    v8 = 1;
    LOCK_TRANSACTION_LIST();
    v9 = (unsigned int)CmpBindHiveToTrans(a2) != 0 ? -1072103421 : -1072103423;
    ExFreePoolWithTag(v13, 0x72544D43u);
    goto LABEL_4;
  }
  LOCK_TRANSACTION_LIST();
  if ( (v13[6] & 7) != 0 )
  {
    v9 = -1072103422;
    goto LABEL_19;
  }
  *((_DWORD *)v13 + 12) = 128;
  v14 = (_QWORD *)qword_140EF9AE8;
  if ( *(__int64 **)qword_140EF9AE8 != &CmpLightTransactionList )
    __fastfail(3u);
  *v13 = &CmpLightTransactionList;
  v13[1] = v14;
  *v14 = v13;
  qword_140EF9AE8 = (__int64)v13;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  v9 = 0;
  *a4 = v13;
  return v9;
}
