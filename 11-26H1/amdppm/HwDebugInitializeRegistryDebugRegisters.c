/*
 * XREFs of HwDebugInitializeRegistryDebugRegisters @ 0x14003A80C
 * Callers:
 *     HwDebugDiagnosticRegistryHandler @ 0x14000C870 (HwDebugDiagnosticRegistryHandler.c)
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003A2E4 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugSetKeyNotification @ 0x14003AAF4 (HwDebugSetKeyNotification.c)
 */

__int64 __fastcall HwDebugInitializeRegistryDebugRegisters(int a1)
{
  __int64 v1; // r15
  unsigned int v2; // edi
  unsigned __int8 *Pool2; // r14
  const WCHAR *v4; // rdx
  int v5; // edx
  int v6; // ebx
  int v7; // r9d
  int v8; // edx
  ULONG i; // esi
  unsigned int v10; // eax
  unsigned __int8 *v11; // rsi
  __int64 v12; // r12
  _QWORD *v13; // r15
  unsigned int j; // edi
  void *v15; // rcx
  void *KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  _OWORD KeyInformation[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+27h]

  v1 = a1;
  v22 = 0LL;
  v2 = 0;
  *((_DWORD *)&ObjectAttributes.Length + 1) = 0;
  Pool2 = 0LL;
  *((_DWORD *)&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor\\HwDebugRegisters";
  DestinationString = 0LL;
  if ( a1 )
    v4 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack\\HwDebugRegisters";
  RtlInitUnicodeString(&DestinationString, v4);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( (_DWORD)v1 == 1 )
  {
    v6 = HwDebugSetKeyNotification(&ObjectAttributes);
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v7 = 12;
      goto LABEL_7;
    }
  }
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    v6 = ZwQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, (ULONG)40, &ResultLength);
    if ( v6 >= 0 )
    {
      if ( HIDWORD(KeyInformation[0]) )
      {
        Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, (unsigned int)(40 * HIDWORD(KeyInformation[0])), 1919119952LL);
        if ( Pool2 )
        {
          for ( i = 0; (unsigned int)i < HIDWORD(KeyInformation[0]); v2 = v10 )
          {
            v6 = HwDebugInitializeRegistryDebugRegister(KeyHandle, i, (__int64)&Pool2[40 * v2]);
            v10 = v2 + 1;
            if ( v6 < 0 )
              v10 = v2;
            ++i;
          }
          LOBYTE(Globals[2 * v1 + 297]) = v2;
          if ( v2 )
          {
            Globals[2 * v1 + 298] = (__int64)Pool2;
            Pool2 = 0LL;
          }
        }
        else
        {
          v6 = -1073741670;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 2;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v8,
              4,
              14,
              (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids);
          }
        }
      }
      else
      {
        v6 = 0;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 13;
LABEL_7:
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        4,
        v7,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
        v6);
    }
  }
LABEL_23:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
  {
    if ( v2 )
    {
      v11 = Pool2 + 16;
      v12 = v2;
      do
      {
        v13 = (_QWORD *)*((_QWORD *)v11 + 1);
        if ( v13 )
        {
          for ( j = 0; j < *v11; ++j )
          {
            v15 = (void *)v13[2 * j];
            if ( v15 )
              ExFreePoolWithTag(v15, (ULONG)1919119952);
          }
          ExFreePoolWithTag(v13, (ULONG)1919119952);
        }
        v11 += 40;
        --v12;
      }
      while ( v12 );
    }
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  }
  return (unsigned int)v6;
}
