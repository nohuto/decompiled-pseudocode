/*
 * XREFs of MiCopyToUserVa @ 0x1404A2F88
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1409C8560 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiLockPageAndSetDirty @ 0x14031A7E4 (MiLockPageAndSetDirty.c)
 *     MiCopyOnWrite @ 0x14036AD38 (MiCopyOnWrite.c)
 *     MiLocateCloneAddress @ 0x14036BA4C (MiLocateCloneAddress.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A2E0C (MiCopyOnWriteCheckConditions.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     MiChargeFullProcessCommitment @ 0x1409C7944 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140A82B94 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(unsigned __int64 a1, __int64 a2, const void *a3, size_t a4)
{
  _KPROCESS *Process; // r15
  ULONG_PTR v6; // r13
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ebx
  KIRQL v11; // al
  KIRQL v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // r9
  ULONG_PTR v15; // r13
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // r14d
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  _QWORD *CloneAddress; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // [rsp+34h] [rbp-64h]
  int v29; // [rsp+38h] [rbp-60h]
  _QWORD *v30; // [rsp+40h] [rbp-58h]
  _QWORD *v31; // [rsp+48h] [rbp-50h]
  __int64 v32[9]; // [rsp+50h] [rbp-48h] BYREF

  v32[0] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v32[1] = (__int64)Process;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = (_QWORD *)v6;
  v7 = 0;
  RtlReadUCharFromUser(a1);
  v10 = (*(_DWORD *)(a2 + 48) >> 10) & 0x7F;
LABEL_2:
  v11 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v8, v9);
LABEL_3:
  v12 = v11;
  while ( 1 )
  {
    v28 = v7;
    v13 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v6, v10, v12, 0);
    if ( (*(_QWORD *)v6 & 1) == 0 )
    {
      MiUnlockPageTableInternal(
        (__int64)&Process[2].ReadyListHead.Blink,
        ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      LOBYTE(v20) = v12;
      MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v20);
      RtlReadUCharFromUser(a1);
      goto LABEL_2;
    }
    v14 = (*(_QWORD *)v6 >> 12) & 0xFFFFFFFFFFLL;
    v15 = 48 * v14 - 0x220000000000LL;
    if ( *(__int64 *)(v15 + 40) >= 0 )
      break;
    v30 = 0LL;
    if ( *(__int64 *)(v15 + 8) <= 0 || (*(_QWORD *)(v15 + 40) & 0x10000000000LL) != 0 )
    {
      if ( Process[1].IdealProcessorAssignmentBlock )
      {
        CloneAddress = MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL);
        v30 = CloneAddress;
        if ( CloneAddress )
        {
          if ( Process[2].ActiveProcessors[4].StaticBitmap[16] <= CloneAddress[12] )
          {
            v30 = 0LL;
          }
          else if ( !v7 )
          {
            MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, v13);
            LOBYTE(v25) = v12;
            MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v25);
            v18 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v18 < 0 )
              goto LABEL_9;
            v7 = 1;
            v11 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v26, v27);
            v6 = (ULONG_PTR)v31;
            goto LABEL_3;
          }
        }
      }
    }
    v6 = (ULONG_PTR)v31;
    v29 = MiCopyOnWrite(a1, (unsigned __int64)v31, -1LL, 0, v32);
    if ( v29 >= 0 )
    {
      v14 = (*v31 >> 12) & 0xFFFFFFFFFFLL;
      v15 = 48 * v14 - 0x220000000000LL;
      v7 = 0;
      if ( !v30 )
        v7 = v28;
      break;
    }
    MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, v13);
    LOBYTE(v21) = v12;
    MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v21);
    MiCopyOnWriteCheckConditions((__int64)&Process[2].ReadyListHead.Blink, v29, v32[0]);
    MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v22, v23);
  }
  v16 = MiMapPageInHyperSpaceWorker(v14, 0LL, 0x80000000);
  memmove((void *)(v16 + (a1 & 0xFFF)), a3, a4);
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  MiLockPageAndSetDirty(v15, 1);
  if ( v13 )
    MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, v13);
  LOBYTE(v17) = v12;
  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v17);
  v18 = 0;
LABEL_9:
  if ( v7 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v18;
}
