/*
 * XREFs of PiCMReturnBasicResultData @ 0x14095AF34
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x140776764 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x14077686C (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x140776A24 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     PiCMSetRegistryProperty @ 0x14094DCB8 (PiCMSetRegistryProperty.c)
 *     PiCMSetObjectProperty @ 0x14094E4C8 (PiCMSetObjectProperty.c)
 *     PiCMValidateDeviceInstance @ 0x14095AA88 (PiCMValidateDeviceInstance.c)
 *     PiCMDeleteDeviceKey @ 0x140B69C68 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140B6D64C (PiCMDeleteObject.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6E20C (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140B6E3E4 (PiCMDeleteClassKey.c)
 *     PiCMSetDeviceProblem @ 0x140B6FE50 (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMReturnBasicResultData(int a1, int a2, void *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  _DWORD Src[6]; // [rsp+20h] [rbp-18h] BYREF

  *a5 = 0;
  v5 = 0;
  if ( a4 >= 8 && a2 == 8 )
  {
    Src[0] = 8;
    Src[1] = a1;
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyToUser(a3, Src, 8uLL);
    *a5 = 8;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
