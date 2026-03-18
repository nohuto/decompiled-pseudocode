/*
 * XREFs of InitializeMediaChange @ 0x140159360
 * Callers:
 *     <none>
 * Callees:
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall InitializeMediaChange(HANDLE Handle, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  __int64 v10; // rax
  ULONG ResultLength; // [rsp+38h] [rbp-39h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  PVOID Object; // [rsp+48h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-11h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+1Fh] BYREF
  int v18; // [rsp+94h] [rbp+23h]
  int v19; // [rsp+9Ch] [rbp+2Bh]

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  UserSessionState = W32GetUserSessionState(Handle, a2);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MaxOpenAttempts");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v18 == 4 )
    {
      *(_DWORD *)(UserSessionState + 69944) = v19;
    }
    ZwClose(KeyHandle);
  }
  v6 = *(_DWORD *)(UserSessionState + 69944);
  *(_DWORD *)(W32GetUserSessionState(v5, v4) + 320) = v6;
  if ( IsRemoteConnection(v8, v7) )
  {
    return 0;
  }
  else
  {
    Object = 0LL;
    *(_QWORD *)(UserSessionState + 69896) = UserSessionState + 69888;
    *(_QWORD *)(UserSessionState + 69888) = UserSessionState + 69888;
    *(_QWORD *)(UserSessionState + 69912) = UserSessionState + 69904;
    *(_QWORD *)(UserSessionState + 69904) = UserSessionState + 69904;
    v9 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    *(_QWORD *)(UserSessionState + 69936) = Object;
    if ( v9 >= 0 )
    {
      v10 = Win32AllocPoolNonPagedZInit(56LL, 1886417749LL);
      *(_QWORD *)(UserSessionState + 69928) = v10;
      if ( v10 )
      {
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_DWORD *)(v10 + 16) = 0;
        *(_DWORD *)v10 = 1;
        KeInitializeEvent((PRKEVENT)(v10 + 24), SynchronizationEvent, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v9;
}
