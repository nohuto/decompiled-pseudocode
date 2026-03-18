/*
 * XREFs of ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140029460
 * Callers:
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14009D04C (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE52C (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400D9E38 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z @ 0x14011C720 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall DXGPUSHLOCK::AcquireShared(DXGPUSHLOCK *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(this, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v4 = *((unsigned int *)this + 6);
      if ( (_DWORD)v4 != -1 && (byte_14008A201 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v2, &EventBlockThread, v3, v4);
    }
    ExAcquirePushLockSharedEx(this, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
}
