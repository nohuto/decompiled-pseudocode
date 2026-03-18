/*
 * XREFs of ACPIFilterIrpQueryPower @ 0x140043700
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDockIsDockDevice @ 0x14001B4BC (ACPIDockIsDockDevice.c)
 *     AMLIIsNamedChildPresent @ 0x14001C060 (AMLIIsNamedChildPresent.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1400254E0 (ACPIDispatchForwardPowerIrp.c)
 */

__int64 __fastcall ACPIFilterIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 *v7; // rbp
  unsigned int LowPart; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  int v12; // edx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation->Control |= 1u;
  if ( CurrentStackLocation->Parameters.Create.Options )
    goto LABEL_3;
  if ( CurrentStackLocation->Parameters.Create.EaLength != 7 )
    goto LABEL_3;
  v7 = *(__int64 **)(DeviceExtension + 760);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( ACPIDockIsDockDevice() )
    goto LABEL_3;
  v9 = LowPart - 2;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
        {
LABEL_11:
          a2->IoStatus.Status = -1073741823;
          IofCompleteRequest(a2, 0);
          return 259LL;
        }
        v12 = 877282655;
      }
      else
      {
        v12 = 860505439;
      }
    }
    else
    {
      v12 = 843728223;
    }
  }
  else
  {
    v12 = 826951007;
  }
  if ( !AMLIIsNamedChildPresent(v7, v12) )
    goto LABEL_11;
  a2->IoStatus.Status = 0;
LABEL_3:
  ACPIDispatchForwardPowerIrp(a1, a2);
  return 259LL;
}
