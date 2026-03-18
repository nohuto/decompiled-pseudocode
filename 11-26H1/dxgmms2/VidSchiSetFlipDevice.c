/*
 * XREFs of VidSchiSetFlipDevice @ 0x1400051E8
 * Callers:
 *     VidSchiClearFlipDevice @ 0x140003564 (VidSchiClearFlipDevice.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x140003F60 (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x140004C00 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 * Callees:
 *     VidSchiCompletePendingFlip @ 0x1400036D8 (VidSchiCompletePendingFlip.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1400037E8 (VidSchiClearPeriodicFrameNotifications.c)
 *     ?IsMockDriverStateEnabled@DXGADAPTER@@QEAA_NXZ @ 0x1400038B0 (-IsMockDriverStateEnabled@DXGADAPTER@@QEAA_NXZ.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x140004744 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     ?InitializeFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x140005984 (-InitializeFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14001F7AC (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x14002BF40 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140031F58 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x140044868 (-GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z @ 0x140047338 (-DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z.c)
 *     ?ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x14004CFF0 (-ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchControlVSyncDevice @ 0x1400FD460 (VidSchControlVSyncDevice.c)
 *     VidSchIsVSyncAvailable @ 0x1401043F0 (VidSchIsVSyncAvailable.c)
 *     VidSchiFlushPendingFlips @ 0x14012747C (VidSchiFlushPendingFlips.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSetFlipDevice(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        char a6,
        char a7)
{
  __int64 v7; // r13
  int v9; // r12d
  __int64 v11; // rdi
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  int v17; // r15d
  struct _VIDSCH_GLOBAL *v18; // rdx
  struct _VIDSCH_GLOBAL *v19; // r13
  int v20; // r15d
  unsigned __int16 v21; // r9
  __int64 v22; // r14
  int j; // esi
  __int64 v24; // rax
  __int64 v25; // rcx
  VIDSCH_FLIP_QUEUE **v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rdx
  void *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r15
  bool v35; // zf
  PVOID v36; // rdx
  unsigned int i; // r15d
  VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  __int64 v39; // r8
  _QWORD *v40; // rsi
  __int64 v41; // rcx
  _QWORD *v42; // rax
  char *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // r9
  int v46; // esi
  char v47; // cl
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int k; // esi
  __int64 v52; // r15
  void *v53; // r12
  ADAPTER_RENDER *v54; // rcx
  PVOID BackTrace; // [rsp+30h] [rbp-71h] BYREF
  unsigned __int64 v56; // [rsp+40h] [rbp-61h] BYREF
  __int128 v57; // [rsp+48h] [rbp-59h] BYREF
  unsigned int *v58; // [rsp+58h] [rbp-49h]
  int *v59; // [rsp+60h] [rbp-41h]
  __int64 v60; // [rsp+68h] [rbp-39h]
  PVOID v61; // [rsp+70h] [rbp-31h]
  char v62; // [rsp+78h] [rbp-29h]
  int v63; // [rsp+79h] [rbp-28h]
  __int16 v64; // [rsp+7Dh] [rbp-24h]
  char v65; // [rsp+7Fh] [rbp-22h]
  struct _VIDSCH_GLOBAL *v66; // [rsp+80h] [rbp-21h] BYREF
  unsigned int v67; // [rsp+88h] [rbp-19h]
  int v68; // [rsp+8Ch] [rbp-15h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-11h] BYREF
  PERESOURCE Resource; // [rsp+A8h] [rbp+7h]
  unsigned int v71; // [rsp+F0h] [rbp+4Fh]
  unsigned int v72; // [rsp+F8h] [rbp+57h] BYREF
  int v73; // [rsp+108h] [rbp+67h] BYREF

  v72 = a2;
  v7 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v71 = 0;
  v9 = 1;
  v11 = *((_QWORD *)a1 + a2 + 431);
  v12 = 0;
  Resource = (PERESOURCE)((char *)a1 + 1048);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1048), 1u);
  WdLogSingleEntry3(4LL, a3, v72, v7);
  WdLogGlobalForLineNumber = 23220;
  if ( (_DWORD)v7 )
  {
    v15 = *(_QWORD *)(v11 + 16);
    if ( v15 )
    {
      if ( v15 == a3 && *(_DWORD *)(v11 + 4) == (_DWORD)v7 )
        goto LABEL_5;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 0x10000LL, a1, a3, v72);
      WdLogGlobalForLineNumber = 916;
      while ( 1 )
      {
        v30 = v73 + 1;
        *(_DWORD *)(*(_QWORD *)v36 + 76LL) = 63;
        v29 = v71;
LABEL_39:
        v73 = v30;
        if ( v30 == *((_DWORD *)a1 + 40) )
        {
          *(_BYTE *)(v11 + 8) = a6;
          *(_DWORD *)(v11 + 4) = v7;
          *(_QWORD *)(v11 + 16) = a3;
          goto LABEL_63;
        }
        v31 = *((_QWORD *)a1 + v29 + 431);
        if ( v30 == v9 )
LABEL_54:
          v32 = (void *)(v31 + 32);
        else
          v32 = (void *)(v31 + 8 * (v30 + 5LL));
        BackTrace = v32;
        v33 = operator new(89720LL, 962685270LL, 64LL);
        v34 = v33;
        if ( !v33 )
          break;
        v35 = v73 == v9;
        *(_DWORD *)(v33 + 84) = v73;
        *(_QWORD *)(v33 + 56) = 0LL;
        *(_QWORD *)(v33 + 64) = 0LL;
        *(_BYTE *)(v33 + 80) = v35;
        *(_QWORD *)(v33 + 72) = 0LL;
        *(_QWORD *)(v33 + 88) = 0LL;
        *(_QWORD *)(v33 + 96) = 0LL;
        *(_QWORD *)(v33 + 104) = 0LL;
        *(_DWORD *)(v33 + 112) = 0;
        memset((void *)(v33 + 120), 0, 0x15E00uLL);
        v36 = BackTrace;
        *(_OWORD *)v34 = 0LL;
        *(_OWORD *)(v34 + 16) = 0LL;
        *(_OWORD *)(v34 + 32) = 0LL;
        *(_QWORD *)(v34 + 48) = 0LL;
        *(_QWORD *)v36 = v34;
        for ( i = 0; i < 0x40; ++i )
        {
          if ( (int)_VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                      (_VIDSCH_FLIP_QUEUE_ENTRY *)(*(_QWORD *)v36 + 120LL + 1400LL * i),
                      a1) < 0 )
            goto LABEL_47;
          v36 = BackTrace;
        }
      }
      *(_QWORD *)BackTrace = 0LL;
LABEL_47:
      v12 = -1073741801;
      v67 = v72;
      v66 = a1;
      while ( 1 )
      {
        v68 = v9;
        if ( v9 == *((_DWORD *)a1 + 40) )
          break;
        FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v66);
        if ( FlipQueue )
        {
          VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(FlipQueue);
          *VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v66) = 0LL;
        }
        ++v9;
      }
LABEL_63:
      v40 = (_QWORD *)(a3 + 112);
      v41 = *v40;
      if ( *(_QWORD **)(*v40 + 8LL) != v40
        || (v42 = (_QWORD *)v40[1], (_QWORD *)*v42 != v40)
        || (*v42 = v41,
            v43 = (char *)a1 + 360,
            *(_QWORD *)(v41 + 8) = v42,
            v44 = *(_QWORD *)v43,
            *(char **)(*(_QWORD *)v43 + 8LL) != v43) )
      {
        __fastfail(3u);
      }
      *v40 = v44;
      v40[1] = v43;
      *(_QWORD *)(v44 + 8) = v40;
      *(_QWORD *)v43 = v40;
LABEL_60:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_5;
    }
    if ( (int)v7 < 4 && !*((_BYTE *)a1 + 164) )
      goto LABEL_37;
    if ( (unsigned __int8)VidSchIsVSyncAvailable(a1, v72) )
    {
      LOBYTE(v39) = 1;
      v12 = VidSchControlVSyncDevice(a3, 1LL, v39, v72);
      if ( v12 >= 0 )
      {
LABEL_37:
        if ( (int)v7 >= 3 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 252, &LockHandle);
          v29 = v72;
          v9 = -1;
          v71 = v72;
          v30 = -1;
          goto LABEL_39;
        }
      }
    }
    else
    {
      v12 = -1073741823;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 252, &LockHandle);
    *(_BYTE *)(v11 + 8) = a6;
    *(_DWORD *)(v11 + 4) = v7;
    *(_QWORD *)(v11 + 16) = a3;
    goto LABEL_60;
  }
  LODWORD(v7) = 0;
  if ( !a3 || a3 == *(_QWORD *)(v11 + 16) )
  {
    if ( (byte_14008A201 & 1) != 0 )
    {
      if ( a3 )
      {
        v45 = *(_QWORD *)(a3 + 8);
        if ( !v45 )
          v45 = a3;
      }
      else
      {
        v45 = 0LL;
      }
      McTemplateK0pq_EtwWriteTransfer(v13, &EventClearFlipDevice, v14, v45, v72);
    }
    VidSchiClearPeriodicFrameNotifications((__int64)a1, v72);
    v9 = (_DWORD)a1 + 2016;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 252, &LockHandle);
    v17 = a5;
    v56 = (unsigned __int64)a1;
    *((_QWORD *)&v57 + 1) = &v57;
    LOBYTE(v58) = 0;
    *(_QWORD *)&v57 = &v57;
    HIDWORD(v58) = 2;
    VidSchiCompletePendingFlip((__int64)&v56, (__int64)a1, v72, a5);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v56);
    if ( v17 == 6 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiFlushPendingFlips(a1);
      if ( a7 )
      {
        if ( VidSchiSubmitDisablePlanesFlip((struct _VIDSCH_DEVICE *)a3, v72) == -1073741267 && !*(_BYTE *)(v11 + 78948) )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 61441LL, a1, v72, 0LL);
          WdLogGlobalForLineNumber = 916;
          goto LABEL_54;
        }
        VidSchiFlushPendingFlips(a1);
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 252, &LockHandle);
    }
    if ( DXGADAPTER::IsMockDriverStateEnabled(*((DXGADAPTER **)a1 + 2)) && v17 != 9 )
    {
      BackTrace = 0LL;
      RtlCaptureStackBackTrace(2u, 1u, &BackTrace, 0LL);
      LOWORD(v46) = *(_WORD *)(v11 + 44296);
      while ( (_WORD)v46 )
      {
        v73 = 0;
        v47 = -1;
        v35 = !_BitScanForward((unsigned int *)&v48, (unsigned __int16)v46);
        if ( !v35 )
          v47 = v48;
        v49 = (unsigned int)v47;
        v50 = *((_QWORD *)a1 + 2);
        v73 = v49;
        v66 = *(struct _VIDSCH_GLOBAL **)((v49 << 12) + v11 + 3336);
        *(_DWORD *)((char *)&v57 + 9) = 0;
        *(_WORD *)((char *)&v57 + 13) = 0;
        HIBYTE(v57) = 0;
        v63 = 0;
        v64 = 0;
        v65 = 0;
        *(_QWORD *)&v57 = &v66;
        v58 = &v72;
        v59 = &v73;
        v61 = BackTrace;
        v56 = 1LL;
        v62 = 0;
        BYTE8(v57) = 1;
        v60 = 0LL;
        DXGADAPTER::ValidateMockDriverState(v50, 0LL, &v56);
        v46 = (unsigned __int16)v46 & ~(1 << v73);
      }
    }
    v19 = *(struct _VIDSCH_GLOBAL **)(v11 + 16);
    v20 = *(_DWORD *)(v11 + 4);
    v21 = *(_WORD *)(v11 + 44296);
    *((_QWORD *)&v57 + 1) = &v57;
    v66 = v19;
    *(_QWORD *)&v57 = &v57;
    v73 = v20;
    v56 = (unsigned __int64)a1;
    LOBYTE(v58) = 0;
    HIDWORD(v58) = 2;
    VidSchiUnreferenceDisplayingAllocations(
      (struct HwQueueStagingList *)&v56,
      v18,
      (struct _VIDSCH_PRESENT_INFO *)v11,
      v21);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v56);
    v22 = v72;
    for ( j = -1; j != *((_DWORD *)a1 + 40); ++j )
    {
      v24 = *((_QWORD *)a1 + v22 + 431);
      if ( j == -1 )
        v25 = *(_QWORD *)(v24 + 32);
      else
        v25 = *(_QWORD *)(v24 + 8LL * j + 40);
      if ( v25 )
      {
        if ( j == -1 )
          v26 = (VIDSCH_FLIP_QUEUE **)(v24 + 32);
        else
          v26 = (VIDSCH_FLIP_QUEUE **)(v24 + 8LL * j + 40);
        if ( *v26 )
          VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(*v26);
        v27 = *((_QWORD *)a1 + v22 + 431);
        if ( j == -1 )
          v28 = (_QWORD *)(v27 + 32);
        else
          v28 = (_QWORD *)(v27 + 8LL * j + 40);
        *v28 = 0LL;
      }
    }
    *(_BYTE *)(v11 + 8) = a6;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 16) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v12 = 0;
    if ( *((_BYTE *)a1 + 67) )
    {
      for ( k = 0; k < *((_DWORD *)a1 + 40); ++k )
      {
        v52 = 304LL * k;
        v53 = *(void **)(v52 + v11 + 448);
        if ( v53 )
        {
          *(_QWORD *)(v52 + v11 + 448) = 0LL;
          v54 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 1);
          v57 = 0LL;
          v56 = __PAIR64__(k, v72);
          ADAPTER_RENDER::DdiSetFlipQueueLogBuffer(v54, (const struct _DXGKARG_SETFLIPQUEUELOGBUFFER *)&v56);
          *(_DWORD *)(v52 + v11 + 376) = 0;
          ExFreePoolWithTag(v53, 0);
        }
      }
    }
    if ( v66 && (v73 >= 4 || *((_BYTE *)a1 + 164)) )
      v12 = VidSchControlVSyncDevice(v66, 1LL, 0LL, v72);
  }
LABEL_5:
  ExReleaseResourceLite(Resource);
  return (unsigned int)v12;
}
