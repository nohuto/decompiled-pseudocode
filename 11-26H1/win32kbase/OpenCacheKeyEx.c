/*
 * XREFs of OpenCacheKeyEx @ 0x1400E1D30
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400DFA30 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileValue @ 0x1400E13A0 (FastGetProfileValue.c)
 *     FastGetProfileDwordEx @ 0x1400E1800 (FastGetProfileDwordEx.c)
 *     CheckDesktopPolicy @ 0x1400E1950 (CheckDesktopPolicy.c)
 *     FastGetProfileStringW @ 0x1400E1B40 (FastGetProfileStringW.c)
 *     FastWriteProfileValue @ 0x1400E2410 (FastWriteProfileValue.c)
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400E2678 (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 *     FastWriteProfileStringW @ 0x1400E2BC0 (FastWriteProfileStringW.c)
 *     InitScancodeMap @ 0x1400E2C80 (InitScancodeMap.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1400E31A8 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     CheckDesktopPolicyChange @ 0x1401CDFC0 (CheckDesktopPolicyChange.c)
 *     FastGetProfileKeysW @ 0x1401CE190 (FastGetProfileKeysW.c)
 *     InitCreateUserSubsystem @ 0x1402F3C80 (InitCreateUserSubsystem.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1400E2140 (-InitPreviousUserString@@YAXXZ.c)
 *     AccessCheckObject @ 0x1400E2590 (AccessCheckObject.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400E2B44 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     EditionOpenProfileKey @ 0x140248F8C (EditionOpenProfileKey.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void *__fastcall OpenCacheKeyEx(PCUNICODE_STRING Source, unsigned int a2, ACCESS_MASK a3, int *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  PCUNICODE_STRING v8; // r15
  __int64 CurrentProcess; // r13
  __int64 v10; // rcx
  int (*v11)(void); // rax
  int v12; // r14d
  __int64 v13; // rsi
  int v14; // eax
  NTSTATUS v15; // r15d
  const UNICODE_STRING *v17; // rdx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  NTSTATUS v24; // eax
  __int64 v25; // r8
  PVOID v26; // r13
  __int64 v27; // rcx
  unsigned int CurrentWin32kSessionId; // eax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  PCUNICODE_STRING v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Sourcea[32]; // [rsp+90h] [rbp-70h] BYREF
  char v36; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a2;
  v5 = 0LL;
  v32 = Source;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v8 = Source;
  CurrentProcess = PsGetCurrentProcess(Source);
  v33 = CurrentProcess;
  KeyHandle = 0LL;
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 48) + 2784LL);
  if ( v11 && v11() >= 0 )
    return (void *)EditionOpenProfileKey((unsigned int)v4, a3, a4);
  if ( a3 == 131097 && ((_DWORD)v4 == 23 || (_DWORD)v4 == 4) )
  {
    v12 = *a4;
  }
  else
  {
    if ( a4 && (*a4 & 0x10) != 0 )
    {
LABEL_36:
      *a4 = 0;
      return 0LL;
    }
    v12 = 1;
  }
  v13 = 16 * v4;
  while ( 1 )
  {
    *(_DWORD *)&Destination.Length = 0x2000000;
    Destination.Buffer = (PWSTR)&v36;
    if ( (v12 & 4) != 0 )
    {
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
      RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
      v14 = -5;
    }
    else
    {
      if ( *off_1402559E0[*(unsigned int *)((char *)&unk_140255A40 + v13)] == 77 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
      }
      else
      {
        if ( v8 )
        {
          v17 = v8;
        }
        else
        {
          InitPreviousUserString();
          v17 = (const UNICODE_STRING *)(W32GetUserSessionState(v19, v18, v20) + 67816);
        }
        RtlAppendUnicodeStringToString(&Destination, v17);
      }
      if ( (v12 & 2) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
        v14 = -3;
      }
      else if ( (v12 & 8) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"Remote\\");
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v27);
        RtlStringCchPrintfW(Sourcea, 0x20uLL, L"%ld\\", CurrentWin32kSessionId);
        RtlAppendUnicodeToString(&Destination, Sourcea);
        v14 = -9;
      }
      else
      {
        if ( a4 && (*a4 & 0x10) != 0 )
          goto LABEL_36;
        v14 = -2;
      }
    }
    v12 &= v14;
    RtlAppendUnicodeToString(&Destination, off_1402559E0[*(unsigned int *)((char *)&unk_140255A40 + v13)] + 1);
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)((char *)&unk_140255A40 + v13 + 8));
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v15 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
    if ( a3 != 131097
      && CurrentProcess != *(_QWORD *)(W32GetUserGdiSessionState() + 40)
      && CurrentProcess != *(_QWORD *)(W32GetUserSessionState(v22, v21, v23) + 68368) )
    {
      if ( v15 < 0 )
        goto LABEL_24;
      Object = 0LL;
      v24 = ObReferenceObjectByHandle(KeyHandle, a3, 0LL, 0, &Object, 0LL);
      v26 = Object;
      if ( v24 < 0 )
      {
        ZwClose(KeyHandle);
        v15 = -1073741790;
        goto LABEL_24;
      }
      LOBYTE(v25) = 1;
      if ( !(unsigned int)AccessCheckObject(Object, a3, v25, &KeyMapping) )
      {
        ZwClose(KeyHandle);
        v15 = -1073741790;
      }
      ObfDereferenceObject(v26);
    }
    if ( v15 >= 0 )
      break;
LABEL_24:
    if ( !v12 )
      break;
    v8 = v32;
    CurrentProcess = v33;
  }
  if ( a4 )
    *a4 = v12;
  if ( v15 >= 0 )
    return KeyHandle;
  return (void *)v5;
}
