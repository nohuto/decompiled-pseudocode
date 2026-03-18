/*
 * XREFs of PsGetSessionIdEx @ 0x14030B820
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402CFDDC (MiEmptyPageAccessLog.c)
 *     MiGetProtoPteAddress @ 0x1402D2540 (MiGetProtoPteAddress.c)
 *     MiMakePerSessionProtoPte @ 0x14030B710 (MiMakePerSessionProtoPte.c)
 *     EtwTracePool @ 0x1403C0B34 (EtwTracePool.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     PopPowerRequestCreateCommon @ 0x140436FDC (PopPowerRequestCreateCommon.c)
 *     MiGetImageProtoProtection @ 0x14043C1D0 (MiGetImageProtoProtection.c)
 *     PsQueryCpuQuotaInformation @ 0x14052AF9C (PsQueryCpuQuotaInformation.c)
 *     PoGetRequester @ 0x140600658 (PoGetRequester.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x140617338 (PspSetProcessTimerDelayForWin32.c)
 *     MiCloneImageVad @ 0x14070FE54 (MiCloneImageVad.c)
 *     DbgkpLkmdFireCallbacks @ 0x14078B668 (DbgkpLkmdFireCallbacks.c)
 *     KeRemoveSystemServiceTable @ 0x1407B8BC0 (KeRemoveSystemServiceTable.c)
 *     NtSetThreadExecutionState @ 0x1407D2150 (NtSetThreadExecutionState.c)
 *     SeExchangePrimaryToken @ 0x140814B78 (SeExchangePrimaryToken.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     MiOpenHotPatchFile @ 0x140873028 (MiOpenHotPatchFile.c)
 *     MiRelocateImageAgain @ 0x14087B470 (MiRelocateImageAgain.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiDeletePartialCloneVads @ 0x1409619E4 (MiDeletePartialCloneVads.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PfpPrivSourceEnum @ 0x14096984C (PfpPrivSourceEnum.c)
 *     EtwpBuildProcessEvent @ 0x14096D8A8 (EtwpBuildProcessEvent.c)
 *     MmCreateSection @ 0x1409B8FA0 (MmCreateSection.c)
 *     MiCreateSectionCommon @ 0x1409B9D9C (MiCreateSectionCommon.c)
 *     MmCreateSectionEx @ 0x1409BA2F0 (MmCreateSectionEx.c)
 *     AlpcpCreateSection @ 0x1409BB8D8 (AlpcpCreateSection.c)
 *     MiFillMapFileInfo @ 0x1409C6BC8 (MiFillMapFileInfo.c)
 *     MiRelocateFinish @ 0x1409CB614 (MiRelocateFinish.c)
 *     MiMapImageInSystemSpace @ 0x1409CC82C (MiMapImageInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x1409CD37C (MiMapViewOfImageSection.c)
 *     MiInitializeImageVad @ 0x1409CDD4C (MiInitializeImageVad.c)
 *     TtmiGetSessionId @ 0x140A3A3A8 (TtmiGetSessionId.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 *     PfpQueryGpuUtilization @ 0x140A5405C (PfpQueryGpuUtilization.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x140A6BF08 (AlpcpPortQueryServerSessionInfo.c)
 *     MiCfgMarkValidEntries @ 0x140AA0D20 (MiCfgMarkValidEntries.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140AB02DC (CmpDoesProcessBelongToServiceSession.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x140ADE944 (PsRemoveDeepFreezeOptimizations.c)
 *     PsApplyDeepFreezeOptimizations @ 0x140ADE9D0 (PsApplyDeepFreezeOptimizations.c)
 *     PspPostFreezeOperationWorker @ 0x140AEF430 (PspPostFreezeOperationWorker.c)
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x140B4803C (PsRegisterSyscallProviderServiceTableMetadata.c)
 *     MmCreateSpecialImageSection @ 0x140B7F20C (MmCreateSpecialImageSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSessionIdEx(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 744);
  if ( !v1 || (*(_DWORD *)(a1 + 1532) & 0x1000) != 0 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v1 + 8);
}
