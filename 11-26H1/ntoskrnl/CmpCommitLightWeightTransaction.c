/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x1408AE64C
 * Callers:
 *     NtCommitRegistryTransaction @ 0x1408ACC60 (NtCommitRegistryTransaction.c)
 *     CmpTransMgrCommit @ 0x1408AF444 (CmpTransMgrCommit.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     CmpCleanupLightWeightUoWData @ 0x14085BE94 (CmpCleanupLightWeightUoWData.c)
 *     CmpAbortLightWeightTransaction @ 0x1408AE518 (CmpAbortLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1408AE814 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1408AE99C (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408AECE8 (CmpCleanupLightWeightTransaction.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmListGetNextElement @ 0x140C58A70 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  char v2; // r14
  __int64 v3; // rcx
  signed __int32 v4; // eax
  ULONG_PTR v5; // rsi
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 NextElement; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-30h] BYREF
  __int128 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+20h] BYREF

  v2 = 0;
  v15 = 0LL;
  CmpInitializeDelayDerefContext(&v15);
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v4 )
  {
    v6 = -1072103421;
    if ( v4 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 )
    {
      v2 = 1;
      CmpLockRegistryExclusive(v3);
    }
    v6 = CmpPrepareLightWeightTransaction(v5, &v15);
    if ( v6 < 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 1) == 1 )
      {
        if ( !*(_BYTE *)(a1 + 24) )
          CmpAbortLightWeightTransaction(a1);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v14, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
      }
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
    {
      if ( v5 )
      {
        v16 = 0LL;
        while ( 1 )
        {
          NextElement = CmListGetNextElement(v5 + 16, &v16, 0LL);
          if ( !NextElement )
            break;
          CmpCleanupLightWeightUoWData(NextElement, v12, (__int64)&v15);
        }
      }
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v14, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
      v6 = -1072103421;
    }
    else
    {
      CmpCommitPreparedLightWeightTransaction(v5, &v15);
      if ( v2 )
      {
        if ( v5 )
        {
          v16 = 0LL;
          while ( 1 )
          {
            v7 = CmListGetNextElement(v5 + 16, &v16, 0LL);
            if ( !v7 )
              break;
            CmpCleanupLightWeightUoWData(v7, v8, (__int64)&v15);
          }
        }
        CmpDrainDelayDerefContext((_QWORD **)&v15);
        CmpUnlockRegistry(v9);
        v2 = 0;
        if ( !*(_BYTE *)(a1 + 24) )
          CmpCleanupLightWeightTransaction(v5);
      }
      v6 = 0;
    }
    if ( v2 )
    {
      CmpDrainDelayDerefContext((_QWORD **)&v15);
      CmpUnlockRegistry(v13);
    }
  }
  return (unsigned int)v6;
}
