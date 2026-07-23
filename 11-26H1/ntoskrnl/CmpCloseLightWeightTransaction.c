/*
 * XREFs of CmpCloseLightWeightTransaction @ 0x1408B42B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpRollbackLightWeightTransaction @ 0x1408B48C4 (CmpRollbackLightWeightTransaction.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

_KAFFINITY_EX *__fastcall CmpCloseLightWeightTransaction(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v8);
  if ( v5 == 1 && (unsigned __int8)CmpAcquireShutdownRundown(v4, v3) )
  {
    CmpRollbackLightWeightTransaction(a2);
    CmpReleaseShutdownRundown(v7);
  }
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v8);
}
