/*
 * XREFs of ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1400E3900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140008B38 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EE84 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x1400E3B90 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x14011B6B8 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 */

void __fastcall VidMmProcessAsyncOperation(void *a1, __int64 a2, unsigned int a3)
{
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rbp
  __int64 v7; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // r14
  struct DXGPUSHLOCKBASE *v16; // rbp
  VIDMM_GLOBAL_ALLOC_NONPAGED *HasOutstandingPresentReferences; // rcx
  int v19; // eax
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v21; // [rsp+68h] [rbp+10h] BYREF

  v4 = *((_DWORD *)a1 + 8) - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v14 = *((_QWORD *)a1 + 5);
        v15 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 24LL);
        v21 = (struct VIDMM_ALLOC *)v15;
        v16 = (struct DXGPUSHLOCKBASE *)(**(_QWORD **)v15 + 200LL);
        if ( **(_QWORD **)v15 != -200LL )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v16, 0LL);
        }
        while ( 1 )
        {
          HasOutstandingPresentReferences = *(VIDMM_GLOBAL_ALLOC_NONPAGED **)(v15 + 96);
          if ( *(int *)(v15 + 104) > 0 )
            LOBYTE(HasOutstandingPresentReferences) = 1;
          else
            HasOutstandingPresentReferences = (VIDMM_GLOBAL_ALLOC_NONPAGED *)VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(HasOutstandingPresentReferences);
          if ( !(_BYTE)HasOutstandingPresentReferences )
            break;
          if ( *(_DWORD *)(*(_QWORD *)(v15 + 96) + 16LL) > 1u )
            break;
          v19 = VIDMM_GLOBAL::WaitOnAllocationPresentQueue(
                  HasOutstandingPresentReferences,
                  (struct VIDMM_MULTI_ALLOC *)v15,
                  a3);
          if ( v19 >= 0 )
            break;
          WdLogSingleEntry1(3LL, v19);
          WdLogGlobalForLineNumber = 838;
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        VidMmCompleteAsyncUnpin((struct VIDMM_GLOBAL *)v14, &v21, v16);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v14 + 44864, 0LL);
        *(_QWORD *)(v14 + 44872) = KeGetCurrentThread();
        if ( (*(_DWORD *)(v14 + 44912))-- == 1 )
          KeSetEvent((PRKEVENT)(v14 + 44888), 0, 0);
        *(_QWORD *)(v14 + 44872) = 0LL;
        ExReleasePushLockExclusiveEx(v14 + 44864, 0LL);
        KeLeaveCriticalRegion();
        DxgkUnreferenceDxgResource(*(struct DXGRESOURCE **)(*((_QWORD *)a1 + 6) + 40LL));
        DxgkUnreferenceDxgAllocation(*((struct DXGALLOCATION **)a1 + 6));
      }
    }
    else
    {
      v6 = *((_QWORD *)a1 + 5);
      v7 = *((_QWORD *)a1 + 7);
      if ( v6 )
      {
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(v6, v7);
      }
      else
      {
        MmUnmapViewInSystemSpace(*((PVOID *)a1 + 7));
      }
      v9 = *((_QWORD *)a1 + 8);
      if ( v9 )
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 428));
      ObfDereferenceObject(*((PVOID *)a1 + 6));
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(
          v10,
          &EndVidMmUnmapViewAsync,
          v11,
          *((_QWORD *)a1 + 5),
          *((_QWORD *)a1 + 6),
          *((_QWORD *)a1 + 7));
    }
  }
  else
  {
    ObfDereferenceObject(*((PVOID *)a1 + 5));
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0x_EtwWriteTransfer(v12, &EndVidMmDereferenceObjectAsync, v13, *((_QWORD *)a1 + 5));
  }
  operator delete(a1);
  _InterlockedDecrement(&g_VidMmAsyncOpPendingCount);
}
