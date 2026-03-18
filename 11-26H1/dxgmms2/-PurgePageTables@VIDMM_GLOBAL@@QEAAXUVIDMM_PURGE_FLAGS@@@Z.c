/*
 * XREFs of ?PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z @ 0x14011C720
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140029460 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x140041F78 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1400E58B8 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1400E7230 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgePageTables(__int64 a1, char a2, void (*a3)(void *), void *a4)
{
  __int64 i; // rbp
  __int64 v7; // rdi
  CVirtualAddressAllocator *v8; // r14
  _QWORD *v9; // rdx
  CVirtualAddressAllocator *j; // r14
  CVirtualAddressAllocator ***v11; // r9
  CVirtualAddressAllocator ***v12; // r8
  CVirtualAddressAllocator *v13; // [rsp+30h] [rbp-28h] BYREF
  CVirtualAddressAllocator **v14; // [rsp+38h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 41064) & 2) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 6952); i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40320) + 8 * i);
      if ( (*(_BYTE *)(v7 + 556) & 4) != 0 && ((a2 & 1) == 0 || (*(_BYTE *)(v7 + 557) & 0x10) != 0) )
      {
        v14 = &v13;
        v13 = (CVirtualAddressAllocator *)&v13;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 41216));
        v9 = *(_QWORD **)(a1 + 41264);
        if ( v9 != (_QWORD *)(a1 + 41264) )
        {
          v11 = (CVirtualAddressAllocator ***)v14;
          do
          {
            v12 = (CVirtualAddressAllocator ***)*(v9 - 2);
            if ( v12 && *(v9 - 3) != *(_QWORD *)(a1 + 40512) )
            {
              if ( *v11 != &v13 )
                __fastfail(3u);
              v12[1] = (CVirtualAddressAllocator **)v11;
              *v12 = &v13;
              *v11 = (CVirtualAddressAllocator **)v12;
              v11 = v12;
              v14 = (CVirtualAddressAllocator **)v12;
            }
            v9 = (_QWORD *)*v9;
          }
          while ( v9 != (_QWORD *)(a1 + 41264) );
        }
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 41232));
        ExReleasePushLockSharedEx(a1 + 41216, 0LL);
        KeLeaveCriticalRegion();
        for ( j = v13; j != (CVirtualAddressAllocator *)&v13; j = *(CVirtualAddressAllocator **)j )
          CVirtualAddressAllocator::EvictRootPageTable(j, i, a2 & 1);
        *(_BYTE *)(v7 + 557) |= 2u;
      }
      v8 = *(CVirtualAddressAllocator **)(a1 + 8 * i + 40544);
      if ( v8 && ((a2 & 1) == 0 || (*(_BYTE *)(v7 + 557) & 0x20) != 0) )
      {
        VIDMM_GLOBAL::FlushPagingBuffer((VIDMM_GLOBAL *)a1, 1u, a3, a4);
        VIDMM_GLOBAL::xWaitForAllPagingEngines(
          (VIDMM_GLOBAL *)a1,
          (struct _VIDSCH_SYNC_OBJECT **)(a1 + 5928),
          (void (*)(void *))(a1 + 5416),
          (void *)*(unsigned int *)(a1 + 6952),
          0LL,
          0xFFFFFFFF);
        *(_BYTE *)(a1 + 41068) = 1;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 344LL))(v7);
        CVirtualAddressAllocator::EvictRootPageTable(v8, i, a2 & 1);
        if ( *(_DWORD *)(v7 + 548) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 352LL))(v7);
        *(_BYTE *)(a1 + 41068) = 0;
        *(_BYTE *)(v7 + 557) |= 4u;
      }
      *(_BYTE *)(v7 + 557) &= 0xCFu;
    }
  }
}
