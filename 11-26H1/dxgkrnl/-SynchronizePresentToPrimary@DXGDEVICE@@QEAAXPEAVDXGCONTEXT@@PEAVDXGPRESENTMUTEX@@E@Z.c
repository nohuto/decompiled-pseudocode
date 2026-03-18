/*
 * XREFs of ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1402BD8D0
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1402BBFE4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x140035930 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x14003DE60 (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 *     ?RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140056684 (-RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402BE420 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICE::SynchronizePresentToPrimary(
        DXGDEVICE *this,
        struct _LIST_ENTRY *a2,
        struct DXGPRESENTMUTEX *a3,
        char a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  unsigned int *v8; // r15
  unsigned int v9; // edi
  struct _LIST_ENTRY **v10; // r12
  struct _LIST_ENTRY *v11; // rbx
  __int64 v12; // rcx
  struct _LIST_ENTRY *Flink; // rax
  int v14; // eax
  __int64 v15; // rbx
  const wchar_t *v16; // r9
  int IsAllocationInPresentQueue; // eax
  struct _LIST_ENTRY *v18; // rsi
  struct _LIST_ENTRY *v19; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v22[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct _VIDSCH_CONTEXT *v23[64]; // [rsp+70h] [rbp-90h] BYREF

  v4 = *((_QWORD *)this + 2);
  v7 = *(_QWORD *)(v4 + 904);
  v8 = *(unsigned int **)(v4 + 912);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 944, 0LL);
  *(_QWORD *)(v4 + 952) = KeGetCurrentThread();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)(v7 + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v7, (struct ADAPTER_RENDER *)v4);
  if ( a4 || !a2[10].Flink && *(_DWORD *)(v4 + 936) >= 0x40u )
  {
    v9 = 0;
    memset(v23, 0, sizeof(v23));
    v10 = (struct _LIST_ENTRY **)(v4 + 920);
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 == (struct _LIST_ENTRY *)v10 || !v11 )
        break;
      ADAPTER_RENDER::RemoveFromCddPrimarySyncContextList((ADAPTER_RENDER *)v4, *v10);
      v11->Flink = 0LL;
      if ( a2 != &v11[-10]
        && ((__int64)v11[14].Blink & 0x10) == 0
        && ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v11[-9].Flink[1].Flink[46].Flink->Blink[50].Blink)(v11[6].Flink)
        && v9 < 0x40 )
      {
        v12 = v9++;
        v23[v12] = (struct _VIDSCH_CONTEXT *)v11[6].Flink;
      }
    }
    if ( v9 )
    {
      Flink = a2[1].Flink;
      v8 = (unsigned int *)((char *)v8 + 1);
      v21 = (unsigned __int64)v8;
      v14 = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
              (VIDSCH_EXPORT *)Flink[1].Flink[46].Flink,
              0,
              0LL,
              v9,
              v23,
              1u,
              &VidSchSyncObject,
              0,
              &v21,
              0);
      if ( v14 < 0 )
      {
        v15 = v14;
        WdLogSingleEntry2(2LL, v14, a2);
        v16 = L"ret = 0x%I64x Context 0x%I64x: Failed to submit signal for sync object";
        WdLogGlobalForLineNumber = 3886;
LABEL_15:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v15, (__int64)a2, 0LL, 0LL, 0LL);
        goto LABEL_22;
      }
      *(_QWORD *)(v4 + 912) = v8;
    }
  }
  if ( a2[11].Flink < (struct _LIST_ENTRY *)v8 )
  {
    if ( ((__int64)a2[24].Blink & 0x10) == 0 )
    {
      IsAllocationInPresentQueue = VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
                                     (VIDMM_EXPORT *)a2[1].Flink[1].Flink[46].Flink,
                                     (struct VIDMM_GLOBAL *)a2[16].Flink,
                                     VidSchSyncObject,
                                     v8);
      if ( IsAllocationInPresentQueue < 0 )
      {
        v15 = IsAllocationInPresentQueue;
        WdLogSingleEntry2(2LL, IsAllocationInPresentQueue, a2);
        v16 = L"ret = 0x%I64x Context 0x%I64x: Failed to submit wait for sync object";
        WdLogGlobalForLineNumber = 3909;
        goto LABEL_15;
      }
    }
    a2[11].Flink = (struct _LIST_ENTRY *)v8;
  }
LABEL_22:
  v18 = a2 + 10;
  if ( !v18->Flink )
  {
    v19 = *(struct _LIST_ENTRY **)(v4 + 928);
    if ( v19->Flink != (struct _LIST_ENTRY *)(v4 + 920) )
      __fastfail(3u);
    v18->Flink = (struct _LIST_ENTRY *)(v4 + 920);
    v18->Blink = v19;
    v19->Flink = v18;
    *(_QWORD *)(v4 + 928) = v18;
    ++*(_DWORD *)(v4 + 936);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  *(_QWORD *)(v4 + 952) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 944, 0LL);
  KeLeaveCriticalRegion();
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
}
