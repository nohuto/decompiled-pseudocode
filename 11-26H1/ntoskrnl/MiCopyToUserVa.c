/*
 * XREFs of MiCopyToUserVa @ 0x14049C9A8
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140999540 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiLockPageAndSetDirty @ 0x14031C814 (MiLockPageAndSetDirty.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
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
  _QWORD *MmInternal; // r8
  __int64 v18; // rdx
  int v19; // r14d
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  _QWORD *CloneAddress; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // [rsp+34h] [rbp-64h]
  int v30; // [rsp+38h] [rbp-60h]
  _QWORD *v31; // [rsp+40h] [rbp-58h]
  _QWORD *v32; // [rsp+48h] [rbp-50h]
  __int64 v33[9]; // [rsp+50h] [rbp-48h] BYREF

  v33[0] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v33[1] = (__int64)Process;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v32 = (_QWORD *)v6;
  v7 = 0;
  RtlReadUCharFromUser(a1);
  v10 = (*(_DWORD *)(a2 + 48) >> 10) & 0x7F;
LABEL_2:
  v11 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v8, v9);
LABEL_3:
  v12 = v11;
  while ( 1 )
  {
    v29 = v7;
    v13 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v6, v10, v12, 0);
    if ( (*(_QWORD *)v6 & 1) == 0 )
    {
      MiUnlockPageTableInternal(
        (__int64)&Process[2].ReadyListHead.Blink,
        ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      LOBYTE(v21) = v12;
      MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v21);
      RtlReadUCharFromUser(a1);
      goto LABEL_2;
    }
    v14 = (*(_QWORD *)v6 >> 12) & 0xFFFFFFFFFFLL;
    v15 = 48 * v14 - 0x220000000000LL;
    if ( *(__int64 *)(v15 + 40) >= 0 )
      break;
    v31 = 0LL;
    if ( *(__int64 *)(v15 + 8) <= 0 || (*(_QWORD *)(v15 + 40) & 0x10000000000LL) != 0 )
    {
      if ( Process[1].IdealProcessorAssignmentBlock )
      {
        CloneAddress = MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL);
        v31 = CloneAddress;
        if ( CloneAddress )
        {
          if ( Process[2].ActiveProcessors[4].StaticBitmap[16] <= CloneAddress[12] )
          {
            v31 = 0LL;
          }
          else if ( !v7 )
          {
            MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, v13);
            LOBYTE(v26) = v12;
            MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v26);
            v19 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v19 < 0 )
              goto LABEL_9;
            v7 = 1;
            v11 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v27, v28);
            v6 = (ULONG_PTR)v32;
            goto LABEL_3;
          }
        }
      }
    }
    v6 = (ULONG_PTR)v32;
    v30 = MiCopyOnWrite(a1, (unsigned __int64)v32, -1LL, 0, v33);
    if ( v30 >= 0 )
    {
      v14 = (*v32 >> 12) & 0xFFFFFFFFFFLL;
      v15 = 48 * v14 - 0x220000000000LL;
      v7 = 0;
      if ( !v31 )
        v7 = v29;
      break;
    }
    MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, v13);
    LOBYTE(v22) = v12;
    MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v22);
    MiCopyOnWriteCheckConditions((__int64)&Process[2].ReadyListHead.Blink, v30, v33[0]);
    MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v23, v24);
  }
  v16 = MiMapPageInHyperSpaceWorker(v14, 0LL, 0x80000000);
  memmove((void *)(v16 + (a1 & 0xFFF)), a3, a4);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  *MmInternal = 0LL;
  *(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  MiLockPageAndSetDirty(v15, 1, (__int64)MmInternal);
  if ( v13 )
    MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, v13);
  LOBYTE(v18) = v12;
  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v18);
  v19 = 0;
LABEL_9:
  if ( v7 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v19;
}
