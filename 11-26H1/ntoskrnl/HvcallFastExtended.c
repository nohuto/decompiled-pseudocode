/*
 * XREFs of HvcallFastExtended @ 0x14032BFB0
 * Callers:
 *     HvlFlushTbAllPartitions @ 0x14024FE70 (HvlFlushTbAllPartitions.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1403E6974 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1403E6A1C (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1403E6AE0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1403E6CC0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlParkedVirtualProcessors @ 0x1403E7228 (HvlParkedVirtualProcessors.c)
 *     HvlpFastFlushListTbEx @ 0x1403E7688 (HvlpFastFlushListTbEx.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1403E7980 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1403E7AB0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlWakeVirtualProcessors @ 0x1403ECBF0 (HvlWakeVirtualProcessors.c)
 *     HvlpFastFlushPasidAddressList @ 0x1404DA2FC (HvlpFastFlushPasidAddressList.c)
 *     HvlSetDeviceDmaEnabled @ 0x140525CD0 (HvlSetDeviceDmaEnabled.c)
 *     HvlpReadPerfRegister @ 0x1405BA648 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1405BB870 (HvlpWritePerfRegister.c)
 *     HvlAttachPasidSpace @ 0x1405BBB80 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x1405BBC30 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x1405BBCE0 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x1405BBD50 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x1405BBE10 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x1405BBF10 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x1405BBF70 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x1405BBFD0 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x1405BC030 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1405BC0B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1405BC190 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x1405BC260 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1405BC320 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1405BC3B0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x1405BC420 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405BC740 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x1405BC800 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x1405BC860 (HvlEnablePasid.c)
 *     HvlRestoreTime @ 0x1405BDEC0 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x1405BDFF0 (HvlSetDeviceCapabilities.c)
 *     HvlSetPasidAddressSpace @ 0x1405BE2C0 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x1405BE370 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x1405BE580 (HvlUnblockDefaultDma.c)
 *     HvlUnregisterDeviceId @ 0x1405BE6D0 (HvlUnregisterDeviceId.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x1405BE764 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1405BE950 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFlushPasidAddressSpace @ 0x1405BE9AC (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x1405C1120 (HvlpProcessIommuPrq.c)
 *     HvlpGetVtlCallVa @ 0x1405C20D4 (HvlpGetVtlCallVa.c)
 *     HvlpAddRemovePhysicalMemory @ 0x14071E550 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140791E48 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021C830 (RtlGetSystemTimePrecise.c)
 *     EtwpLogKernelEvent @ 0x14032CDC0 (EtwpLogKernelEvent.c)
 *     EtwpGetPerfCounter @ 0x14032D3B0 (EtwpGetPerfCounter.c)
 *     EtwpGetHostPerfCounter @ 0x14046F124 (EtwpGetHostPerfCounter.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1407324F0 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x140732550 (HvcallpExtendedFastHypercallWithOutput.c)
 */

__int64 __fastcall HvcallFastExtended(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  char v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // ebx
  bool i; // zf
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edi
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+30h] [rbp-51h] BYREF
  char v26; // [rsp+34h] [rbp-4Dh]
  __int16 v27; // [rsp+35h] [rbp-4Ch]
  char v28; // [rsp+37h] [rbp-4Ah]
  _BYTE v29[8]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v30; // [rsp+40h] [rbp-41h]
  __int128 v31; // [rsp+50h] [rbp-31h]
  _BYTE *v32; // [rsp+60h] [rbp-21h] BYREF
  __int64 v33; // [rsp+68h] [rbp-19h]
  int *v34; // [rsp+70h] [rbp-11h]
  __int64 v35; // [rsp+78h] [rbp-9h]

  v7 = a2;
  v8 = a1;
  v30 = 0LL;
  v31 = 0LL;
  if ( (BYTE4(xmmword_140FBFC10) & 0x10) == 0 )
  {
    v9 = 0;
    goto LABEL_10;
  }
  v21 = qword_140FC8C80;
  v9 = 1;
  v20 = 0;
  if ( qword_140FC8C80 )
  {
    a2 = *(unsigned int *)(qword_140FC8C80 + 4520);
    for ( i = !_BitScanForward((unsigned int *)&a1, a2); !i; i = !_BitScanForward((unsigned int *)&a1, a2) )
    {
      a2 = ((_DWORD)a2 - 1) & (unsigned int)a2;
      v24 = qword_140FC8C80 + 32 * a1 + 4556;
      if ( v24 && (*(_DWORD *)(v24 + 20) & 0x10) != 0 )
        v20 |= 1 << *(_BYTE *)(qword_140FC8C80 + 2 * a1 + 4505);
    }
    if ( (v20 & 2) == 0 )
      goto LABEL_4;
  }
  else
  {
    LOBYTE(v20) = 30;
  }
  *(_QWORD *)&v30 = EtwpGetPerfCounter(a1, a2, qword_140FC8C80);
