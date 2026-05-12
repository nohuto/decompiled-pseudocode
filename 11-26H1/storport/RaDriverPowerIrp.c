/*
 * XREFs of RaDriverPowerIrp @ 0x140072930
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPowerIrp @ 0x14002E3C0 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x14003C8D0 (RaUnitPowerIrp.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     NvmeAdapterPowerIrp @ 0x1400DAD68 (NvmeAdapterPowerIrp.c)
 *     NvmeNamespacePowerIrp @ 0x1401085E4 (NvmeNamespacePowerIrp.c)
 *     StorChildAdapterPdoPowerIrp @ 0x14012F484 (StorChildAdapterPdoPowerIrp.c)
 */

__int64 __fastcall RaDriverPowerIrp(__int64 a1, __int64 a2)
{
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Cu,
      (__int64)&WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids,
      a1,
      a2);
  }
  v4 = **(_DWORD **)(a1 + 64);
  if ( v4 == 1396916560 )
  {
    v5 = StorChildAdapterPdoPowerIrp(*(_QWORD *)(a1 + 64), a2);
    goto LABEL_16;
  }
  *(_BYTE *)(a2 + 141) = -88;
  switch ( v4 )
  {
    case 1094997074:
      v5 = RaidAdapterPowerIrp(*(_QWORD *)(a1 + 64), a2);
      goto LABEL_16;
    case 1314275652:
      v5 = NvmeAdapterPowerIrp(*(_QWORD *)(a1 + 64), a2);
      goto LABEL_16;
    case 1314278989:
      v5 = NvmeNamespacePowerIrp(*(_QWORD *)(a1 + 64), a2);
LABEL_16:
      v6 = v5;
      goto LABEL_17;
    case 1431193940:
      v5 = RaUnitPowerIrp(*(_QWORD *)(a1 + 64), a2);
      goto LABEL_16;
  }
  v6 = -1073741823;
LABEL_17:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    v8 = v6;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Du,
      (__int64)&WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids,
      a1,
      a2,
      v8);
  }
  return v6;
}
