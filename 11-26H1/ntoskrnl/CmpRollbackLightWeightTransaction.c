/*
 * XREFs of CmpRollbackLightWeightTransaction @ 0x1408B48C4
 * Callers:
 *     NtRollbackRegistryTransaction @ 0x140856380 (NtRollbackRegistryTransaction.c)
 *     CmpCloseLightWeightTransaction @ 0x1408B42B0 (CmpCloseLightWeightTransaction.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmpRollbackTransactionArray @ 0x1408D67C8 (CmpRollbackTransactionArray.c)
 *     CmpAbortRollbackPacket @ 0x140B4E8A4 (CmpAbortRollbackPacket.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     ExBlockOnAddressPushLock @ 0x140478530 (ExBlockOnAddressPushLock.c)
 *     CmpAbortLightWeightTransaction @ 0x1408B4958 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpRollbackLightWeightTransaction(__int64 a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  signed __int32 v7; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 0);
  if ( v2 == 1 )
  {
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 4, 1);
    if ( v7 != 1 )
    {
      v3 = -1072103421;
      goto LABEL_4;
    }
    v3 = 0;
    v7 = 4;
    ExBlockOnAddressPushLock((signed __int64 *)(a1 + 8), (_BYTE *)a1, &v7, 4LL, 0LL);
    goto LABEL_3;
  }
  v3 = 0;
  if ( !v2 )
  {
LABEL_3:
    CmpAbortLightWeightTransaction(a1);
    goto LABEL_4;
  }
  v3 = -1072103421;
  if ( v2 == 3 )
    v3 = -1072103403;
LABEL_4:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v5);
  return v3;
}
