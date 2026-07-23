/*
 * XREFs of BapdWriteEtwEvents @ 0x1406CDFBC
 * Callers:
 *     BapdpProcessEtwEvents @ 0x1406CEABC (BapdpProcessEtwEvents.c)
 *     PopBootLoaderTraceProcess @ 0x1407D2B50 (PopBootLoaderTraceProcess.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     BapdRegisterEtwProvider @ 0x140504704 (BapdRegisterEtwProvider.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     EtwSetInformation @ 0x14082E9F0 (EtwSetInformation.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 *     BapdpWriteEventDataToRegistry @ 0x140C0DF24 (BapdpWriteEventDataToRegistry.c)
 */

__int64 __fastcall BapdWriteEtwEvents(ULONGLONG a1, unsigned __int64 a2, unsigned int a3)
{
  const GUID *v3; // r15
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  ULONGLONG v6; // r12
  REGHANDLE v7; // r13
  REGHANDLE v8; // r14
  NTSTATUS v9; // esi
  NTSTATUS v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  int *v14; // r12
  unsigned int v15; // ecx
  __int64 v16; // r9
  __int64 v17; // r10
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  REGHANDLE v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdx
  NTSTATUS v24; // eax
  _WORD *v25; // r15
  __int64 v26; // rcx
  int v27; // ecx
  const WCHAR *v28; // rdx
  char v30; // [rsp+48h] [rbp-59h]
  NTSTATUS v31; // [rsp+4Ch] [rbp-55h]
  const GUID *v32; // [rsp+50h] [rbp-51h]
  unsigned __int64 v33; // [rsp+58h] [rbp-49h]
  REGHANDLE RegHandle; // [rsp+68h] [rbp-39h] BYREF
  REGHANDLE v36; // [rsp+70h] [rbp-31h] BYREF
  int Data; // [rsp+78h] [rbp-29h] BYREF
  REGHANDLE v38; // [rsp+80h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR EventInformation; // [rsp+98h] [rbp-9h] BYREF
  char *v41; // [rsp+A8h] [rbp+7h]
  __int64 v42; // [rsp+B0h] [rbp+Fh]
  char *v43; // [rsp+B8h] [rbp+17h]
  int v44; // [rsp+C0h] [rbp+1Fh]
  int v45; // [rsp+C4h] [rbp+23h]

  v3 = &NullGuid;
  v4 = a2 + a3;
  v5 = a2;
  v33 = v4;
  v6 = a1;
  Data = 0;
  v36 = 0LL;
  v7 = 0LL;
  v32 = &NullGuid;
  v8 = 0LL;
  RegHandle = 0LL;
  v38 = 0LL;
  DestinationString = 0LL;
  v9 = BapdRegisterEtwProvider(&BOOTENV_ETW_PROVIDER, 1, &v36);
  if ( v9 < 0 )
    goto LABEL_63;
  v30 = 0;
  v10 = BapdRegisterEtwProvider((const GUID *)&BOOT_PROVIDER_GUID, 0, &RegHandle);
  v7 = RegHandle;
  v9 = v10;
  v31 = v10;
  if ( v10 < 0 )
    goto LABEL_63;
  v11 = *(_QWORD *)BOOTENV_ETW_PROVIDER.Data4;
  v12 = *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1;
  while ( v5 < v4 )
  {
    v13 = *(_DWORD *)(v5 + 8);
    if ( v13 == 6 )
    {
      v14 = (int *)(v5 + 68);
      v15 = *(_DWORD *)(v5 + 64);
      if ( *(_BYTE *)(v5 + 51) == 11
        && v15 >= 7
        && (v16 = *(unsigned __int16 *)v14, (unsigned int)v16 >= 3)
        && (unsigned int)v16 <= v15 - 4
        && (v17 = *(unsigned __int16 *)((char *)v14 + v16), (unsigned int)v17 >= 4)
        && (unsigned int)v17 <= v15 - (unsigned int)v16 )
      {
        EventInformation.Reserved = 2;
        v43 = (char *)v14 + v16 + v17;
        v44 = v15 - v16 - v17;
        EventInformation.Size = v16;
        v41 = (char *)v14 + v16;
        v42 = (unsigned int)v17 | 0x100000000LL;
        v45 = 0;
        LODWORD(RegHandle) = 3;
      }
      else
      {
        LODWORD(v16) = *(_DWORD *)(v5 + 64);
        EventInformation.Size = v16;
        EventInformation.Reserved = 0;
        LODWORD(RegHandle) = 1;
      }
      v18 = (_QWORD *)(v5 + 32);
      EventInformation.Ptr = v5 + 68;
      v19 = *(_QWORD *)(v5 + 32);
      v20 = v12 - v19;
      if ( !v20 )
        v20 = v11 - *(_QWORD *)(v5 + 40);
      if ( v20 )
      {
        v22 = BOOT_PROVIDER_GUID - v19;
        if ( BOOT_PROVIDER_GUID == v19 )
          v22 = 0x6B3FAED6A2C303F9LL - *(_QWORD *)(v5 + 40);
        if ( v22 )
        {
          v23 = *(_QWORD *)&v3->Data1 - v19;
          if ( *(_QWORD *)&v3->Data1 == v19 )
            v23 = *(_QWORD *)v3->Data4 - *(_QWORD *)(v5 + 40);
          if ( v23 )
          {
            if ( v8 )
            {
              EtwUnregister(v8);
              v38 = 0LL;
            }
            v24 = BapdRegisterEtwProvider((const GUID *)(v5 + 32), *(_BYTE *)(v5 + 51) != 11, &v38);
            v8 = v38;
            v9 = v24;
            v31 = v24;
            if ( v24 < 0 )
              goto LABEL_63;
            v21 = v38;
            v32 = (const GUID *)(v5 + 32);
            if ( *(_BYTE *)(v5 + 51) == 11 )
              EtwSetInformation(v38, EventProviderSetTraits, (PVOID)EventInformation.Ptr, EventInformation.Size);
          }
          else
          {
            v21 = v8;
          }
        }
        else
        {
          v21 = v7;
          if ( !v30 && *(_BYTE *)(v5 + 51) == 11 )
          {
            EtwSetInformation(v7, EventProviderSetTraits, (PVOID)(v5 + 68), v16);
            v30 = 1;
          }
        }
      }
      else
      {
        v21 = v36;
      }
      v25 = (_WORD *)(v5 + 48);
      if ( EtwEventEnabled(v21, (PCEVENT_DESCRIPTOR)(v5 + 48)) )
      {
        v31 = EtwWriteEx(
                v21,
                (PCEVENT_DESCRIPTOR)(v5 + 48),
                0LL,
                0,
                (LPCGUID)((v5 + 16) & -(__int64)(*(_BYTE *)(v5 + 15) != 0)),
                0LL,
                RegHandle,
                &EventInformation);
        v9 = v31;
        if ( v31 < 0 )
          goto LABEL_63;
      }
      v12 = *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1;
      v11 = *(_QWORD *)BOOTENV_ETW_PROVIDER.Data4;
      v26 = *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1 - *v18;
      if ( *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1 == *v18 )
        v26 = *(_QWORD *)BOOTENV_ETW_PROVIDER.Data4 - *(_QWORD *)(v5 + 40);
      if ( v26 )
        goto LABEL_48;
      if ( *v25 == 11 )
      {
        v28 = L"POSTTime";
        goto LABEL_46;
      }
      if ( *v25 != 16 )
      {
        if ( *v25 == 20 )
        {
          if ( !*v14 )
          {
            ZwUpdateWnfStateData(&WNF_BOOT_DIRTY_SHUTDOWN, 0LL, 0, 0LL, 0LL, 0, 0);
            goto LABEL_47;
          }
LABEL_48:
          v4 = v33;
          v3 = v32;
LABEL_49:
          v6 = a1;
          goto LABEL_50;
        }
        if ( *v25 != 29 )
        {
          v27 = (unsigned __int16)*v25 - 32;
          if ( *v25 != 32 )
          {
            v3 = v32;
            v4 = v33;
            if ( v27 == 126 )
              ExBootAppErrorDiagCode = *v14;
            goto LABEL_49;
          }
          v28 = L"BootmgrUserInputTime";
LABEL_46:
          RtlInitUnicodeString(&DestinationString, v28);
          BapdpWriteEventDataToRegistry((PVOID)(v5 + 68));
LABEL_47:
          v11 = *(_QWORD *)BOOTENV_ETW_PROVIDER.Data4;
          v12 = *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1;
          goto LABEL_48;
        }
      }
      ExBootAppFailureStatus = *v14;
      goto LABEL_48;
    }
    if ( v13 == 5 && *(_DWORD *)(v5 + 4) >= 0x24u && *(_DWORD *)(v5 + 32) )
    {
      v41 = (char *)(v5 + 32);
      EventInformation.Ptr = v6;
      *(_QWORD *)&EventInformation.Size = 16LL;
      v42 = 4LL;
      EtwWriteEx(v36, &BootEventsLost, 0LL, 0, 0LL, 0LL, 2u, &EventInformation);
      v12 = *(_QWORD *)&BOOTENV_ETW_PROVIDER.Data1;
      v11 = *(_QWORD *)BOOTENV_ETW_PROVIDER.Data4;
    }
LABEL_50:
    v5 = (*(unsigned int *)(v5 + 4) + v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  if ( ((__int64)ExpSysDbgLock.MutantListHead.Flink & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BootmgrUserInputTime");
    BapdpWriteEventDataToRegistry(&Data);
    RtlInitUnicodeString(&DestinationString, L"POSTTime");
    BapdpWriteEventDataToRegistry(&Data);
    if ( (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3856LL) & 8) != 0 )
      EtwWriteEx(v36, &BootGraphicsDisabledByKsr, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  v9 = v31;
LABEL_63:
  if ( v36 )
    EtwUnregister(v36);
  if ( v7 )
    EtwUnregister(v7);
  if ( v8 )
    EtwUnregister(v8);
  return (unsigned int)v9;
}
