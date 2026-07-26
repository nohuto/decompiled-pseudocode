/*
 * XREFs of ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14008E040
 * Callers:
 *     ??$MakePoolPtrNP@VNdisWdfIdle@@@@YA?AV?$unique_ptr@VNdisWdfIdle@@U?$KFreePoolNP@VNdisWdfIdle@@@@@wistd@@K@Z @ 0x1400018F0 (--$MakePoolPtrNP@VNdisWdfIdle@@@@YA-AV-$unique_ptr@VNdisWdfIdle@@U-$KFreePoolNP@VNdisWdfIdle@@@@.c)
 *     ??$MakePoolPtrNP@U_NDIS_SG_DMA_BLOCK@@@@YA?AV?$unique_ptr@U_NDIS_SG_DMA_BLOCK@@U?$KFreePoolNP@U_NDIS_SG_DMA_BLOCK@@@@@wistd@@K@Z @ 0x140003014 (--$MakePoolPtrNP@U_NDIS_SG_DMA_BLOCK@@@@YA-AV-$unique_ptr@U_NDIS_SG_DMA_BLOCK@@U-$KFreePoolNP@U_.c)
 *     ndisLwmCreateIrpHandler @ 0x14000A790 (ndisLwmCreateIrpHandler.c)
 *     NdisAllocateRWLock @ 0x140054410 (NdisAllocateRWLock.c)
 *     NdisRegisterUserThreadExitCallback @ 0x1400E7110 (NdisRegisterUserThreadExitCallback.c)
 *     ??$MakeSizedPoolPtr@_W@@YA?AV?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@K_K@Z @ 0x140138AB0 (--$MakeSizedPoolPtr@_W@@YA-AV-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@K_K@Z.c)
 *     ndisWdfOpenConfiguration @ 0x1401396AC (ndisWdfOpenConfiguration.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140139A28 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ??$MakeSizedPoolPtr@E@@YA?AV?$unique_ptr@EU?$KFreePool@E@@@wistd@@K_K@Z @ 0x14013A698 (--$MakeSizedPoolPtr@E@@YA-AV-$unique_ptr@EU-$KFreePool@E@@@wistd@@K_K@Z.c)
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x14014293C (--$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U.c)
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x140142A04 (--$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFre.c)
 *     ??$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA?AV?$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U?$KFreePool@U_NDIS_WOL_XLATION_CONTEXT@@@@@wistd@@K@Z @ 0x140142AE0 (--$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA-AV-$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U-$KF.c)
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x140144614 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 *     ??$MakePoolPtr@UNDIS_IF_UPDATE_CONTEXT@@@@YA?AV?$unique_ptr@UNDIS_IF_UPDATE_CONTEXT@@U?$KFreePool@UNDIS_IF_UPDATE_CONTEXT@@@@@wistd@@K@Z @ 0x140146A58 (--$MakePoolPtr@UNDIS_IF_UPDATE_CONTEXT@@@@YA-AV-$unique_ptr@UNDIS_IF_UPDATE_CONTEXT@@U-$KFreePoo.c)
 *     ??$MakeSizedPoolPtr@VExecutionContextCpuKnobCollection@@@@YA?AV?$unique_ptr@VExecutionContextCpuKnobCollection@@U?$KFreePool@VExecutionContextCpuKnobCollection@@@@@wistd@@K_K@Z @ 0x14014FBD4 (--$MakeSizedPoolPtr@VExecutionContextCpuKnobCollection@@@@YA-AV-$unique_ptr@VExecutionContextCpu.c)
 *     ??$MakeSizedPoolPtr@VInterfaceProfileKnobCollection@@@@YA?AV?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@K_K@Z @ 0x14014FC58 (--$MakeSizedPoolPtr@VInterfaceProfileKnobCollection@@@@YA-AV-$unique_ptr@VInterfaceProfileKnobCo.c)
 *     ??$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA?AV?$unique_ptr@VNetSetupKnobCollection@@U?$KFreePool@VNetSetupKnobCollection@@@@@wistd@@K_K@Z @ 0x14014FCDC (--$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA-AV-$unique_ptr@VNetSetupKnobCollection@@U-$KFr.c)
 *     ??$MakeSizedPoolPtr@VRegistryKnobCollection@@@@YA?AV?$unique_ptr@VRegistryKnobCollection@@U?$KFreePool@VRegistryKnobCollection@@@@@wistd@@K_K@Z @ 0x1401654C0 (--$MakeSizedPoolPtr@VRegistryKnobCollection@@@@YA-AV-$unique_ptr@VRegistryKnobCollection@@U-$KFr.c)
 *     ndisMiniportQueryDeviceProperty @ 0x140167FF0 (ndisMiniportQueryDeviceProperty.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x140169370 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x14016ABE0 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 * Callees:
 *     ??$?0PEAU_NDIS_PM_WOL_PATTERN@@$00@?$__compressed_pair@PEAU_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x1400544C0 (--$-0PEAU_NDIS_PM_WOL_PATTERN@@$00@-$__compressed_pair@PEAU_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_.c)
 */

__int64 __fastcall wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  wistd::__compressed_pair<_NDIS_PM_WOL_PATTERN *,KFreePool<_NDIS_PM_WOL_PATTERN>>::__compressed_pair<_NDIS_PM_WOL_PATTERN *,KFreePool<_NDIS_PM_WOL_PATTERN>>(
    a1,
    &v3);
  return v1;
}
