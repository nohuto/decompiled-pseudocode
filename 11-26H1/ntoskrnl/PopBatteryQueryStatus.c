/*
 * XREFs of PopBatteryQueryStatus @ 0x140B00C30
 * Callers:
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     IoSynchronousCallDriver @ 0x1404ABE20 (IoSynchronousCallDriver.c)
 *     Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline @ 0x1404DA8A4 (Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline.c)
 */

NTSTATUS __fastcall PopBatteryQueryStatus(__int64 a1, char a2)
{
  __int64 v2; // r14
  _DWORD *v5; // rsi
  IRP *v6; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  IRP *v8; // rdx
  NTSTATUS result; // eax
  int v10; // eax
  __int128 v11; // xmm1
  struct _IO_STACK_LOCATION *v12; // rax
  unsigned int v13; // esi
  unsigned int v14; // r8d
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // r9d
  int v18; // r10d
  unsigned int v19; // edx
  unsigned int v20; // eax

  *(_QWORD *)(a1 + 192) = 0LL;
  v2 = a1 + 188;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(a1 + 108);
  if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_BYTE *)(a1 + 208) = 1;
    *(_DWORD *)(a1 + 192) = 0;
  }
  if ( !a2 )
  {
    v13 = *(_DWORD *)(a1 + 136);
    v14 = *(_DWORD *)(a1 + 152);
    v15 = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(a1 + 192) = -1;
    *(_DWORD *)(a1 + 196) = v15;
    if ( v14 <= v13 )
    {
      v20 = *(_DWORD *)(a1 + 132);
      if ( v14 <= v20 )
      {
        v16 = 0;
        v13 = *(_DWORD *)(a1 + 132);
      }
      else
      {
        v16 = v20 + 1;
      }
    }
    else
    {
      v16 = v13 + 1;
      v13 = -1;
    }
    v17 = 100;
    v18 = 199;
    while ( v17 )
    {
      v19 = *(_DWORD *)(a1 + 128) * v18 / 0xC8u;
      if ( v19 - 1 >= v14 && v19 - 1 < v13 )
        v13 = v19 - 1;
      if ( v19 <= v14 )
      {
        if ( v19 > v16 )
          v16 = *(_DWORD *)(a1 + 128) * v18 / 0xC8u;
        break;
      }
      --v17;
      v18 -= 2;
    }
    *(_DWORD *)(a1 + 204) = v13;
    *(_DWORD *)(a1 + 200) = v16;
    if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_DWORD *)(a1 + 192) = -1;
      *(_DWORD *)(a1 + 212) = PopBatteryInstantaneousPeakPowerThresholdInMW;
      *(_DWORD *)(a1 + 216) = PopBatterySustainablePeakPowerThresholdInMW;
      *(_DWORD *)(a1 + 220) = PopBatteryPresentRateThreshold;
    }
    DbgPrintEx(0x92u, 2u, "\nBattery Triggers [%p]\n|- High = %u\n|- Low  = %u\n", (const void *)a1, v13, v16);
  }
  v5 = (_DWORD *)(a1 + 248);
  if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() && (*v5 & 1) != 0 )
  {
    v6 = *(IRP **)(a1 + 56);
    IoReuseIrp(v6, -1073741637);
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 14;
    CurrentStackLocation[-1].Parameters.Create.Options = 36;
    CurrentStackLocation[-1].Parameters.Read.Length = 36;
  }
  else
  {
    v6 = *(IRP **)(a1 + 56);
    IoReuseIrp(v6, -1073741637);
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 14;
    CurrentStackLocation[-1].Parameters.Create.Options = 20;
    CurrentStackLocation[-1].Parameters.Read.Length = 16;
  }
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2703460;
  v6->AssociatedIrp.MasterIrp = (struct _IRP *)v2;
  v8 = *(IRP **)(a1 + 56);
  if ( a2 )
  {
    result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), v8);
    if ( result < 0 )
      return result;
    if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline()
      && (*v5 & 1) != 0 )
    {
      v10 = *(_DWORD *)(v2 + 32);
      v11 = *(_OWORD *)(v2 + 16);
      *(_OWORD *)(a1 + 148) = *(_OWORD *)v2;
      *(_OWORD *)(a1 + 164) = v11;
      *(_DWORD *)(a1 + 180) = v10;
    }
    else
    {
      *(_OWORD *)(a1 + 148) = *(_OWORD *)v2;
    }
  }
  else
  {
    v12 = v8->Tail.Overlay.CurrentStackLocation;
    v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopBatteryIrpComplete;
    v12[-1].Context = (PVOID)a1;
    v12[-1].Control = -32;
    IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 48), *(PIRP *)(a1 + 56));
  }
  return 0;
}
