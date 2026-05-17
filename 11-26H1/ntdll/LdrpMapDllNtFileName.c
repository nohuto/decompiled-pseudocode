/*
 * XREFs of LdrpMapDllNtFileName @ 0x1800833B0
 * Callers:
 *     LdrpMapDllFullPath @ 0x180084A80 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180086610 (LdrpMapDllRetry.c)
 *     LdrpMapDllSearchPath @ 0x18011C9D0 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogDllState @ 0x1800832E0 (LdrpLogDllState.c)
 *     LdrpCheckForRetryLoading @ 0x180083B00 (LdrpCheckForRetryLoading.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C1AB0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DBCCC (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogError @ 0x1800FC390 (LdrpLogError.c)
 *     LdrpValidateIntegrityContinuity @ 0x180101A34 (LdrpValidateIntegrityContinuity.c)
 *     LdrpSetModuleSigningLevel @ 0x180101B34 (LdrpSetModuleSigningLevel.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenFile @ 0x18015F5A0 (NtOpenFile.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x180161DF0 (NtRaiseHardError.c)
 *     ZwSystemDebugControl @ 0x180162950 (ZwSystemDebugControl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  ULONG v6; // eax
  __int64 v7; // r12
  __int64 v8; // rcx
  int i; // r13d
  NTSTATUS v10; // eax
  int v11; // r9d
  int v12; // edi
  int v13; // r13d
  int v14; // eax
  int v16; // eax
  int v17; // r9d
  char *v18; // rcx
  int v19; // r9d
  char *v20; // rcx
  __int64 v21; // rdx
  HANDLE FileHandle; // [rsp+40h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING v24; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  char v28; // [rsp+F0h] [rbp+67h] BYREF
  int v29; // [rsp+100h] [rbp+77h] BYREF
  int v30; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 176);
  v30 = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v24 = 0LL;
  Handle = 0LL;
  if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, 0LL) )
    return 3221226029LL;
  LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 0x14A5u);
  v6 = 64;
  ObjectAttributes.Length = 48;
  if ( !LdrpUseImpersonatedDeviceMap )
    v6 = 2112;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = v6;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v8 = 2147353476LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v18 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v18 & 0x20) != 0 )
    {
      LOBYTE(v17) = -1;
      LdrpLogEtwEvent(5253, -1, 255, v17, 0LL, 0LL);
    }
  }
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
  {
    v24 = *a2;
    ZwSystemDebugControl(38LL, &v24, 16LL, 0LL, 0, 0LL);
  }
  for ( i = 0; ; i = 1 )
  {
    v10 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
    v12 = v10;
    if ( v10 >= 0 )
      break;
    if ( v10 == -1073741772 || v10 == -1073741766 )
      return (unsigned int)-1073741515;
    if ( v10 != -1073741790 || i || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
      return (unsigned int)v12;
  }
  if ( LdrpAuditIntegrityContinuity
    && (v12 = LdrpValidateIntegrityContinuity(a1, FileHandle), v12 < 0)
    && LdrpEnforceIntegrityContinuity
    || (v13 = 0x1000000, (*(_DWORD *)(a1 + 32) & 0x1000000) != 0)
    && (v21 = *(_QWORD *)(a1 + 56), v29 = 0, v28 = 0, (NtCurrentPeb()->BitField & 0x10) == 0)
    && (LOBYTE(v11) = 8,
        v12 = LdrpSetModuleSigningLevel((_DWORD)FileHandle, v21, (unsigned int)&v29, v11, (__int64)&v28),
        v12 < 0) )
  {
LABEL_34:
    NtClose(FileHandle);
    return (unsigned int)v12;
  }
  if ( UseWOW64 && (*(_DWORD *)(a1 + 32) & 0x800) == 0 )
    v13 = 17825792;
  v14 = NtCreateSection(&Handle, 13LL, 0LL, 0LL, 16, v13, FileHandle);
  v12 = v14;
  if ( v14 < 0 )
  {
    if ( (unsigned int)(v14 + 1073740674) > 1 )
    {
      if ( v14 == -1073741801 )
      {
LABEL_24:
        LdrpLogError((unsigned int)v12, 5253LL, 0LL, v2 + 72);
        goto LABEL_34;
      }
      if ( v14 != -1073740702 )
      {
        if ( v14 != -1073741670 && v14 != -1073741523 )
        {
          v25[1] = v14;
          v25[0] = v2 + 72;
          if ( (int)NtRaiseHardError(3221225595LL, 2LL, 1LL, v25, 1, &v30) >= 0 && LdrInitState != 3 )
            ++LdrpFatalHardErrorCount;
        }
        goto LABEL_24;
      }
    }
    v12 = LdrAppxHandleIntegrityFailure((unsigned int)v14);
    goto LABEL_24;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v20 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v20 & 0x20) != 0 )
    {
      LOBYTE(v19) = -1;
      LdrpLogEtwEvent(5254, -1, 255, v19, 0LL, 0LL);
    }
  }
  if ( !UseWOW64
    && (*(_DWORD *)(a1 + 32) & 0x100) == 0
    && LdrpAdvapi32DllHandle
    && (v16 = ((__int64 (__fastcall *)(HANDLE, UNICODE_STRING *))(__ROR8__(
                                                                    LdrpSaferIsDllAllowedRoutine,
                                                                    64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                FileHandle,
                a2),
        v12 = v16,
        v16 != -1073741275)
    && v16 < 0
    || (v12 = LdrpMapDllWithSectionHandle(a1, Handle), !v3)
    || v12 < 0 )
  {
    NtClose(Handle);
    goto LABEL_34;
  }
  *(_QWORD *)(a1 + 184) = FileHandle;
  *(_QWORD *)(a1 + 24) = Handle;
  return (unsigned int)v12;
}
