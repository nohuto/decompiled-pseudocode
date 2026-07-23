/*
 * XREFs of WmipUnreferenceEntry @ 0x140A0E124
 * Callers:
 *     WmipUpdateAddGuid @ 0x14082A2D4 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x14082A3AC (WmipUpdateModifyGuid.c)
 *     WmipUpdateDataSource @ 0x140A09CB4 (WmipUpdateDataSource.c)
 *     WmipSendEnableRequest @ 0x140A0A1B0 (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x140A0A3D0 (WmipSendEnableDisableRequest.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140A0A7B4 (WmipDetermineInstanceBaseIndex.c)
 *     WmipAddDataSource @ 0x140A0ABF4 (WmipAddDataSource.c)
 *     WmipMangleInstanceName @ 0x140A0B280 (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140A0B87C (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDSCleanup @ 0x140A0C620 (WmipDSCleanup.c)
 *     WmipGenerateRegistrationNotification @ 0x140A0C7AC (WmipGenerateRegistrationNotification.c)
 *     WmipIncludeStaticNames @ 0x140A0C8EC (WmipIncludeStaticNames.c)
 *     WmipProcessEvent @ 0x140A0CBD4 (WmipProcessEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x140A0CDA0 (WmipEnableCollectionForNewGuid.c)
 *     WmipDeleteMethod @ 0x140A0CF00 (WmipDeleteMethod.c)
 *     WmipQuerySetExecuteSI @ 0x140A0D9D4 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x140A0DCD8 (WmipQueryAllData.c)
 *     WmipPrepareWnodeSI @ 0x140A0E7D4 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x140A0EB90 (WmipPrepareForWnodeAD.c)
 *     WmipAddMofResource @ 0x140B1C418 (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x140B24E20 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwCallback @ 0x140B24F78 (WmipProcessLegacyEtwCallback.c)
 *     WmipRemoveDS @ 0x140B3C5D8 (WmipRemoveDS.c)
 *     WmipDereferenceEvent @ 0x140B5FA28 (WmipDereferenceEvent.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WmipUnreferenceEntry(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdi
  volatile signed __int64 v6; // rax
  int v7; // ecx
  void **v8; // rcx
  __int64 v9; // rdx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = _InterlockedDecrement64(a2 + 3);
  if ( v4 )
  {
    if ( v4 < 0 )
      KeBugCheckEx(0x14Au, 2uLL, (ULONG_PTR)a2, 0LL, 0LL);
    KeReleaseMutex(&WmipSMMutex, 0);
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
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( *(_QWORD *)(a1 + 16) )
      guard_dispatch_icall_no_overrides((__int64)a2, v9);
    ExFreeToNPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
