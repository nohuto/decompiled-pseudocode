/*
 * XREFs of PiCMDeleteDeviceInterfaceKey @ 0x140773764
 * Callers:
 *     PiCMHandleIoctl @ 0x140997F20 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140474950 (PiControlFreeUserModeCallersBuffer.c)
 *     PiAuDoesClientHaveAccess @ 0x14098DE50 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureObjectInputData @ 0x1409994A8 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14099A4D4 (PiCMReturnBasicResultData.c)
 *     _CmDeleteDeviceInterfaceRegKey @ 0x140B5EC1C (_CmDeleteDeviceInterfaceRegKey.c)
 */

__int64 __fastcall PiCMDeleteDeviceInterfaceKey(void *a1, __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v8; // ebx
  unsigned int v9; // eax

  *a6 = 0;
  v8 = PiCMCaptureObjectInputData(a1);
  if ( v8 >= 0 )
  {
    if ( (unsigned __int8)PiAuDoesClientHaveAccess(2u) )
      v9 = -1073741811;
    else
      v9 = -1073741790;
    return (unsigned int)PiCMReturnBasicResultData(v9, 0LL, a3, a4, a6);
  }
  return (unsigned int)v8;
}
