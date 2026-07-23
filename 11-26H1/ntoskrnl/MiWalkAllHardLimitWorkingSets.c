/*
 * XREFs of MiWalkAllHardLimitWorkingSets @ 0x1402A8D7C
 * Callers:
 *     MiAgingThread @ 0x1402A84E0 (MiAgingThread.c)
 *     MiWorkingSetManager @ 0x1404B7850 (MiWorkingSetManager.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiComputeHardTrimSize @ 0x1402CF228 (MiComputeHardTrimSize.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiRemoveListSentinel @ 0x1402EE518 (MiRemoveListSentinel.c)
 *     MiAttachThreadDone @ 0x140311390 (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     MiTrimWorkingSet @ 0x1403C437C (MiTrimWorkingSet.c)
 *     MiInsertListSentinel @ 0x140445440 (MiInsertListSentinel.c)
 *     MiAttachWorkingSet @ 0x14046ADD4 (MiAttachWorkingSet.c)
 *     MiAgeTargetedWorkingSet @ 0x1404704B0 (MiAgeTargetedWorkingSet.c)
 *     MiComputeHardAgingPercent @ 0x1404AB228 (MiComputeHardAgingPercent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiWalkAllHardLimitWorkingSets(__int64 a1, int a2)
{
  volatile LONG *v2; // rdi
  __int64 **v3; // r12
  __int64 v4; // r15
  __int64 v5; // r13
  KIRQL v6; // al
  __int64 *v7; // rbx
  KIRQL v8; // bp
  __int64 v9; // rsi
  _QWORD *v10; // rbx
  int v11; // r14d
  char v12; // si
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  int v15; // r9d
  _OWORD v18[3]; // [rsp+38h] [rbp-90h] BYREF
  _OWORD v19[3]; // [rsp+68h] [rbp-60h] BYREF

  v2 = (volatile LONG *)(a1 + 21384);
  v3 = (__int64 **)(a1 + 18352);
  v4 = 0LL;
  v5 = a1 + 18368;
  memset(v19, 0, sizeof(v19));
  memset(v18, 0, sizeof(v18));
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 21384));
  v7 = *v3;
  v8 = v6;
  if ( *v3 != (__int64 *)v3 )
  {
    do
    {
      v9 = *v7;
      v10 = (_QWORD *)v7[2];
      if ( v10[19] > 1uLL )
      {
        MiInsertListSentinel(v5, v18, v9);
        ++*(_DWORD *)(v10[2] + 56LL);
        if ( v8 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        else
          ExReleaseSpinLockExclusive(v2, v8);
        v11 = MiAttachWorkingSet(v10, v19);
        if ( a2 )
        {
          v12 = MiLockWorkingSetShared(v10);
          v14 = MiComputeHardTrimSize(v10[16], 85LL, 120LL);
          if ( v10[17] > v14 )
          {
            LOBYTE(v15) = v12;
            v4 += MiTrimWorkingSet((_DWORD)v10, 0, v14, v15, 0, 145);
          }
          LOBYTE(v13) = v12;
          MiUnlockWorkingSetShared(v10, v13);
        }
        else if ( (unsigned int)MiComputeHardAgingPercent(v10, 0LL) )
        {
          MiAgeTargetedWorkingSet(v10, 0LL);
        }
        if ( v11 )
          KeForceDetachProcess(v19, 0LL);
        ExAcquireSpinLockExclusive(v2);
        v9 = MiRemoveListSentinel(v5, v18);
        MiAttachThreadDone(v10, 1LL);
      }
      v7 = (__int64 *)v9;
    }
    while ( (__int64 **)v9 != v3 );
  }
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v8);
  return v4;
}
