/*
 * XREFs of PiCMOpenDeviceInterfaceKey @ 0x14091B4B8
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiCMCaptureRegistryInputData @ 0x14091CC68 (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14091CF38 (PiCMReturnHandleResultData.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     PiCMDuplicateRegistryHandle @ 0x14091D314 (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095F9BC (_CmOpenDeviceInterfaceRegKey.c)
 */

__int64 __fastcall PiCMOpenDeviceInterfaceKey(void *a1, __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  void *v6; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // edi
  int v11; // r9d
  int v12; // edi
  unsigned int v13; // r14d
  int v14; // r15d
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // r9
  int v18; // eax
  int v20; // r9d
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  void *v22; // [rsp+48h] [rbp-38h] BYREF
  __int128 v23; // [rsp+50h] [rbp-30h]
  __int128 v24; // [rsp+60h] [rbp-20h]
  __int128 v25; // [rsp+70h] [rbp-10h]

  v23 = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  *a6 = 0;
  v25 = 0LL;
  Handle = 0LL;
  v22 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = PiCMCaptureRegistryInputData(a1);
  if ( v10 < 0 )
    goto LABEL_14;
  v12 = v24;
  v13 = HIDWORD(v24);
  v14 = v25;
  if ( (_QWORD)v24 && *(_QWORD *)((char *)&v23 + 4) == 0x400000000LL && !DWORD1(v25) && a3 && a4 >= 0x10 )
  {
    v16 = CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, v24, 50, v11, HIDWORD(v24), 0, (__int64)&Handle, 0LL);
    if ( v16 != -1073741772 )
      goto LABEL_8;
    if ( v14 == 1 )
    {
      if ( (unsigned __int8)PiAuDoesClientHaveAccess(2u) )
      {
        v16 = CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, v12, 50, v20, v13, 1, (__int64)&Handle, 0LL);
LABEL_8:
        if ( v16 >= 0 )
        {
          LOBYTE(v17) = PreviousMode;
          v18 = PiCMDuplicateRegistryHandle(Handle, v15, v13, v17, &v22);
          v6 = v22;
          v16 = v18;
        }
        goto LABEL_10;
      }
      v16 = -1073741790;
    }
  }
  else
  {
    v16 = -1073741811;
  }
LABEL_10:
  v10 = PiCMReturnHandleResultData((unsigned int)v16, v6, DWORD2(v25), a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( (v10 < 0 || v16 < 0) && v6 )
    ObCloseHandle(v6, PreviousMode);
LABEL_14:
  if ( (_QWORD)v24 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v24);
  return (unsigned int)v10;
}
