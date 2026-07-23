/*
 * XREFs of LdrpEnableParallelLoading @ 0x180084E40
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     TpAllocWork @ 0x180038DB0 (TpAllocWork.c)
 *     RtlGetSuiteMask @ 0x1800840B0 (RtlGetSuiteMask.c)
 *     LdrpDetectDetour @ 0x180084FB0 (LdrpDetectDetour.c)
 *     TpAllocPoolInternal @ 0x180085A1C (TpAllocPoolInternal.c)
 *     TpSetPoolMaxThreads @ 0x1800EC1D0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x1800FFC10 (TpSetPoolWorkerThreadIdleTimeout.c)
 */

__int64 __fastcall LdrpEnableParallelLoading(unsigned int a1)
{
  unsigned int v2; // ebx
  int v3; // edi
  ULONG v4; // edx
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-50h] BYREF

  *(&CallbackEnviron.Version + 1) = 0;
  LdrpDetectDetour();
  if ( a1 )
  {
    v2 = a1;
    if ( a1 > 0x10 )
      v2 = 16;
  }
  else
  {
    v2 = 4;
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      v2 = 0;
  }
  v3 = TpAllocPoolInternal(&LdrpThreadPool, 1LL);
  if ( v3 >= 0 )
  {
    TpSetPoolWorkerThreadIdleTimeout(LdrpThreadPool, -300000000LL);
    v4 = 1;
    if ( v2 > 1 )
      v4 = v2 - 1;
    TpSetPoolMaxThreads(LdrpThreadPool, v4);
    if ( v2 > 1 && !LdrpDetourExist )
    {
      CallbackEnviron.Pool = LdrpThreadPool;
      CallbackEnviron.Version = 3;
      memset(&CallbackEnviron.CleanupGroup, 0, 44);
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 72;
      return (unsigned int)TpAllocWork(&LdrpMapAndSnapWork, (PTP_WORK_CALLBACK)LdrpWorkCallback, 0LL, &CallbackEnviron);
    }
  }
  return (unsigned int)v3;
}
