/*
 * XREFs of NdisMFreeMapRegisters @ 0x140174000
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140022550 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMFreeMapRegisters(NDIS_HANDLE MiniportAdapterHandle)
{
  struct _NDIS_SG_DMA_BLOCK *v1; // rbx
  unsigned int v3; // ebp
  void (__fastcall *FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // r15
  unsigned int v5; // r14d
  KIRQL v6; // si

  v1 = (struct _NDIS_SG_DMA_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 63);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      45,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)MiniportAdapterHandle);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)MiniportAdapterHandle + 30) & 8) != 0 && v1->MapRegisters )
  {
    v3 = (v1->MaximumPhysicalMapping - 2) >> 12;
    FreeMapRegisters = v1->DmaAdapterObject->DmaOperations->FreeMapRegisters;
    v5 = 0;
    v6 = KfRaiseIrql(2u);
    while ( v5 < v1->BaseMapRegistersNeeded )
      FreeMapRegisters(v1->DmaAdapterObject, v1->MapRegisters[v5++].MapRegister, v3 + 2);
    if ( v6 != 2 )
      KeLowerIrql(v6);
    ExFreePoolWithTag(v1->MapRegisters, 0);
    v1->MapRegisters = 0LL;
    ndisDereferenceDmaAdapter(v1);
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      46,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)MiniportAdapterHandle);
}
