/*
 * XREFs of LdrpEnableUMGLTracingStateSync @ 0x18006FA5C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlRunOnceComplete @ 0x18006EFF0 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180070048 (RtlpRunOnceWaitForInit.c)
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 */

__int64 LdrpEnableUMGLTracingStateSync()
{
  signed __int64 v0; // rax
  signed __int64 v1; // rcx
  signed __int64 v2; // rcx
  int v3; // ebx
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  v0 = qword_1801CB3B0;
  v5 = 0LL;
  if ( (qword_1801CB3B0 & 3) == 2 )
  {
    return 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v1 = v0 & 3;
        if ( (v0 & 3) != 0 )
          break;
        v2 = v0;
        v0 = _InterlockedCompareExchange64(&qword_1801CB3B0, 1LL, v0);
        if ( v0 == v2 )
        {
          v3 = RtlpSubscribeWnfStateChangeNotificationInternal(
                 &v5,
                 WNF_ETW_UMGL_TRACING_CHANGE,
                 0,
                 (int)LdrpUMGLTracingStateChangeNotification,
                 0LL,
                 0LL,
                 0,
                 4,
                 17);
          if ( v3 < 0 )
          {
            RtlRunOnceComplete(&qword_1801CB3B0, 4u, 0LL);
          }
          else
          {
            RtlRunOnceComplete(&qword_1801CB3B0, 0, v5);
            RtlpEnumProcessHeaps(RtlpSynchronizeHeapLoggingStateCallback, 0LL, 4LL);
          }
          return (unsigned int)v3;
        }
      }
      if ( v1 != 1 )
        break;
      v0 = RtlpRunOnceWaitForInit(v0, &qword_1801CB3B0);
    }
    if ( v1 != 3 )
      return 0;
    return (unsigned int)-1073741584;
  }
}
