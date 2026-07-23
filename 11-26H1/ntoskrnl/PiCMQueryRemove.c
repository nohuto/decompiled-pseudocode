/*
 * XREFs of PiCMQueryRemove @ 0x140B2F2FC
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140449060 (RtlGetActiveConsoleId.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x140499454 (McTemplateK0dz_EtwWriteTransfer.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140499B90 (McTemplateK0z_EtwWriteTransfer.c)
 *     PnpGetCallerSessionId @ 0x1407A7238 (PnpGetCallerSessionId.c)
 *     PiAuCheckClientInteractive @ 0x1407AADF8 (PiAuCheckClientInteractive.c)
 *     _CmValidateDeviceName @ 0x14094D660 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHavePrivilege @ 0x14094DA38 (PiAuDoesClientHavePrivilege.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     _CmIsRootDevice @ 0x1409529E4 (_CmIsRootDevice.c)
 *     _CmGetDeviceStatus @ 0x140955C8C (_CmGetDeviceStatus.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     PiCMReturnBufferResultData @ 0x140959E10 (PiCMReturnBufferResultData.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1409B5DE4 (PnpQueueQueryAndRemoveEvent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMQueryRemove(void *a1, unsigned int a2, char *a3, unsigned int a4, int a5, _DWORD *a6)
{
  WCHAR *v7; // r13
  char v8; // r12
  unsigned int v9; // r14d
  _WORD *v10; // r15
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  int v14; // edi
  int DeviceRegProp; // ebx
  unsigned int v16; // eax
  unsigned int v17; // esi
  _WORD *Pool2; // rax
  int v19; // edi
  int v20; // edi
  unsigned int v21; // r8d
  int v22; // eax
  unsigned int v24; // [rsp+38h] [rbp-79h]
  _BYTE v25[4]; // [rsp+58h] [rbp-59h] BYREF
  unsigned int v26; // [rsp+5Ch] [rbp-55h] BYREF
  int v27; // [rsp+60h] [rbp-51h]
  int v28; // [rsp+64h] [rbp-4Dh] BYREF
  int v29; // [rsp+68h] [rbp-49h] BYREF
  int v30; // [rsp+6Ch] [rbp-45h] BYREF
  int v31; // [rsp+70h] [rbp-41h] BYREF
  ULONG SessionId; // [rsp+74h] [rbp-3Dh] BYREF
  int v33; // [rsp+78h] [rbp-39h] BYREF
  int v34; // [rsp+7Ch] [rbp-35h] BYREF
  int v35; // [rsp+80h] [rbp-31h] BYREF
  __int128 v36; // [rsp+88h] [rbp-29h] BYREF
  PCWSTR SourceString[2]; // [rsp+98h] [rbp-19h]
  __int64 v38; // [rsp+A8h] [rbp-9h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-1h] BYREF

  v29 = 0;
  v34 = 0;
  v38 = 0LL;
  DestinationString = 0LL;
  v33 = 0;
  v7 = 0LL;
  v36 = 0LL;
  *a6 = 0;
  v8 = 0;
  *(_OWORD *)SourceString = 0LL;
  v31 = 0;
  v9 = 0;
  v30 = 0;
  v10 = 0LL;
  v35 = 0;
  v25[0] = 0;
  SessionId = 0;
  v26 = 0;
  v28 = 0;
  v12 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v36);
  if ( v12 < 0 )
    goto LABEL_61;
  v14 = HIDWORD(SourceString[1]);
  v7 = (WCHAR *)SourceString[0];
  v27 = DWORD1(v36);
  if ( (byte_140EF412B & 8) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      v11,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_QueryRemove_Start,
      v13,
      SHIDWORD(SourceString[1]),
      SourceString[0]);
  if ( !v7 || DWORD2(v36) != 1 || !a3 || a4 < 0x14 )
    goto LABEL_57;
  DeviceRegProp = CmValidateDeviceName(v11, v7);
  if ( DeviceRegProp < 0 )
  {
LABEL_53:
    if ( DeviceRegProp != -2147483608 )
      goto LABEL_58;
    v21 = v26;
    goto LABEL_55;
  }
  if ( CmIsRootDevice(v7) )
  {
    DeviceRegProp = -1073741773;
    goto LABEL_58;
  }
  v16 = a4 - 20;
  v17 = 0;
  if ( v16 >= 2 )
    v17 = v16;
  if ( v17 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    v10 = Pool2;
    if ( !Pool2 )
    {
      DeviceRegProp = -1073741670;
      goto LABEL_58;
    }
    *Pool2 = 0;
  }
  v19 = v14 - 1;
  if ( !v19 )
  {
    if ( PiAuDoesClientHaveAccess(0x20u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      if ( (v27 & 0xFFFFFFFE) != 0 )
        goto LABEL_23;
      v8 = v27 & 1;
      goto LABEL_48;
    }
    goto LABEL_32;
  }
  v20 = v19 - 1;
  if ( v20 )
  {
    if ( v20 == 1 )
    {
      if ( PiAuDoesClientHaveAccess(4u) && PiAuDoesClientHavePrivilege(0xAu) )
      {
        if ( v27 )
        {
LABEL_23:
          DeviceRegProp = -1073741811;
          goto LABEL_58;
        }
        v8 = 2;
        if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v7, 0, &v29, &v34, &v33, v24) < 0 )
        {
          DeviceRegProp = -1073741810;
          goto LABEL_58;
        }
        if ( (v29 & 0x2000) == 0 )
        {
          DeviceRegProp = -1073741808;
          goto LABEL_58;
        }
        goto LABEL_48;
      }
LABEL_32:
      DeviceRegProp = -1073741790;
      goto LABEL_58;
    }
LABEL_57:
    DeviceRegProp = -1073741811;
    goto LABEL_58;
  }
  v30 = 4;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v7,
                    0LL,
                    0x10u,
                    (__int64)&v35,
                    (__int64)&v31,
                    (__int64)&v30,
                    0);
  if ( DeviceRegProp >= 0 )
  {
    if ( (v31 & 8) != 0 )
    {
      if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0x19u) )
        goto LABEL_32;
    }
    else
    {
      DeviceRegProp = PnpGetCallerSessionId(&SessionId);
      if ( DeviceRegProp < 0 || SessionId != RtlGetActiveConsoleId() )
      {
        DeviceRegProp = PiAuCheckClientInteractive(v25);
        if ( DeviceRegProp < 0 || !v25[0] )
        {
          if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
            goto LABEL_32;
          DeviceRegProp = 0;
        }
      }
    }
    if ( v27 )
      goto LABEL_23;
    v8 = 8;
  }
  v9 = v17;
  if ( DeviceRegProp < 0 )
    goto LABEL_53;
LABEL_48:
  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, v7);
  v9 = v17;
  if ( DeviceRegProp < 0 )
    goto LABEL_53;
  v26 = v17;
  DeviceRegProp = PnpQueueQueryAndRemoveEvent(&DestinationString.Length, (char *)&v28, v10, &v26, v8, 0);
  if ( DeviceRegProp != -2147483608 )
    goto LABEL_58;
  v21 = v26;
  if ( v10 )
    v10[((unsigned __int64)v17 >> 1) - 1] = 0;
LABEL_55:
  if ( v21 <= v9 )
  {
    v22 = PiCMReturnBufferResultData(-2147483608, v26, v28, v10, v21, v38, a3, a4, a6);
    goto LABEL_59;
  }
LABEL_58:
  v22 = PiCMReturnBufferResultData(DeviceRegProp, v26, v28, 0LL, 0, v38, a3, a4, a6);
LABEL_59:
  v12 = v22;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
LABEL_61:
  if ( (byte_140EF412B & 8) != 0 )
    McTemplateK0z_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_QueryRemove_Stop, v13, v7);
  if ( SourceString[0] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[0]);
  return (unsigned int)v12;
}
