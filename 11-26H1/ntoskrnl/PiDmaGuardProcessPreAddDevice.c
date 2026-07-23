/*
 * XREFs of PiDmaGuardProcessPreAddDevice @ 0x1409700B4
 * Callers:
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 * Callees:
 *     HalCvmDmaEnabled @ 0x1404FB2CC (HalCvmDmaEnabled.c)
 *     PiIommuGetDmaRemappingPolicy @ 0x1405DFDCC (PiIommuGetDmaRemappingPolicy.c)
 *     PiIommuSaveDeviceAtsSettings @ 0x140781A50 (PiIommuSaveDeviceAtsSettings.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x14096F000 (PipDmgSaveDeviceDmarPolicy.c)
 *     PipDmgSaveDeviceDmarAvailability @ 0x14096F1E4 (PipDmgSaveDeviceDmarAvailability.c)
 *     PipDmgGetDriversDmarPolicy @ 0x140B266DC (PipDmgGetDriversDmarPolicy.c)
 *     PipDmgGetDeviceDmarPolicy @ 0x140B3A940 (PipDmgGetDeviceDmarPolicy.c)
 */

__int64 __fastcall PiDmaGuardProcessPreAddDevice(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // edi
  __int64 result; // rax
  unsigned int DriversDmarPolicy; // ebx
  char DmaRemappingPolicy; // al
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v12 = 0;
  v5 = (__int64 *)(v2 + 720);
  if ( HalCvmDmaEnabled() )
  {
    DriversDmarPolicy = 2;
  }
  else
  {
    v7 = *v5;
    if ( !*v5 )
    {
      v8 = 0;
LABEL_4:
      PipDmgSaveDeviceDmarPolicy(v2, a2, 0);
      PipDmgSaveDeviceDmarAvailability(v2, a2, 0);
      return (unsigned int)v8;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 32) + 48LL) & 0x2000000) != 0 || (*(_BYTE *)(v7 + 16) & 0x10) != 0 )
    {
      DriversDmarPolicy = 1;
    }
    else
    {
      DriversDmarPolicy = 2;
      if ( (*(_BYTE *)(v7 + 17) & 2) == 0 && (*(_DWORD *)(v2 + 560) & 0x100000) == 0 )
      {
        if ( (int)PipDmgGetDeviceDmarPolicy(v6, &v12) >= 0 )
          DriversDmarPolicy = v12;
        else
          DriversDmarPolicy = PipDmgGetDriversDmarPolicy(a1);
      }
    }
    v8 = PiIommuSaveDeviceAtsSettings(v2);
    if ( v8 < 0 )
      goto LABEL_4;
  }
  v8 = PipDmgSaveDeviceDmarPolicy(v2, a2, DriversDmarPolicy);
  if ( v8 < 0 )
    goto LABEL_4;
  DmaRemappingPolicy = PiIommuGetDmaRemappingPolicy(*v5);
  result = PipDmgSaveDeviceDmarAvailability(v2, a2, -(DmaRemappingPolicy != 0));
  v8 = result;
  if ( (int)result < 0 )
    goto LABEL_4;
  return result;
}
