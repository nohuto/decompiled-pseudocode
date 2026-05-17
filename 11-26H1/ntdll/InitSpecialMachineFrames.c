/*
 * XREFs of InitSpecialMachineFrames @ 0x1800F9010
 * Callers:
 *     LdrpInitialize @ 0x1800CE998 (LdrpInitialize.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x18004AEA0 (RtlLookupFunctionEntry.c)
 *     ZwDelayExecution @ 0x18015F5C0 (ZwDelayExecution.c)
 */

PRUNTIME_FUNCTION InitSpecialMachineFrames()
{
  PRUNTIME_FUNCTION result; // rax
  ULONG64 *v1; // rbx
  __int64 v2; // rdi
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  result = (PRUNTIME_FUNCTION)(unsigned int)_InterlockedIncrement(&SpecialMachineFramesInitCount);
  if ( (_DWORD)result == 1 )
  {
    ImageBase = 0LL;
    v1 = (ULONG64 *)RtlpContinuationContextMachineFrameEntries;
    v2 = 2LL;
    do
    {
      result = RtlLookupFunctionEntry(*v1, &ImageBase, 0LL);
      *v1++ = ImageBase + result->UnwindInfoAddress;
      --v2;
    }
    while ( v2 );
    _InterlockedOr(v3, 0);
    SpecialMachineFramesInitialized = 1;
  }
  else
  {
    v5 = -300000LL;
    while ( !SpecialMachineFramesInitialized )
      result = (PRUNTIME_FUNCTION)ZwDelayExecution(0LL, &v5);
  }
  return result;
}
