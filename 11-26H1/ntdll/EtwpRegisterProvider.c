/*
 * XREFs of EtwpRegisterProvider @ 0x180057DE0
 * Callers:
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180058090 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlRunOnceComplete @ 0x18006EFF0 (RtlRunOnceComplete.c)
 *     RtlReportCriticalFailure @ 0x18006F0F8 (RtlReportCriticalFailure.c)
 *     RtlpRunOnceWaitForInit @ 0x180070048 (RtlpRunOnceWaitForInit.c)
 *     EtwpRegisterTpNotificationOnce @ 0x1800700DC (EtwpRegisterTpNotificationOnce.c)
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

ULONG __fastcall EtwpRegisterProvider(__int64 a1, __int64 a2, int a3)
{
  ULONG v6; // esi
  char v7; // r13
  _BYTE *v8; // rbx
  int v9; // r15d
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  signed __int64 v12; // rcx
  NTSTATUS v13; // ebp
  __int128 v14; // xmm0
  NTSTATUS v15; // eax
  int v17; // eax
  __int64 Heap_0; // rax
  char v19[4]; // [rsp+30h] [rbp-D8h] BYREF
  int v20; // [rsp+34h] [rbp-D4h] BYREF
  _BYTE v21[160]; // [rsp+38h] [rbp-D0h] BYREF

  v6 = 0;
  v20 = 0;
  v7 = 0;
  memset_thunk_772440563353939046(v21, 0, 0xA0uLL);
  v8 = v21;
  v9 = 160;
  if ( byte_1801CB8C8 )
  {
LABEL_14:
    while ( 1 )
    {
      v14 = *(_OWORD *)(a1 + 32);
      *((_DWORD *)v8 + 4) = a3;
      *(_OWORD *)v8 = v14;
      *((_DWORD *)v8 + 5) = *(unsigned __int16 *)(a1 + 84);
      *((_QWORD *)v8 + 4) = a2;
      v15 = NtTraceControl(15LL, v8, 160LL, v8, v9, &v20);
      if ( v15 != -1073741789 )
        break;
      if ( v7 )
        RtlFreeHeap_0();
      v7 = 1;
      Heap_0 = RtlAllocateHeap_0();
      v9 = v20;
      v8 = (_BYTE *)Heap_0;
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
    *(_QWORD *)(a1 + 88) = *((_QWORD *)v8 + 3);
    if ( (unsigned int)(a3 - 2) <= 1 )
      EtwpUpdateEnableInfoAndCallback(a1, v8 + 40);
    if ( !memcmp((const void *)(a1 + 32), &PrivateLoggerNotificationGuid, 0x10uLL) )
      PrivateLoggerNotificationEntry = a1;
LABEL_20:
    if ( v7 )
    {
      if ( v8 )
        RtlFreeHeap_0();
    }
    return v6;
  }
  else
  {
    v10 = EtwpRegisterTpInitOnce;
    v19[0] = 0;
    if ( (EtwpRegisterTpInitOnce & 3) == 2 )
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
          v11 = v10 & 3;
          if ( (v10 & 3) == 0 )
            break;
          if ( v11 != 1 )
          {
            if ( v11 != 3 )
              goto LABEL_8;
            v13 = -1073741584;
            goto LABEL_12;
          }
          v10 = RtlpRunOnceWaitForInit(v10, &EtwpRegisterTpInitOnce);
        }
        v12 = v10;
        v10 = _InterlockedCompareExchange64(&EtwpRegisterTpInitOnce, 1LL, v10);
      }
      while ( v10 != v12 );
      if ( (unsigned int)EtwpRegisterTpNotificationOnce(&EtwpRegisterTpInitOnce, 0LL, 0LL) )
      {
        v13 = RtlRunOnceComplete(&EtwpRegisterTpInitOnce, 0LL, 0LL);
        if ( v13 >= 0 )
          goto LABEL_14;
        v19[0] = 1;
        goto LABEL_12;
      }
      v13 = -1073741823;
      v17 = RtlRunOnceComplete(&EtwpRegisterTpInitOnce, 4LL, 0LL);
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
