/*
 * XREFs of OpenCacheKeyEx @ 0x1400A9CE0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A57B0 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastWriteProfileValue @ 0x1400A8870 (FastWriteProfileValue.c)
 *     FastGetProfileValue @ 0x1400A9350 (FastGetProfileValue.c)
 *     FastGetProfileDwordEx @ 0x1400A97B0 (FastGetProfileDwordEx.c)
 *     CheckDesktopPolicy @ 0x1400A9900 (CheckDesktopPolicy.c)
 *     FastGetProfileStringW @ 0x1400A9AF0 (FastGetProfileStringW.c)
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400AA4BC (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 *     FastWriteProfileStringW @ 0x1400AA950 (FastWriteProfileStringW.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1400AB0B4 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     InitScancodeMap @ 0x1400AB2C0 (InitScancodeMap.c)
 *     CheckDesktopPolicyChange @ 0x1401AB1F0 (CheckDesktopPolicyChange.c)
 *     FastGetProfileKeysW @ 0x1401AB3B0 (FastGetProfileKeysW.c)
 *     InitCreateUserSubsystem @ 0x1402EA574 (InitCreateUserSubsystem.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A87F8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ApiSetEditionOpenProfileKey @ 0x1400AA0EC (ApiSetEditionOpenProfileKey.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1400AA174 (-InitPreviousUserString@@YAXXZ.c)
 *     AccessCheckObject @ 0x1400AA330 (AccessCheckObject.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void *__fastcall OpenCacheKeyEx(PCUNICODE_STRING Source, unsigned int a2, ACCESS_MASK a3, int *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  PCUNICODE_STRING v8; // r15
  __int64 v9; // r12
  int v10; // r14d
  __int64 v11; // rsi
  int v12; // eax
  NTSTATUS v13; // r15d
  const UNICODE_STRING *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // r8
  PVOID v22; // r12
  unsigned int CurrentWin32kSessionId; // eax
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  PCUNICODE_STRING v27; // [rsp+50h] [rbp-B0h]
  __int64 CurrentProcess; // [rsp+58h] [rbp-A8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Sourcea[32]; // [rsp+90h] [rbp-70h] BYREF
  char v31; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a2;
  v5 = 0LL;
  v27 = Source;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  v8 = Source;
  CurrentProcess = PsGetCurrentProcess();
  v9 = CurrentProcess;
  if ( (unsigned int)ApiSetEditionOpenProfileKey((unsigned int)v4, a3, a4, &KeyHandle) )
    return KeyHandle;
  if ( a3 == 131097 && ((_DWORD)v4 == 23 || (_DWORD)v4 == 4) )
  {
    v10 = *a4;
  }
  else
  {
    if ( a4 && (*a4 & 0x10) != 0 )
    {
LABEL_35:
      *a4 = 0;
      return 0LL;
    }
    v10 = 1;
  }
  v11 = 16 * v4;
  while ( 1 )
  {
    *(_DWORD *)&Destination.Length = 0x2000000;
    Destination.Buffer = (PWSTR)&v31;
    if ( (v10 & 4) != 0 )
    {
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
      RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
      v12 = -5;
    }
    else
    {
      if ( *off_14024AF30[*(unsigned int *)((char *)&unk_14024AF90 + v11)] == 77 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
      }
      else
      {
        if ( v8 )
        {
          v15 = v8;
        }
        else
        {
          InitPreviousUserString();
          v15 = (const UNICODE_STRING *)(W32GetUserSessionState(v17, v16) + 67824);
        }
        RtlAppendUnicodeStringToString(&Destination, v15);
      }
      if ( (v10 & 2) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
        v12 = -3;
      }
      else if ( (v10 & 8) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"Remote\\");
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
        RtlStringCchPrintfW(Sourcea, 32LL, L"%ld\\", CurrentWin32kSessionId);
        RtlAppendUnicodeToString(&Destination, Sourcea);
        v12 = -9;
      }
      else
      {
        if ( a4 && (*a4 & 0x10) != 0 )
          goto LABEL_35;
        v12 = -2;
      }
    }
    v10 &= v12;
    RtlAppendUnicodeToString(&Destination, off_14024AF30[*(unsigned int *)((char *)&unk_14024AF90 + v11)] + 1);
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)((char *)&unk_14024AF90 + v11 + 8));
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v13 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
    if ( a3 != 131097
      && v9 != *(_QWORD *)(W32GetUserGdiSessionState() + 40)
      && v9 != *(_QWORD *)(W32GetUserSessionState(v19, v18) + 68376) )
    {
      if ( v13 < 0 )
        goto LABEL_13;
      Object = 0LL;
      v20 = ObReferenceObjectByHandle(KeyHandle, a3, 0LL, 0, &Object, 0LL);
      v22 = Object;
      if ( v20 < 0 )
      {
        ZwClose(KeyHandle);
        v13 = -1073741790;
        goto LABEL_13;
      }
      LOBYTE(v21) = 1;
      if ( !(unsigned int)AccessCheckObject(Object, a3, v21, &KeyMapping) )
      {
        ZwClose(KeyHandle);
        v13 = -1073741790;
      }
      ObfDereferenceObject(v22);
    }
    if ( v13 >= 0 )
      break;
LABEL_13:
    if ( !v10 )
      break;
    v8 = v27;
    v9 = CurrentProcess;
  }
  if ( a4 )
    *a4 = v10;
  if ( v13 >= 0 )
    return KeyHandle;
  return (void *)v5;
}
