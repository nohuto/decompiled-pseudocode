/*
 * XREFs of EtwpPreallocateApcPool @ 0x140AB3AF8
 * Callers:
 *     EtwpUpdateContextRegisterTraceEvents @ 0x14082D51C (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpInitializeClassicStackTracing @ 0x140AB3A68 (EtwpInitializeClassicStackTracing.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

unsigned __int64 __fastcall EtwpPreallocateApcPool(__int64 a1)
{
  unsigned __int64 result; // rax
  _SLIST_ENTRY *v3; // rdi

  result = *(unsigned int *)(a1 + 164);
  if ( (int)result < *(_DWORD *)(a1 + 168) )
  {
    while ( 1 )
    {
      result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 164));
      if ( (unsigned int)result > *(_DWORD *)(a1 + 168) )
        break;
      result = ExAllocatePool2(0x48uLL);
      v3 = (_SLIST_ENTRY *)result;
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
