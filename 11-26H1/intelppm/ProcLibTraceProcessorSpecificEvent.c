/*
 * XREFs of ProcLibTraceProcessorSpecificEvent @ 0x14000318C
 * Callers:
 *     ProcLibTracePccCapChange @ 0x140003154 (ProcLibTracePccCapChange.c)
 *     PccInitiateExecuteCallback @ 0x14000FD50 (PccInitiateExecuteCallback.c)
 *     AcpiTStateNotifyWorker @ 0x140030F90 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 *     AcpiCStateNotifyWorker @ 0x14003F9F0 (AcpiCStateNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x140043200 (AcpiPStateNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x140045AFC (CpcHighestNotifyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorSpecificEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const EVENT_DESCRIPTOR *a3,
        int a4,
        __int64 a5)
{
  int *v5; // rax
  ULONG v6; // edi
  int v11; // [rsp+30h] [rbp-30h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-2Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]

  LODWORD(v5) = *(_DWORD *)(a1 + 80);
  v6 = 1;
  v11 = 0;
  ProcNumber = 0;
  if ( (_DWORD)v5 == 1 )
  {
    v11 = *(_DWORD *)(a1 + 72);
    *(_QWORD *)&UserData.Size = 4LL;
  }
  else
  {
    if ( (_DWORD)v5 == 2 )
      return (char)v5;
    LODWORD(v5) = KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), &ProcNumber);
    if ( (int)v5 < 0 )
      return (char)v5;
    a3 = a2;
    LOWORD(v11) = ProcNumber.Group;
    BYTE2(v11) = ProcNumber.Number;
    *(_QWORD *)&UserData.Size = 3LL;
  }
  v5 = &v11;
  UserData.Ptr = (unsigned __int64)&v11;
  if ( a3 )
  {
    LOBYTE(v5) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, a3);
    if ( (_BYTE)v5 )
    {
      if ( a5 && a4 )
      {
        v14 = a5;
        v6 = 2;
        v15 = a4;
        v16 = 0;
      }
      LOBYTE(v5) = EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, a3, 0LL, v6, &UserData);
    }
  }
  return (char)v5;
}
