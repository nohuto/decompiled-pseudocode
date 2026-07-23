/*
 * XREFs of EtwpNotificationThread @ 0x18003AF40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     EtwDeliverDataBlock @ 0x18003CB30 (EtwDeliverDataBlock.c)
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

void __fastcall EtwpNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3)
{
  _ETW_NOTIFICATION_HEADER *Heap_0; // rdi
  char v4; // bp
  ULONG OutputBufferLength; // esi
  NTSTATUS v8; // ebx
  LARGE_INTEGER *v9; // r8
  ULONG ReturnLength; // [rsp+30h] [rbp-148h] BYREF
  __int64 v11; // [rsp+38h] [rbp-140h] BYREF
  _BYTE OutputBuffer[256]; // [rsp+40h] [rbp-138h] BYREF

  v11 = -600000000LL;
  ReturnLength = 0;
  Heap_0 = (_ETW_NOTIFICATION_HEADER *)OutputBuffer;
  v4 = 0;
  OutputBufferLength = 256;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = NtTraceControl(EtwReceiveNotification, 0LL, 0, Heap_0, OutputBufferLength, &ReturnLength);
      if ( v8 < 0 )
        break;
      EtwDeliverDataBlock(Heap_0);
      if ( v8 != 261 )
        goto LABEL_4;
    }
    if ( v8 != -1073741789 )
      break;
    if ( Heap_0 != (_ETW_NOTIFICATION_HEADER *)OutputBuffer )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
    OutputBufferLength = ReturnLength;
    Heap_0 = (_ETW_NOTIFICATION_HEADER *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    if ( !Heap_0 )
    {
      v4 = 1;
      break;
    }
  }
LABEL_4:
  v9 = (LARGE_INTEGER *)&v11;
  if ( !v4 )
    v9 = 0LL;
  TpSetWaitEx(a3, a2, v9, 0LL);
  if ( Heap_0 != (_ETW_NOTIFICATION_HEADER *)OutputBuffer )
  {
    if ( Heap_0 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  }
}
