/*
 * XREFs of RtlRunOnceComplete @ 0x18006EFF0
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 *     LdrpInitMuiCrits @ 0x180032024 (LdrpInitMuiCrits.c)
 *     EtwpRegisterProvider @ 0x180057DE0 (EtwpRegisterProvider.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x18006EA7C (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlRandomEx @ 0x18006EC80 (RtlRandomEx.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 *     LdrpEnableUMGLTracingStateSync @ 0x18006FA5C (LdrpEnableUMGLTracingStateSync.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180148E30 (RtlpFeatureConfigurationCloneComplete.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlRunOnceComplete(signed __int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdx
  signed __int64 v6; // rcx
  unsigned int v7; // r9d
  __int64 v8; // r8
  unsigned __int64 v9; // r8
  signed __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx

  if ( ((a2 - 1) & a2) != 0 || (a2 & 0xFFFFFFF9) != 0 )
    return 3221225712LL;
  v5 = ~(unsigned __int8)(a2 >> 1) & 3;
  if ( a3 && ((unsigned int)v5 < 2 || (a3 & 3) != 0) )
    return 3221225713LL;
  _m_prefetchw(a1);
  v6 = *a1;
  v7 = 0;
  v8 = 2LL;
  if ( (unsigned int)v5 < 2 )
    v8 = 0LL;
  v9 = a3 & 0xFFFFFFFFFFFFFFFCuLL | v8;
  v10 = v6 & 3;
  if ( v10 == 1 )
  {
    if ( (v5 & 1) != 0 )
    {
      v11 = _InterlockedExchange64(a1, v9);
      if ( (v11 & 3) != 1 )
        return 3221225562LL;
      v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v12 )
      {
        do
        {
          v14 = *(_QWORD *)v12;
          v15 = *(_QWORD *)(v12 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v12 + 36), 2u);
          ZwAlertThreadByThreadId(v15, v5, v12);
          v12 = v14;
        }
        while ( v14 );
      }
      return 0LL;
    }
    return 3221225712LL;
  }
  if ( v10 != 3 )
    return 3221225473LL;
  if ( (v5 & 1) != 0 )
    return 3221225712LL;
  if ( _InterlockedCompareExchange64(a1, v9, v6) != v6 )
    return (unsigned int)-1073741771;
  return v7;
}
