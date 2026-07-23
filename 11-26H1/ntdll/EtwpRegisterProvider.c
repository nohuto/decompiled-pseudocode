/*
 * XREFs of EtwpRegisterProvider @ 0x180042360
 * Callers:
 *     EtwNotificationRegister @ 0x180041740 (EtwNotificationRegister.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180042610 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlRunOnceComplete @ 0x18008F440 (RtlRunOnceComplete.c)
 *     RtlReportCriticalFailure @ 0x18008F548 (RtlReportCriticalFailure.c)
 *     RtlpRunOnceWaitForInit @ 0x180090498 (RtlpRunOnceWaitForInit.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18009052C (EtwpRegisterTpNotificationOnce.c)
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

ULONG __fastcall EtwpRegisterProvider(__int64 a1, __int64 a2, int a3)
{
  ULONG v6; // esi
  char v7; // r13
  _QWORD *v8; // rbx
  ULONG OutputBufferLength; // r15d
  signed __int64 Value; // rax
  signed __int64 v11; // rcx
  signed __int64 v12; // rcx
  int v13; // ebp
  __int128 v14; // xmm0
  NTSTATUS v15; // eax
  NTSTATUS v17; // eax
  _QWORD *Heap_0; // rax
  char v19[4]; // [rsp+30h] [rbp-D8h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-D4h] BYREF
  _BYTE InputBuffer[160]; // [rsp+38h] [rbp-D0h] BYREF

  v6 = 0;
  ReturnLength = 0;
  v7 = 0;
  memset_thunk_772440563353939046(InputBuffer, 0, 0xA0uLL);
  v8 = InputBuffer;
  OutputBufferLength = 160;
  if ( byte_1801CA908 )
  {
LABEL_14:
    while ( 1 )
    {
      v14 = *(_OWORD *)(a1 + 32);
      *((_DWORD *)v8 + 4) = a3;
      *(_OWORD *)v8 = v14;
      *((_DWORD *)v8 + 5) = *(unsigned __int16 *)(a1 + 84);
      v8[4] = a2;
      v15 = NtTraceControl(EtwRegisterGuidsCode, v8, 0xA0u, v8, OutputBufferLength, &ReturnLength);
      if ( v15 != -1073741789 )
        break;
      if ( v7 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
      v7 = 1;
      Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
      OutputBufferLength = ReturnLength;
      v8 = Heap_0;
      if ( !Heap_0 )
      {
        v15 = -1073741801;
        goto LABEL_28;
      }
    }
    if ( !v15 )
      goto LABEL_16;
LABEL_28:
    v6 = RtlNtStatusToDosError(v15);
    if ( v6 )
      goto LABEL_20;
LABEL_16:
    *(_QWORD *)(a1 + 88) = v8[3];
    if ( (unsigned int)(a3 - 2) <= 1 )
      EtwpUpdateEnableInfoAndCallback(a1, v8 + 5);
    if ( !memcmp((const void *)(a1 + 32), &PrivateLoggerNotificationGuid, 0x10uLL) )
      PrivateLoggerNotificationEntry = a1;
LABEL_20:
    if ( v7 )
    {
      if ( v8 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
    }
    return v6;
  }
  else
  {
    Value = EtwpRegisterTpInitOnce.Value;
    v19[0] = 0;
    if ( ((__int64)EtwpRegisterTpInitOnce.Ptr & 3) == 2 )
    {
LABEL_8:
      v13 = 0;
LABEL_13:
      if ( !v13 )
        goto LABEL_14;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v11 = Value & 3;
          if ( (Value & 3) == 0 )
            break;
          if ( v11 != 1 )
          {
            if ( v11 != 3 )
              goto LABEL_8;
            v13 = -1073741584;
            goto LABEL_12;
          }
          Value = RtlpRunOnceWaitForInit(Value, &EtwpRegisterTpInitOnce);
        }
        v12 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)&EtwpRegisterTpInitOnce, 1LL, Value);
      }
      while ( Value != v12 );
      if ( (unsigned int)EtwpRegisterTpNotificationOnce(&EtwpRegisterTpInitOnce, 0LL, 0LL) )
      {
        v13 = RtlRunOnceComplete(&EtwpRegisterTpInitOnce, 0, 0LL);
        if ( v13 >= 0 )
          goto LABEL_14;
        v19[0] = 1;
        goto LABEL_12;
      }
      v13 = -1073741823;
      v17 = RtlRunOnceComplete(&EtwpRegisterTpInitOnce, 4u, 0LL);
      if ( v17 < 0 )
      {
        v13 = v17;
        v19[0] = 2;
LABEL_12:
        RtlReportCriticalFailure((unsigned int)v13, v19, 1LL);
        goto LABEL_13;
      }
    }
    return RtlNtStatusToDosError(v13);
  }
}
