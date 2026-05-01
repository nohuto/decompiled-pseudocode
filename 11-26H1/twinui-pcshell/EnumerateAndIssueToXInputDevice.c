/*
 * XREFs of EnumerateAndIssueToXInputDevice @ 0x1806CC698
 * Callers:
 *     ?GamingAccessibilityNexusChordPressed@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B48D0 (-GamingAccessibilityNexusChordPressed@-QIXamlMultitaskingViewController@@XamlAllUpViewController.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _o___acrt_iob_func_0 @ 0x1802C9CC6 (_o___acrt_iob_func_0.c)
 *     fprintf @ 0x1802CA18C (fprintf.c)
 *     printf @ 0x1802CA1E0 (printf.c)
 *     IssueSendAccessibleNexusToAllGamepads @ 0x1806CCA0C (IssueSendAccessibleNexusToAllGamepads.c)
 */

signed int __fastcall EnumerateAndIssueToXInputDevice(unsigned int a1)
{
  DWORD v2; // r15d
  char *ClassDevsW; // rsi
  DWORD i; // edx
  struct _SP_DEVICE_INTERFACE_DETAIL_DATA_W *v5; // rax
  WCHAR *v6; // rdi
  FILE *v7; // rax
  HANDLE FileW; // rax
  void *v9; // r14
  DWORD v10; // eax
  int v11; // ebx
  DWORD LastError; // ebx
  FILE *v13; // rax
  signed int result; // eax
  DWORD RequiredSize; // [rsp+40h] [rbp-29h] BYREF
  struct _SP_DEVINFO_DATA DeviceInfoData; // [rsp+48h] [rbp-21h] BYREF
  struct _SP_DEVICE_INTERFACE_DATA DeviceInterfaceData; // [rsp+68h] [rbp-1h] BYREF
  GUID ClassGuid; // [rsp+88h] [rbp+1Fh] BYREF

  memset(&DeviceInterfaceData, 0, sizeof(DeviceInterfaceData));
  v2 = 0;
  RequiredSize = 0;
  ClassGuid = (GUID)XUSB_INTERFACE_CLASS_GUID;
  ClassDevsW = (char *)SetupDiGetClassDevsW(&ClassGuid, 0LL, 0LL, 0x12u);
  if ( (unsigned __int64)(ClassDevsW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
    return result;
  }
  for ( i = 0; ; i = v2 )
  {
    memset(&DeviceInfoData, 0, sizeof(DeviceInfoData));
    DeviceInfoData.cbSize = 32;
    if ( !SetupDiEnumDeviceInfo(ClassDevsW, i, &DeviceInfoData) )
    {
      v11 = -2147024637;
      goto LABEL_19;
    }
    memset(&DeviceInterfaceData, 0, sizeof(DeviceInterfaceData));
    DeviceInterfaceData.cbSize = 32;
    if ( SetupDiEnumDeviceInterfaces(ClassDevsW, &DeviceInfoData, &ClassGuid, 0, &DeviceInterfaceData) )
    {
      RequiredSize = 0;
      if ( SetupDiGetDeviceInterfaceDetailW(ClassDevsW, &DeviceInterfaceData, 0LL, 0, &RequiredSize, 0LL)
        || GetLastError() == 122 )
      {
        break;
      }
    }
LABEL_15:
    ++v2;
  }
  v5 = (struct _SP_DEVICE_INTERFACE_DETAIL_DATA_W *)malloc(RequiredSize);
  v6 = (WCHAR *)v5;
  if ( !v5 )
  {
    v7 = o___acrt_iob_func_0(2u);
    fprintf(v7, "Failed to allocate %d bytes\n", RequiredSize);
    SetLastError(0xEu);
    goto LABEL_15;
  }
  v5->cbSize = 8;
  if ( !SetupDiGetDeviceInterfaceDetailW(ClassDevsW, &DeviceInterfaceData, v5, RequiredSize, 0LL, 0LL) )
  {
    LastError = GetLastError();
    v13 = o___acrt_iob_func_0(2u);
    fprintf(v13, "SetupDiGetDeviceInterfaceDetailW failed with LastError=0x%08x\n", LastError);
    goto LABEL_14;
  }
  FileW = CreateFileW(v6 + 2, 0xC0000000, 3u, 0LL, 3u, 0x80u, 0LL);
  v9 = FileW;
  if ( FileW == (HANDLE)-1LL )
  {
    v10 = GetLastError();
    printf("Failed to open DevicePath=%ws, lastError=0x%X\n", v6 + 2, v10);
LABEL_14:
    free(v6);
    goto LABEL_15;
  }
  v11 = IssueSendAccessibleNexusToAllGamepads(FileW, a1);
  CloseHandle(v9);
  if ( v11 < 0 )
    goto LABEL_14;
  free(v6);
LABEL_19:
  SetupDiDestroyDeviceInfoList(ClassDevsW);
  return v11;
}
