/*
 * XREFs of DrvInitConsole @ 0x14000A7F4
 * Callers:
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 * Callees:
 *     UserIsRemoteConnection @ 0x14000C100 (UserIsRemoteConnection.c)
 *     ldevLoadDriver @ 0x14000D360 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x14000D750 (ldevUnloadImage.c)
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvInitConsole(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rsi
  _DWORD *v3; // rbx
  unsigned int v4; // eax
  _DWORD *i; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // zf
  void *Driver; // rax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  v1 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( (unsigned int)UserIsRemoteConnection() )
    goto LABEL_19;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_19;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationString, L"SystemStartOptions");
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789
    && ResultLength > 0x10 )
  {
    v3 = (_DWORD *)PALLOCNOZ(ResultLength, 1886221383LL);
    if ( v3 )
    {
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v3, ResultLength, &ResultLength) >= 0 )
      {
        v4 = v3[2];
        if ( v4 >= 0x12 )
        {
          for ( i = v3 + 3; i <= (_DWORD *)((char *)v3 + v4 - 6); i = (_DWORD *)((char *)i + 2) )
          {
            v6 = *(_QWORD *)i - 0x45005300410042LL;
            if ( *(_QWORD *)i == 0x45005300410042LL )
            {
              v6 = *((_QWORD *)i + 1) - 0x45004400490056LL;
              if ( *((_QWORD *)i + 1) == 0x45004400490056LL )
                v6 = *((unsigned __int16 *)i + 8) - 79LL;
            }
            if ( !v6 )
            {
              v1 = 1;
              break;
            }
          }
        }
      }
      GreDeleteFastMutex(v3);
    }
  }
  ZwClose(KeyHandle);
  if ( !v1 )
  {
LABEL_19:
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 22784;
  }
  else
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 22779;
  }
  *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v7) + 88) + 1148LL) = v1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  v9 = (*(__int64 (**)(void))(DxgkWin32kInterface + 80))();
  *(_DWORD *)(v2 + 1228) = v9;
  v10 = PALLOCMEM((unsigned int)(8 * v9), 1634492743LL);
  v11 = *(unsigned int *)(v2 + 1228);
  *(_QWORD *)(v2 + 1232) = v10;
  v12 = PALLOCMEM(v11, 1634492743LL);
  v13 = *(_QWORD *)(v2 + 1232) == 0LL;
  *(_QWORD *)(v2 + 1240) = v12;
  if ( v13 || !v12 )
    return 3221225495LL;
  Driver = (void *)ldevLoadDriver(L"CDD");
  if ( Driver )
    ldevUnloadImage(Driver);
  DrvUpdateGraphicsDeviceList(1LL);
  return 0LL;
}
