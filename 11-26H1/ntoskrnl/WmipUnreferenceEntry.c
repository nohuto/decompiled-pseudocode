/*
 * XREFs of WmipUnreferenceEntry @ 0x140A0EF48
 * Callers:
 *     WmipUpdateAddGuid @ 0x140824088 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x140824160 (WmipUpdateModifyGuid.c)
 *     WmipUpdateDataSource @ 0x140A0ABF4 (WmipUpdateDataSource.c)
 *     WmipSendEnableRequest @ 0x140A0AF48 (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x140A0B168 (WmipSendEnableDisableRequest.c)
 *     WmipRemoveDS @ 0x140A0B50C (WmipRemoveDS.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140A0B588 (WmipDetermineInstanceBaseIndex.c)
 *     WmipDereferenceEvent @ 0x140A0B9C4 (WmipDereferenceEvent.c)
 *     WmipAddDataSource @ 0x140A0BC24 (WmipAddDataSource.c)
 *     WmipMangleInstanceName @ 0x140A0C2B0 (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140A0C854 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipGenerateRegistrationNotification @ 0x140A0CD54 (WmipGenerateRegistrationNotification.c)
 *     WmipIncludeStaticNames @ 0x140A0CE94 (WmipIncludeStaticNames.c)
 *     WmipProcessEvent @ 0x140A0D184 (WmipProcessEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x140A0D350 (WmipEnableCollectionForNewGuid.c)
 *     WmipDeleteMethod @ 0x140A0D4B0 (WmipDeleteMethod.c)
 *     WmipQuerySetExecuteSI @ 0x140A0E7F8 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x140A0EAFC (WmipQueryAllData.c)
 *     WmipPrepareWnodeSI @ 0x140A0F5E4 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x140A0F9A0 (WmipPrepareForWnodeAD.c)
 *     WmipDSCleanup @ 0x140AECF50 (WmipDSCleanup.c)
 *     WmipAddMofResource @ 0x140B19FC8 (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x140B22A20 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwCallback @ 0x140B22B78 (WmipProcessLegacyEtwCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WmipUnreferenceEntry(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdi
  volatile signed __int64 v6; // rax
  int v7; // ecx
  void **v8; // rcx
  __int64 v9; // rdx

  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  v4 = _InterlockedDecrement64(a2 + 3);
  if ( v4 )
  {
    if ( v4 < 0 )
      KeBugCheckEx(0x14Au, 2uLL, (ULONG_PTR)a2, 0LL, 0LL);
    KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
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
    KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
    if ( *(_QWORD *)(a1 + 16) )
      guard_dispatch_icall_no_overrides((__int64)a2, v9);
    ExFreeToNPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
