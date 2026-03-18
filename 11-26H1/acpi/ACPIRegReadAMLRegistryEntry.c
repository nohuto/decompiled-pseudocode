/*
 * XREFs of ACPIRegReadAMLRegistryEntry @ 0x1400C89FC
 * Callers:
 *     ACPIMapNamedTable @ 0x14003D2D0 (ACPIMapNamedTable.c)
 *     ACPILoadProcessDSDT @ 0x1400DB740 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessRSDT @ 0x1400DDE64 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1400386C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_s @ 0x14003EBCC (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_Ld @ 0x1400688FC (WPP_RECORDER_SF_Ld.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1400B6AA8 (ACPIRegReadEntireAcpiTable.c)
 *     OSOpenLargestSubkey @ 0x1400B708C (OSOpenLargestSubkey.c)
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 *     ACPIRegLocalCopyString @ 0x1400C8CF0 (ACPIRegLocalCopyString.c)
 *     OSOpenHandle @ 0x1400C8D44 (OSOpenHandle.c)
 */

bool __fastcall ACPIRegReadAMLRegistryEntry(const void **a1, char a2)
{
  _DWORD *v2; // r15
  void *v3; // rbx
  bool v4; // di
  char *Pool2; // rax
  char *v7; // rsi
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  int v20; // [rsp+20h] [rbp-20h]
  __int64 v21; // [rsp+28h] [rbp-18h]
  int v22; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+48h] BYREF
  void *v24; // [rsp+90h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+58h]

  LOBYTE(v23) = a2;
  v2 = *a1;
  v3 = 0LL;
  v4 = 0;
  v24 = 0LL;
  Handle = 0LL;
  v22 = 0;
  if ( (AcpiOverrideAttributes & 0x10000) == 0 )
    return 0;
  Pool2 = (char *)ExAllocatePool2(256LL, 89LL, 1399874369LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 0;
  qmemcpy(Pool2, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\", 68);
  v9 = (_BYTE *)ACPIRegLocalCopyString(Pool2 + 68, v2, 4LL);
  *v9 = 92;
  v10 = (_BYTE *)ACPIRegLocalCopyString(v9 + 1, (char *)v2 + 10, 6LL);
  *v10 = 92;
  *(_BYTE *)ACPIRegLocalCopyString(v10 + 1, v2 + 4, 8LL) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_s(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      11,
      30,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      (__int64)v7);
  }
  v12 = OSOpenHandle(v7);
  if ( v12 >= 0 )
  {
    v14 = OSOpenLargestSubkey(Handle, &v24, v2[6]);
    if ( v14 >= 0 )
    {
      v3 = v24;
      v23 = 4;
      v16 = OSReadRegValue("Action", v24, &v22, &v23);
      if ( v16 >= 0 && v23 == 4 )
      {
        if ( v22 )
        {
          if ( (unsigned int)(v22 - 1) >= 2 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v21) = v22;
            LOBYTE(v17) = 2;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v17,
              11,
              34,
              (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
              v21);
          }
        }
        else
        {
          v4 = (int)ACPIRegReadEntireAcpiTable((__int64)v3, a1) >= 0;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Ld(WPP_GLOBAL_Control->DeviceExtension, v17, v18, v19, v20, v16, v23);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_L(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          11,
          32,
          (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
          v14);
      }
      v3 = v24;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = v12;
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      11,
      31,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      v21);
  }
  ExFreePoolWithTag(v7, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ZwClose(v3);
  return v4;
}
