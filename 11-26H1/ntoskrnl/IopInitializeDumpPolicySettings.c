/*
 * XREFs of IopInitializeDumpPolicySettings @ 0x140796374
 * Callers:
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x1405D35F0 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140795CA0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     CmIsStateSeparationEnabled @ 0x1404CEFB4 (CmIsStateSeparationEnabled.c)
 *     IopDumpIsTracingEnabled @ 0x14052F1A4 (IopDumpIsTracingEnabled.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x1405D3D24 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140B1EB30 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall IopInitializeDumpPolicySettings(char a1)
{
  const WCHAR *v2; // rdx
  UNICODE_STRING *p_DestinationString; // rdi
  const WCHAR *v4; // rdx
  int v5; // eax
  int UserData; // [rsp+28h] [rbp-59h]
  char UserDataa; // [rsp+28h] [rbp-59h]
  HANDLE Handle; // [rsp+38h] [rbp-49h] BYREF
  PVOID P; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING v12; // [rsp+58h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+68h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+78h] [rbp-9h] BYREF
  PVOID *p_P; // [rsp+98h] [rbp+17h]
  __int64 v16; // [rsp+A0h] [rbp+1Fh]

  Handle = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  HIDWORD(v13.Ptr) = 0;
  v12 = 0LL;
  if ( !CmIsStateSeparationEnabled() )
  {
    v2 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
LABEL_5:
    RtlInitUnicodeString(&DestinationString, v2);
    LOBYTE(UserData) = 0;
    if ( (int)IopOpenRegistryKey(&Handle, 0LL, &DestinationString, 131097LL, UserData) < 0 )
      goto LABEL_12;
    goto LABEL_6;
  }
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\CrashControl");
  UserDataa = 0;
  if ( (int)IopOpenRegistryKey(&Handle, 0LL, &DestinationString, 131097LL, UserDataa) < 0 )
  {
    v2 = L"\\Registry\\Machine\\OSBOOT\\System\\CurrentControlSet\\Control\\CrashControl";
    goto LABEL_5;
  }
LABEL_6:
  if ( (int)IopGetRegistryValue(Handle) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      AllowCrashDump = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
    ExFreePoolWithTag(P, 0);
  }
  ObCloseHandle(Handle, 0);
LABEL_12:
  if ( !CmIsStateSeparationEnabled() )
  {
    p_DestinationString = &DestinationString;
    v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\LiveDump";
LABEL_16:
    RtlInitUnicodeString(p_DestinationString, v4);
    LOBYTE(UserData) = 0;
    v5 = IopOpenRegistryKey(&Handle, 0LL, p_DestinationString, 131097LL, UserData);
    if ( v5 < 0 )
      goto LABEL_23;
    goto LABEL_17;
  }
  RtlInitUnicodeString(&v12, L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\LiveDump");
  LOBYTE(UserData) = 0;
  if ( (int)IopOpenRegistryKey(&Handle, 0LL, &v12, 131097LL, UserData) < 0 )
  {
    p_DestinationString = &v12;
    v4 = L"\\Registry\\Machine\\OSBOOT\\System\\CurrentControlSet\\Control\\LiveDump";
    goto LABEL_16;
  }
LABEL_17:
  if ( (int)IopGetRegistryValue(Handle) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      AllowLiveDump = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
    ExFreePoolWithTag(P, 0);
  }
  LOBYTE(v5) = ObCloseHandle(Handle, 0);
LABEL_23:
  if ( a1 )
  {
    if ( (int)ExSubscribeWnfStateChange(
                (unsigned int)&P,
                (unsigned int)&WNF_DUMP_ALLOW_CRASHDUMP_POLICY_VALUE_CHANGED,
                1,
                0,
                (__int64)IopCrashDumpPolicyChangeWnfCallback,
                0LL) < 0 )
    {
      if ( IopDumpIsTracingEnabled() )
      {
        v13.Ptr = (ULONGLONG)"Failed to subscribe for policy value change notification";
        *(_QWORD *)&v13.Size = 56LL;
        EtwWrite(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_POLICY_OPERATION_FAILURE, 0LL, 1u, &v13);
      }
      if ( (unsigned int)dword_140E06CD8 > 5 && tlgKeywordOn((__int64)&dword_140E06CD8, 0x400000000000LL) )
      {
        P = (PVOID)0x1000000;
        p_P = &P;
        v16 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06CD8,
          (unsigned __int8 *)byte_140047411,
          0LL,
          0LL,
          3u,
          &v14);
      }
    }
    LOBYTE(v5) = IopLiveDumpRegisterWnfNotificationCallback();
  }
  return v5;
}
