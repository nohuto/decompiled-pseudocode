/*
 * XREFs of ZwAlpcDisconnectPort @ 0x14069C200
 * Callers:
 *     DbgkRegisterErrorPort @ 0x140A80BEC (DbgkRegisterErrorPort.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A8F960 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcDisconnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
