/*
 * XREFs of EtwpPreallocateApcPool @ 0x140AFAC58
 * Callers:
 *     EtwpUpdateContextRegisterTraceEvents @ 0x1408272DC (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 *     EtwpInitializeClassicStackTracing @ 0x140AFABC8 (EtwpInitializeClassicStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

unsigned __int64 __fastcall EtwpPreallocateApcPool(__int64 a1)
{
  unsigned __int64 result; // rax
  struct _SLIST_ENTRY *v3; // rdi

  result = *(unsigned int *)(a1 + 164);
  if ( (int)result < *(_DWORD *)(a1 + 168) )
  {
    while ( 1 )
    {
      result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 164));
      if ( (unsigned int)result > *(_DWORD *)(a1 + 168) )
        break;
      result = ExAllocatePool2(0x48uLL);
      v3 = (struct _SLIST_ENTRY *)result;
      if ( !result )
        break;
      *(_QWORD *)(result + 128) = a1;
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 16), (PSLIST_ENTRY)(result + 96));
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 32), v3 + 7);
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 164));
  }
  return result;
}
