/*
 * XREFs of ACPICMButtonSetPower @ 0x14004AD00
 * Callers:
 *     ACPICMLidSetPowerCompletion @ 0x14004AC10 (ACPICMLidSetPowerCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x14001B834 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIBusIrpSetPower @ 0x14001BAA0 (ACPIBusIrpSetPower.c)
 *     OSNotifyDeviceWake @ 0x14001EBC8 (OSNotifyDeviceWake.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPICMButtonSetPower(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  __int64 DeviceExtension; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // r9
  const char *v10; // rcx
  const char *v11; // r10
  NTSTATUS v12; // r11d
  __int64 v13; // r8
  const char *v14; // rcx
  const char *v15; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v5 = a2[23];
  *(_BYTE *)(v5 + 3) |= 1u;
  if ( *(_DWORD *)(v5 + 16) != 1 && (*(_DWORD *)(DeviceExtension + 200) & 4) != 0 )
  {
    v6 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v6 & 0x10000) != 0 )
    {
      v7 = (*(_DWORD *)(v5 + 8) >> 8) & 0xF;
      if ( v7 == 1 )
      {
        v8 = OSNotifyDeviceWake(*(__int64 **)(DeviceExtension + 760));
        if ( v8 < 0 )
        {
          v9 = *(_QWORD *)(DeviceExtension + 8);
          v10 = byte_140075A82;
          v11 = byte_140075A82;
          if ( (v9 & 0x200000000000LL) != 0 )
          {
            v10 = *(const char **)(DeviceExtension + 608);
            if ( (v9 & 0x400000000000LL) != 0 )
              v11 = *(const char **)(DeviceExtension + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qLqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              0xBu,
              (__int64)&WPP_8cbc4c30c1d63bc279c6551cfa219e8c_Traceguids,
              (char)a2,
              v8,
              DeviceExtension,
              v10,
              v11);
        }
      }
      else if ( *(_DWORD *)(DeviceExtension + 536) >= v7 && (v6 & 0x1000000000000000LL) == 0 )
      {
        v12 = PoRequestPowerIrp(DeviceObject, 0, (POWER_STATE)v7, ACPICMButtonWaitWakeComplete, 0LL, 0LL);
        if ( v12 < 0 )
        {
          v13 = *(_QWORD *)(DeviceExtension + 8);
          v14 = byte_140075A82;
          v15 = byte_140075A82;
          if ( (v13 & 0x200000000000LL) != 0 )
          {
            v14 = *(const char **)(DeviceExtension + 608);
            if ( (v13 & 0x400000000000LL) != 0 )
              v15 = *(const char **)(DeviceExtension + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qLqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              0xCu,
              (__int64)&WPP_8cbc4c30c1d63bc279c6551cfa219e8c_Traceguids,
              (char)a2,
              v12,
              DeviceExtension,
              v14,
              v15);
        }
      }
    }
  }
  ACPIBusIrpSetPower(DeviceObject, a2);
  return 259LL;
}
