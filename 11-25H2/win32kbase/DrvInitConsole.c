/*
 * XREFs of DrvInitConsole @ 0x14017CE9C
 * Callers:
 *     InitVideo @ 0x1401B6588 (InitVideo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsRemoteConnection @ 0x14007F600 (UserIsRemoteConnection.c)
 *     ldevLoadDriver @ 0x140101990 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x140101E40 (ldevUnloadImage.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvInitConsole(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  unsigned int v6; // eax
  _DWORD *i; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // zf
  char *Driver; // rax
  __int64 v17; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  v1 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( UserIsRemoteConnection(v4, v3) )
    goto LABEL_19;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_19;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationString, L"SystemStartOptions");
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789
    && ResultLength > 0x10 )
  {
    v5 = (_DWORD *)PALLOCNOZ(ResultLength, 1886221383LL);
    if ( v5 )
    {
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v5, ResultLength, &ResultLength) >= 0 )
      {
        v6 = v5[2];
        if ( v6 >= 0x12 )
        {
          for ( i = v5 + 3; i <= (_DWORD *)((char *)v5 + v6 - 6); i = (_DWORD *)((char *)i + 2) )
          {
            if ( *(_QWORD *)i == 0x45005300410042LL
              && *((_QWORD *)i + 1) == 0x45004400490056LL
              && *((_WORD *)i + 8) == 79 )
            {
              v1 = 1;
              break;
            }
          }
        }
      }
      GreDeleteFastMutex((char *)v5);
    }
  }
  ZwClose(KeyHandle);
  if ( !v1 )
  {
LABEL_19:
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 23941;
  }
  else
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 23936;
  }
  v9 = *(_QWORD *)(W32GetSessionState(v8) + 88);
  *(_DWORD *)(v9 + 1060) = v1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v9);
  v11 = (*(__int64 (**)(void))(DxgkWin32kInterface + 80))();
  *(_DWORD *)(v2 + 1140) = v11;
  v12 = PALLOCMEM((unsigned int)(8 * v11), 1634492743LL);
  v13 = *(unsigned int *)(v2 + 1140);
  *(_QWORD *)(v2 + 1144) = v12;
  v14 = PALLOCMEM(v13, 1634492743LL);
  v15 = *(_QWORD *)(v2 + 1144) == 0LL;
  *(_QWORD *)(v2 + 1152) = v14;
  if ( v15 || !v14 )
    return 3221225495LL;
  Driver = (char *)ldevLoadDriver(L"CDD", 1, 1);
  if ( Driver )
    ldevUnloadImage(Driver);
  DrvUpdateGraphicsDeviceList(1LL, v17);
  return 0LL;
}
