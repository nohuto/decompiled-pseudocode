/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x1408C06E4
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmpRemoveHiveFromNamespace @ 0x1404C6120 (CmpRemoveHiveFromNamespace.c)
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmpRefreshWorkerRoutine @ 0x140854510 (CmpRefreshWorkerRoutine.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpFlushNotifiesPostCallback @ 0x140864FA0 (CmpFlushNotifiesPostCallback.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140865030 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A3FFF0 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x140A401A0 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x140B1EA00 (CmpInvalidateSubtreeWorker.c)
 * Callees:
 *     CmpFlushNotify @ 0x1408C07F8 (CmpFlushNotify.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140AE1930 (CmpKeyEnumStackFreeResumeContext.c)
 */

__int64 __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v4; // rdi
  __int64 *v6; // rbx
  __int16 v7; // r12
  struct _PRIVILEGE_SET *v9; // rcx
  __int64 v10; // rdi
  signed __int64 *v11; // rsi
  signed __int64 v12; // rbx
  struct _PRIVILEGE_SET *v13; // rcx
  __int64 result; // rax

  v4 = (__int64 *)(a1 + 120);
  v6 = *(__int64 **)(a1 + 120);
  v7 = a2;
  while ( v6 != v4 )
  {
    if ( *(v6 - 2) )
    {
      LOBYTE(a2) = a4;
      result = CmpFlushNotify(v6 - 4, a2, 0LL);
    }
    v9 = (struct _PRIVILEGE_SET *)_InterlockedExchange64(v6 + 7, 0LL);
    if ( v9 )
      result = CmpKeyEnumStackFreeResumeContext(v9);
    *((_WORD *)v6 + 8) |= v7;
    v6 = (__int64 *)*v6;
  }
  v10 = 0LL;
  v11 = (signed __int64 *)(a1 + 136);
  do
  {
    v12 = *v11;
    if ( (unsigned __int64)*v11 >= 3 )
    {
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v10 + 136), 2LL, v12);
      if ( v12 == result )
      {
        if ( *(_QWORD *)(v12 + 16) )
        {
          LOBYTE(a2) = a4;
          CmpFlushNotify(v12, a2, 0LL);
        }
        v13 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v12 + 88), 0LL);
        if ( v13 )
          CmpKeyEnumStackFreeResumeContext(v13);
        *(_WORD *)(v12 + 48) |= v7;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v10 + 136), v12, 2LL);
      }
    }
    v10 = (unsigned int)(v10 + 1);
    ++v11;
  }
  while ( (unsigned int)v10 < 4 );
  return result;
}
