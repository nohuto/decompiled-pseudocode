/*
 * XREFs of WmipUnreferenceEntry @ 0x1409B5E78
 * Callers:
 *     WmipAddMofResource @ 0x1407964D8 (WmipAddMofResource.c)
 *     WmipUpdateAddGuid @ 0x140796A10 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x140796AE8 (WmipUpdateModifyGuid.c)
 *     WmipDereferenceEvent @ 0x1409B196C (WmipDereferenceEvent.c)
 *     WmipGenerateRegistrationNotification @ 0x1409B3044 (WmipGenerateRegistrationNotification.c)
 *     WmipIncludeStaticNames @ 0x1409B318C (WmipIncludeStaticNames.c)
 *     WmipProcessEvent @ 0x1409B3480 (WmipProcessEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409B364C (WmipEnableCollectionForNewGuid.c)
 *     WmipQuerySetExecuteSI @ 0x1409B5720 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1409B5A18 (WmipQueryAllData.c)
 *     WmipPrepareWnodeSI @ 0x1409B6860 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1409B6B68 (WmipPrepareForWnodeAD.c)
 *     WmipAddProviderIdToPIList @ 0x1409B6D5C (WmipAddProviderIdToPIList.c)
 *     WmipDSCleanup @ 0x1409B7560 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B7738 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDeleteMethod @ 0x1409B78B0 (WmipDeleteMethod.c)
 *     WmipAddDataSource @ 0x1409B7A10 (WmipAddDataSource.c)
 *     WmipMangleInstanceName @ 0x1409B80C0 (WmipMangleInstanceName.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1409B86FC (WmipDetermineInstanceBaseIndex.c)
 *     WmipLegacyEtwWorker @ 0x1409B8B90 (WmipLegacyEtwWorker.c)
 *     WmipSendEnableDisableRequest @ 0x1409B8F6C (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x1409B91F4 (WmipUpdateDataSource.c)
 *     WmipProcessLegacyEtwCallback @ 0x140A89598 (WmipProcessLegacyEtwCallback.c)
 *     WmipSendEnableRequest @ 0x140A8B8B0 (WmipSendEnableRequest.c)
 *     WmipRemoveDS @ 0x140A9AA64 (WmipRemoveDS.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     ExFreeToPagedLookasideList @ 0x1403D3020 (ExFreeToPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WmipUnreferenceEntry(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdi
  volatile signed __int64 v6; // rax
  int v7; // ecx
  void **v8; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = _InterlockedDecrement64(a2 + 3);
  if ( v4 )
  {
    if ( v4 < 0 )
      KeBugCheckEx(0x14Au, 2uLL, (ULONG_PTR)a2, 0LL, 0LL);
    KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  }
  else
  {
    v6 = *a2;
    v7 = *((_DWORD *)a2 + 4) | 0x20000000;
    *((_DWORD *)a2 + 4) = v7;
    if ( v6 && (v7 & 0x10000000) != 0 )
    {
      if ( *(volatile signed __int64 **)(v6 + 8) != a2 || (v8 = (void **)*((_QWORD *)a2 + 1), *v8 != a2) )
        __fastfail(3u);
      *v8 = (void *)v6;
      *(_QWORD *)(v6 + 8) = v8;
    }
    KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
    if ( *(_QWORD *)(a1 + 16) )
      guard_dispatch_icall_no_overrides(a2);
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
