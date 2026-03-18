/*
 * XREFs of ACPIAmliBuildObjectPathnameUnicode @ 0x14002C354
 * Callers:
 *     AcpiDiagTraceFanEvent @ 0x140018794 (AcpiDiagTraceFanEvent.c)
 *     AcpiDiagTraceThermalNotification @ 0x14002A200 (AcpiDiagTraceThermalNotification.c)
 *     AcpiDiagTraceTemperatureChange @ 0x14002A984 (AcpiDiagTraceTemperatureChange.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x14002BCA4 (AcpiDiagTraceThermalZoneRundown.c)
 *     AcpiDiagTraceDeviceCoolingRundown @ 0x14002C1F8 (AcpiDiagTraceDeviceCoolingRundown.c)
 *     AcpiDiagTraceConstraintEvent @ 0x14002CBF0 (AcpiDiagTraceConstraintEvent.c)
 *     AcpiDiagTraceButtonNotification @ 0x14002F7E4 (AcpiDiagTraceButtonNotification.c)
 *     AcpiDiagTraceButtonIrpCompletion @ 0x14002FA8C (AcpiDiagTraceButtonIrpCompletion.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x140034DD0 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiDiagTraceDevicePassiveCooling @ 0x14004E038 (AcpiDiagTraceDevicePassiveCooling.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x14004F67C (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTraceDeviceActiveCooling @ 0x1400562B4 (AcpiDiagTraceDeviceActiveCooling.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x140056A84 (AcpiDiagTraceTemperatureTelemetry.c)
 *     ACPIReserveDependencies @ 0x140059F24 (ACPIReserveDependencies.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1400676F0 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x140067964 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIThermalGetOverrideHandle @ 0x1400A9848 (ACPIThermalGetOverrideHandle.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x14002C5E4 (ACPIAmliBuildObjectPathname.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathnameUnicode(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // si
  __int16 *Pool2; // rdi
  __int64 result; // rax
  unsigned int v6; // ebx
  char *v7; // r12
  int v8; // r15d
  unsigned __int16 v9; // bp
  char *v10; // r8
  __int16 *v11; // r9
  char v12; // dl
  char v13; // cl
  __int16 v14; // ax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v3 = 0;
  Pool2 = 0LL;
  result = ACPIAmliBuildObjectPathname(a1, &P);
  v6 = result;
  if ( (int)result < 0 )
    return result;
  v7 = (char *)P;
  v8 = 0;
LABEL_3:
  if ( v8 >= 2 )
  {
    *(_WORD *)a2 = v3 - 2;
    goto LABEL_27;
  }
  v9 = 0;
  v10 = v7;
  v11 = Pool2;
  v12 = 1;
  v6 = 0;
  while ( 1 )
  {
    if ( !v12 )
    {
      if ( v9 > v3 )
      {
        if ( Pool2 )
        {
          ExFreePoolWithTag(Pool2, 0x53706341u);
          Pool2 = 0LL;
        }
        if ( v8 )
        {
          v6 = -2147483643;
          goto LABEL_41;
        }
        Pool2 = (__int16 *)ExAllocatePool2(64LL, v9, 1399874369LL);
        if ( !Pool2 )
        {
          v6 = -1073741670;
          goto LABEL_39;
        }
        v3 = v9;
      }
      ++v8;
      goto LABEL_3;
    }
    if ( v9 > 0xFFFDu )
    {
      v6 = -1073741675;
      goto LABEL_41;
    }
    v13 = *v10;
    v9 += 2;
    if ( v3 < v9 )
    {
      v12 = v13 != 0 ? v12 : 0;
      goto LABEL_20;
    }
    if ( (unsigned __int8)(v13 - 97) > 0x19u )
    {
      if ( v13 >= 65 )
      {
        if ( v13 > 90 )
        {
          if ( v13 == 95 )
          {
            v14 = 95;
          }
          else
          {
            if ( v13 != 92 )
              break;
            v14 = 92;
          }
          goto LABEL_19;
        }
        goto LABEL_36;
      }
      if ( v13 < 48 )
      {
        v14 = 46;
        if ( v13 != 46 )
        {
          if ( v13 )
            break;
          v14 = 0;
          v12 = 0;
        }
        goto LABEL_19;
      }
      if ( v13 > 57 )
        break;
    }
LABEL_36:
    v14 = *v10;
LABEL_19:
    *v11++ = v14;
LABEL_20:
    ++v10;
  }
  v6 = -1073741811;
LABEL_41:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x53706341u);
LABEL_39:
  Pool2 = 0LL;
  *(_OWORD *)a2 = 0LL;
  v3 = 0;
LABEL_27:
  *(_WORD *)(a2 + 2) = v3;
  *(_QWORD *)(a2 + 8) = Pool2;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x53706341u);
  return v6;
}
