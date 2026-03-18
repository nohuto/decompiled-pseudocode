/*
 * XREFs of PiCMReturnBufferResultData @ 0x1409993B0
 * Callers:
 *     PiCMEnumerateSubKeys @ 0x140919E14 (PiCMEnumerateSubKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x14098C74C (PiCMRegisterDeviceInterface.c)
 *     PiCMHandleIoctl @ 0x140997F20 (PiCMHandleIoctl.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140998C60 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMGetDeviceInterfaceList @ 0x140999BB0 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectList @ 0x140999DA8 (PiCMGetObjectList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1409DA8FC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetDeviceIdList @ 0x140AA01F0 (PiCMGetDeviceIdList.c)
 *     PiCMGetObjectPropertyKeys @ 0x140AB3DA8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140B2D27C (PiCMQueryRemove.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMReturnBufferResultData(
        int a1,
        int a2,
        int a3,
        void *a4,
        unsigned int Size,
        int a6,
        char *a7,
        unsigned int a8,
        _DWORD *a9)
{
  unsigned int v10; // ebx
  _DWORD Src[6]; // [rsp+30h] [rbp-58h] BYREF

  *a9 = 0;
  v10 = 0;
  if ( a8 >= Size + 20 && a6 == 20 )
  {
    Src[4] = 0;
    Src[0] = 20;
    Src[1] = a1;
    Src[2] = a2;
    Src[3] = a3;
    if ( a8 && ((unsigned __int8)a7 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyToUser(a7, Src, 0x14uLL);
    if ( Size )
      RtlCopyToUser(a7 + 16, a4, Size);
    *a9 = Size + 20;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
