/*
 * XREFs of ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402E5D3C
 * Callers:
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402003DC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1402E600C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402E6274 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A3B88 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A64B4 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A7D80 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x140052B98 (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?VidMmUnmapGpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14005B380 (-VidMmUnmapGpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ?VidMmCloseFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVICE@@_N@Z @ 0x14007C758 (-VidMmCloseFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVI.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DdiCloseNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CLOSENATIVEFENCE@@@Z @ 0x1401AB53C (-DdiCloseNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CLOSENATIVEFENCE@@@Z.c)
 *     ?GetNativeFenceMonitoredValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVADAPTER_RENDER@@@Z @ 0x1401FE3A4 (-GetNativeFenceMonitoredValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVA.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402E5CE4 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DestroyCoreState(DXGDEVICESYNCOBJECT *this)
{
  DXGADAPTER *v2; // rcx
  __int64 v3; // rax
  ADAPTER_RENDER *v4; // rdi
  struct VIDMM_DEVICE *v5; // rbp
  VIDMM_EXPORT *v6; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v8; // r8
  char v9; // al
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *NativeFenceMonitoredValueStorage; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *v12; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *v13; // rax
  _BYTE v14[16]; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v15[3]; // [rsp+60h] [rbp-58h] BYREF

  v2 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( !*((_BYTE *)v2 + 209) )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 121;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetDevice()->GetRenderCore()->IsCoreResourceSharedOwner()",
        121LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v3 = *((_QWORD *)this + 2);
    v4 = *(ADAPTER_RENDER **)(v3 + 16);
    v5 = *(struct VIDMM_DEVICE **)(v3 + 792);
    v6 = (VIDMM_EXPORT *)*((_QWORD *)v4 + 95);
    if ( *((_QWORD *)this + 12) )
    {
      if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305952) )
      {
        v15[0] = *((unsigned __int64 *)this + 12);
        memset(&v15[1], 0, 32);
        if ( (int)ADAPTER_RENDER::DdiCloseNativeFence(v4, (struct _DXGKARG_CLOSENATIVEFENCE *)v15) < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 138;
        }
      }
      *((_QWORD *)this + 12) = 0LL;
    }
    if ( *((_QWORD *)this + 15) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v4 + 92) + 8LL) + 1136LL))(
        *((_QWORD *)v4 + 93),
        *(_QWORD *)(*((_QWORD *)this + 2) + 800LL));
      *((_QWORD *)this + 15) = 0LL;
    }
    if ( (*((_BYTE *)this + 92) & 1) != 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
      if ( DXGDEVICESYNCOBJECT::GetVidSchSyncObject(this) )
      {
        VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(this);
        LOBYTE(v8) = (*((_DWORD *)this + 18) & 0x420) == 0;
        (*(void (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v4 + 92)
                                                                                                  + 8LL)
                                                                                      + 696LL))(
          VidSchSyncObject,
          *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
          v8,
          *((_QWORD *)this + 3));
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 3));
      *((_BYTE *)this + 92) &= ~1u;
      *((_QWORD *)this + 3) = 0LL;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
    }
    if ( *((_QWORD *)this + 6) )
    {
      CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
      VIDMM_EXPORT::VidMmUnmapGpuVA(v6, v5, CurrentValueStorage);
      *((_QWORD *)this + 6) = 0LL;
    }
    if ( *((_QWORD *)this + 13) )
    {
      NativeFenceMonitoredValueStorage = DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(
                                           *((DXGSYNCOBJECT **)this + 4),
                                           v4);
      VIDMM_EXPORT::VidMmUnmapGpuVA(v6, v5, NativeFenceMonitoredValueStorage);
      *((_QWORD *)this + 13) = 0LL;
    }
    v9 = *((_BYTE *)this + 92);
    if ( (v9 & 0x10) != 0 )
    {
      v12 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
      VIDMM_EXPORT::VidMmCloseFenceStorageSlot(v6, v12, v5);
      v9 = *((_BYTE *)this + 92) & 0xEF;
      *((_BYTE *)this + 92) = v9;
    }
    if ( (v9 & 8) != 0 )
    {
      v13 = DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(*((DXGSYNCOBJECT **)this + 4), v4);
      VIDMM_EXPORT::VidMmCloseFenceStorageSlot(v6, v13, v5);
      *((_BYTE *)this + 92) &= ~8u;
    }
  }
}
