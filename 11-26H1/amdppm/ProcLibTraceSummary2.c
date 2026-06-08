/*
 * XREFs of ProcLibTraceSummary2 @ 0x14003F9E0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140024B00 (ProcLibTraceControlCallback.c)
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1400029E0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     GetRegistryDwordValue @ 0x1400243B4 (GetRegistryDwordValue.c)
 */

char __fastcall ProcLibTraceSummary2(__int64 a1, char a2)
{
  void *v3; // r8
  bool v5; // zf
  void *v6; // rdx
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v8; // rdi
  __int64 v9; // r8
  unsigned int v10; // r10d
  int *v11; // rax
  _DWORD *v12; // rdx
  unsigned int v13; // r9d
  _DWORD *v14; // r11
  _DWORD *v15; // rcx
  _DWORD *v16; // r9
  int v17; // ecx
  int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned int v23; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-51h] BYREF
  int v26; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v27; // [rsp+40h] [rbp-49h] BYREF
  int v28; // [rsp+44h] [rbp-45h] BYREF
  int v29; // [rsp+48h] [rbp-41h] BYREF
  int v30; // [rsp+4Ch] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  int *v32; // [rsp+60h] [rbp-29h]
  __int64 v33; // [rsp+68h] [rbp-21h]
  int *v34; // [rsp+70h] [rbp-19h]
  __int64 v35; // [rsp+78h] [rbp-11h]
  unsigned int *v36; // [rsp+80h] [rbp-9h]
  __int64 v37; // [rsp+88h] [rbp-1h]
  int *v38; // [rsp+90h] [rbp+7h]
  __int64 v39; // [rsp+98h] [rbp+Fh]
  unsigned int *v40; // [rsp+A0h] [rbp+17h]
  __int64 v41; // [rsp+A8h] [rbp+1Fh]
  unsigned int *v42; // [rsp+B0h] [rbp+27h]
  __int64 v43; // [rsp+B8h] [rbp+2Fh]
  int *v44; // [rsp+C0h] [rbp+37h]
  __int64 v45; // [rsp+C8h] [rbp+3Fh]

  v3 = &PPM_ETW_SUMMARY2_HV;
  v5 = a2 == 0;
  v30 = 0;
  v6 = &PPM_ETW_SUMMARY2;
  if ( !v5 )
    v3 = &PPM_ETW_SUMMARY2_RUNDOWN_HV;
  if ( a2 )
    v6 = &PPM_ETW_SUMMARY2_RUNDOWN;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)v6,
                                                              (__int64)v3,
                                                              (__int64)&v30,
                                                              &UserData);
  v8 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v9 = *(_QWORD *)(a1 + 280);
      v10 = 100;
      v11 = *(int **)(a1 + 528);
      v12 = *(_DWORD **)(a1 + 448);
      v13 = 0;
      v14 = *(_DWORD **)(a1 + 504);
      v27 = 0;
      v28 = 0;
      v26 = 0;
      v29 = 100;
      v25 = 100;
      v24 = 100;
      v23 = 0;
      if ( (v9 & 0x200000200LL) != 0 )
      {
        v18 = *(_DWORD *)(a1 + 1132);
        v28 = 3;
      }
      else
      {
        if ( (v9 & 0x20E0000000000LL) != 0 )
        {
          v27 = *(_DWORD *)(*(_QWORD *)(a1 + 544) + 16LL);
          v28 = 4;
          goto LABEL_10;
        }
        if ( (v9 & 0x7F077) == 0 || (v17 = *v11, v27 = v17, v28 = 1, v17) && *((_BYTE *)v11 + 16) == 1 )
        {
LABEL_10:
          if ( (v9 & 0x1000000000LL) != 0 )
          {
            v15 = *(_DWORD **)(a1 + 1184);
            if ( !v15 )
            {
LABEL_12:
              GetRegistryDwordValue(
                (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                (__int64)L"~MHz",
                &v23);
LABEL_13:
              v32 = &v27;
              v33 = 4LL;
              v34 = &v28;
              v35 = 4LL;
              v36 = &v23;
              v37 = 4LL;
              v38 = &v29;
              v40 = &v25;
              v42 = &v24;
              v44 = &v26;
              v39 = 4LL;
              v41 = 4LL;
              v43 = 4LL;
              v45 = 4LL;
              EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v8, 0LL, (ULONG)8, &UserData);
              LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                        WdfDriverGlobals,
                                                        *(_QWORD *)(a1 + 208));
              return (char)EventDescriptorAndProcessorId;
            }
            v26 = 4;
            v29 = v15[6];
            v25 = v15[7];
            v24 = v15[8];
            v13 = v15[5];
            v23 = v13;
          }
          else if ( (v9 & 0x8000000) != 0 )
          {
            v16 = *(_DWORD **)(a1 + 248);
            if ( v16 )
            {
              v26 = 3;
              v29 = v16[25];
              v25 = v16[27];
              v24 = v16[28];
              v13 = v16[24];
              v23 = v13;
            }
            else
            {
              if ( !*(_QWORD *)(a1 + 392) )
                goto LABEL_12;
              v13 = *(_DWORD *)(a1 + 416);
              v26 = 3;
              v23 = v13;
              if ( !v13 )
              {
                GetRegistryDwordValue(
                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                  (__int64)L"~MHz",
                  &v23);
                v13 = v23;
              }
              v19 = *(_QWORD *)(a1 + 392);
              v29 = 100LL * *(_QWORD *)(a1 + 384) / v19;
              v20 = 100LL * *(_QWORD *)(a1 + 400) / v19;
              v21 = 100LL * *(_QWORD *)(a1 + 408);
              v25 = v20;
              v24 = v21 / v19;
              if ( !v24 )
                v24 = 1;
              if ( !(_DWORD)v20 )
                v25 = 1;
            }
          }
          else if ( (v9 & 0x80000000) != 0 )
          {
            v26 = 2;
            v13 = *(_DWORD *)(qword_140015BD8 + 28);
            v23 = v13;
            v25 = 100 * *(_DWORD *)(qword_140015BD8 + 36) / v13;
            v24 = 100 * *(_DWORD *)(qword_140015BD8 + 32) / v13;
          }
          else
          {
            if ( (v9 & 0x73300000) == 0 )
              goto LABEL_12;
            v26 = 1;
            if ( (v9 & 0x40000000) != 0 )
              v12 = *(_DWORD **)(a1 + 456);
            if ( (v9 & 0x70000000) != 0 )
            {
              v13 = v12[2];
              v23 = v13;
              v10 = 100 * v12[12 * (*v12 - 1) + 2] / v13;
              v25 = v10;
            }
            if ( (v9 & 0x3300000) != 0 )
              v24 = v14[5 * (*v14 - 1) + 1] * v10 / 0x64;
            else
              v24 = v10;
          }
          if ( v13 )
            goto LABEL_13;
          goto LABEL_12;
        }
        v18 = v17 + 1;
      }
      v27 = v18;
      goto LABEL_10;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
