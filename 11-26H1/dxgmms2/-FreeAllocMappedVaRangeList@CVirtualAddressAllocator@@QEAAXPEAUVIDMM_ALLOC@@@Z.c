/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400CF348
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1400389C0 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003E87C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400CB248 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x140105EE0 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z @ 0x140113A8C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_ALLOC *a2)
{
  struct _KTHREAD *v2; // r8
  char v5; // r12
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 VidMmAllocFromOwner; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD **v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // r9
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rbx
  VIDMM_MAPPED_VA_RANGE *v21; // rdi
  __int64 v22; // [rsp+50h] [rbp-30h]
  _QWORD *v23; // [rsp+70h] [rbp-10h] BYREF
  _QWORD **v24; // [rsp+78h] [rbp-8h]

  v2 = (struct _KTHREAD *)*((_QWORD *)this + 9);
  v24 = &v23;
  v23 = &v23;
  v5 = 0;
  if ( v2 != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)this + 64));
    v5 = 1;
  }
  v6 = (_QWORD *)((char *)a2 + 648);
  while ( 1 )
  {
    v7 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    v9 = v7;
    *(_QWORD *)(v8 + 8) = v6;
    *v7 = 0LL;
    v7[1] = 0LL;
    _InterlockedIncrement((volatile signed __int32 *)v7 + 26);
    if ( byte_14008A202 < 0 )
    {
      VidMmAllocFromOwner = GetVidMmAllocFromOwner(v7[5] & 0xF, v7[4]);
      LODWORD(v22) = v11;
      McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
        v9[6],
        &EndGpuVirtualAddressRangeMapping,
        v11,
        this,
        VidMmAllocFromOwner,
        v9[6],
        v9[9],
        v9[10],
        v9[8],
        v9[7],
        v22,
        v9[11],
        v9[12]);
    }
    CVirtualAddressAllocator::RemoveVaRangeFromVad(this, (struct VIDMM_MAPPED_VA_RANGE *)(v9 - 4), 1u, 1u, 0);
    v12 = v24;
    if ( *v24 != &v23 )
      __fastfail(3u);
    v9[1] = v24;
    *v9 = &v23;
    *v12 = v9;
    v24 = (_QWORD **)v9;
  }
  if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
  {
    v13 = (_QWORD *)((char *)a2 + 664);
    while ( 1 )
    {
      v14 = (_QWORD **)*v13;
      if ( (_QWORD *)*v13 == v13 )
        break;
      if ( v14[1] != v13 )
        goto LABEL_24;
      v15 = (__int64)*v14;
      if ( (_QWORD **)(*v14)[1] != v14 )
        goto LABEL_24;
      *v13 = v15;
      *(_QWORD *)(v15 + 8) = v13;
      *v14 = 0LL;
      v14[1] = 0LL;
      if ( (_QWORD **)MEMORY[8] != v14 )
        goto LABEL_24;
      if ( (_QWORD **)MEMORY[0] != v14 )
        goto LABEL_24;
      MEMORY[0] = 0LL;
      v16 = v14 - 3;
      MEMORY[8] = 0LL;
      *v14 = 0LL;
      v14[1] = 0LL;
      v17 = (__int64)*(v14 - 3);
      if ( *(_QWORD ***)(v17 + 8) != v14 - 3
        || (v18 = *(v14 - 2), (_QWORD *)*v18 != v16)
        || (*v18 = v17,
            *(_QWORD *)(v17 + 8) = v18,
            *((_DWORD *)v14 + 10) &= ~0x8000u,
            *v16 = 0LL,
            *(v14 - 2) = 0LL,
            v19 = v24,
            *v24 != &v23) )
      {
LABEL_24:
        __fastfail(3u);
      }
      v14[1] = v24;
      *v14 = &v23;
      *v19 = v14;
      v24 = v14;
    }
  }
  if ( v5 )
  {
    *((_QWORD *)this + 9) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
    KeLeaveCriticalRegion();
  }
  v20 = v23;
  while ( v20 != &v23 )
  {
    v21 = (VIDMM_MAPPED_VA_RANGE *)(v20 - 4);
    if ( (v20[5] & 0x1C00) != 0 )
    {
      VIDMM_GLOBAL::UncommitVirtualAddressRange(
        *((VIDMM_GLOBAL **)this + 12),
        this,
        (struct VIDMM_MAPPED_VA_RANGE *)(v20 - 4),
        KeGetCurrentThread() == *(struct _KTHREAD **)(**((_QWORD **)this + 12) + 8LL),
        0LL);
      *((_DWORD *)v21 + 18) &= 0xFFFFEBFF;
    }
    v20 = (_QWORD *)*v20;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v21, (struct _KTHREAD **)this);
  }
}
