/*
 * XREFs of ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A7D80
 * Callers:
 *     ?CreateHwQueueForUserModeSubmission@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1401E147C (-CreateHwQueueForUserModeSubmission@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISS.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x14034F208 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A64B4 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7B58 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EC14 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14004B344 (-VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     ?VidMmUnmapCpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400577DC (-VidMmUnmapCpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ?VidMmCloseFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVICE@@_N@Z @ 0x14007C758 (-VidMmCloseFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVI.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DestroyCoreState@DXGDOORBELL@@IEAAXXZ @ 0x1401E1680 (-DestroyCoreState@DXGDOORBELL@@IEAAXXZ.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402E5D3C (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1403A8050 (-DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGHWQUEUE::DestroyCoreState(DXGHWQUEUE *this, PERESOURCE **a2)
{
  __int64 v4; // r8
  char v5; // si
  DXGDOORBELL *v6; // rcx
  _QWORD *v7; // r14
  const char *v8; // rdx
  void *v9; // rdx
  DXGDEVICESYNCOBJECT *v10; // rcx
  DXGDEVICESYNCOBJECT *v11; // rcx
  __int64 v12; // rax

  v5 = 1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 92;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->GetRenderCore()->GetAdapter()->IsCoreResourceSharedOwner()",
      92LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
  {
    *((_BYTE *)this + 120) = 1;
    return;
  }
  if ( !*((_BYTE *)this + 120) )
  {
    v6 = (DXGDOORBELL *)*((_QWORD *)this + 19);
    *((_BYTE *)this + 120) = 1;
    if ( v6 )
      DXGDOORBELL::DestroyCoreState(v6);
    if ( *((_QWORD *)this + 30) )
    {
      if ( *((_QWORD *)this + 31) )
      {
        VIDMM_EXPORT::VidMmUnmapCpuVA(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 760LL),
          *(struct VIDMM_DEVICE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 792LL),
          (DXGHWQUEUE *)((char *)this + 168));
        *((_QWORD *)this + 31) = 0LL;
      }
      if ( *((_BYTE *)this + 232) )
      {
        VIDMM_EXPORT::VidMmCloseFenceStorageSlot(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 760LL),
          (DXGHWQUEUE *)((char *)this + 168),
          *(struct VIDMM_DEVICE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 792LL));
        *((_BYTE *)this + 232) = 0;
      }
      VIDMM_EXPORT::VidMmFreeFenceStorageSlot(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 760LL),
        (DXGHWQUEUE *)((char *)this + 168),
        0);
      *((_QWORD *)this + 30) = 0LL;
    }
    if ( !*((_QWORD *)this + 6) )
      goto LABEL_14;
    v7 = (_QWORD *)((char *)this + 48);
    if ( a2 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
        goto LABEL_11;
      }
      v7 = (_QWORD *)((char *)this + 48);
    }
    v5 = 0;
LABEL_11:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                           + 736LL)
                                               + 8LL)
                                   + 328LL))(*((_QWORD *)this + 6));
    if ( v5 )
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v8);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                           + 736LL)
                                               + 8LL)
                                   + 280LL))(*((_QWORD *)this + 6));
    *v7 = 0LL;
LABEL_14:
    v9 = (void *)*((_QWORD *)this + 4);
    if ( v9 )
    {
      ADAPTER_RENDER::DdiDestroyHwQueue(*(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL), v9);
      *((_QWORD *)this + 4) = 0LL;
    }
    v10 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 10);
    if ( v10 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v10);
    v11 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 12);
    if ( v11 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v11);
    v12 = *((_QWORD *)this + 7);
    if ( v12 )
    {
      *(_DWORD *)(v12 + 44) = 0;
      DXGDEVICESYNCOBJECT::DestroyCoreState(*((DXGDEVICESYNCOBJECT **)this + 7));
    }
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventDestroyHwQueue,
          v4,
          *((_QWORD *)this + 2),
          0LL,
          this);
    }
  }
}
