/*
 * XREFs of ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011790
 * Callers:
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z @ 0x14003E6EC (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x14005BB88 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x140080D7C (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0c150cc48e274b7aa1002551270ee584___ @ 0x140080F5C (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0c150cc48e274b7aa1002551270ee584___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___ @ 0x140081128 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___ @ 0x1400812D4 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z @ 0x14029F3D0 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14029FF9C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1402D0A10 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A928C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1403AA578 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::DecrementVSyncWaiter(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( (*((_DWORD *)this + 754) & 0x10) != 0 )
    v2 = a2;
  if ( (unsigned int)v2 < 0x10 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)this + v2 + 798) < 0 )
    {
      WdLogSingleEntry5(0LL, 275LL, 37LL, this, *((unsigned int *)this + v2 + 798), 0LL);
      WdLogGlobalForLineNumber = 2783;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0pqq_EtwWriteTransfer((__int64)this, (__int64)&VSyncWaiterChange);
  }
}
