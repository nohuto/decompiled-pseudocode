/*
 * XREFs of RaidAdapterSetSystemPowerIrp @ 0x14002F554
 * Callers:
 *     RaidAdapterSetPowerIrp @ 0x14002E870 (RaidAdapterSetPowerIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x14002F6B4 (RaidAcquireAdapterRemoveLock.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterSetSystemPowerIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _IO_STACK_LOCATION *v5; // rax
  _IO_STACK_LOCATION *v6; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (CurrentStackLocation->Parameters.Read.Length & 0x400000) != 0
    && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 6 )
  {
    *(_DWORD *)(a1 + 6204) |= 1u;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 39LL, &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids, a1, a2);
  }
  RaidAcquireAdapterRemoveLock(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v5 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v5[-1].MajorFunction = *(_OWORD *)&v5->MajorFunction;
  *(_OWORD *)&v5[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v5->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v5[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v5->Parameters.SetQuota + 6);
  v5[-1].FileObject = v5->FileObject;
  v5[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))RaidAdapterSetSystemPowerCompletion;
  v6[-1].Context = 0LL;
  v6[-1].Control = -32;
  PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 40LL, &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids, a1, a2, 259);
  }
  return 259LL;
}
