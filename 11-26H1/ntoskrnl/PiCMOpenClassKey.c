/*
 * XREFs of PiCMOpenClassKey @ 0x140916DFC
 * Callers:
 *     PiCMHandleIoctl @ 0x140997F20 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140474950 (PiControlFreeUserModeCallersBuffer.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _CmCreateInstallerClass @ 0x1408962DC (_CmCreateInstallerClass.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140917D00 (_CmOpenInterfaceClassRegKey.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140988300 (_PnpCtxOpenContextBaseKey.c)
 *     PiAuDoesClientHaveAccess @ 0x14098DE50 (PiAuDoesClientHaveAccess.c)
 *     _CmOpenCommonClassRegKey @ 0x14099F0C4 (_CmOpenCommonClassRegKey.c)
 *     RtlUpcaseUnicodeString @ 0x1409E9B60 (RtlUpcaseUnicodeString.c)
 *     PiCMCaptureRegistryInputData @ 0x1409FFECC (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x140A0019C (PiCMReturnHandleResultData.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     PiCMDuplicateRegistryHandle @ 0x140A007EC (PiCMDuplicateRegistryHandle.c)
 *     _CmCreateInterfaceClass @ 0x140AF29E0 (_CmCreateInterfaceClass.c)
 */

__int64 __fastcall PiCMOpenClassKey(void *a1, __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  void *v7; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  int v9; // edi
  int v10; // r8d
  unsigned int v11; // r14d
  int v12; // r12d
  int v13; // edi
  PCWSTR v14; // rsi
  NTSTATUS inited; // ebx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // r9
  bool v20; // sf
  NTSTATUS v21; // eax
  NTSTATUS InterfaceClass; // eax
  HANDLE Handle; // [rsp+48h] [rbp-39h] BYREF
  void *v25; // [rsp+50h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  __int128 v27; // [rsp+68h] [rbp-19h]
  PCWSTR SourceString[2]; // [rsp+78h] [rbp-9h]
  __int128 v29; // [rsp+88h] [rbp+7h]

  v27 = 0LL;
  Handle = 0LL;
  v7 = 0LL;
  *a6 = 0;
  *(_OWORD *)SourceString = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  DestinationString = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = PiCMCaptureRegistryInputData(a1);
  if ( v9 < 0 )
    goto LABEL_19;
  v11 = HIDWORD(SourceString[1]);
  v12 = v29;
  v13 = DWORD2(v27);
  v14 = SourceString[0];
  if ( DWORD1(v27) || DWORD1(v29) || !a3 || a4 < 0x10 || (unsigned int)(DWORD2(v27) - 2) > 1 )
  {
    inited = -1073741811;
  }
  else
  {
    if ( !SourceString[0] )
    {
      inited = PnpCtxOpenContextBaseKey(
                 0,
                 8 - (unsigned int)(DWORD2(v27) != 3),
                 v10,
                 HIDWORD(SourceString[1]),
                 (__int64)&Handle);
      v20 = inited < 0;
LABEL_13:
      if ( !v20 )
      {
        LOBYTE(v19) = PreviousMode;
        v21 = PiCMDuplicateRegistryHandle(Handle, v18, v11, v19, &v25);
        v7 = v25;
        inited = v21;
      }
      goto LABEL_15;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[0]);
    if ( inited >= 0 )
    {
      inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
      if ( inited >= 0 )
      {
        if ( v13 == 3 )
        {
          inited = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (_DWORD)v14, v16, v17, v11, 0, (__int64)&Handle, 0LL);
          if ( inited != -1073741772 )
          {
LABEL_12:
            v20 = inited < 0;
            goto LABEL_13;
          }
          if ( v12 == 1 )
          {
            if ( (unsigned __int8)PiAuDoesClientHaveAccess(2u) )
            {
              InterfaceClass = CmCreateInterfaceClass(PiPnpRtlCtx, (_DWORD)v14, v11, (unsigned int)&Handle, 0LL, 0);
LABEL_35:
              inited = InterfaceClass;
              goto LABEL_12;
            }
LABEL_33:
            inited = -1073741790;
          }
        }
        else
        {
          inited = CmOpenCommonClassRegKey(PiPnpRtlCtx, (_DWORD)v14, 32, 0, v11, 0, (__int64)&Handle, 0LL);
          if ( inited != -1073741772 )
            goto LABEL_12;
          if ( v12 == 1 )
          {
            if ( (unsigned __int8)PiAuDoesClientHaveAccess(2u) )
            {
              InterfaceClass = CmCreateInstallerClass(*(__int64 *)&PiPnpRtlCtx, (__int64)v14, v11, &Handle, 0LL, 0);
              goto LABEL_35;
            }
            goto LABEL_33;
          }
        }
      }
    }
  }
LABEL_15:
  v9 = PiCMReturnHandleResultData((unsigned int)inited, v7, DWORD2(v29), a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( (v9 < 0 || inited < 0) && v7 )
    ObCloseHandle(v7, PreviousMode);
LABEL_19:
  if ( SourceString[0] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[0]);
  return (unsigned int)v9;
}
