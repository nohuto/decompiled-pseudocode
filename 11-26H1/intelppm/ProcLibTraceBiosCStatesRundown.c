/*
 * XREFs of ProcLibTraceBiosCStatesRundown @ 0x14004507C
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1400030C0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

char __fastcall ProcLibTraceBiosCStatesRundown(_QWORD *a1)
{
  _BYTE *Pool2; // rbx
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v4; // rdi
  __int64 v5; // rcx
  ULONG v6; // r9d
  unsigned int *v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // r8d
  int v11; // ecx
  unsigned int v12; // ecx
  __int64 i; // r9
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // xmm0_8
  __int64 v17; // rdx
  unsigned int v19; // [rsp+30h] [rbp-39h] BYREF
  int v20; // [rsp+34h] [rbp-35h] BYREF
  int v21; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  __int16 *v23; // [rsp+50h] [rbp-19h]
  __int64 v24; // [rsp+58h] [rbp-11h]
  __int16 *v25; // [rsp+60h] [rbp-9h]
  __int64 v26; // [rsp+68h] [rbp-1h]
  int *v27; // [rsp+70h] [rbp+7h]
  __int64 v28; // [rsp+78h] [rbp+Fh]
  unsigned int *v29; // [rsp+80h] [rbp+17h]
  __int64 v30; // [rsp+88h] [rbp+1Fh]
  _BYTE *v31; // [rsp+90h] [rbp+27h]
  int v32; // [rsp+98h] [rbp+2Fh]
  int v33; // [rsp+9Ch] [rbp+33h]

  v20 = 0;
  Pool2 = 0LL;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              (__int64)a1,
                                                              (__int64)&PPM_ETW_BIOS_C_STATES_RUNDOWN,
                                                              (__int64)&PPM_ETW_BIOS_C_STATES_RUNDOWN_HV,
                                                              (__int64)&v20,
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
        a1[26],
        0LL);
      v5 = a1[35];
      v6 = 5;
      v7 = (unsigned int *)a1[66];
      v8 = 0;
      v9 = 0;
      v19 = 0;
      v10 = 0;
      if ( (v5 & 0x7F077) != 0 )
      {
        v8 = *v7;
        v9 = v8;
        v19 = *v7;
        v10 = v8;
      }
      if ( (v5 & 0x7F070) != 0 )
      {
        v11 = 2;
      }
      else
      {
        v9 = v10;
        v11 = (v5 & 7) != 0;
      }
      v21 = v11;
      v23 = &AcpiInfo;
      v25 = &word_140019142;
      v27 = &v21;
      v29 = &v19;
      v24 = 2LL;
      v26 = 2LL;
      v28 = 4LL;
      v30 = 4LL;
      if ( v8 )
      {
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, 19LL * v9, 1919119952LL);
        if ( !Pool2 )
        {
LABEL_14:
          LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                    WdfDriverGlobals,
                                                    a1[26]);
          return (char)EventDescriptorAndProcessorId;
        }
        v12 = v19;
        for ( i = 0LL; (unsigned int)i < v19; v12 = v19 )
        {
          v14 = 5 * i;
          v15 = (unsigned int)i;
          v16 = *(_QWORD *)&v7[5 * i + 1];
          i = (unsigned int)(i + 1);
          v17 = 19 * v15;
          *(_QWORD *)&Pool2[v17] = v16;
          *(_DWORD *)&Pool2[v17 + 8] = v7[v14 + 3];
          Pool2[v17 + 12] = v7[v14 + 4];
          *(_DWORD *)&Pool2[v17 + 13] = v7[v14 + 5];
          *(_WORD *)&Pool2[v17 + 17] = HIWORD(v7[v14 + 4]);
        }
        v6 = 6;
        v31 = Pool2;
        v33 = 0;
        v32 = 19 * v12;
      }
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v4, 0LL, v6, &UserData);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, (ULONG)1919119952);
      goto LABEL_14;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
