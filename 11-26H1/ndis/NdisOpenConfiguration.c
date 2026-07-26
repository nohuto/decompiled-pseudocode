/*
 * XREFs of NdisOpenConfiguration @ 0x14007B230
 * Callers:
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140084370 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140143390 (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x14005C970 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisWdfOpenConfigurationKey @ 0x14015DF30 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x14015EB30 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 */

void __stdcall NdisOpenConfiguration(
        PNDIS_STATUS Status,
        PNDIS_HANDLE ConfigurationHandle,
        NDIS_HANDLE WrapperConfigurationContext)
{
  PNDIS_HANDLE v4; // r15
  __int64 Pool2; // rax
  int v7; // edx
  _QWORD *v8; // rbx
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v4 = ConfigurationHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      8,
      21,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)WrapperConfigurationContext);
  }
  Pool2 = ExAllocatePool2(64LL, 40LL, 1751336014LL);
  v8 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v7 = 0;
    *(_DWORD *)Pool2 = 2621707;
    *Status = 0;
    v9 = *(_BYTE *)WrapperConfigurationContext == 10;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 16) = WrapperConfigurationContext;
    if ( v9 )
    {
      v10 = *((_QWORD *)WrapperConfigurationContext + 1);
      *(_QWORD *)(Pool2 + 8) = v10;
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 120) & 0x100) != 0 )
        {
          Handle = 0LL;
          v11 = ndisLWMOpenConfigurationKey((const struct _GUID *)(v10 + 4008), (KRegKey *)&Handle);
          v12 = NdisConvertNtStatusToNdisStatus(v11);
          *Status = v12;
          if ( v12 )
          {
            if ( Handle )
              ZwClose(Handle);
          }
          else
          {
            v8[4] = Handle;
          }
        }
        else if ( (*(_DWORD *)(v10 + 120) & 0x80u) == 0 )
        {
          *Status = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(v10 + 3832), 2u, 0xC2000000, (PHANDLE)(Pool2 + 32));
        }
        else
        {
          v13 = ndisWdfOpenConfigurationKey(v10);
          *Status = NdisConvertNtStatusToNdisStatus(v13);
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        8,
        22,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        (char)WrapperConfigurationContext);
    }
    if ( *Status < 0 )
      ExFreePoolWithTag(v8, 0);
    else
      *v4 = v8;
  }
  else
  {
    *Status = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      8,
      23,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)WrapperConfigurationContext);
  }
}
