/*
 * XREFs of PiCMOpenDeviceInterfaceKey @ 0x140ABE0C4
 * Callers:
 *     PiCMHandleIoctl @ 0x140997F20 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140474950 (PiControlFreeUserModeCallersBuffer.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     PiAuDoesClientHaveAccess @ 0x14098DE50 (PiAuDoesClientHaveAccess.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14099EF5C (_CmOpenDeviceInterfaceRegKey.c)
 *     PiCMCaptureRegistryInputData @ 0x1409FFECC (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x140A0019C (PiCMReturnHandleResultData.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     PiCMDuplicateRegistryHandle @ 0x140A007EC (PiCMDuplicateRegistryHandle.c)
 */

__int64 __fastcall PiCMOpenDeviceInterfaceKey(void *a1, unsigned int a2, void *a3, unsigned int a4, int a5, _DWORD *a6)
{
  HANDLE v6; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdi
  ACCESS_MASK v13; // r14d
  int v14; // r15d
  __int64 v15; // rdx
  int v16; // ebx
  int v17; // eax
  __int64 v19; // r9
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v21; // [rsp+48h] [rbp-38h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h] BYREF
  __int128 v23; // [rsp+60h] [rbp-20h]
  __int128 v24; // [rsp+70h] [rbp-10h]

  v22 = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  *a6 = 0;
  v24 = 0LL;
  Handle = 0LL;
  v21 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, (__int64)&v22);
  if ( v10 < 0 )
    goto LABEL_14;
  v12 = v23;
  v13 = HIDWORD(v23);
  v14 = v24;
  if ( (_QWORD)v23 && *(_QWORD *)((char *)&v22 + 4) == 0x400000000LL && !DWORD1(v24) && a3 && a4 >= 0x10 )
  {
    v16 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, v23, 50, v11, SHIDWORD(v23), 0, (__int64)&Handle, 0LL);
    if ( v16 != -1073741772 )
      goto LABEL_8;
    if ( v14 == 1 )
    {
      if ( PiAuDoesClientHaveAccess(2u) )
      {
        v16 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, v12, 50, v19, v13, 1, (__int64)&Handle, 0LL);
LABEL_8:
        if ( v16 >= 0 )
        {
          v17 = PiCMDuplicateRegistryHandle(Handle, v15, v13, PreviousMode, &v21);
          v6 = v21;
          v16 = v17;
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
  v10 = PiCMReturnHandleResultData(v16, (__int64)v6, SDWORD2(v24), a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( (v10 < 0 || v16 < 0) && v6 )
    ObCloseHandle(v6, PreviousMode);
LABEL_14:
  if ( (_QWORD)v23 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v23);
  return (unsigned int)v10;
}
