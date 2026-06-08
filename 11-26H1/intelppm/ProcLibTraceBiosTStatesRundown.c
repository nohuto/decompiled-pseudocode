/*
 * XREFs of ProcLibTraceBiosTStatesRundown @ 0x140045470
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1400030C0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

char __fastcall ProcLibTraceBiosTStatesRundown(__int64 a1)
{
  _DWORD *v1; // rbx
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v4; // r14
  int v5; // eax
  ULONG v6; // r9d
  unsigned int *v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r15
  __int64 Pool2; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v17; // [rsp+30h] [rbp-79h] BYREF
  int v18; // [rsp+34h] [rbp-75h] BYREF
  int v19; // [rsp+38h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-69h] BYREF
  char *v21; // [rsp+50h] [rbp-59h]
  __int64 v22; // [rsp+58h] [rbp-51h]
  char *v23; // [rsp+60h] [rbp-49h]
  __int64 v24; // [rsp+68h] [rbp-41h]
  __int64 v25; // [rsp+70h] [rbp-39h]
  __int64 v26; // [rsp+78h] [rbp-31h]
  int *v27; // [rsp+80h] [rbp-29h]
  __int64 v28; // [rsp+88h] [rbp-21h]
  __int64 v29; // [rsp+90h] [rbp-19h]
  __int64 v30; // [rsp+98h] [rbp-11h]
  __int64 v31; // [rsp+A0h] [rbp-9h]
  __int64 v32; // [rsp+A8h] [rbp-1h]
  unsigned int *v33; // [rsp+B0h] [rbp+7h]
  __int64 v34; // [rsp+B8h] [rbp+Fh]
  __int64 v35; // [rsp+C0h] [rbp+17h]
  int v36; // [rsp+C8h] [rbp+1Fh]
  int i; // [rsp+CCh] [rbp+23h]

  v19 = 0;
  v18 = 0;
  v1 = 0LL;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)&PPM_ETW_BIOS_T_STATES_RUNDOWN,
                                                              (__int64)&PPM_ETW_BIOS_T_STATES_RUNDOWN_HV,
                                                              (__int64)&v19,
                                                              &UserData);
  v4 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v5 = *(_DWORD *)(a1 + 280);
      v6 = 8;
      v7 = *(unsigned int **)(a1 + 504);
      v17 = 0;
      if ( (v5 & 0x3300000) != 0 )
      {
        v8 = *v7;
        v17 = v8;
        if ( v8 )
        {
          v11 = 20 * v8;
          Pool2 = ExAllocatePool2(256LL, v11, 1919119952LL);
          v1 = (_DWORD *)Pool2;
          if ( !Pool2 )
          {
LABEL_10:
            LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                      WdfDriverGlobals,
                                                      *(_QWORD *)(a1 + 208));
            return (char)EventDescriptorAndProcessorId;
          }
          v6 = 9;
          v35 = Pool2;
          v13 = 0;
          v36 = v11;
          for ( i = 0; v13 < v17; v1[v15 + 4] = v7[5 * v14 + 5] )
          {
            v14 = v13++;
            v15 = 5 * v14;
            v1[v15] = v7[5 * v14 + 1];
            v1[v15 + 1] = v7[5 * v14 + 2];
            v1[v15 + 2] = v7[5 * v14 + 3];
            v1[v15 + 3] = v7[5 * v14 + 4];
          }
        }
      }
      v9 = *(_QWORD *)(a1 + 280);
      if ( (v9 & 0x3000000) != 0 )
        v10 = 3;
      else
        v10 = (v9 & 0x300000) != 0;
      v18 = v10;
      v22 = 1LL;
      v21 = &byte_140019186;
      v23 = &byte_140019187;
      v25 = a1 + 512;
      v27 = &v18;
      v29 = a1 + 480;
      v31 = a1 + 492;
      v33 = &v17;
      v24 = 1LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 12LL;
      v32 = 12LL;
      v34 = 4LL;
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v4, 0LL, v6, &UserData);
      if ( v1 )
        ExFreePoolWithTag(v1, (ULONG)1919119952);
      goto LABEL_10;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
