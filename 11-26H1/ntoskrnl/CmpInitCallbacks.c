/*
 * XREFs of CmpInitCallbacks @ 0x140856CAC
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmInitializeProcessorCallbacks @ 0x14085681C (CmInitializeProcessorCallbacks.c)
 *     ExInitializeSystemLookasideList @ 0x140C136D0 (ExInitializeSystemLookasideList.c)
 */

__int64 CmpInitCallbacks()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  HIDWORD(WheapPfaLock.StateSaveArea) = 0;
  CmpContextListLock.SListFaultAddress = &CmpContextListLock.Header.WaitListHead.Blink;
  CmpContextListLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&CmpContextListLock.Header.WaitListHead.Blink;
  CmpContextListLock.Header.WaitListHead.Flink = 0LL;
  *(_QWORD *)&CmpContextListLock.Header.Lock = 0LL;
  CallbackListDeleteEvent = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&WheapPfaLock.SchedulingGroup, L"425000");
  CmpContextListLock.QuantumTarget = MEMORY[0xFFFFF78000000014];
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