LABEL_4:
  if ( (v20 & 4) != 0 )
    *((_QWORD *)&v30 + 1) = RtlGetSystemTimePrecise();
  else
    *((_QWORD *)&v30 + 1) = 0LL;
  if ( (v20 & 8) != 0 )
  {
    v10 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v10) << 32;
    *(_QWORD *)&v31 = v10;
  }
  else
  {
    *(_QWORD *)&v31 = 0LL;
  }
  if ( (v20 & 0x10) != 0 )
    *((_QWORD *)&v31 + 1) = EtwpGetHostPerfCounter(a1, a2, v21);
  else
    *((_QWORD *)&v31 + 1) = 0LL;
LABEL_10:
  if ( a5 )
  {
    v11 = HvcallpExtendedFastHypercallWithOutput(v8, v7, (a3 + 15) >> 4, 0, a4, a5 >> 4);
    if ( v9 )
    {
      v28 = 0;
      v25 = (unsigned __int16)v8;
      v26 = BYTE2(v8) & 1;
      v34 = &v25;
      v27 = (int)v8 < 0;
      v35 = 8LL;
      v17 = *(_DWORD *)(EtwpHostSiloState + 4520);
      for ( i = !_BitScanForward((unsigned int *)&v18, v17); !i; i = !_BitScanForward((unsigned int *)&v18, v17) )
      {
        v17 &= v17 - 1;
        v19 = EtwpHostSiloState + 32LL * (unsigned int)v18 + 4556;
        if ( v19 && (*(_DWORD *)(v19 + 20) & 0x10) != 0 )
        {
          v23 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v18 + 4505);
          v33 = 8LL;
          v32 = &v29[8 * v23];
          EtwpLogKernelEvent(
            (unsigned int)&v32,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v18 + 4504),
            2,
            3954,
            5246466);
        }
      }
    }
  }
  else
  {
    v11 = HvcallpExtendedFastHypercall(v8, v7, a3);
    if ( v9 )
    {
      v28 = 0;
      v25 = (unsigned __int16)v8;
      v27 = (int)v8 < 0;
      v26 = BYTE2(v8) & 1;
      v34 = &v25;
      v35 = 8LL;
      v12 = *(_DWORD *)(EtwpHostSiloState + 4520);
      for ( i = !_BitScanForward((unsigned int *)&v14, v12); !i; i = !_BitScanForward((unsigned int *)&v14, v12) )
      {
        v12 &= v12 - 1;
        v15 = EtwpHostSiloState + 32LL * (unsigned int)v14 + 4556;
        if ( v15 && (*(_DWORD *)(v15 + 20) & 0x10) != 0 )
        {
          v22 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v14 + 4505);
          v33 = 8LL;
          v32 = &v29[8 * v22];
          EtwpLogKernelEvent(
            (unsigned int)&v32,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v14 + 4504),
            2,
            3954,
            5246466);
        }
      }
    }
  }
  return v11;
}
