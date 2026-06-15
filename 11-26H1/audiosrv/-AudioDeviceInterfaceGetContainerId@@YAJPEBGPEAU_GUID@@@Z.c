/*
 * XREFs of ?AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z @ 0x1800EF4E8
 * Callers:
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x1800EFBD0 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

__int64 __fastcall AudioDeviceInterfaceGetContainerId(const unsigned __int16 *a1, struct _GUID *a2)
{
  int ObjectProperties; // ebx
  DEVPROPKEY v4; // [rsp+60h] [rbp-9h]
  int v5; // [rsp+74h] [rbp+Bh]
  __int64 v6; // [rsp+78h] [rbp+Fh]
  DEVPROPKEY v7; // [rsp+80h] [rbp+17h]
  int v8; // [rsp+94h] [rbp+2Bh]
  __int64 v9; // [rsp+98h] [rbp+2Fh]

  v4 = DEVPKEY_DeviceInterface_ClassGuid;
  v7 = DEVPKEY_Device_ContainerId;
  v5 = 0;
  v6 = 0LL;
  v8 = 0;
  v9 = 0LL;
  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  if ( ObjectProperties >= 0 )
    return (unsigned int)-2147024894;
  return (unsigned int)ObjectProperties;
}
