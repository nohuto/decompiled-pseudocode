/*
 * XREFs of RtlUpdateSwapReference @ 0x140AC1C5C
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140AC11E0 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140AC18DC (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140AC1BB0 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     PoCopyDeepIdleMask @ 0x140452B10 (PoCopyDeepIdleMask.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     ExBlockOnAddressPushLock @ 0x140478530 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall RtlUpdateSwapReference(__int64 a1, char a2)
{
  void *result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int16 i; // cx
  signed __int64 v7; // rax
  bool v8; // zf
  void *v9; // [rsp+30h] [rbp-D0h] BYREF
  struct _KAFFINITY_EX v10; // [rsp+40h] [rbp-C0h] BYREF

  result = memset_0(&v10.8, 0, sizeof(v10.8));
  v5 = (unsigned __int64)_InterlockedExchange64((volatile __int64 *)a1, a2 & 1) >> 1;
  if ( v5 )
  {
    *(_QWORD *)&v10.Count = 2097153LL;
    memset_0(&v10.8, 0, sizeof(v10.8));
    PoCopyDeepIdleMask(&v10.Count);
    RtlSubtractAffinityEx((struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister, &v10, (__int64)&v10);
    KeRemoveProcessorAffinityEx(&v10.Count, KeGetPcr()->Prcb.Number);
    for ( i = 0; i < v10.Count; ++i )
    {
      if ( v10.Bitmap[i] )
      {
        KeGenericProcessorCallback((__int64 *)&v10, (__int64)xHalTimerWatchdogStop, 0LL, 0);
        break;
      }
    }
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), v5);
    v8 = v5 + v7 == 0;
    for ( result = (void *)(v5 + v7); ; v8 = result == 0LL )
    {
      v9 = result;
      if ( v8 )
        break;
      ExBlockOnAddressPushLock((signed __int64 *)(a1 + 16), (_BYTE *)(a1 + 8), &v9, 8LL, 0LL);
      result = *(void **)(a1 + 8);
    }
  }
  return result;
}
