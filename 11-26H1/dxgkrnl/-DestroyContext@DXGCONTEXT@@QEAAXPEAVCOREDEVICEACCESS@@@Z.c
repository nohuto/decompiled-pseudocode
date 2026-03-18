/*
 * XREFs of ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A64B4
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402E6274 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403A4378 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A62FC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x140014774 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x14003CC28 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z @ 0x14004D804 (-VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x140055128 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14005613C (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400565F4 (-RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VidSchFlushContext@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_FLUSH_DATA@@@Z @ 0x14005C138 (-VidSchFlushContext@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_FLUSH_DATA@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyContext@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x14022E164 (-VmBusSendDestroyContext@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402E5D3C (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1403A6B6C (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A7D80 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyContext(DXGCONTEXT *this, PERESOURCE **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  DXGDEVICESYNCOBJECT *v7; // rcx
  DXGHWQUEUE *v8; // r14
  DXGHWQUEUE *i; // rdi
  DXGHWQUEUE *v10; // rax
  char v11; // di
  __int64 v12; // rcx
  struct _VIDSCH_CONTEXT *v13; // rdx
  char v14; // di
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct VIDMM_DMA_BUFFER *v17; // rdx
  DXGDEVICESYNCOBJECT *v18; // rcx
  struct _LOOKASIDE_LIST_EX *v19; // rcx
  void *v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // xmm1
  int v23; // edx
  __int64 v24; // r9
  DXGHWQUEUE *v25; // rcx
  int HostProcess; // eax
  __int64 v27; // [rsp+20h] [rbp-88h]
  __int64 v28; // [rsp+28h] [rbp-80h]
  __int64 v29; // [rsp+30h] [rbp-78h]
  __int64 v30; // [rsp+38h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  __int128 v32; // [rsp+80h] [rbp-28h] BYREF
  __int128 v33; // [rsp+90h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1744;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->GetAdapter()->IsCoreResourceSharedOwner()",
      1744LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)this + 428) )
  {
    v4 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 428) = 1;
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL);
    if ( *(_BYTE *)(v5 + 209) && *((_DWORD *)this + 7) )
    {
      HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v4 + 40));
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyContext(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v5 + 4712),
        HostProcess,
        *((_DWORD *)this + 7));
      *((_DWORD *)this + 7) = 0;
    }
    ADAPTER_RENDER::RemoveFromCddPrimarySyncContextListSafe(
      *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
      (struct _LIST_ENTRY *)this + 10);
    v7 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v7 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v7);
    v8 = (DXGCONTEXT *)((char *)this + 400);
    for ( i = (DXGHWQUEUE *)*((_QWORD *)this + 50); ; i = *(DXGHWQUEUE **)i )
    {
      v10 = 0LL;
      if ( i != v8 )
        v10 = i;
      if ( !v10 )
        break;
      v25 = i;
      if ( i == v8 )
        v25 = 0LL;
      DXGHWQUEUE::DestroyCoreState(v25, (struct COREDEVICEACCESS *)a2);
    }
    if ( *((_QWORD *)this + 32) || *((_QWORD *)this + 33) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      v12 = *((_QWORD *)this + 32);
      v32 = 0LL;
      LODWORD(v32) = 11;
      if ( v12 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 320LL))(
          v12,
          &v32);
      v13 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)this + 33);
      if ( v13 )
        VIDSCH_EXPORT::VidSchFlushContext(
          *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
          v13,
          (struct _VIDSCH_FLUSH_DATA *)&v32);
      if ( v11 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, (const char *)v13);
      if ( *((DXGCONTEXT **)this + 42) != (DXGCONTEXT *)((char *)this + 336)
        || (v14 = 0, *(_QWORD *)(*((_QWORD *)this + 2) + 840LL) != *((_QWORD *)this + 2) + 840LL) )
      {
        v14 = 1;
      }
      v15 = *((_QWORD *)this + 32);
      if ( v15 && v14 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 736LL)
                                                            + 8LL)
                                                + 336LL))(
          v15,
          0LL);
      v16 = *((_QWORD *)this + 33);
      if ( v16 && v14 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 736LL)
                                                            + 8LL)
                                                + 336LL))(
          v16,
          0LL);
    }
    if ( *((_QWORD *)this + 60) )
    {
      if ( *((_QWORD *)this + 32) )
        _InterlockedAdd64(
          (volatile signed __int64 *)(*((_QWORD *)this + 60) + 24LL),
          (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL)
                               + 1048LL))());
      if ( *((_QWORD *)this + 35) )
        _InterlockedAdd64(
          (volatile signed __int64 *)(*((_QWORD *)this + 60) + 24LL),
          (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL)
                               + 1056LL))());
    }
    if ( *((_QWORD *)this + 44) )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1867;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pCommandBuffer", 1867LL, 0LL, 0LL, 0LL, 0LL);
      }
      VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
        *((const struct VIDMM_DMA_BUFFER **)this + 44));
      VIDMM_EXPORT::VidMmReleaseDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
        *((struct VIDMM_DMA_BUFFER **)this + 44));
      *((_QWORD *)this + 44) = 0LL;
    }
    v17 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
    if ( v17 )
    {
      VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), v17);
      *((_QWORD *)this + 45) = 0LL;
    }
    if ( *((_QWORD *)this + 29) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 432LL))();
      *((_QWORD *)this + 29) = 0LL;
    }
    v18 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v18 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v18);
      *((_QWORD *)this + 30) = 0LL;
    }
    if ( *((_QWORD *)this + 34) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 960LL))();
      *((_QWORD *)this + 34) = 0LL;
    }
    if ( *((_QWORD *)this + 32) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 256LL))();
      *((_QWORD *)this + 32) = 0LL;
    }
    if ( *((_QWORD *)this + 36) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 280LL))();
      *((_QWORD *)this + 36) = 0LL;
    }
    if ( *((_QWORD *)this + 35) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 264LL))();
      *((_QWORD *)this + 35) = 0LL;
    }
    if ( *((_QWORD *)this + 33) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 256LL))();
      *((_QWORD *)this + 33) = 0LL;
    }
    v19 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 61);
    if ( v19 )
    {
      ExDeleteLookasideListEx(v19);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 61));
      *((_QWORD *)this + 61) = 0LL;
    }
    if ( (*((_DWORD *)this + 10) & 1) != 0 )
    {
      v20 = (void *)*((_QWORD *)this + 23);
      if ( v20 )
      {
        ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v20);
        *((_QWORD *)this + 23) = 0LL;
      }
    }
    if ( bTracingEnabled )
    {
      v21 = *((unsigned int *)this + 96);
      v22 = *(_OWORD *)((char *)this + 216);
      v23 = *((_DWORD *)this + 95);
      v24 = *((_QWORD *)this + 2);
      v32 = *(_OWORD *)((char *)this + 200);
      v33 = v22;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      {
        LODWORD(v31) = DWORD2(v32);
        LODWORD(v30) = DWORD1(v32);
        LODWORD(v29) = v32;
        LODWORD(v28) = v21;
        LODWORD(v27) = v23;
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          v21,
          &EventDestroyContext,
          v6,
          v24,
          v27,
          v28,
          v29,
          v30,
          v31,
          HIDWORD(v32),
          (_DWORD)v33,
          0,
          this,
          0LL,
          0LL);
      }
    }
    if ( !*((_BYTE *)this + 429) )
      DXGADAPTER::NotifyContextCreation(
        *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
        this,
        0,
        *((_DWORD *)this + 95));
  }
}
