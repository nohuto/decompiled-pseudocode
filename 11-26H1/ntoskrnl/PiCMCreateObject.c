/*
 * XREFs of PiCMCreateObject @ 0x14077686C
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     _PnpCreateObject @ 0x14089E594 (_PnpCreateObject.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14095AF34 (PiCMReturnBasicResultData.c)
 */

__int64 __fastcall PiCMCreateObject(void *a1, __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
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
