/*
 * XREFs of LdrUnloadDll @ 0x18003F930
 * Callers:
 *     TppCallbackEpilog @ 0x18002A2B0 (TppCallbackEpilog.c)
 *     LdrpCodeAuthzInitialize @ 0x18002FA10 (LdrpCodeAuthzInitialize.c)
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x1800870E0 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180087430 (RtlpTpWorkUnposted.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     RtlWnfDllUnloadCallback @ 0x180110340 (RtlWnfDllUnloadCallback.c)
 *     LdrpGetShimEngineInterface @ 0x18011D844 (LdrpGetShimEngineInterface.c)
 *     RtlLogMessageInEventLogger @ 0x180120700 (RtlLogMessageInEventLogger.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18003F9E0 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 */

NTSTATUS __cdecl LdrUnloadDll(PVOID DllHandle)
{
  char *v1; // r9
  NTSTATUS result; // eax
  char *v3; // rdi
  NTSTATUS Count; // ebx
  int v5; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  if ( byte_1801CA908 )
    return 0;
  result = LdrpFindLoadedDllByHandle(DllHandle, (__int64 *)&BaseAddress, &v5, v1);
  if ( result >= 0 )
  {
    v3 = (char *)BaseAddress;
    Count = LdrpDecrementModuleLoadCountEx(BaseAddress, 1LL);
    if ( Count == -1073741267 )
    {
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        LdrpDecrementModuleLoadCountEx(v3, 0LL);
      }
      else
      {
        LdrpDrainWorkQueue(0LL);
        LdrpDecrementModuleLoadCountEx(v3, 0LL);
        LdrpDropLastInProgressCount();
      }
      Count = 0;
    }
    LdrpDereferenceModule(v3);
    return Count;
  }
  return result;
}
