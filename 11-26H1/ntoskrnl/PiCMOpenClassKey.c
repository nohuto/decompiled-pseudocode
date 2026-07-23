/*
 * XREFs of PiCMOpenClassKey @ 0x140971868
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmCreateInstallerClass @ 0x14089C6DC (_CmCreateInstallerClass.c)
 *     PiCMCaptureRegistryInputData @ 0x14091CC68 (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14091CF38 (PiCMReturnHandleResultData.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     PiCMDuplicateRegistryHandle @ 0x14091D314 (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     _CmOpenCommonClassRegKey @ 0x14095FB24 (_CmOpenCommonClassRegKey.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140972760 (_CmOpenInterfaceClassRegKey.c)
 *     RtlUpcaseUnicodeString @ 0x1409D2F80 (RtlUpcaseUnicodeString.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140A42A2C (_PnpCtxOpenContextBaseKey.c)
 *     _CmCreateInterfaceClass @ 0x140AF51CC (_CmCreateInterfaceClass.c)
 */

__int64 __fastcall PiCMOpenClassKey(void *a1, unsigned int a2, void *a3, unsigned int a4, int a5, _DWORD *a6)
{
  HANDLE v7; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  int v9; // edi
  int v10; // r8d
  ACCESS_MASK v11; // r14d
  int v12; // r12d
  int v13; // edi
  PCWSTR v14; // rsi
  int inited; // ebx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdx
  bool v19; // sf
  int v20; // eax
  int InterfaceClass; // eax
  HANDLE Handle; // [rsp+48h] [rbp-39h] BYREF
  HANDLE v24; // [rsp+50h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  __int128 v26; // [rsp+68h] [rbp-19h] BYREF
  PCWSTR SourceString[2]; // [rsp+78h] [rbp-9h]
  __int128 v28; // [rsp+88h] [rbp+7h]

  v26 = 0LL;
  Handle = 0LL;
  v7 = 0LL;
  *a6 = 0;
  *(_OWORD *)SourceString = 0LL;
  v24 = 0LL;
  v28 = 0LL;
  DestinationString = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = PiCMCaptureRegistryInputData(a1, a2, a5, (__int64)&v26);
  if ( v9 < 0 )
    goto LABEL_19;
  v11 = HIDWORD(SourceString[1]);
  v12 = v28;
  v13 = DWORD2(v26);
  v14 = SourceString[0];
  if ( DWORD1(v26) || DWORD1(v28) || !a3 || a4 < 0x10 || (unsigned int)(DWORD2(v26) - 2) > 1 )
  {
    inited = -1073741811;
  }
  else
  {
    if ( !SourceString[0] )
    {
      inited = PnpCtxOpenContextBaseKey(
                 0,
                 8 - (unsigned int)(DWORD2(v26) != 3),
                 v10,
                 HIDWORD(SourceString[1]),
                 (__int64)&Handle);
      v19 = inited < 0;
LABEL_13:
      if ( !v19 )
      {
        v20 = PiCMDuplicateRegistryHandle(Handle, v18, v11, PreviousMode, &v24);
        v7 = v24;
        inited = v20;
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
            v19 = inited < 0;
            goto LABEL_13;
          }
          if ( v12 == 1 )
          {
            if ( PiAuDoesClientHaveAccess(2u) )
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
          inited = CmOpenCommonClassRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v14, 32, 0, v11, 0, (__int64)&Handle, 0LL);
          if ( inited != -1073741772 )
            goto LABEL_12;
          if ( v12 == 1 )
          {
            if ( PiAuDoesClientHaveAccess(2u) )
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
  v9 = PiCMReturnHandleResultData(inited, (__int64)v7, SDWORD2(v28), a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( (v9 < 0 || inited < 0) && v7 )
    ObCloseHandle(v7, PreviousMode);
LABEL_19:
  if ( SourceString[0] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[0]);
  return (unsigned int)v9;
}
