/*
 * XREFs of ProcLibTraceSummary @ 0x14003F680
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140024B00 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1400029E0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

char __fastcall ProcLibTraceSummary(_QWORD *a1)
{
  _BYTE *Pool2; // rbx
  char *v2; // r13
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v5; // r14
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int *v8; // r15
  unsigned int *v9; // r12
  int *v10; // r9
  __int64 v11; // rdx
  ULONG v12; // esi
  unsigned int v13; // edx
  unsigned int v14; // r9d
  unsigned int v15; // edx
  __int64 v16; // r9
  unsigned int i; // r10d
  __int64 v18; // r8
  __int64 v19; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int8 v24; // [rsp+30h] [rbp-59h]
  unsigned int v25; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-51h] BYREF
  int v27; // [rsp+3Ch] [rbp-4Dh] BYREF
  _DWORD v28[4]; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  int *v30; // [rsp+60h] [rbp-29h]
  __int64 v31; // [rsp+68h] [rbp-21h]
  unsigned int *v32; // [rsp+70h] [rbp-19h]
  __int64 v33; // [rsp+78h] [rbp-11h]
  int *v34; // [rsp+80h] [rbp-9h]
  __int64 v35; // [rsp+88h] [rbp-1h]
  _BYTE *v36; // [rsp+90h] [rbp+7h]
  unsigned int v37; // [rsp+98h] [rbp+Fh]
  int v38; // [rsp+9Ch] [rbp+13h]

  v28[0] = 0;
  Pool2 = 0LL;
  v2 = 0LL;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              (__int64)a1,
                                                              (__int64)&PPM_ETW_SUMMARY_RUNDOWN,
                                                              (__int64)&PPM_ETW_SUMMARY_RUNDOWN_HV,
                                                              (__int64)v28,
                                                              &UserData);
  v5 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        a1[26],
        0LL);
      v6 = a1[35];
      v7 = 0;
      v8 = (unsigned int *)a1[66];
      v9 = (unsigned int *)a1[56];
      v10 = (int *)a1[63];
      v11 = 0LL;
      v27 = 0;
      v12 = 4;
      v25 = 0;
      v26 = 0;
      v24 = 0;
      if ( (v6 & 0x7F077) != 0 )
      {
        v7 = *v8;
        v25 = v7;
        if ( !v7 || *((_BYTE *)v8 + 16) != 1 )
        {
          ++v7;
          v24 = 1;
          v25 = v7;
        }
      }
      if ( (v6 & 0x70000000) != 0 )
      {
        if ( (v6 & 0x40000000) != 0 )
          v9 = (unsigned int *)a1[57];
        v11 = *v9;
        v26 = *v9;
      }
      if ( (v6 & 0x3300000) != 0 )
        v27 = *v10;
      v31 = 4LL;
      v30 = (int *)&v25;
      v32 = &v26;
      v34 = &v27;
      v33 = 4LL;
      v35 = 4LL;
      if ( (v6 & 0x7F077) != 0 )
      {
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, v7, 1919119952LL);
        if ( !Pool2 )
        {
LABEL_14:
          LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                    WdfDriverGlobals,
                                                    a1[26]);
          return (char)EventDescriptorAndProcessorId;
        }
        if ( v24 )
          *Pool2 = 1;
        v13 = v25;
        v14 = 0;
        if ( v25 != v24 )
        {
          do
          {
            v21 = v14;
            v22 = v24 + v14++;
            Pool2[v22] = v8[5 * v21 + 4];
            v13 = v25;
          }
          while ( v14 < v25 - v24 );
        }
        v37 = v13;
        v12 = 5;
        v11 = v26;
        v36 = Pool2;
        v38 = 0;
      }
      if ( (_DWORD)v11 )
      {
        v2 = (char *)ExAllocatePool2(256LL, 8 * v11, 1919119952LL);
        if ( !v2 )
          goto LABEL_22;
        v15 = v26;
        v16 = 0LL;
        for ( i = v9[2]; (unsigned int)v16 < v26; v15 = v26 )
        {
          v18 = 8 * v16;
          v19 = 3 * v16;
          v16 = (unsigned int)(v16 + 1);
          v19 *= 16LL;
          *(_DWORD *)&v2[v18] = *(unsigned int *)((char *)v9 + v19 + 8);
          *(_DWORD *)&v2[v18 + 4] = 100 * *(unsigned int *)((char *)v9 + v19 + 8) / i;
        }
        v20 = &UserData + (unsigned int)v12++;
        v20->Ptr = (unsigned __int64)v2;
        *(_QWORD *)&v20->Size = 8 * v15;
      }
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v5, 0LL, v12, &UserData);
LABEL_22:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, (ULONG)1919119952);
      if ( v2 )
        ExFreePoolWithTag(v2, (ULONG)1919119952);
      goto LABEL_14;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
