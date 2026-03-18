/*
 * XREFs of CmpInitCallbacks @ 0x14085099C
 * Callers:
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmInitializeProcessorCallbacks @ 0x14085050C (CmInitializeProcessorCallbacks.c)
 *     ExInitializeSystemLookasideList @ 0x140C0D4C0 (ExInitializeSystemLookasideList.c)
 */

__int64 CmpInitCallbacks()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  WheapPfaLock.ExpectedRunTime = 0;
  CmpCallbackListLock.Header.WaitListHead.Blink = &CmpCallbackListLock.Header.WaitListHead;
  CmpCallbackListLock.Header.WaitListHead.Flink = &CmpCallbackListLock.Header.WaitListHead;
  *(_QWORD *)&CmpCallbackListLock.Header.Lock = 0LL;
  CmpCallbackListLock.SListFaultAddress = 0LL;
  CmpCallbackListLock.QuantumTarget = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&WheapPfaLock.KernelStack, L"425000");
  CmpCallbackListLock.InitialStack = (void *)MEMORY[0xFFFFF78000000014];
  if ( ((unsigned __int8)&CmpCallbackContextSList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  CmpCallbackContextSList = 0LL;
  ExInitializeSystemLookasideList((unsigned int)&CmpCallbackContextLookasideList, 1, 48, 1768115523, 64);
  result = (unsigned int)KeNumberProcessors_0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      CmInitializeProcessorCallbacks(KiProcessorBlock[v0]);
      result = (unsigned int)KeNumberProcessors_0;
      ++v0;
    }
    while ( v0 < (unsigned int)KeNumberProcessors_0 );
  }
  return result;
}
