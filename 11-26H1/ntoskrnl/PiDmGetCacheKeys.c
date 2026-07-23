/*
 * XREFs of PiDmGetCacheKeys @ 0x140A76C80
 * Callers:
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 * Callees:
 *     <none>
 */

DEVPROPKEY **__fastcall PiDmGetCacheKeys(int a1, _QWORD *a2, _DWORD *a3)
{
  DEVPROPKEY **result; // rax

  switch ( a1 )
  {
    case 1:
      result = &PiDmCachedDeviceKeys;
      *a3 = 10;
      *a2 = &PiDmCachedDeviceKeys;
      break;
    case 3:
      result = &PiDmCachedDeviceInterfaceKeys;
      *a3 = 1;
      *a2 = &PiDmCachedDeviceInterfaceKeys;
      break;
    case 5:
      result = &PiDmCachedDeviceContainerKeys;
      *a3 = 3;
      *a2 = &PiDmCachedDeviceContainerKeys;
      break;
    default:
      result = 0LL;
      *a3 = 0;
      *a2 = 0LL;
      break;
  }
  return result;
}
