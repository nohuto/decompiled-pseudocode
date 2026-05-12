/*
 * XREFs of RaDriverPnpIrp @ 0x140035490
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPnpIrp @ 0x1400355D8 (RaidAdapterPnpIrp.c)
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 *     NvmeNamespacePnpIrp @ 0x140040B50 (NvmeNamespacePnpIrp.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     NvmeAdapterPnpIrp @ 0x1400DA0D8 (NvmeAdapterPnpIrp.c)
 *     StorChildAdapterPdoPnpIrp @ 0x14012EFE0 (StorChildAdapterPdoPnpIrp.c)
 */

__int64 __fastcall RaDriverPnpIrp(__int64 a1, __int64 a2)
{
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ebx

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      26LL,
      &WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids,
      a1,
      a2,
      *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL));
  }
  v4 = **(_DWORD **)(a1 + 64);
  if ( v4 == 1396916560 )
  {
    v5 = StorChildAdapterPdoPnpIrp(*(_QWORD *)(a1 + 64), (PIRP)a2);
    goto LABEL_16;
  }
  *(_BYTE *)(a2 + 141) = -88;
  switch ( v4 )
  {
    case 1094997074:
      v5 = RaidAdapterPnpIrp(*(_QWORD *)(a1 + 64), a2);
      goto LABEL_16;
    case 1314275652:
      v5 = NvmeAdapterPnpIrp(*(PVOID *)(a1 + 64), (PIRP)a2);
      goto LABEL_16;
    case 1314278989:
      v5 = NvmeNamespacePnpIrp(*(_QWORD *)(a1 + 64), a2);
LABEL_16:
      v6 = v5;
      goto LABEL_17;
    case 1431193940:
      v5 = RaUnitPnpIrp(*(_QWORD *)(a1 + 64), a2);
      goto LABEL_16;
  }
  v6 = -1073741823;
LABEL_17:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 27LL, &WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids, a1, a2, v6);
  }
  return v6;
}
