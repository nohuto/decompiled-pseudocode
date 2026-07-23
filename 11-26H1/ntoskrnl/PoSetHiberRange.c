/*
 * XREFs of PoSetHiberRange @ 0x1404A93F0
 * Callers:
 *     HalpPciMarkHiberPhase @ 0x1404A93BC (HalpPciMarkHiberPhase.c)
 *     HalpAcpiMarkHiberPhase @ 0x1404FD8A4 (HalpAcpiMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x140506200 (HalpDmaMarkHiberAdapter.c)
 *     HalpExtEnvMarkHiberRegions @ 0x14050ED24 (HalpExtEnvMarkHiberRegions.c)
 *     HalpTimerMarkHiberPhase @ 0x14057A014 (HalpTimerMarkHiberPhase.c)
 *     HalpIommuExtMarkHiberMemory @ 0x14058E5A8 (HalpIommuExtMarkHiberMemory.c)
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x1405A3180 (HalpIommuDmarPageTableMarkHiberPhase.c)
 *     HvlDiscardPagesFromHibernation @ 0x1405C182C (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405C1894 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlMarkHiberPhase @ 0x1405C1ADC (HvlMarkHiberPhase.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1405C2060 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405C2134 (HvlpMarkHypervisorPagesForHibernation.c)
 *     IoGetDumpHiberRanges @ 0x1405C999C (IoGetDumpHiberRanges.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x1405FED68 (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x140627690 (RtlMarkHiberPhase.c)
 *     DifMarkHiberPhase @ 0x14064F530 (DifMarkHiberPhase.c)
 *     MiMarkKernelPageTablePte @ 0x1406F47D0 (MiMarkKernelPageTablePte.c)
 *     VslAllocateSecureHibernateResources @ 0x140794A70 (VslAllocateSecureHibernateResources.c)
 *     PopHiberInitializeResources @ 0x140B2C534 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x140B2C8F0 (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140BEF388 (PopBootLoaderTraceCopyPfnList.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140BF0664 (HalpMmAllocCtxMarkHiberPhase.c)
 *     HalpExtMarkHiberPhase @ 0x140BF1168 (HalpExtMarkHiberPhase.c)
 *     BgkResumePrepare @ 0x140BF744C (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140BF8E94 (KdMarkHiberPhase.c)
 *     KeMarkPcrHiberPhase @ 0x140BF8F24 (KeMarkPcrHiberPhase.c)
 *     PopSstInvokeNotificationHandlers @ 0x140BFF490 (PopSstInvokeNotificationHandlers.c)
 *     PopBuildMemoryImageHeader @ 0x140BFFC6C (PopBuildMemoryImageHeader.c)
 *     PopHiberNotificationDiscardMemoryCallback @ 0x140C00CB0 (PopHiberNotificationDiscardMemoryCallback.c)
 *     PopHiberNotificationDiscardPhysicalMemoryCallback @ 0x140C00CE0 (PopHiberNotificationDiscardPhysicalMemoryCallback.c)
 *     PopHiberNotificationMarkBootPhaseCallback @ 0x140C00D10 (PopHiberNotificationMarkBootPhaseCallback.c)
 *     PopMarkComponentsBootPhase @ 0x140C00E30 (PopMarkComponentsBootPhase.c)
 *     PopMarkHiberPhase @ 0x140C01160 (PopMarkHiberPhase.c)
 *     MiMarkHiberNotCachedPte @ 0x140C06DB0 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140C06F70 (MiMarkNonPagedHiberPhasePte.c)
 *     MmMarkHiberPhase @ 0x140C07330 (MmMarkHiberPhase.c)
 *     HaliLocateHiberRanges @ 0x140C0E620 (HaliLocateHiberRanges.c)
 *     HalpIommuMarkHiberPhase @ 0x140C0E870 (HalpIommuMarkHiberPhase.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140C133C4 (PopCopyFirmwareRuntimeInformationPfnList.c)
 *     BgMarkHiberPhase @ 0x140C55B00 (BgMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddressEx @ 0x1404A95C0 (MmGetPhysicalAddressEx.c)
 *     PopSetRange @ 0x1404A9650 (PopSetRange.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _PopInternalError @ 0x140603874 (_PopInternalError.c)
 *     MmGetSectionRange @ 0x14086AFFC (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x140C076D8 (MmMarkImageForHiberPhase.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  __int16 v5; // bx
  unsigned __int64 v6; // r10
  PVOID v7; // r14
  ULONG v8; // eax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rsi
  __int64 v11; // rbp
  ULONG_PTR v12; // r15
  __int64 v13; // r12
  unsigned int v14; // eax
  unsigned int v15; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v16[8]; // [rsp+38h] [rbp-40h] BYREF
  PVOID v17; // [rsp+80h] [rbp+8h]
  PVOID v18; // [rsp+90h] [rbp+18h] BYREF

  v18 = Address;
  v17 = MemoryMap;
  v5 = Flags;
  v16[0] = 0LL;
  v6 = (unsigned __int64)Address;
  v15 = 0;
  v7 = MemoryMap;
  if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) != 0 )
    return;
  if ( !MemoryMap )
  {
    v7 = (PVOID)qword_140F10470;
    v17 = (PVOID)qword_140F10470;
    if ( !qword_140F10470 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v14 = *(_DWORD *)(qword_140F10470 + 200);
    if ( v14 != 8 )
    {
      if ( v14 != 9 )
        KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v14, 0LL);
      return;
    }
    if ( (Flags & 0xFFFFBFFF) == 0x10000 && (Length || (Flags & 0x4000) == 0) )
    {
      v8 = Flags & 0x10000;
      goto LABEL_4;
    }
LABEL_23:
    KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
  }
  v8 = Flags & 0x10000;
  if ( (Flags & 0x10000) != 0 )
    goto LABEL_23;
LABEL_4:
  if ( !Length )
  {
    if ( v8 )
    {
      MmMarkImageForHiberPhase(Address);
      return;
    }
    if ( (int)MmGetSectionRange(Address, &v18, &v15) < 0 )
      PopInternalError(0xA1666uLL);
    Length = v15;
    v6 = (unsigned __int64)v18;
  }
  if ( (v5 & 4) != 0 )
    v5 = v5 & 0xFFF9 | 2;
  if ( (v5 & 0x4000) != 0 )
  {
    PopSetRange((ULONG_PTR)v7, Tag);
  }
  else
  {
    v9 = v6 >> 12;
    v10 = (v6 + Length + 4095) >> 12;
    while ( v9 < v10 )
    {
      v11 = 1LL;
      if ( (int)MmGetPhysicalAddressEx(v9 << 12, v16) >= 0 )
      {
        v12 = v9 + 1;
        v13 = v16[0] >> 12;
        if ( v9 + 1 < v10 )
        {
          do
          {
            if ( (int)MmGetPhysicalAddressEx((v9 << 12) + (v11 << 12), v16) < 0 )
              break;
            if ( v13 - v9 + v12 != v16[0] >> 12 )
              break;
            ++v11;
            ++v12;
          }
          while ( v12 < v10 );
          v7 = v17;
        }
        PopSetRange((ULONG_PTR)v7, Tag);
      }
      v9 += v11;
    }
  }
}
