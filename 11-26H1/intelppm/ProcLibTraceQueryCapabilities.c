/*
 * XREFs of ProcLibTraceQueryCapabilities @ 0x140045EA8
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 *     QueryPepCapabilites @ 0x14003DA60 (QueryPepCapabilites.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1400041F8 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceQueryCapabilities(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdi
  NTSTATUS ProcessorNumber; // eax
  struct _PROCESSOR_NUMBER v6; // [rsp+30h] [rbp-49h] BYREF
  int v7; // [rsp+34h] [rbp-45h] BYREF
  int v8; // [rsp+38h] [rbp-41h] BYREF
  int v9; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v10; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int8 *p_Number; // [rsp+60h] [rbp-19h]
  __int64 v13; // [rsp+68h] [rbp-11h]
  int *v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  int *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  int *v18; // [rsp+90h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+1Fh]
  int *v20; // [rsp+A0h] [rbp+27h]
  __int64 v21; // [rsp+A8h] [rbp+2Fh]
  __int64 v22; // [rsp+B0h] [rbp+37h]
  __int64 v23; // [rsp+B8h] [rbp+3Fh]

  v6 = 0;
  v3 = (const EVENT_DESCRIPTOR *)";";
  if ( a2 )
    v3 = &PPM_ETW_QUERY_CAPABILITIES_RUNDOWN;
  LOBYTE(ProcessorNumber) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3);
  if ( (_BYTE)ProcessorNumber )
  {
    if ( *(_QWORD *)(a1 + 1120) )
    {
      ProcessorNumber = ProcLibGetProcessorNumber(a1, &v6);
      if ( ProcessorNumber >= 0 )
      {
        v8 = *(_DWORD *)(a1 + 1132);
        v7 = *(_DWORD *)(a1 + 1128);
        v9 = *(unsigned __int8 *)(a1 + 1137);
        v10 = *(unsigned __int8 *)(a1 + 1138);
        UserData.Ptr = (unsigned __int64)&v6;
        p_Number = &v6.Number;
        v14 = &v7;
        v16 = &v8;
        v18 = &v9;
        v20 = &v10;
        v22 = a1 + 1136;
        *(_QWORD *)&UserData.Size = 2LL;
        v13 = 1LL;
        v15 = 4LL;
        v17 = 4LL;
        v19 = 4LL;
        v21 = 4LL;
        v23 = 1LL;
        LOBYTE(ProcessorNumber) = EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3, 0LL, (ULONG)7, &UserData);
      }
    }
  }
  return ProcessorNumber;
}
