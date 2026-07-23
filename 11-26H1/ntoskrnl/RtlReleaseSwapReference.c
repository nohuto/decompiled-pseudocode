/*
 * XREFs of RtlReleaseSwapReference @ 0x1403104F0
 * Callers:
 *     CmFcManagerRecordFeatureUsage @ 0x140310364 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140358C78 (CmFcManagerNotifyFeatureUsage.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404C5CC4 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x140AC1560 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 * Callees:
 *     RtlBackoff @ 0x140337F20 (RtlBackoff.c)
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 */

__int64 __fastcall RtlReleaseSwapReference(unsigned __int64 *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // rtt
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  v10 = 0;
  v4 = a2;
  while ( 1 )
  {
    _m_prefetchw(v3);
    v5 = *v3;
    v6 = *v3 & 1;
    if ( v6 != v4 )
      break;
    if ( !(v5 >> 1) )
      __fastfail(0xEu);
    v8 = *v3;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v3, v6 | (2 * (v5 >> 1) - 2), v5);
    if ( v8 == result )
      return result;
    RtlBackoff(&v10, v6, a3);
  }
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    _InterlockedOr(v9, 0);
    result = v3[2];
    if ( result )
      return ExpUnblockPushLock(v3 + 2, 0LL, 0LL);
  }
  return result;
}
