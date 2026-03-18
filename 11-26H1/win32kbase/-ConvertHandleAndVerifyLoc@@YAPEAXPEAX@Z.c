/*
 * XREFs of ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x14011B724
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x14011B590 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetWindowsDirectoryDevicePath @ 0x14011B9E0 (GetWindowsDirectoryDevicePath.c)
 *     _wcsnicmp @ 0x1401C7868 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void *__fastcall ConvertHandleAndVerifyLoc(HANDLE Handle)
{
  PVOID v2; // rbx
  WCHAR *v3; // rdx
  WCHAR *v4; // rsi
  PWSTR Buffer; // r8
  __int64 v6; // r9
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct tagTHREADINFO *v10; // rcx
  const WCHAR *v11; // rdx
  WCHAR *v13; // rcx
  struct tagTHREADINFO *v14; // rax
  __int16 ProcessMachine; // ax
  struct _UNICODE_STRING Destination_8; // [rsp+68h] [rbp-A0h] BYREF
  ULONG ReturnLength[2]; // [rsp+78h] [rbp-90h] BYREF
  void *FileHandle; // [rsp+80h] [rbp-88h] BYREF
  PVOID Object; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-38h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+E8h] [rbp-20h] BYREF

  FileHandle = 0LL;
  ReturnLength[0] = 0;
  v2 = 0LL;
  Destination_8 = 0LL;
  v4 = (WCHAR *)Win32AllocPoolZInitImpl(256LL, 0x208uLL, 0x626B7355u);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( !v4 )
    return FileHandle;
  if ( Handle )
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
    v2 = Object;
    if ( v7 >= 0 && ObQueryNameString(Object, &ObjectNameInfo, 0x218u, ReturnLength) >= 0 )
    {
      Destination_8.Buffer = v4;
      *(_DWORD *)&Destination_8.Length = 34078720;
      if ( (int)GetWindowsDirectoryDevicePath(&Destination_8) >= 0 )
      {
        v10 = PtiCurrent(v8, (__int64)v3);
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 130, 0, 0) & 0x100) == 0 )
        {
LABEL_7:
          v11 = L"\\system32\\";
          goto LABEL_8;
        }
        v14 = PtiCurrent((__int64)v10, v9);
        ProcessMachine = PsWow64GetProcessMachine(**((_QWORD **)v14 + 57));
        if ( ProcessMachine == 332 )
        {
          v11 = L"\\SysWoW64\\";
        }
        else
        {
          if ( ProcessMachine != 452 )
            goto LABEL_7;
          v11 = L"\\SysArm32\\";
        }
LABEL_8:
        RtlAppendUnicodeToString(&Destination_8, v11);
        if ( !wcsnicmp(ObjectNameInfo.Name.Buffer, Destination_8.Buffer, (unsigned __int64)Destination_8.Length >> 1) )
        {
          Buffer = ObjectNameInfo.Name.Buffer;
          v3 = &ObjectNameInfo.Name.Buffer[(unsigned __int64)Destination_8.Length >> 1];
          v13 = &v3[(unsigned int)((ObjectNameInfo.Name.Length - (unsigned __int64)Destination_8.Length) >> 1)];
          while ( v3 < v13 )
          {
            if ( *v3 == 92 )
              goto LABEL_9;
            ++v3;
          }
          RtlInitUnicodeString(&DestinationString, ObjectNameInfo.Name.Buffer);
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 512;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0) < 0 )
            FileHandle = 0LL;
        }
      }
    }
  }
LABEL_9:
  GreDeleteFastMutex((char *)v4, (__int64)v3, (__int64)Buffer, v6);
  if ( v2 )
    ObfDereferenceObject(v2);
  return FileHandle;
}
