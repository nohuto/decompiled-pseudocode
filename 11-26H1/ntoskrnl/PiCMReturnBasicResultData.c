/*
 * XREFs of PiCMReturnBasicResultData @ 0x14099A4D4
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x140773764 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x14077386C (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x140773A24 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x14098CC84 (PiCMDeviceAction.c)
 *     PiCMSetRegistryProperty @ 0x14098D258 (PiCMSetRegistryProperty.c)
 *     PiCMSetObjectProperty @ 0x14098DA68 (PiCMSetObjectProperty.c)
 *     PiCMValidateDeviceInstance @ 0x14099A028 (PiCMValidateDeviceInstance.c)
 *     PiCMDeleteDeviceKey @ 0x140B66CDC (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140B6A43C (PiCMDeleteObject.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6B110 (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140B6B2E8 (PiCMDeleteClassKey.c)
 *     PiCMSetDeviceProblem @ 0x140B6CA80 (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
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
