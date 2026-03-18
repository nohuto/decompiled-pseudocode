/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140532CA0
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140B03F58 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF0AF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExSetTimer @ 0x14037A420 (ExSetTimer.c)
 */

__int64 __fastcall CmFcpManagerArmFeatureUsageProviderPublishTimer(__int64 a1)
{
  ULONG_PTR v1; // rcx
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 1544);
  if ( v1 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    return ExSetTimer(v1, -3000000000LL, 0LL, (ULONG_PTR)v3);
  }
  return result;
}
