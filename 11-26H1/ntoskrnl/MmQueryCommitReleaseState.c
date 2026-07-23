/*
 * XREFs of MmQueryCommitReleaseState @ 0x1404C1D8C
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiAttachThreadDone @ 0x140311390 (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x140456CE0 (KeForceAttachProcess.c)
 *     MiPrepareAttachThread @ 0x14046E560 (MiPrepareAttachThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MmQueryCommitReleaseState(__int64 a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v5; // r10
  __int64 v6; // rbx
  char v7; // al
  __int64 *v8; // r14
  __int64 *v9; // r15
  __int64 *v10; // rsi
  int v11; // eax
  int v12; // edi
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r13
  char v16; // cl
  volatile LONG *v17; // rbp
  KIRQL v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // rdx
  int v24; // [rsp+20h] [rbp-B8h]
  int v25; // [rsp+24h] [rbp-B4h]
  _DWORD *v27; // [rsp+30h] [rbp-A8h]
  _QWORD *v28; // [rsp+38h] [rbp-A0h]
  _QWORD *v29; // [rsp+40h] [rbp-98h]
  _OWORD v30[3]; // [rsp+50h] [rbp-88h] BYREF

  v5 = a5;
  v6 = a1 + 1024;
  v7 = *(_DWORD *)(a1 + 1208) & 0xF;
  v29 = a4;
  v28 = a3;
  v27 = a2;
  memset(v30, 0, sizeof(v30));
  if ( v7 == 1 )
  {
    v8 = (__int64 *)&unk_140E379A0;
    v9 = (__int64 *)&unk_140E37990;
    v10 = (__int64 *)&unk_140E37988;
  }
  else
  {
    v8 = (__int64 *)(a1 + 1248);
    v9 = (__int64 *)(a1 + 1232);
    v10 = (__int64 *)(a1 + 1224);
  }
  v11 = *(_DWORD *)(a1 + 1208);
  v12 = 0;
  v13 = *v10;
  v14 = 0LL;
  v15 = 0LL;
  HIBYTE(v24) = HIBYTE(v11);
  if ( dword_140FBF260 == 1 )
  {
    v16 = HIBYTE(v11);
    v13 = 0LL;
  }
  else
  {
    if ( (HIBYTE(v11) & 0x30) == 0x20 )
    {
      v17 = (volatile LONG *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 1198)) + 21384LL);
      ExAcquireSpinLockExclusive(v17);
      v25 = MiPrepareAttachThread(a1, v6, 1);
      if ( v18 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v17);
      else
        ExReleaseSpinLockExclusive(v17, v18);
      if ( v25 )
      {
        KeForceAttachProcess((_KPROCESS *)a1, v30, 0);
        v21 = MiLockWorkingSetShared(v6, v19, v20);
        v24 = *(_DWORD *)(v6 + 184);
        if ( (HIBYTE(v24) & 0x30) == 0x20 )
        {
          v22 = *v8;
          v15 = *v9;
          v14 = *(_QWORD *)(*v8 + 32);
        }
        LOBYTE(v22) = v21;
        MiUnlockWorkingSetShared(v6, v22);
        KeForceDetachProcess((__int64)v30, 0);
        MiAttachThreadDone(v6, 0);
      }
      v5 = a5;
      a4 = v29;
      a3 = v28;
      a2 = v27;
    }
    v16 = HIBYTE(v24);
    LOBYTE(v11) = HIBYTE(v24) & 0x30;
    if ( (HIBYTE(v24) & 0x30u) < 0x20 )
      v13 = 0LL;
  }
  LOBYTE(v12) = (v16 & 0x30u) >= 0x10;
  *a2 = v12;
  *a3 = v13;
  *a4 = v14;
  *v5 = v15;
  return v11;
}
