/*
 * XREFs of RtlImageNtHeader @ 0x1404696C0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1405405C8 (KiLockExtendedServiceTable.c)
 *     IopIsNotNativeDriverImage @ 0x140794E8C (IopIsNotNativeDriverImage.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1407BC484 (KiTpIsSupportedKernelTracepointLocation.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     ApiSetLoadSchemaEx @ 0x14084A5E4 (ApiSetLoadSchemaEx.c)
 *     MiActOnLargeKernelHalPages @ 0x140863FAC (MiActOnLargeKernelHalPages.c)
 *     MiConfigureDriverProxyState @ 0x1408649B0 (MiConfigureDriverProxyState.c)
 *     MmGetSectionRange @ 0x140864C1C (MmGetSectionRange.c)
 *     EtwpCovSampContextGetModule @ 0x140941058 (EtwpCovSampContextGetModule.c)
 *     EtwpFindDebugId @ 0x1409427A8 (EtwpFindDebugId.c)
 *     PopEtGetProcessImageInfo @ 0x14094E8C4 (PopEtGetProcessImageInfo.c)
 *     DbgkpPostFakeThreadMessages @ 0x1409556F0 (DbgkpPostFakeThreadMessages.c)
 *     PspMapSystemDll @ 0x140962C14 (PspMapSystemDll.c)
 *     EtwpQueryProcessOtherInfo @ 0x14096DF08 (EtwpQueryProcessOtherInfo.c)
 *     DbgkMapViewOfSection @ 0x1409C37E4 (DbgkMapViewOfSection.c)
 *     RtlCreateUserStack @ 0x1409EA3A8 (RtlCreateUserStack.c)
 *     DbgkCreateThread @ 0x1409EAD24 (DbgkCreateThread.c)
 *     EtwpEnumerateAddressSpace @ 0x1409FD0D0 (EtwpEnumerateAddressSpace.c)
 *     PiUpdateDriverDBCache @ 0x140A24D48 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x140A25C14 (PiLookupInDDBCache.c)
 *     PnpPrepareDriverLoading @ 0x140A266A4 (PnpPrepareDriverLoading.c)
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     MiProtectSystemImage @ 0x140A7935C (MiProtectSystemImage.c)
 *     PerfLogImageLoad @ 0x140A79674 (PerfLogImageLoad.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A879B0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     MiConstructLoaderEntry @ 0x140AA8F54 (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x140AA94F0 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140AA95F8 (MiCaptureImageExceptionValues.c)
 *     MiInitializeImageSectionLocks @ 0x140AA98A0 (MiInitializeImageSectionLocks.c)
 *     RtlpWow64CreateUserStack @ 0x140AB853C (RtlpWow64CreateUserStack.c)
 *     PerfLogImageUnload @ 0x140AB9C84 (PerfLogImageUnload.c)
 *     MmLockPagableDataSection @ 0x140ABB180 (MmLockPagableDataSection.c)
 *     MiGetSystemAddressForImage @ 0x140AC6DF4 (MiGetSystemAddressForImage.c)
 *     MiMarkKernelImageCfgBits @ 0x140AC705C (MiMarkKernelImageCfgBits.c)
 *     MmResetDriverPaging @ 0x140AC9400 (MmResetDriverPaging.c)
 *     MiSnapDriverRange @ 0x140AC95AC (MiSnapDriverRange.c)
 *     MiCaptureImageHeaderFieldsForPeb @ 0x140ACAAB8 (MiCaptureImageHeaderFieldsForPeb.c)
 *     DbgkpPostModuleMessages @ 0x140B27048 (DbgkpPostModuleMessages.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 *     DbgkSendSystemDllMessages @ 0x140B51ED8 (DbgkSendSystemDllMessages.c)
 *     KiVerifyXcpt15 @ 0x140C803F0 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140C80424 (CcInitializeBcbProfiler.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     sub_140CA8B24 @ 0x140CA8B24 (sub_140CA8B24.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlImageNtHeader(unsigned __int64 a1)
{
  _DWORD *v1; // rdx
  signed int v2; // ecx

  v1 = 0LL;
  if ( a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v2 = -1073741811;
  }
  else if ( *(_WORD *)a1 == 23117
         && (v1 = (_DWORD *)(a1 + *(unsigned int *)(a1 + 60)), (unsigned __int64)v1 >= a1)
         && (a1 >= 0x7FFFFFFF0000LL || (unsigned __int64)(v1 + 66) <= 0x7FFFFFFF0000LL && v1 + 66 > v1) )
  {
    v2 = *v1 != 17744 ? 0xC000007B : 0;
  }
  else
  {
    v2 = -1073741701;
  }
  if ( v2 < 0 )
    return 0LL;
  return v1;
}
