/*
 * XREFs of OSReadAcpiConfigurationData @ 0x1400D7CF8
 * Callers:
 *     ACPIInitializeAMLI @ 0x1400D7A1C (ACPIInitializeAMLI.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_SL @ 0x1400689D4 (WPP_RECORDER_SF_SL.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     OSGetRegistryValue @ 0x1400C55FC (OSGetRegistryValue.c)
 *     OSOpenUnicodeHandle @ 0x1400C8E14 (OSOpenUnicodeHandle.c)
 *     OSCloseHandle @ 0x1400D1E58 (OSCloseHandle.c)
 */

__int64 __fastcall OSReadAcpiConfigurationData(_QWORD *a1)
{
  unsigned int v1; // edi
  int v3; // edx
  int v4; // ebx
  int v6; // edx
  ULONG v7; // esi
  int v8; // edx
  int v9; // ebx
  int v10; // r8d
  int v11; // r9d
  HANDLE v12; // rcx
  __int64 v13; // rcx
  wchar_t *v14; // r8
  int v15; // edx
  __int64 v16; // rcx
  BOOLEAN v17; // bl
  NTSTATUS v18; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  void *v21; // [rsp+58h] [rbp+Fh] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp+17h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp+27h] BYREF
  char v24; // [rsp+80h] [rbp+37h] BYREF

  v1 = 0;
  *a1 = 0LL;
  KeyHandle = 0LL;
  v21 = 0LL;
  String1 = 0LL;
  DestinationString = 0LL;
  String2 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\MultiFunctionAdapter");
  v4 = OSOpenUnicodeHandle(&DestinationString, 0LL, &v21);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        22,
        16,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        v4);
    }
    return (unsigned int)v4;
  }
  RtlInitUnicodeString(&String1, L"ACPI BIOS");
  v7 = 0;
  DestinationString.Buffer = (wchar_t *)&v24;
  DestinationString.MaximumLength = 8;
  while ( v7 < 0x3E7 )
  {
    DestinationString.Length = 0;
    RtlIntegerToUnicodeString(v7, 0xAu, &DestinationString);
    v9 = OSOpenUnicodeHandle(&DestinationString, v21, &KeyHandle);
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_SL(WPP_GLOBAL_Control->DeviceExtension, v8, v10, v11);
      v1 = v9;
LABEL_20:
      OSCloseHandle(v21);
      return v1;
    }
    if ( OSGetRegistryValue(KeyHandle, L"Identifier", a1) < 0 )
    {
      v12 = KeyHandle;
LABEL_10:
      OSCloseHandle(v12);
      goto LABEL_16;
    }
    v13 = *a1;
    v14 = (wchar_t *)(*a1 + 8LL);
    String2.Buffer = v14;
    String2.MaximumLength = *(_WORD *)(v13 + 4);
    v15 = *(_DWORD *)(v13 + 4) >> 1;
    if ( v15 )
    {
      do
      {
        v16 = (unsigned int)(v15 - 1);
        if ( v14[v16] )
          break;
        --v15;
      }
      while ( (_DWORD)v16 );
    }
    String2.Length = 2 * v15;
    v17 = RtlEqualUnicodeString(&String1, &String2, 1u);
    ExFreePoolWithTag((PVOID)*a1, 0);
    v12 = KeyHandle;
    if ( !v17 )
      goto LABEL_10;
    v18 = OSGetRegistryValue(KeyHandle, L"Configuration Data", a1);
    OSCloseHandle(KeyHandle);
    if ( v18 >= 0 )
      goto LABEL_20;
LABEL_16:
    ++v7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      22,
      18,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids);
  }
  return 3221225524LL;
}
