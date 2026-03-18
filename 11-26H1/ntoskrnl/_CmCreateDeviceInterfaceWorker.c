/*
 * XREFs of _CmCreateDeviceInterfaceWorker @ 0x140AF288C
 * Callers:
 *     _CmCreateDeviceInterface @ 0x140AF26F0 (_CmCreateDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14099EF5C (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1409A1980 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmCreateInterfaceClass @ 0x140AF29E0 (_CmCreateInterfaceClass.c)
 *     _CmRaiseCreateEvent @ 0x140AF2E58 (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateDeviceInterfaceWorker(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        HANDLE *a4,
        _BYTE *a5,
        __int16 a6)
{
  int DeviceInterfaceSubkeyPath; // eax
  int InterfaceClass; // ebx
  __int64 v12; // r9
  _DWORD v14[4]; // [rsp+40h] [rbp-A8h] BYREF
  WCHAR v15[40]; // [rsp+50h] [rbp-98h] BYREF

  v14[0] = 0;
  if ( a6 )
  {
    InterfaceClass = -1073741811;
  }
  else
  {
    DeviceInterfaceSubkeyPath = CmGetDeviceInterfaceSubkeyPath(a1, a2, 1, v15, 0LL, 0);
    InterfaceClass = DeviceInterfaceSubkeyPath;
    if ( DeviceInterfaceSubkeyPath )
    {
      if ( DeviceInterfaceSubkeyPath == -1073741789 )
      {
        v15[38] = 0;
      }
      else if ( DeviceInterfaceSubkeyPath < 0 )
      {
        goto LABEL_15;
      }
      InterfaceClass = CmCreateInterfaceClass(a1, (unsigned int)v15, 0, 0, 0LL, 0);
      if ( InterfaceClass >= 0 )
      {
        InterfaceClass = CmOpenDeviceInterfaceRegKey(a1, (__int64)a2, 48, v12, a3, 1, (__int64)a4, v14);
        if ( InterfaceClass >= 0 )
        {
          if ( v14[0] == 1 )
          {
            *a5 = 1;
            CmRaiseCreateEvent(a1, a2, 3LL, *a4);
          }
          else
          {
            *a5 = 0;
          }
          return (unsigned int)InterfaceClass;
        }
      }
    }
    else
    {
      InterfaceClass = -1073741595;
    }
  }
LABEL_15:
  if ( *a4 )
  {
    ZwClose(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)InterfaceClass;
}
