/*
 * XREFs of PiCMGetDeviceDepth @ 0x140AD6DD0
 * Callers:
 *     PiCMHandleIoctl @ 0x140997F20 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140474950 (PiControlFreeUserModeCallersBuffer.c)
 *     PiCMReturnDepthResultData @ 0x140779204 (PiCMReturnDepthResultData.c)
 *     _CmValidateDeviceName @ 0x14098CC00 (_CmValidateDeviceName.c)
 *     PiCMCaptureObjectInputData @ 0x1409994A8 (PiCMCaptureObjectInputData.c)
 *     PiGetDeviceDepth @ 0x140AD6F94 (PiGetDeviceDepth.c)
 */

__int64 __fastcall PiCMGetDeviceDepth(void *a1, unsigned int a2, void *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // r15
  int v9; // edi
  __int64 v10; // rcx
  int v11; // ebx
  int inited; // eax
  const WCHAR *v14; // r10
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-10h]

  v6 = a6;
  v18 = 0LL;
  *a6 = 0;
  v9 = 0;
  DestinationString = 0LL;
  LODWORD(a6) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v11 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v16);
  if ( v11 >= 0 )
  {
    if ( (_QWORD)v17 && *(_QWORD *)((char *)&v16 + 4) == 0x100000000LL && !HIDWORD(v17) && a3 && a4 >= 0xC )
    {
      inited = CmValidateDeviceName(v10, (_WORD *)v17);
      if ( inited >= 0 )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, v14);
        if ( inited >= 0 )
        {
          inited = PiGetDeviceDepth(&DestinationString, &a6);
          v9 = (int)a6;
        }
      }
    }
    else
    {
      inited = -1073741811;
    }
    v11 = PiCMReturnDepthResultData(inited, v9, v18, a3, a4, v6);
  }
  if ( (_QWORD)v17 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v17);
  return (unsigned int)v11;
}
