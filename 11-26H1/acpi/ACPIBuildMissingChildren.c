/*
 * XREFs of ACPIBuildMissingChildren @ 0x14001CAE4
 * Callers:
 *     ACPIDetectFilterDevices @ 0x14001D41C (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x14001DB6C (ACPIDetectPdoDevices.c)
 * Callees:
 *     OSNotifyCreateDevice @ 0x14001E2EC (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x14001E71C (OSNotifyCreateOperationRegion.c)
 *     AMLIIterateSiblingsNext @ 0x14003DB50 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x14003DC0C (AMLIGetFirstChild.c)
 *     WPP_RECORDER_SF_DD @ 0x14004EE20 (WPP_RECORDER_SF_DD.c)
 *     OSNotifyCreateThermalZone @ 0x140051E28 (OSNotifyCreateThermalZone.c)
 *     OSNotifyCreateProcessor @ 0x140063C6C (OSNotifyCreateProcessor.c)
 */

__int64 __fastcall ACPIBuildMissingChildren(__int64 a1)
{
  __int64 *i; // rax
  __int64 v2; // rax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int ThermalZone; // eax
  int v7; // edx
  ULONG_PTR v8; // rbx

  if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x33u) )
  {
    for ( i = (__int64 *)AMLIGetFirstChild(*(_QWORD *)(a1 + 760)); ; i = (__int64 *)AMLIIterateSiblingsNext(v8) )
    {
      v8 = (ULONG_PTR)i;
      if ( !i )
        return 0LL;
      v2 = *i;
      if ( !*(_QWORD *)(*(_QWORD *)v8 + 104LL) )
      {
        v3 = *(unsigned __int16 *)(v2 + 66) - 6;
        if ( v3 )
        {
          v4 = v3 - 4;
          if ( v4 )
          {
            v5 = v4 - 2;
            if ( v5 )
            {
              if ( v5 != 1 )
                continue;
              ThermalZone = OSNotifyCreateThermalZone(v8, 0x20000000000LL);
            }
            else
            {
              ThermalZone = OSNotifyCreateProcessor(v8, 0x20000000000LL);
            }
          }
          else
          {
            ThermalZone = OSNotifyCreateOperationRegion(v8);
          }
        }
        else
        {
          ThermalZone = OSNotifyCreateDevice(v8);
        }
        if ( ThermalZone < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            v7,
            22,
            24,
            (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
            ThermalZone,
            v8);
        }
      }
    }
  }
  return 0LL;
}
