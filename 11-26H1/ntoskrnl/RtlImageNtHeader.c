/*
 * XREFs of RtlImageNtHeader @ 0x140462E40
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140542A48 (KiLockExtendedServiceTable.c)
 *     IopIsNotNativeDriverImage @ 0x1407979BC (IopIsNotNativeDriverImage.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1407BF4E4 (KiTpIsSupportedKernelTracepointLocation.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     ApiSetLoadSchemaEx @ 0x1408508F4 (ApiSetLoadSchemaEx.c)
 *     MiActOnLargeKernelHalPages @ 0x14086A38C (MiActOnLargeKernelHalPages.c)
 *     MiConfigureDriverProxyState @ 0x14086AD90 (MiConfigureDriverProxyState.c)
 *     MmGetSectionRange @ 0x14086AFFC (MmGetSectionRange.c)
 *     EtwpEnumerateAddressSpace @ 0x140921CD0 (EtwpEnumerateAddressSpace.c)
 *     DbgkpPostFakeThreadMessages @ 0x140949760 (DbgkpPostFakeThreadMessages.c)
 *     DbgkMapViewOfSection @ 0x1409947C4 (DbgkMapViewOfSection.c)
 *     PopEtGetProcessImageInfo @ 0x1409CA204 (PopEtGetProcessImageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1409D3984 (EtwpQueryProcessOtherInfo.c)
 *     MiProtectSystemImage @ 0x1409E4B80 (MiProtectSystemImage.c)
 *     RtlCreateUserStack @ 0x1409E6B78 (RtlCreateUserStack.c)
 *     DbgkCreateThread @ 0x1409E74F4 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x140A08A9C (PspMapSystemDll.c)
 *     EtwpCovSampContextGetModule @ 0x140A34168 (EtwpCovSampContextGetModule.c)
 *     EtwpFindDebugId @ 0x140A358B8 (EtwpFindDebugId.c)
 *     PiUpdateDriverDBCache @ 0x140A37858 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x140A38CB4 (PiLookupInDDBCache.c)
 *     PnpPrepareDriverLoading @ 0x140A39744 (PnpPrepareDriverLoading.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     PerfLogImageLoad @ 0x140A8B0E0 (PerfLogImageLoad.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A8EAE0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     MiConstructLoaderEntry @ 0x140AA535C (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x140AA58F8 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140AA5A00 (MiCaptureImageExceptionValues.c)
 *     MiInitializeImageSectionLocks @ 0x140AA5CA8 (MiInitializeImageSectionLocks.c)
 *     RtlpWow64CreateUserStack @ 0x140AB9B7C (RtlpWow64CreateUserStack.c)
 *     PerfLogImageUnload @ 0x140ABB148 (PerfLogImageUnload.c)
 *     MmLockPagableDataSection @ 0x140ABC640 (MmLockPagableDataSection.c)
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 *     MiMarkKernelImageCfgBits @ 0x140AC8C4C (MiMarkKernelImageCfgBits.c)
 *     MmResetDriverPaging @ 0x140ACB510 (MmResetDriverPaging.c)
 *     MiSnapDriverRange @ 0x140ACB6BC (MiSnapDriverRange.c)
 *     MiCaptureImageHeaderFieldsForPeb @ 0x140ACCBC8 (MiCaptureImageHeaderFieldsForPeb.c)
 *     DbgkpPostModuleMessages @ 0x140B290F8 (DbgkpPostModuleMessages.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 *     DbgkSendSystemDllMessages @ 0x140B54778 (DbgkSendSystemDllMessages.c)
 *     KiVerifyXcpt15 @ 0x140C863F0 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140C86424 (CcInitializeBcbProfiler.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     sub_140CAEB24 @ 0x140CAEB24 (sub_140CAEB24.c)
 * Callees:
 *     <none>
 */

PIMAGE_NT_HEADERS __cdecl RtlImageNtHeader(PVOID BaseOfImage)
{
  _IMAGE_NT_HEADERS64 *v1; // rdx
  signed int v2; // ecx

  v1 = 0LL;
  if ( (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    v2 = -1073741811;
  }
  else if ( *(_WORD *)BaseOfImage == 23117
         && (v1 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + *((unsigned int *)BaseOfImage + 15)), v1 >= BaseOfImage)
         && ((unsigned __int64)BaseOfImage >= 0x7FFFFFFF0000LL
          || (unsigned __int64)&v1[1] <= 0x7FFFFFFF0000LL && &v1[1] > v1) )
  {
    v2 = v1->Signature != 17744 ? 0xC000007B : 0;
  }
  else
  {
    v2 = -1073741701;
  }
  if ( v2 < 0 )
    return 0LL;
  return v1;
}
