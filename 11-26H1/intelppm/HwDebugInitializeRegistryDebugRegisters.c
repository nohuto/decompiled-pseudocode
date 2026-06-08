/*
 * XREFs of HwDebugInitializeRegistryDebugRegisters @ 0x1400484A0
 * Callers:
 *     HwDebugDiagnosticRegistryHandler @ 0x140004EC0 (HwDebugDiagnosticRegistryHandler.c)
 *     ProcLibGlobalInit @ 0x14004B8C0 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003B890 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugSetKeyNotification @ 0x14003BDB8 (HwDebugSetKeyNotification.c)
 */

__int64 __fastcall HwDebugInitializeRegistryDebugRegisters(int a1)
{
  __int64 v1; // r15
  unsigned int v2; // edi
  unsigned __int8 *Pool2; // r14
  const WCHAR *v4; // rdx
  int v5; // ebx
  unsigned __int16 v6; // r9
  int v7; // edx
  ULONG i; // esi
  unsigned int v9; // eax
  unsigned __int8 *v10; // rsi
  __int64 v11; // r12
  _QWORD *v12; // r15
  unsigned int j; // edi
  void *v14; // rcx
  void *KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  _OWORD KeyInformation[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+27h]

  v1 = a1;
  v21 = 0LL;
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
    v5 = HwDebugSetKeyNotification(&ObjectAttributes);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v6 = 12;
      goto LABEL_7;
    }
  }
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, (ULONG)40, &ResultLength);
    if ( v5 >= 0 )
    {
      if ( HIDWORD(KeyInformation[0]) )
      {
        Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, (unsigned int)(40 * HIDWORD(KeyInformation[0])), 1919119952LL);
        if ( Pool2 )
        {
          for ( i = 0; (unsigned int)i < HIDWORD(KeyInformation[0]); v2 = v9 )
          {
            v5 = HwDebugInitializeRegistryDebugRegister(KeyHandle, i, (__int64)&Pool2[40 * v2]);
            v9 = v2 + 1;
            if ( v5 < 0 )
              v9 = v2;
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
          v5 = -1073741670;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v7) = 2;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v7,
              4,
              14,
              (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids);
          }
        }
      }
      else
      {
        v5 = 0;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 13;
LABEL_7:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        v6,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
        v5);
    }
  }
LABEL_23:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
  {
    if ( v2 )
    {
      v10 = Pool2 + 16;
      v11 = v2;
      do
      {
        v12 = (_QWORD *)*((_QWORD *)v10 + 1);
        if ( v12 )
        {
          for ( j = 0; j < *v10; ++j )
          {
            v14 = (void *)v12[2 * j];
            if ( v14 )
              ExFreePoolWithTag(v14, (ULONG)1919119952);
          }
          ExFreePoolWithTag(v12, (ULONG)1919119952);
        }
        v10 += 40;
        --v11;
      }
      while ( v11 );
    }
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  }
  return (unsigned int)v5;
}
