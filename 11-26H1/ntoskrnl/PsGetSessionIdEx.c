/*
 * XREFs of PsGetSessionIdEx @ 0x1402ED8A0
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiMakePerSessionProtoPte @ 0x1402ED790 (MiMakePerSessionProtoPte.c)
 *     EtwTracePool @ 0x1403CAA34 (EtwTracePool.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     MiGetImageProtoProtection @ 0x14042EA80 (MiGetImageProtoProtection.c)
 *     PsQueryCpuQuotaInformation @ 0x14052D4BC (PsQueryCpuQuotaInformation.c)
 *     PoGetRequester @ 0x140603108 (PoGetRequester.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x14061A328 (PspSetProcessTimerDelayForWin32.c)
 *     MiCloneImageVad @ 0x140714B50 (MiCloneImageVad.c)
 *     DbgkpLkmdFireCallbacks @ 0x14078E198 (DbgkpLkmdFireCallbacks.c)
 *     KeRemoveSystemServiceTable @ 0x1407BBC20 (KeRemoveSystemServiceTable.c)
 *     NtSetThreadExecutionState @ 0x1407D51F0 (NtSetThreadExecutionState.c)
 *     SeExchangePrimaryToken @ 0x14081AC68 (SeExchangePrimaryToken.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     MiRelocateImageAgain @ 0x140881870 (MiRelocateImageAgain.c)
 *     EtwpBuildProcessEvent @ 0x1408FBCAC (EtwpBuildProcessEvent.c)
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 *     MmCreateSection @ 0x140989F80 (MmCreateSection.c)
 *     MiCreateSectionCommon @ 0x14098AD7C (MiCreateSectionCommon.c)
 *     MmCreateSectionEx @ 0x14098B2D0 (MmCreateSectionEx.c)
 *     AlpcpCreateSection @ 0x14098C8B8 (AlpcpCreateSection.c)
 *     MiFillMapFileInfo @ 0x140997BA8 (MiFillMapFileInfo.c)
 *     MiRelocateFinish @ 0x14099C5F4 (MiRelocateFinish.c)
 *     MiMapImageInSystemSpace @ 0x14099D80C (MiMapImageInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 *     MiInitializeImageVad @ 0x14099ED2C (MiInitializeImageVad.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiDeletePartialCloneVads @ 0x140A076D8 (MiDeletePartialCloneVads.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 *     PfpQueryGpuUtilization @ 0x140A5D34C (PfpQueryGpuUtilization.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x140A7D538 (AlpcpPortQueryServerSessionInfo.c)
 *     MiCfgMarkValidEntries @ 0x140AA27E4 (MiCfgMarkValidEntries.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140AADF2C (CmpDoesProcessBelongToServiceSession.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x140ADBB34 (PsRemoveDeepFreezeOptimizations.c)
 *     PsApplyDeepFreezeOptimizations @ 0x140ADBBC0 (PsApplyDeepFreezeOptimizations.c)
 *     PspPostFreezeOperationWorker @ 0x140AF23D0 (PspPostFreezeOperationWorker.c)
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x140B49DCC (PsRegisterSyscallProviderServiceTableMetadata.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     MmCreateSpecialImageSection @ 0x140B880EC (MmCreateSpecialImageSection.c)
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
