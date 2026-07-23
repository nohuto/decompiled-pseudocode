/*
 * XREFs of PiCMReturnBufferResultData @ 0x140959E10
 * Callers:
 *     PiCMRegisterDeviceInterface @ 0x14094D1B4 (PiCMRegisterDeviceInterface.c)
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409596C0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMGetDeviceInterfaceList @ 0x14095A610 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectList @ 0x14095A808 (PiCMGetObjectList.c)
 *     PiCMEnumerateSubKeys @ 0x140974874 (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x140A17B4C (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetDeviceIdList @ 0x140AA1B80 (PiCMGetDeviceIdList.c)
 *     PiCMGetObjectPropertyKeys @ 0x140AB5148 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140B2F2FC (PiCMQueryRemove.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
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
