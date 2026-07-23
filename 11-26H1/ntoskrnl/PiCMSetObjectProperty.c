/*
 * XREFs of PiCMSetObjectProperty @ 0x14094E4C8
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1404BC6F8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiCMReleasePropertyInputData @ 0x14094E854 (PiCMReleasePropertyInputData.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     PiCMCapturePropertyInputData @ 0x14095A1C0 (PiCMCapturePropertyInputData.c)
 *     PiCMReturnBasicResultData @ 0x14095AF34 (PiCMReturnBasicResultData.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiCMSetObjectProperty(void *Src, __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v9; // ebx
  unsigned int v10; // edi
  int v11; // esi
  int v12; // ebx
  int v13; // r13d
  const WCHAR *v14; // r14
  BOOL v15; // eax
  int v16; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // [rsp+50h] [rbp-69h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-61h] BYREF
  _DWORD *v29; // [rsp+68h] [rbp-51h]
  _BYTE v30[4]; // [rsp+70h] [rbp-49h] BYREF
  int v31; // [rsp+74h] [rbp-45h]
  int v32; // [rsp+78h] [rbp-41h]
  PCWSTR SourceString; // [rsp+80h] [rbp-39h]
  _BYTE Buf1[16]; // [rsp+8Ch] [rbp-2Dh] BYREF
  int v35; // [rsp+9Ch] [rbp-1Dh]
  int v36; // [rsp+A0h] [rbp-19h]
  __int64 v37; // [rsp+A8h] [rbp-11h]
  int v38; // [rsp+B0h] [rbp-9h]
  unsigned int v39; // [rsp+B4h] [rbp-5h]

  v29 = a6;
  memset_0(v30, 0, 0x48uLL);
  *a6 = 0;
  v9 = PiCMCapturePropertyInputData(Src);
  if ( v9 >= 0 )
  {
    v10 = 5;
    v11 = v35;
    v12 = v32;
    v13 = v36;
    v14 = SourceString;
    *(_QWORD *)&DestinationString.Length = v37;
    v27 = v38;
    v15 = v35 == 14 && !memcmp(Buf1, &DEVPKEY_Device_FriendlyName, 0x10uLL)
       || v11 == 3 && !memcmp(Buf1, &DEVPKEY_Device_FriendlyNameAttributes, 0x10uLL)
       || v11 == 4 && !memcmp(Buf1, DEVPKEY_DriverPackage_SourceMediaPath, 0x10uLL)
       || v11 == 2
       && (!memcmp(Buf1, DEVPKEY_WIA_DeviceType, 0x10uLL) || !memcmp(Buf1, DEVPKEY_Printer_PortName, 0x10uLL))
       || v11 == 5 && !memcmp(Buf1, DEVPKEY_IPPFaxOut_PortName, 0x10uLL);
    if ( !(unsigned __int8)PiAuDoesClientHaveAccess(v15 ? 64 : 2) )
    {
      v18 = -1073741790;
      goto LABEL_23;
    }
    if ( v14 && !v31 && a3 && a4 >= 8 )
    {
      if ( v12 <= 6 )
      {
        if ( v12 == 6 )
        {
          v10 = 6;
        }
        else
        {
          v16 = v12 - 1;
          if ( !v16 )
          {
            v10 = 1;
            goto LABEL_17;
          }
          v22 = v16 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( !v24 )
              {
                v10 = 3;
                goto LABEL_17;
              }
              if ( v24 != 1 )
                goto LABEL_22;
            }
            else
            {
              v10 = 4;
            }
          }
          else
          {
            v10 = 2;
          }
        }
LABEL_17:
        v17 = PiPnpRtlSetObjectProperty(
                *(_QWORD *)&PiPnpRtlCtx,
                v14,
                v10,
                0LL,
                0LL,
                Buf1,
                v13,
                *(_QWORD *)&DestinationString.Length,
                v27,
                0);
        v18 = v17;
        if ( v17 == -1073741790 )
        {
          if ( v35 == 38 && !memcmp(Buf1, &DEVPKEY_Device_BaseContainerId, 0x10uLL) )
            v18 = -1073741264;
        }
        else if ( v17 >= 0 && v10 == 1 )
        {
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, v14) >= 0 )
            PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
        }
        goto LABEL_23;
      }
      v20 = v12 - 65537;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v25 = v21 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              if ( v26 != 1 )
                goto LABEL_22;
              v10 = 11;
            }
            else
            {
              v10 = 10;
            }
          }
          else
          {
            v10 = 9;
          }
        }
        else
        {
          v10 = 8;
        }
      }
      else
      {
        v10 = 7;
      }
      if ( PiDrvDbCtx )
        goto LABEL_17;
    }
LABEL_22:
    v18 = -1073741811;
LABEL_23:
    v9 = PiCMReturnBasicResultData(v18, v39, a3, a4, v29);
  }
  PiCMReleasePropertyInputData(v30);
  return (unsigned int)v9;
}
