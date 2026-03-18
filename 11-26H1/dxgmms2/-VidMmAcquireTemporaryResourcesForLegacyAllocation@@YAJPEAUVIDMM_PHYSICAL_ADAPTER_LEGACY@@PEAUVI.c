/*
 * XREFs of ?VidMmAcquireTemporaryResourcesForLegacyAllocation@@YAJPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B3598
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@PEA_N3@Z @ 0x14011BD74 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANS.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     AcquireGPUResourcesFromSegmentSet @ 0x1400D26E8 (AcquireGPUResourcesFromSegmentSet.c)
 *     EvictAllReclaimedSysmemAllocation @ 0x140114420 (EvictAllReclaimedSysmemAllocation.c)
 *     ?FlushPendingCPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14011C2B8 (-FlushPendingCPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 */

__int64 __fastcall VidMmAcquireTemporaryResourcesForLegacyAllocation(
        struct VIDMM_PHYSICAL_ADAPTER_LEGACY *a1,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned int v16; // eax

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
    WdLogGlobalForLineNumber = 6602;
  }
  if ( *((_QWORD *)a2 + 27) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(a1);
      WdLogGlobalForLineNumber = 6611;
      v5 = (_QWORD *)WdLogNewEntry5_WdTrace(v4);
      v5[3] = *((_QWORD *)a2 + 27);
      v5[4] = *((unsigned int *)a2 + 52);
      v5[5] = *((int *)a2 + 53);
      WdLogGlobalForLineNumber = 6615;
    }
    v6 = (_QWORD *)((char *)a2 + 152);
    v7 = *((_QWORD *)a2 + 19);
    if ( *(struct VIDMM_PHYSICAL_ALLOC_LEGACY **)(v7 + 8) != (struct VIDMM_PHYSICAL_ALLOC_LEGACY *)((char *)a2 + 152)
      || (v8 = (_QWORD *)*((_QWORD *)a2 + 20), (_QWORD *)*v8 != v6) )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    v9 = 0;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = 0LL;
    *((_QWORD *)a2 + 20) = 0LL;
    VIDMM_SEGMENT::FlushPendingCPUAccess(*((VIDMM_SEGMENT **)a2 + 27), a2);
  }
  else
  {
    v9 = AcquireGPUResourcesFromSegmentSet((_DWORD)a1, (_DWORD)a2, 0, 1, 0, -1LL);
    if ( v9 >= 0 )
      goto LABEL_16;
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v11);
      WdLogGlobalForLineNumber = 6650;
    }
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(struct VIDMM_PHYSICAL_ADAPTER_LEGACY *, __int64))(*(_QWORD *)a1 + 208LL))(a1, v10);
    v9 = AcquireGPUResourcesFromSegmentSet((_DWORD)a1, (_DWORD)a2, 0, 1, 0, -1LL);
    if ( v9 >= 0 )
    {
LABEL_16:
      EvictAllReclaimedSysmemAllocation(a1);
      *((_DWORD *)a2 + 14) |= 0x40u;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v13);
        WdLogGlobalForLineNumber = 6676;
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
        v15[3] = *((_QWORD *)a2 + 27);
        v15[4] = *((unsigned int *)a2 + 52);
        v15[5] = *((int *)a2 + 53);
        WdLogGlobalForLineNumber = 6680;
      }
      v16 = *((_DWORD *)a1 + 456) + 1;
      *((_DWORD *)a1 + 456) = v16;
      if ( v16 > *((_DWORD *)a1 + 12) )
        *((_DWORD *)a1 + 12) = v16;
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v12);
      WdLogGlobalForLineNumber = 6691;
    }
  }
  return (unsigned int)v9;
}
