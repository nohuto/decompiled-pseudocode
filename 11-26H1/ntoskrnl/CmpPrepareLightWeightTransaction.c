/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x1408AE99C
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1408AE64C (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpProcessLightWeightUOW @ 0x1408AEB00 (CmpProcessLightWeightUOW.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408AEE3C (LOCK_TRANSACTION_LIST.c)
 *     CmpCleanupLightWeightPrepare @ 0x140AEB104 (CmpCleanupLightWeightPrepare.c)
 *     CmListGetNextElement @ 0x140C58A70 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpPrepareLightWeightTransaction(__int64 a1, __int64 a2)
{
  __int64 NextElement; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // edi
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10[2]; // [rsp+38h] [rbp-40h] BYREF

  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 1) != 0 && (qword_140E09F00 & 1) == qword_140E09F00 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)qword_1400567D0, 0LL, 0LL, 2u, v10);
  if ( a1 )
  {
    LOCK_TRANSACTION_LIST();
    *(_DWORD *)(a1 + 48) |= 1u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    v9 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v9, 0LL);
      if ( !NextElement )
        break;
      v7 = CmpProcessLightWeightUOW(NextElement, 0LL, v5, a2);
      if ( v7 < 0 )
      {
        CmpCleanupLightWeightPrepare(a1, v6, a2);
        goto LABEL_8;
      }
    }
  }
  v7 = 0;
LABEL_8:
  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 1) != 0 && (qword_140E09F00 & 1) == qword_140E09F00 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)&dword_14005675C, 0LL, 0LL, 2u, v10);
  return (unsigned int)v7;
}
