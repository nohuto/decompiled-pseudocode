/*
 * XREFs of ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1402BDF10
 * Callers:
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1402BDBF8 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x1402829C8 (-CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_K.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402BE420 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGSYNCOBJECT::CreatePeriodicFrameNotification(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER **a2,
        struct DXGADAPTER *a3,
        struct DXGADAPTER *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v11; // r9
  unsigned int PeriodicFrameNotification; // eax
  struct ADAPTER_RENDER *v13; // rbx
  struct _VIDSCH_SYNC_OBJECT *v14; // rax
  unsigned int v15; // esi

  DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
  if ( (*((_DWORD *)a4 + 111) & 0x100) != 0 )
  {
    if ( !a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2274;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncAdapter != nullptr", 2274LL, 0LL, 0LL, 0LL, 0LL);
    }
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(this, a2[396]);
    PeriodicFrameNotification = DXGDODPRESENT::CreatePeriodicFrameNotification(
                                  *(DXGDODPRESENT **)(*((_QWORD *)a4 + 395) + 464LL),
                                  (struct DXGADAPTER *)a2,
                                  VidSchSyncObject,
                                  v11,
                                  a6,
                                  (struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *)((char *)this + 224),
                                  (unsigned __int64 *)this + 26);
    *((_DWORD *)this + 54) = a6;
    *((_QWORD *)this + 25) = a4;
  }
  else
  {
    v13 = (struct ADAPTER_RENDER *)*((_QWORD *)a3 + 396);
    v14 = DXGSYNCOBJECT::GetVidSchSyncObject(this, v13);
    PeriodicFrameNotification = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64, _QWORD, char *, char *))(*(_QWORD *)(*((_QWORD *)v13 + 92) + 8LL) + 960LL))(
                                  *((_QWORD *)v13 + 93),
                                  v14,
                                  a5,
                                  a6,
                                  (char *)this + 224,
                                  (char *)this + 192);
  }
  v15 = PeriodicFrameNotification;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4);
  return v15;
}
