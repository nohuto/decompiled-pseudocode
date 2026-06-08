/*
 * XREFs of ProcLibCpcRundown @ 0x1400247F0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140024B00 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1400029E0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     CpcRegisterIsSupportedEx @ 0x140006494 (CpcRegisterIsSupportedEx.c)
 *     GetCpcRegisterDefinitionTable @ 0x1400066D0 (GetCpcRegisterDefinitionTable.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     CpcLastValue @ 0x140024528 (CpcLastValue.c)
 */

char __fastcall ProcLibCpcRundown(__int64 a1)
{
  __int64 EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  __int64 v4; // r15
  unsigned int *v5; // rsi
  __int64 v6; // r14
  int v7; // edx
  char Value; // r8
  __int64 v9; // r10
  __int64 v10; // rax
  bool v11; // zf
  unsigned int v13; // [rsp+30h] [rbp-49h] BYREF
  int v14; // [rsp+34h] [rbp-45h] BYREF
  unsigned int *v15; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  __int64 v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  __int64 v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  __int64 v23; // [rsp+80h] [rbp+7h]
  __int64 v24; // [rsp+88h] [rbp+Fh]
  _QWORD *v25; // [rsp+90h] [rbp+17h]
  __int64 v26; // [rsp+98h] [rbp+1Fh]

  LODWORD(EventDescriptorAndProcessorId) = *(_DWORD *)(a1 + 280);
  v15 = 0LL;
  v13 = 0;
  v14 = 0;
  v16[0] = 0LL;
  if ( (EventDescriptorAndProcessorId & 0x8000000) != 0 )
  {
    EventDescriptorAndProcessorId = ProcLibGetEventDescriptorAndProcessorId(
                                      a1,
                                      (__int64)&PPM_ETW_PROCESSOR_CPC_RUNDOWN,
                                      (__int64)&PPM_ETW_PROCESSOR_CPC_RUNDOWN_HV,
                                      (__int64)&v14,
                                      &UserData);
    v3 = (const EVENT_DESCRIPTOR *)EventDescriptorAndProcessorId;
    if ( EventDescriptorAndProcessorId )
    {
      LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                                (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                                (PCEVENT_DESCRIPTOR)EventDescriptorAndProcessorId);
      if ( (_BYTE)EventDescriptorAndProcessorId )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208),
          0LL);
        v4 = *(_QWORD *)(a1 + 592);
        GetCpcRegisterDefinitionTable(v4, &v15, &v13);
        v18 = v4 + 4;
        v19 = 4LL;
        if ( v13 )
        {
          v5 = v15;
          v6 = v13;
          do
          {
            if ( CpcRegisterIsSupportedEx(*v5 + v4) )
            {
              Value = CpcLastValue((_QWORD *)a1, v7, v16);
              v10 = -1LL;
              do
                ++v10;
              while ( *(_BYTE *)(*((_QWORD *)v5 + 1) + v10) );
              v20 = *((_QWORD *)v5 + 1);
              v21 = (unsigned __int16)v10 + 1;
              v25 = v16;
              v22 = 0;
              v23 = v9;
              v24 = 12LL;
              v26 = 8LL;
              if ( Value != 1 )
              {
                v11 = v3 == (const EVENT_DESCRIPTOR *)&PPM_ETW_PROCESSOR_CPC_RUNDOWN_HV;
                v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PROCESSOR_CPC_RUNDOWN_HV_NOVALUE;
                if ( !v11 )
                  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PROCESSOR_CPC_RUNDOWN_NOVALUE;
              }
              EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3, 0LL, (ULONG)(5 - (Value != 1)), &UserData);
            }
            v5 += 6;
            --v6;
          }
          while ( v6 );
        }
        LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                  WdfDriverGlobals,
                                                  *(_QWORD *)(a1 + 208));
      }
    }
  }
  return EventDescriptorAndProcessorId;
}
