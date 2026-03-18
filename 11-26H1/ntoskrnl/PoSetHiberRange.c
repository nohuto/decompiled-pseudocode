/*
 * XREFs of PoSetHiberRange @ 0x1404AFD60
 * Callers:
 *     HalpPciMarkHiberPhase @ 0x1404AFD2C (HalpPciMarkHiberPhase.c)
 *     HalpAcpiMarkHiberPhase @ 0x140503FD4 (HalpAcpiMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x14050C790 (HalpDmaMarkHiberAdapter.c)
 *     HalpExtEnvMarkHiberRegions @ 0x1405152B4 (HalpExtEnvMarkHiberRegions.c)
 *     HalpTimerMarkHiberPhase @ 0x140577AE4 (HalpTimerMarkHiberPhase.c)
 *     HalpIommuExtMarkHiberMemory @ 0x14058BE28 (HalpIommuExtMarkHiberMemory.c)
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x1405A0970 (HalpIommuDmarPageTableMarkHiberPhase.c)
 *     HvlDiscardPagesFromHibernation @ 0x1405BEFBC (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405BF024 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlMarkHiberPhase @ 0x1405BF26C (HvlMarkHiberPhase.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1405BF7F0 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405BF8C4 (HvlpMarkHypervisorPagesForHibernation.c)
 *     IoGetDumpHiberRanges @ 0x1405C70CC (IoGetDumpHiberRanges.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x1405FC318 (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x140624640 (RtlMarkHiberPhase.c)
 *     DifMarkHiberPhase @ 0x14064B950 (DifMarkHiberPhase.c)
 *     MiMarkKernelPageTablePte @ 0x1406EFB60 (MiMarkKernelPageTablePte.c)
 *     VslAllocateSecureHibernateResources @ 0x140791F40 (VslAllocateSecureHibernateResources.c)
 *     PopHiberInitializeResources @ 0x140B2A4B4 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x140B2A870 (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140BE9388 (PopBootLoaderTraceCopyPfnList.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140BEA664 (HalpMmAllocCtxMarkHiberPhase.c)
 *     HalpExtMarkHiberPhase @ 0x140BEB168 (HalpExtMarkHiberPhase.c)
 *     BgkResumePrepare @ 0x140BF144C (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140BF2E94 (KdMarkHiberPhase.c)
 *     KeMarkPcrHiberPhase @ 0x140BF2F24 (KeMarkPcrHiberPhase.c)
 *     PopSstInvokeNotificationHandlers @ 0x140BF9490 (PopSstInvokeNotificationHandlers.c)
 *     PopBuildMemoryImageHeader @ 0x140BF9C6C (PopBuildMemoryImageHeader.c)
 *     PopHiberNotificationDiscardMemoryCallback @ 0x140BFACB0 (PopHiberNotificationDiscardMemoryCallback.c)
 *     PopHiberNotificationDiscardPhysicalMemoryCallback @ 0x140BFACE0 (PopHiberNotificationDiscardPhysicalMemoryCallback.c)
 *     PopHiberNotificationMarkBootPhaseCallback @ 0x140BFAD10 (PopHiberNotificationMarkBootPhaseCallback.c)
 *     PopMarkComponentsBootPhase @ 0x140BFAE30 (PopMarkComponentsBootPhase.c)
 *     PopMarkHiberPhase @ 0x140BFB160 (PopMarkHiberPhase.c)
 *     MiMarkHiberNotCachedPte @ 0x140C00BA0 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140C00D60 (MiMarkNonPagedHiberPhasePte.c)
 *     MmMarkHiberPhase @ 0x140C01120 (MmMarkHiberPhase.c)
 *     HaliLocateHiberRanges @ 0x140C08410 (HaliLocateHiberRanges.c)
 *     HalpIommuMarkHiberPhase @ 0x140C08660 (HalpIommuMarkHiberPhase.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140C0D1B4 (PopCopyFirmwareRuntimeInformationPfnList.c)
 *     BgMarkHiberPhase @ 0x140C4FB00 (BgMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddressEx @ 0x1404AFF24 (MmGetPhysicalAddressEx.c)
 *     PopSetRange @ 0x1404AFFB4 (PopSetRange.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _PopInternalError @ 0x140600DC4 (_PopInternalError.c)
 *     MmGetSectionRange @ 0x140864C1C (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x140C014C8 (MmMarkImageForHiberPhase.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  __int16 v5; // bx
  unsigned __int64 v6; // r10
  PVOID v7; // rbp
  ULONG v8; // eax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rsi
  __int64 v11; // r15
  ULONG_PTR v12; // rax
  __int64 v13; // r13
  __int64 i; // r14
  unsigned int v15; // eax
  _QWORD v16[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+8h] BYREF
  PVOID v18; // [rsp+90h] [rbp+18h] BYREF

  v18 = Address;
  v5 = Flags;
  v16[0] = 0LL;
  v6 = (unsigned __int64)Address;
  v17 = 0;
  v7 = MemoryMap;
  if ( ((__int64)KiDpcWatchdogConfigurationLock.StackLimit & 3) != 0 )
    return;
  if ( !MemoryMap )
  {
    v7 = (PVOID)qword_140F0FBB0;
    if ( !qword_140F0FBB0 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v15 = *(_DWORD *)(qword_140F0FBB0 + 200);
    if ( v15 != 8 )
    {
      if ( v15 != 9 )
        KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v15, 0LL);
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
    if ( (int)MmGetSectionRange(Address, &v18, &v17) < 0 )
      PopInternalError(0xA1662uLL);
    Length = v17;
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
    if ( v6 >> 12 < v10 )
    {
      v11 = 1LL;
      do
      {
        if ( (int)MmGetPhysicalAddressEx(v9 << 12, v16) >= 0 )
        {
          v12 = v9 + 1;
          v13 = v16[0] >> 12;
          for ( i = 1LL;
                v12 < v10 && (int)MmGetPhysicalAddressEx((v9 << 12) + (i << 12), v16) >= 0 && i + v13 == v16[0] >> 12;
                v12 = i + v9 )
          {
            v11 = ++i;
          }
          PopSetRange((ULONG_PTR)v7, Tag);
        }
        v9 += v11;
        v11 = 1LL;
      }
      while ( v9 < v10 );
    }
  }
}
