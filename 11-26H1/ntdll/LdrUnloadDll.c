/*
 * XREFs of LdrUnloadDll @ 0x1800553B0
 * Callers:
 *     TppCallbackEpilog @ 0x18003FD40 (TppCallbackEpilog.c)
 *     LdrpCodeAuthzInitialize @ 0x1800454A0 (LdrpCodeAuthzInitialize.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x180066C90 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180066FE0 (RtlpTpWorkUnposted.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     RtlWnfDllUnloadCallback @ 0x1801107B0 (RtlWnfDllUnloadCallback.c)
 *     LdrpGetShimEngineInterface @ 0x18011DA94 (LdrpGetShimEngineInterface.c)
 *     RtlLogMessageInEventLogger @ 0x180120950 (RtlLogMessageInEventLogger.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180055460 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrUnloadDll(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned int Count; // ebx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( byte_1801CB8C8 )
    return 0LL;
  result = LdrpFindLoadedDllByHandle(a1, &v8, &v7, a4);
  if ( (int)result >= 0 )
  {
    v5 = v8;
    Count = LdrpDecrementModuleLoadCountEx(v8, 1LL);
    if ( Count == -1073741267 )
    {
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        LdrpDecrementModuleLoadCountEx(v5, 0LL);
      }
      else
      {
        LdrpDrainWorkQueue(0LL);
        LdrpDecrementModuleLoadCountEx(v5, 0LL);
        LdrpDropLastInProgressCount();
      }
      Count = 0;
    }
    LdrpDereferenceModule(v5);
    return Count;
  }
  return result;
}
