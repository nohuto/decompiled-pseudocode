/*
 * XREFs of CmpTransSearchAddTrans @ 0x1408EC150
 * Callers:
 *     CmpTransInitializeTransaction @ 0x1408AC920 (CmpTransInitializeTransaction.c)
 *     CmQueryKey @ 0x1408C5660 (CmQueryKey.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpQueryKeySecurity @ 0x1408ED790 (CmpQueryKeySecurity.c)
 *     CmpTransSearchAddTransFromRm @ 0x140AE0F20 (CmpTransSearchAddTransFromRm.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     ExBlockOnAddressPushLock @ 0x14047EBC0 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     CmpTransInitializeTransaction @ 0x1408AC920 (CmpTransInitializeTransaction.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408AEE3C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransDereferenceTransaction @ 0x1408ECC08 (CmpTransDereferenceTransaction.c)
 *     CmpTransReferenceTransaction @ 0x1408EE304 (CmpTransReferenceTransaction.c)
 *     CmpSearchForTrans @ 0x140ABEAA4 (CmpSearchForTrans.c)
 *     CmpTransAllocateTrans @ 0x140AC3B1C (CmpTransAllocateTrans.c)
 *     CmpBindHiveToTrans @ 0x140AC3BE8 (CmpBindHiveToTrans.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpTransSearchAddTrans(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *Trans; // rsi
  int v7; // r12d
  int v12; // edi
  int v13; // edi
  int v14; // r14d
  __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v20; // al
  __int64 v21; // rdx
  _QWORD *v22; // rax
  signed __int32 v23[8]; // [rsp+0h] [rbp-58h] BYREF
  int v24; // [rsp+60h] [rbp+8h] BYREF

  Trans = 0LL;
  v7 = 0;
  if ( a1 )
  {
    v12 = CmpTransReferenceTransaction(a1);
    if ( v12 < 0 )
      return (unsigned int)v12;
  }
  v13 = a5;
  v14 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      LOCK_TRANSACTION_LIST();
      v15 = CmpSearchForTrans(a3, a1, a2);
      if ( v15 )
        break;
      if ( !v13 )
        goto LABEL_22;
LABEL_8:
      if ( Trans )
      {
        if ( !*(_QWORD *)(a3 + 80)
          || (CurrentThread = KeGetCurrentThread(),
              --CurrentThread->KernelApcDisable,
              v20 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a3 + 80) + 1640LL)),
              (v7 = v20) != 0) )
        {
          v18 = *(_QWORD **)(a3 + 24);
          if ( *v18 != a3 + 16 )
            goto LABEL_26;
          Trans[1] = v18;
          *Trans = a3 + 16;
          *v18 = Trans;
          *(_QWORD *)(a3 + 24) = Trans;
          ++*((_DWORD *)&WheapPfaLock.SwapListEntry + 2);
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegion();
          v14 = 0;
          v12 = CmpTransInitializeTransaction((__int64)Trans);
          if ( v12 >= 0 )
          {
            v16 = Trans;
            goto LABEL_11;
          }
          LOCK_TRANSACTION_LIST();
          v21 = *Trans;
          if ( *(_QWORD **)(*Trans + 8LL) != Trans || (v22 = (_QWORD *)Trans[1], (_QWORD *)*v22 != Trans) )
LABEL_26:
            __fastfail(3u);
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          --*((_DWORD *)&WheapPfaLock.SwapListEntry + 2);
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegion();
          _InterlockedOr(v23, 0);
          if ( CmpTransactionInitializingEvent )
            ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
        }
        else
        {
          v12 = -1073741431;
        }
LABEL_23:
        ExFreePoolWithTag(Trans, 0x72544D43u);
        goto LABEL_12;
      }
      if ( v15 )
      {
        CmpBindHiveToTrans(a4);
LABEL_11:
        v12 = 0;
        *a6 = v16;
        goto LABEL_12;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      Trans = (_QWORD *)CmpTransAllocateTrans(a1, a2, a3, a4);
      if ( !Trans )
      {
        v12 = -1073741670;
        goto LABEL_16;
      }
    }
    if ( a1 && (*(_DWORD *)(v15 + 48) & 7) != 0 )
      break;
    if ( (*(_DWORD *)(v15 + 48) & 8) == 0 )
      goto LABEL_8;
    if ( !v13 )
      break;
    v24 = *((_DWORD *)&WheapPfaLock.SwapListEntry + 2);
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    ExBlockOnAddressPushLock(&CmpTransactionInitializingEvent, (_BYTE *)&WheapPfaLock.SwapListEntry + 8, &v24, 4LL, 0LL);
  }
LABEL_22:
  v12 = -1072103422;
  if ( Trans )
    goto LABEL_23;
LABEL_12:
  if ( v7 )
  {
    ExReleaseRundownProtection_0(a4 + 205);
    KeLeaveCriticalRegion();
  }
  if ( v14 )
  {
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
  }
LABEL_16:
  if ( a1 )
    CmpTransDereferenceTransaction(a1);
  return (unsigned int)v12;
}
