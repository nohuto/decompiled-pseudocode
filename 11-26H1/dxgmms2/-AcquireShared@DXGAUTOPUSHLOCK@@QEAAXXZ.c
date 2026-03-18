/*
 * XREFs of ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1400293D0
 * Callers:
 *     ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1400C88B0 (-QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1400C8B24 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x14010C244 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010D82C (-ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall DXGAUTOPUSHLOCK::AcquireShared(DXGAUTOPUSHLOCK *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = *((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v1, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v5 = *(unsigned int *)(v1 + 24);
      if ( (_DWORD)v5 != -1 && (byte_14008A201 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v3, &EventBlockThread, v4, v5);
    }
    ExAcquirePushLockSharedEx(v1, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 16));
  *((_DWORD *)this + 4) = 1;
}
