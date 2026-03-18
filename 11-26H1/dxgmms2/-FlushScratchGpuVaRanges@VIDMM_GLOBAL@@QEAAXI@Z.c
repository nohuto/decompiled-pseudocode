/*
 * XREFs of ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@21U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A0BA8 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFE.c)
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 *     ReleaseTemporaryResourcesForAllocation @ 0x1400AFF9C (ReleaseTemporaryResourcesForAllocation.c)
 *     ?VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1400B37E4 (-VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVI.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D83E4 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x140104FA0 (-CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x14012B250 (-RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z.c)
 *     ?RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x14012B4C0 (-RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x14003B0B8 (VidSchIsMonitoredFenceSignaled.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FreeVirtualAddressRangeByVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z @ 0x140106104 (-FreeVirtualAddressRangeByVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::FlushScratchGpuVaRanges(VIDMM_GLOBAL *this, unsigned int a2)
{
  __int64 v3; // r15
  __int64 v4; // rcx
  char v5; // al
  _QWORD *v6; // r14
  CVirtualAddressAllocator *v7; // r12
  char v8; // bp
  _QWORD *v9; // r9
  struct VIDMM_MAPPED_VA_RANGE *v10; // rsi
  _QWORD *v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rcx

  v3 = a2;
  v4 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * a2);
  if ( (*(_BYTE *)(v4 + 556) & 4) != 0 )
  {
    if ( *((_QWORD *)this + a2 + 144) )
    {
      if ( *((_DWORD *)this + 2) )
      {
        v5 = *((_BYTE *)this + 41066);
        if ( (v5 & 1) == 0 && !*((_BYTE *)this + 41069) )
        {
          v6 = (_QWORD *)(v4 + 584);
          *((_BYTE *)this + 41066) = v5 | 1;
          v7 = (CVirtualAddressAllocator *)*((_QWORD *)this + a2 + 5068);
          while ( 1 )
          {
            v8 = 0;
            while ( 1 )
            {
              v9 = (_QWORD *)*v6;
              if ( (_QWORD *)*v6 == v6 )
                break;
              v10 = (struct VIDMM_MAPPED_VA_RANGE *)(v9 - 4);
              if ( !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v3 + 741), v9[2]) )
                break;
              v12 = *v11;
              if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
                __fastfail(3u);
              *v13 = v12;
              *(_QWORD *)(v12 + 8) = v13;
              *v11 = 0LL;
              v11[1] = 0LL;
              if ( VIDMM_GLOBAL::_Config >= 0 )
              {
                v8 = 1;
                CVirtualAddressAllocator::UncommitVirtualAddressRange(
                  *((CVirtualAddressAllocator **)this + v3 + 5068),
                  v10,
                  0LL,
                  1u,
                  0);
              }
              CVirtualAddressAllocator::FreeVirtualAddressRangeByVad(v7, *(struct VIDMM_VAD **)v10);
            }
            if ( !v8 )
              break;
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, v3, 0, 0LL, 0LL, 0, 0);
          }
          *((_BYTE *)this + 41066) &= ~1u;
        }
      }
    }
  }
}
