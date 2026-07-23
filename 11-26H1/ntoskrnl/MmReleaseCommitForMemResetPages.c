/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x1406EA1AC
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAttachThreadDone @ 0x140311390 (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x140456CE0 (KeForceAttachProcess.c)
 *     MiPrepareAttachThread @ 0x14046E560 (MiPrepareAttachThread.c)
 *     KeRetryOutswapProcess @ 0x1404A401C (KeRetryOutswapProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MmReleaseCommitForMemResetPages(__int64 BugCheckParameter1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 *v5; // rsi
  char v7; // al
  volatile LONG *v8; // r14
  KIRQL v9; // r9
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // r8
  KIRQL v13; // cl
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 Object; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v20[3]; // [rsp+48h] [rbp-38h] BYREF

  Object = 393216LL;
  v2 = 0;
  v19[1] = v19;
  v3 = BugCheckParameter1 + 1024;
  v19[0] = v19;
  v5 = (__int64 *)&unk_140E379A0;
  v7 = *(_DWORD *)(BugCheckParameter1 + 1208) & 0xF;
  memset(v20, 0, sizeof(v20));
  if ( v7 != 1 )
    v5 = (__int64 *)(BugCheckParameter1 + 1248);
  if ( (HIBYTE(*(_DWORD *)(BugCheckParameter1 + 1208)) & 0x30) == 0x20 )
  {
    v8 = (volatile LONG *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL
                                                                 * *(unsigned __int16 *)(BugCheckParameter1 + 1198))
                         + 21384LL);
    ExAcquireSpinLockExclusive(v8);
    v10 = MiPrepareAttachThread(BugCheckParameter1, v3, 1);
    if ( v9 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    else
      ExReleaseSpinLockExclusive(v8, v9);
    if ( v10 )
    {
      KeForceAttachProcess((_KPROCESS *)BugCheckParameter1, v20, 0);
      v13 = MiLockWorkingSetExclusive(v3, v11, v12);
      if ( (HIBYTE(*(_DWORD *)(v3 + 184)) & 0x30) == 0x20 )
      {
        v14 = *v5;
        if ( !*(_QWORD *)(*v5 + 40) )
        {
          *(_QWORD *)(v14 + 40) = &Object;
          *(_DWORD *)(v14 + 48) = *(_DWORD *)(v14 + 48) & 0xFFFFFFFE | (a2 != 0);
          MiUnlockWorkingSetExclusive(v3, v13);
          KeRetryOutswapProcess((volatile signed __int32 *)BugCheckParameter1, v15, v16);
          KeForceDetachProcess((__int64)v20, 0);
          MiAttachThreadDone(v3, 0);
          KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
          return v2;
        }
        v2 = -1073740682;
      }
      else
      {
        v2 = -1073741431;
      }
      if ( v13 != 17 )
        MiUnlockWorkingSetExclusive(v3, v13);
      KeForceDetachProcess((__int64)v20, 0);
      MiAttachThreadDone(v3, 0);
    }
    else
    {
      return (unsigned int)-1073700861;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v2;
}
