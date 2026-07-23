/*
 * XREFs of PiCMSetRegistryProperty @ 0x14094DCB8
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1404BC6F8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     _CmSetInstallerClassRegProp @ 0x14089D5E0 (_CmSetInstallerClassRegProp.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14094DB54 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x14094DE90 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x14094DEF0 (PiCMConvertRegistryProperty.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140958558 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReturnBasicResultData @ 0x14095AF34 (PiCMReturnBasicResultData.c)
 */

__int64 __fastcall PiCMSetRegistryProperty(void *a1, __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v8; // ebx
  ACCESS_MASK v9; // ecx
  int v10; // edi
  const WCHAR *v11; // rsi
  int *v12; // r14
  ULONG v13; // r15d
  int v14; // ebx
  int v15; // edi
  int v17; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  __int128 v19; // [rsp+60h] [rbp-11h] BYREF
  PCWSTR SourceString[2]; // [rsp+70h] [rbp-1h]
  __int128 v21; // [rsp+80h] [rbp+Fh]
  __int64 v22; // [rsp+90h] [rbp+1Fh]

  v17 = 0;
  v22 = 0LL;
  v19 = 0LL;
  *a6 = 0;
  *(_OWORD *)SourceString = 0LL;
  v21 = 0LL;
  v8 = PiCMCaptureRegistryPropertyInputData(a1);
  if ( v8 >= 0 )
  {
    v9 = 64;
    v10 = DWORD2(v19);
    v11 = SourceString[0];
    v12 = (int *)*((_QWORD *)&v21 + 1);
    v13 = v22;
    if ( HIDWORD(SourceString[1]) != 13 )
      v9 = 2;
    if ( !(unsigned __int8)PiAuDoesClientHaveAccess(v9) )
    {
      v14 = -1073741790;
      goto LABEL_14;
    }
    if ( SourceString[0] && !DWORD1(v19) && a3 && a4 >= 8 )
    {
      v14 = PiCMConvertRegistryProperty(HIDWORD(SourceString[1]), &v17);
      if ( v14 < 0 )
      {
LABEL_14:
        v8 = PiCMReturnBasicResultData((unsigned int)v14, HIDWORD(v22), a3, a4, a6);
        goto LABEL_15;
      }
      if ( v10 == 1 )
      {
        v15 = PiPnpRtlSetDeviceRegProperty(PiPnpRtlCtx, v11, 0, v17, v21, v12, v13, 0);
        v14 = v15;
        if ( v15 >= 0 )
        {
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, v11) >= 0 )
          {
            PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
            goto LABEL_14;
          }
        }
LABEL_12:
        if ( v15 == -1073741790 )
          v14 = -1073741264;
        else
          v14 = v15;
        goto LABEL_14;
      }
      if ( v10 == 2 )
      {
        v15 = CmSetInstallerClassRegProp(*(__int64 *)&PiPnpRtlCtx, (__int64)v11, 0LL, v17, v21, (__int64)v12, v13);
        goto LABEL_12;
      }
    }
    v14 = -1073741811;
    goto LABEL_14;
  }
LABEL_15:
  PiCMReleaseRegistryPropertyInputData(&v19);
  return (unsigned int)v8;
}
