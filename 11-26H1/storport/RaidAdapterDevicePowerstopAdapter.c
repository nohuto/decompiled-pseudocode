/*
 * XREFs of RaidAdapterDevicePowerstopAdapter @ 0x14000F504
 * Callers:
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x14000F480 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterStopOnPowerdown @ 0x140010A10 (RaidAdapterStopOnPowerdown.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     StorUpdateCrashDumpPowerReady @ 0x140019D70 (StorUpdateCrashDumpPowerReady.c)
 *     StorSetDevicePowerState @ 0x140049CC0 (StorSetDevicePowerState.c)
 *     RaidAdapterStop @ 0x1400509C8 (RaidAdapterStop.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     RaidAdapterClearCryptoKeyTable @ 0x140070F08 (RaidAdapterClearCryptoKeyTable.c)
 *     RaidClearAllNvmeIceKeyTables @ 0x140071344 (RaidClearAllNvmeIceKeyTables.c)
 *     RaidClearNvmeIceKeyTable @ 0x1400713F8 (RaidClearNvmeIceKeyTable.c)
 */

NTSTATUS __fastcall RaidAdapterDevicePowerstopAdapter(PIRP Irp, __int64 a2)
{
  unsigned int LowPart; // esi
  __int64 v5; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v7; // rax
  NTSTATUS result; // eax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  LODWORD(v10) = 0;
  v9 = 0LL;
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 20LL, &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids, a2, Irp);
  }
  RaidAdapterStop(a2);
  v5 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 348) = LowPart;
  StorSetDevicePowerState(v5, LowPart);
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 5080) )
    StorUpdateCrashDumpPowerReady(a2);
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength == 3 )
    {
      if ( *(_QWORD *)(a2 + 5680) )
        RaidAdapterClearCryptoKeyTable(a2);
      RaidClearAllNvmeIceKeyTables();
    }
  }
  else if ( *(_QWORD *)(a2 + 5688) && Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength == 3 )
  {
    if ( (*(_BYTE *)(a2 + 112) & 0x10) != 0 )
      RaidClearNvmeIceKeyTable(*(_QWORD *)(a2 + 6256) + 56LL);
    else
      RaidAdapterClearCryptoKeyTable(a2);
  }
  if ( (*(_BYTE *)(a2 + 109) & 1) != 0 )
  {
    LODWORD(v9) = *(_DWORD *)(a2 + 876);
    v10 = *(_QWORD *)(a2 + 864);
    IoReportInterruptInactive(&v9);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v7 = Irp->Tail.Overlay.CurrentStackLocation;
  v7[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))RaidAdapterPowerDownDeviceCompletion;
  v7[-1].Context = 0LL;
  v7[-1].Control = -32;
  result = PoCallDriver(*(PDEVICE_OBJECT *)(a2 + 24), Irp);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    return WPP_SF_qqD(
             WPP_GLOBAL_Control->AttachedDevice,
             21LL,
             &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
             a2,
             Irp,
             result);
  }
  return result;
}
