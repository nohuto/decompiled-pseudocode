/*
 * XREFs of PiCMGetDeviceStatus @ 0x140A9FA54
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     _CmGetDeviceStatus @ 0x140955C8C (_CmGetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnStatusResultData @ 0x140A9FB88 (PiCMReturnStatusResultData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceStatus(void *a1, unsigned int a2, void *a3, unsigned int a4, int a5, __int64 a6)
{
  __int64 v6; // r14
  int v9; // ebx
  int DeviceStatus; // ecx
  unsigned int v12; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+44h] [rbp-2Ch] BYREF
  __int128 v15; // [rsp+48h] [rbp-28h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-18h]
  int v17[2]; // [rsp+68h] [rbp-8h]

  v6 = a6;
  *(_QWORD *)v17 = 0LL;
  v14 = 0;
  v13 = 0;
  *(_DWORD *)a6 = 0;
  v15 = 0LL;
  LODWORD(a6) = 0;
  *(_OWORD *)P = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v15);
  if ( v9 >= 0 )
  {
    if ( P[0] && *(_QWORD *)((char *)&v15 + 4) == 0x100000000LL && !HIDWORD(P[1]) && a3 && a4 >= 0x14 )
      DeviceStatus = CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, (const WCHAR *)P[0], 0, &v14, &v13, &a6, v12);
    else
      DeviceStatus = -1073741811;
    v9 = PiCMReturnStatusResultData(DeviceStatus, v14, v13, a6, v17[0], a3, a4, v6);
  }
  if ( P[0] && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v9;
}
