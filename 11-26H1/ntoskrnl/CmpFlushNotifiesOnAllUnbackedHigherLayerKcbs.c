/*
 * XREFs of CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A2E3E0
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A2E164 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x140A2E314 (CmpLightWeightCommitRecreateKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A2E434 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(int a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0x100000008LL;
  BYTE5(v5) = a4;
  return CmpEnumerateAllHigherLayerKcbs(
           a1,
           (unsigned int)CmpFlushNotifiesPreCallback,
           (unsigned int)CmpFlushNotifiesPostCallback,
           a3,
           (__int64)&v5,
           a4,
           1);
}
