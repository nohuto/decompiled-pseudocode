/*
 * XREFs of ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x14021E3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x14003B088 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Destroy@DXGK_DIRTY_BITPLANE@@QEAAXXZ @ 0x140083DAC (-Destroy@DXGK_DIRTY_BITPLANE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DdiDestroyMemoryBasis@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1401ADBE0 (-DdiDestroyMemoryBasis@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 *     ?DdiStopDirtyTracking@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1401B2DC0 (-DdiStopDirtyTracking@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 *     ?DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x140218DC0 (-DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyLiveMigrationState@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ @ 0x1403FACB0 (-DestroyLiveMigrationState@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DestroyVirtualGpuCoreState(DXGK_VIRTUAL_GPU_GPUP *this)
{
  ULONG v2; // eax
  ADAPTER_RENDER *v3; // rcx
  __int64 v4; // rcx
  unsigned int i; // ebp
  __int64 v6; // rsi
  struct DXGALLOCATION **v7; // r8
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  void *v11; // rdx
  int v12; // eax
  __int64 v13; // rbx
  char *v14; // rcx
  char *v15; // rbx
  __int64 v16; // rcx
  void *v17; // rcx
  _DXGKARG_DESTROYVIRTUALGPU v18; // [rsp+50h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-50h] BYREF

  if ( *((_BYTE *)this + 192) )
  {
    v2 = *((_DWORD *)this + 6);
    v3 = (ADAPTER_RENDER *)*((_QWORD *)this + 1);
    v18.PartitionId = v2;
    ADAPTER_RENDER::DdiDestroyVirtualGpu(v3, &v18);
    *((_BYTE *)this + 192) = 0;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)&ApcState,
    (struct _KTHREAD **)this + 25);
  DXGK_VIRTUAL_GPU_GPUP::DestroyLiveMigrationState(this);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&ApcState);
  if ( *((_QWORD *)this + 23) )
  {
    v4 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 173);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
    for ( i = 0; i < *((_DWORD *)this + 42); ++i )
    {
      v6 = 112LL * i;
      v7 = (struct DXGALLOCATION **)(v6 + *((_QWORD *)this + 23));
      if ( *v7 )
      {
        DXGDEVICE::DestroyAllocationInternal(
          *((DXGDEVICE **)this + 22),
          1u,
          v7,
          0LL,
          0LL,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)3);
        *(_QWORD *)(v6 + *((_QWORD *)this + 23)) = 0LL;
      }
      v8 = *((_QWORD *)this + 23);
      if ( *(_DWORD *)(v6 + v8 + 104) )
      {
        if ( *(_DWORD *)(v6 + v8 + 88) )
        {
          v9 = ADAPTER_RENDER::DdiStopDirtyTracking(*((ADAPTER_RENDER **)this + 1), *(void *const *)(v6 + v8 + 96));
          *(_DWORD *)(v6 + *((_QWORD *)this + 23) + 88) = 0;
          if ( v9 < 0 )
          {
            v10 = v9;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1237;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DxgkDdiStopDirtyTracking failed. Status: 0x%I64x",
              v10,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        v11 = *(void **)(v6 + *((_QWORD *)this + 23) + 96);
        if ( v11 )
        {
          v12 = ADAPTER_RENDER::DdiDestroyMemoryBasis(*((ADAPTER_RENDER **)this + 1), v11);
          if ( v12 < 0 )
          {
            v13 = v12;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1246;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DxgkDdiDestroyMemoryBasis failed. Status: 0x%I64x",
              v13,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        DXGK_DIRTY_BITPLANE::Destroy((DXGK_DIRTY_BITPLANE *)(v6 + *((_QWORD *)this + 23) + 32LL));
      }
    }
    KeUnstackDetachProcess(&ApcState);
    v14 = (char *)*((_QWORD *)this + 23);
    if ( v14 )
    {
      v15 = v14 - 8;
      `vector destructor iterator'(
        v14,
        112LL,
        *((_QWORD *)v14 - 1),
        (void (__fastcall *)(char *))DXGK_GPUP_ALLOCATION_INFO::~DXGK_GPUP_ALLOCATION_INFO);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
    }
    *((_QWORD *)this + 23) = 0LL;
    *((_DWORD *)this + 42) = 0;
  }
  v16 = *((_QWORD *)this + 20);
  if ( v16 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(v16 + 32));
    *(_QWORD *)(*((_QWORD *)this + 20) + 32LL) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  v17 = (void *)*((_QWORD *)this + 43);
  if ( v17 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
    *((_QWORD *)this + 43) = 0LL;
    *((_DWORD *)this + 84) = 0;
  }
}
