/*
 * XREFs of ?GetSpriteFillColorOverrideForCurrentProcess@@YAKXZ @ 0x14012D450
 * Callers:
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 */

__int64 GetSpriteFillColorOverrideForCurrentProcess(void)
{
  unsigned int Buffer_high; // esi
  char v1; // r13
  __int64 v2; // rdx
  WCHAR *v3; // rcx
  WCHAR v4; // ax
  WCHAR *v5; // rax
  __int64 CurrentProcess; // rax
  char *v7; // rbx
  __int64 v8; // rdx
  WCHAR *ULong64FromUser; // rax
  WCHAR *v10; // rdx
  ULONG64 v11; // r8
  int Length; // eax
  _WORD *v13; // rcx
  __int64 v14; // r8
  WCHAR *v15; // rax
  _WORD *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r15
  WCHAR *v19; // r8
  int v20; // edx
  __int64 v21; // rax
  WCHAR v22; // r10
  volatile void *Address; // [rsp+38h] [rbp-320h] BYREF
  ULONG ResultLength[4]; // [rsp+40h] [rbp-318h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-308h] BYREF
  int v27; // [rsp+60h] [rbp-2F8h]
  _WORD *v28; // [rsp+68h] [rbp-2F0h]
  __int64 v29; // [rsp+70h] [rbp-2E8h]
  WCHAR *v30; // [rsp+78h] [rbp-2E0h]
  __int64 v31; // [rsp+80h] [rbp-2D8h]
  __int64 v32; // [rsp+88h] [rbp-2D0h]
  __int64 v33; // [rsp+90h] [rbp-2C8h]
  WCHAR *v34; // [rsp+98h] [rbp-2C0h]
  __int64 v35; // [rsp+A0h] [rbp-2B8h]
  _WORD *v36; // [rsp+A8h] [rbp-2B0h]
  __int64 v37; // [rsp+B0h] [rbp-2A8h]
  __int64 v38; // [rsp+B8h] [rbp-2A0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-298h] BYREF
  struct _UNICODE_STRING KeyValueInformation; // [rsp+100h] [rbp-258h] BYREF
  WCHAR SourceString[264]; // [rsp+120h] [rbp-238h] BYREF

  Buffer_high = 0;
  v1 = 0;
  v2 = 260LL;
  v3 = SourceString;
  do
  {
    if ( v2 == -2147483386 )
      break;
    v4 = *(WCHAR *)((char *)v3
                  + (char *)L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\"
                  - (char *)SourceString);
    if ( !v4 )
      break;
    *v3++ = v4;
    --v2;
  }
  while ( v2 );
  v5 = v3 - 1;
  if ( v2 )
    v5 = v3;
  *v5 = 0;
  v28 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v3);
  Address = (volatile void *)PsGetProcessPeb(CurrentProcess);
  v32 = 1LL;
  ProbeForRead(Address, 1uLL, 1u);
  v7 = (char *)*((_QWORD *)Address + 4);
  v33 = 1LL;
  ProbeForRead(v7, 1uLL, 1u);
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(_DWORD *)&DestinationString.Length = RtlReadULongFromUser(v7 + 96, v8);
  ULong64FromUser = (WCHAR *)RtlReadULong64FromUser(v7 + 104);
  v10 = ULong64FromUser;
  DestinationString.Buffer = ULong64FromUser;
  KeyValueInformation = DestinationString;
  if ( ((unsigned __int8)ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (ULONG64)ULong64FromUser + DestinationString.Length + 2;
  if ( v11 <= (unsigned __int64)ULong64FromUser || v11 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( DestinationString.Length > DestinationString.MaximumLength || (DestinationString.Length & 1) != 0 )
  {
    if ( (DestinationString.Length & 1) != 0 )
    {
      LODWORD(Address) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 383LL);
    }
    ExRaiseAccessViolation();
  }
  Length = DestinationString.Length;
  v13 = (WCHAR *)((char *)v10 + DestinationString.Length);
  v28 = v13;
  while ( Length )
  {
    v16 = v13 - 1;
    if ( *(v13 - 1) == 92 )
      break;
    --v13;
    v28 = v16;
    Length -= 2;
  }
  v29 = 0LL;
  v14 = 260LL;
  v35 = 260LL;
  v15 = SourceString;
  v34 = SourceString;
  while ( v14 && *v15 )
  {
    v34 = ++v15;
    v35 = --v14;
  }
  v20 = 0;
  if ( !v14 )
    v20 = -1073741811;
  if ( v20 < 0 )
    v29 = 0LL;
  else
    v29 = 260 - v14;
  if ( v20 >= 0 )
  {
    v17 = 2147483646LL;
    v38 = 2147483646LL;
    v36 = v13;
    v18 = 260 - v29;
    v37 = 260 - v29;
    v19 = &SourceString[v29];
    v30 = v19;
    v20 = 0;
    v21 = 0LL;
    v31 = 0LL;
    while ( v18 )
    {
      if ( !v17 )
        goto LABEL_26;
      v22 = *v13;
      if ( !*v13 )
        goto LABEL_26;
      v36 = ++v13;
      *v19++ = v22;
      v30 = v19;
      v37 = --v18;
      v38 = --v17;
      v31 = ++v21;
    }
    v30 = --v19;
    v31 = v21 - 1;
    v20 = -2147483643;
LABEL_26:
    *v19 = 0;
  }
  v27 = v20;
  if ( v20 >= 0 )
  {
    DestinationString = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    Address = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey((PHANDLE)&Address, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ResultLength[0] = 0;
      RtlInitUnicodeString(&DestinationString, L"SpriteFillColor");
      if ( ZwQueryValueKey(
             (HANDLE)Address,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             ResultLength) >= 0
        && *(_QWORD *)(&KeyValueInformation.MaximumLength + 1) == 0x400000004LL )
      {
        Buffer_high = HIDWORD(KeyValueInformation.Buffer);
        v1 = 1;
      }
      ZwClose((HANDLE)Address);
    }
  }
  if ( v1 && Buffer_high )
  {
    if ( (Buffer_high & 0xFF000000) != 0 )
      return 0;
  }
  else
  {
    return (unsigned int)-1;
  }
  return Buffer_high;
}
