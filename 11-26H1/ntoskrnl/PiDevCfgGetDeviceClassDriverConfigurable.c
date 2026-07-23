/*
 * XREFs of PiDevCfgGetDeviceClassDriverConfigurable @ 0x1407AC524
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x1407AEE54 (PpDevCfgProcessDeviceClass.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     PiDevCfgGetDriverPackageId @ 0x140AE9CA0 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 */

__int64 __fastcall PiDevCfgGetDeviceClassDriverConfigurable(
        int a1,
        int a2,
        int a3,
        int a4,
        wchar_t *SourceString,
        __int64 a6,
        _BYTE *a7)
{
  int v11; // ecx
  int ObjectProperties; // edi
  int v13; // esi
  int v15; // [rsp+68h] [rbp-41h] BYREF
  int v16; // [rsp+6Ch] [rbp-3Dh] BYREF
  unsigned int v17; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v18; // [rsp+74h] [rbp-35h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-21h] BYREF
  _QWORD v21[3]; // [rsp+98h] [rbp-11h] BYREF
  int v22; // [rsp+B0h] [rbp+7h]
  int v23; // [rsp+B4h] [rbp+Bh]
  __int64 v24; // [rsp+B8h] [rbp+Fh]

  v15 = 1;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v11 = PiPnpRtlCtx;
  ObjectProperties = 0;
  v13 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v17 = 0;
  v18 = 0;
  v16 = 0;
  *a7 = 0;
  if ( (int)PnpGetObjectProperty(
              v11,
              a1,
              2,
              a2,
              0LL,
              (__int64)DEVPKEY_DeviceClass_ConfigurableClassVersion,
              (__int64)&v15,
              (__int64)&v17,
              4,
              (__int64)&v16,
              0) >= 0
    && v15 == 7
    && v16 == 4
    && v17 )
  {
    if ( SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v13 = a6;
    }
    else
    {
      v21[1] = 18LL;
      v21[0] = &DEVPKEY_Device_DriverInfPath;
      v22 = 0;
      v21[2] = &UnicodeString;
      v24 = 0LL;
      v23 = 6;
      ObjectProperties = PiDevCfgQueryObjectProperties(1, a3, 1, a4, (__int64)v21, 1);
      if ( ObjectProperties < 0 )
        goto LABEL_19;
      if ( (int)v24 < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( UnicodeString.Buffer && (int)PiDevCfgGetDriverPackageId(UnicodeString.Buffer, &DestinationString) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
    }
    if ( DestinationString.Buffer
      && (int)PnpGetObjectProperty(
                PiPnpRtlCtx,
                DestinationString.Buffer,
                8,
                v13,
                0LL,
                (__int64)DEVPKEY_DriverPackage_ClassVersion,
                (__int64)&v15,
                (__int64)&v18,
                4,
                (__int64)&v16,
                0) >= 0
      && v15 == 7
      && v16 == 4
      && v18 >= v17 )
    {
      *a7 = 1;
    }
  }
LABEL_19:
  RtlFreeAnsiString(&UnicodeString);
  if ( DestinationString.Buffer != SourceString )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)ObjectProperties;
}
