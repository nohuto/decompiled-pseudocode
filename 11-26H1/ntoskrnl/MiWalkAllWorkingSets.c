/*
 * XREFs of MiWalkAllWorkingSets @ 0x1402A8780
 * Callers:
 *     MiAgingThread @ 0x1402A84E0 (MiAgingThread.c)
 *     MiThreadFaultClusterAgingThread @ 0x1402A8AF0 (MiThreadFaultClusterAgingThread.c)
 *     MiTrimNoStealPagesFromWorkingSets @ 0x140533854 (MiTrimNoStealPagesFromWorkingSets.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x140533D4C (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x1406FC690 (MiEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1406FCC28 (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiLogPartitionState @ 0x1402A5678 (MiLogPartitionState.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiRemoveListSentinel @ 0x1402EE518 (MiRemoveListSentinel.c)
 *     MiAttachThreadDone @ 0x140311390 (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     MiCaptureTargetedWorkingSetAccessBits @ 0x1403C3BE8 (MiCaptureTargetedWorkingSetAccessBits.c)
 *     MiTrimWorkingSet @ 0x1403C437C (MiTrimWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x1403C7C08 (MiEmptyTargetedWorkingSet.c)
 *     MiInsertListSentinel @ 0x140445440 (MiInsertListSentinel.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiAgeThreadFaultClusterContexts @ 0x140467600 (MiAgeThreadFaultClusterContexts.c)
 *     MiAttachWorkingSet @ 0x14046ADD4 (MiAttachWorkingSet.c)
 *     MiAgeTargetedWorkingSet @ 0x1404704B0 (MiAgeTargetedWorkingSet.c)
 *     MiLogProcessWorkingSetsStart @ 0x1404DAE84 (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x14053095C (MiLogProcessWorkingSetsStop.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiWalkAllWorkingSets(__int64 a1, int *a2)
{
  int v2; // eax
  int v3; // ebx
  __int64 v6; // rcx
  unsigned int v7; // r14d
  volatile LONG *v8; // r15
  KIRQL v9; // r12
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rbx
  int v15; // r15d
  int v16; // r9d
  char v17; // bl
  __int64 v18; // rdx
  volatile LONG *v19; // rcx
  __int64 v20; // rcx
  int v21; // [rsp+30h] [rbp-98h]
  int v22; // [rsp+34h] [rbp-94h]
  _OWORD v23[3]; // [rsp+38h] [rbp-90h] BYREF
  _OWORD v24[3]; // [rsp+68h] [rbp-60h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *a2;
  v21 = *a2;
  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  if ( (v2 & 0x10) == 0 )
  {
    if ( stru_140E366D8.FirstArgument )
    {
      if ( *(_DWORD *)stru_140E366D8.FirstArgument )
      {
        if ( (*((_BYTE *)stru_140E366D8.FirstArgument + 16) & 1) != 0 )
        {
          v6 = *((_QWORD *)stru_140E366D8.FirstArgument + 3);
          if ( (v6 & 1) == v6 )
            MiLogProcessWorkingSetsStart(v6, a1, a2);
        }
      }
    }
    v7 = a2[1];
    if ( v3 == 2
      && v7 != 9
      && stru_140E366D8.FirstArgument
      && *(_DWORD *)stru_140E366D8.FirstArgument
      && (*((_DWORD *)stru_140E366D8.FirstArgument + 4) & 0x800LL) != 0
      && (*((_QWORD *)stru_140E366D8.FirstArgument + 3) & 0x800LL) == *((_QWORD *)stru_140E366D8.FirstArgument + 3) )
    {
      MiLogPartitionState(*((_QWORD *)stru_140E366D8.FirstArgument + 3), a1);
    }
    v8 = (volatile LONG *)(a1 + 21384);
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 21384));
    v10 = *(__int64 **)(a1 + 18320);
    if ( v10 != (__int64 *)(a1 + 18320) )
    {
      while ( 1 )
      {
        v11 = *v10;
        v12 = v10 - 3;
        if ( (unsigned __int64)v12[19] > 1 )
          break;
LABEL_45:
        v10 = (__int64 *)v11;
        if ( v11 == a1 + 18320 )
          goto LABEL_46;
      }
      if ( v21 == 2 && v7 - 3 <= 2 )
      {
        if ( (v12[23] & 0xF) != 0 || !*(v12 - 48) && v7 == 4 )
          goto LABEL_45;
        v7 = 3;
      }
      v13 = v11;
      v14 = a1 + 18640;
      MiInsertListSentinel(a1 + 18640, v23, v13);
      ++*(_DWORD *)(v12[2] + 56);
      if ( v9 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      else
        ExReleaseSpinLockExclusive(v8, v9);
      if ( v7 == 9 && ((v12[23] & 0xF) != 0 || !(unsigned int)MiAgeThreadFaultClusterContexts(v12 - 128, 0LL)) )
      {
LABEL_44:
        ExAcquireSpinLockExclusive(v8);
        v11 = MiRemoveListSentinel(v14, v23);
        MiAttachThreadDone(v12, 1LL);
        goto LABEL_45;
      }
      v22 = MiAttachWorkingSet(v12, v24);
      if ( v21 == 1 )
      {
        MiAgeTargetedWorkingSet(v12, a2);
      }
      else
      {
        if ( v7 == 2 )
        {
          v15 = 4;
        }
        else
        {
          if ( v7 != 3 )
          {
            switch ( v7 )
            {
              case 6u:
              case 7u:
                MiCaptureTargetedWorkingSetAccessBits(v12, v7);
                break;
              case 8u:
                MiEmptyTargetedWorkingSet(v12);
                break;
              case 9u:
                MiAgeThreadFaultClusterContexts(v12 - 128, 1LL);
                break;
            }
            goto LABEL_42;
          }
          v15 = 2;
        }
        LOBYTE(v16) = MiLockWorkingSetShared(v12);
        v17 = v16;
        MiTrimWorkingSet((_DWORD)v12, v12[19], 0, v16, 0, v15);
        LOBYTE(v18) = v17;
        MiUnlockWorkingSetShared(v12, v18);
        v8 = (volatile LONG *)(a1 + 21384);
        v14 = a1 + 18640;
      }
LABEL_42:
      if ( v22 )
        KeForceDetachProcess(v24, 0LL);
      goto LABEL_44;
    }
LABEL_46:
    v19 = (volatile LONG *)(a1 + 21384);
    if ( v9 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v19);
    else
      ExReleaseSpinLockExclusive(v19, v9);
    if ( stru_140E366D8.FirstArgument && *(_DWORD *)stru_140E366D8.FirstArgument )
    {
      if ( (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 1LL) )
        MiLogProcessWorkingSetsStop(v20, a1);
    }
  }
}
