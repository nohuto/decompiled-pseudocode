/*
 * XREFs of VidSchTerminateAdapter @ 0x1400C57F0
 * Callers:
 *     VidSchInitializeAdapter @ 0x1400C2230 (VidSchInitializeAdapter.c)
 *     VidSchiHandleControlEvent @ 0x1400C577C (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiClearPeriodicFrameNotifications @ 0x1400037E8 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchiAcceptsIncomingWork @ 0x140004660 (VidSchiAcceptsIncomingWork.c)
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     VidSchTerminateHwQueue @ 0x140005B00 (VidSchTerminateHwQueue.c)
 *     VidSchTerminateHwContext @ 0x140026780 (VidSchTerminateHwContext.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     VidSchIsWorkerThread @ 0x1400360D0 (VidSchIsWorkerThread.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1400377C8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x14003A398 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1_VIDSCH_GLOBAL@@QEAA@XZ @ 0x14004ACC8 (--1_VIDSCH_GLOBAL@@QEAA@XZ.c)
 *     VidSchiBlockDriverCallback @ 0x140099458 (VidSchiBlockDriverCallback.c)
 *     VidSchiRequestSchedulerStatus @ 0x1400C1914 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 *     VidSchTerminateDevice @ 0x1400FD230 (VidSchTerminateDevice.c)
 *     VidSchControlVSyncAdapter @ 0x1400FD840 (VidSchControlVSyncAdapter.c)
 *     VidSchTerminateContext @ 0x140116930 (VidSchTerminateContext.c)
 *     VidSchiTerminateNode @ 0x140124F40 (VidSchiTerminateNode.c)
 */

__int64 __fastcall VidSchTerminateAdapter(struct _VIDSCH_GLOBAL *a1)
{
  int v2; // r14d
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rbx
  unsigned int i; // ebx
  unsigned int *v10; // rbx
  unsigned int j; // esi
  struct _VIDSCH_CONTEXT *v12; // rcx
  unsigned int v13; // esi
  struct _VIDSCH_CONTEXT *v14; // rcx
  unsigned int v15; // esi
  struct VIDSCH_HW_QUEUE *v16; // rcx
  unsigned int k; // esi
  void *v18; // rcx
  __int64 v19; // rcx
  unsigned int m; // ebx
  __int64 *v21; // rcx
  __int64 v22; // rsi
  struct _VIDSCH_CONTEXT *v23; // rcx
  struct _VIDSCH_CONTEXT *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int n; // ebx
  PVOID *v28; // rax
  _QWORD *v29; // rcx
  unsigned int v30; // ebp
  char *v31; // rcx
  char *v32; // rbx
  unsigned int ii; // ebx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rbx
  _BYTE v38[32]; // [rsp+30h] [rbp-48h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    v3 = (_QWORD *)((char *)a1 + 3808);
    if ( *((_QWORD *)a1 + 476) )
    {
      DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
        (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v38,
        (struct _EX_PUSH_LOCK *const)&gAdapterListLock);
      v4 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      *(_OWORD *)v3 = 0LL;
      DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v38);
    }
    if ( VidSchiAcceptsIncomingWork((__int64)a1) )
    {
      if ( !VidSchIsWorkerThread(v7) )
      {
        VidSchFlushAdapter(a1, 17);
        v8 = (void *)*((_QWORD *)a1 + 22);
        ObfReferenceObject(v8);
        VidSchiRequestSchedulerStatus((__int64)a1, 2, 0);
        KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v8);
        return 0LL;
      }
      VidSchFlushAdapter(a1, 17);
      for ( i = 0; i < *((_DWORD *)a1 + 12); ++i )
      {
        if ( *((_DWORD *)a1 + i + 528) )
        {
          *((_DWORD *)a1 + i + 528) = 1;
          VidSchControlVSyncAdapter(a1);
        }
      }
      VidSchiBlockDriverCallback((__int64)a1);
      while ( *((_DWORD *)a1 + 638) )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      if ( (*((_DWORD *)a1 + 706) & 2) != 0 )
        ExReleaseResourceLite((PERESOURCE)((char *)a1 + 1152));
      v2 = 1;
    }
    v10 = (unsigned int *)((char *)a1 + 84);
    if ( *((_QWORD *)a1 + 44) )
    {
      for ( j = 0; j < *v10; ++j )
      {
        v12 = *(struct _VIDSCH_CONTEXT **)(*((_QWORD *)a1 + 44) + 8LL * j);
        if ( v12 )
          VidSchTerminateContext(v12);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 44), 0);
      *((_QWORD *)a1 + 44) = 0LL;
    }
    if ( *((_QWORD *)a1 + 41) )
    {
      v13 = 0;
      if ( *v10 )
      {
        do
        {
          v14 = *(struct _VIDSCH_CONTEXT **)(*((_QWORD *)a1 + 41) + 8LL * v13);
          if ( v14 )
            VidSchTerminateContext(v14);
          ++v13;
        }
        while ( v13 < *v10 );
        v10 = (unsigned int *)((char *)a1 + 84);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 41), 0);
      *((_QWORD *)a1 + 41) = 0LL;
    }
    if ( *((_QWORD *)a1 + 43) )
    {
      v15 = 0;
      if ( *v10 )
      {
        do
        {
          v16 = *(struct VIDSCH_HW_QUEUE **)(*((_QWORD *)a1 + 43) + 8LL * v15);
          if ( v16 )
            VidSchTerminateHwQueue(v16);
          ++v15;
        }
        while ( v15 < *v10 );
        v10 = (unsigned int *)((char *)a1 + 84);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 43), 0);
      *((_QWORD *)a1 + 43) = 0LL;
    }
    if ( *((_QWORD *)a1 + 42) )
    {
      for ( k = 0; k < *v10; ++k )
      {
        v18 = *(void **)(*((_QWORD *)a1 + 42) + 8LL * k);
        if ( v18 )
          VidSchTerminateHwContext(v18);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 42), 0);
      *((_QWORD *)a1 + 42) = 0LL;
    }
    v19 = *((_QWORD *)a1 + 40);
    if ( v19 )
    {
      VidSchTerminateDevice(v19);
      *((_QWORD *)a1 + 40) = 0LL;
    }
    for ( m = 0; m < *((_DWORD *)a1 + 22); ++m )
    {
      v21 = (__int64 *)*((_QWORD *)a1 + 87);
      if ( m < *((_DWORD *)a1 + 192) )
        v21 += m;
      v22 = *v21;
      if ( *v21 )
      {
        v23 = *(struct _VIDSCH_CONTEXT **)(v22 + 32);
        if ( v23 )
        {
          VidSchTerminateContext(v23);
          *(_QWORD *)(v22 + 32) = 0LL;
        }
      }
    }
    v24 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 34);
    if ( v24 )
    {
      VidSchTerminateContext(v24);
      *((_QWORD *)a1 + 34) = 0LL;
    }
    v25 = *((_QWORD *)a1 + 33);
    if ( v25 )
    {
      VidSchTerminateDevice(v25);
      *((_QWORD *)a1 + 33) = 0LL;
    }
    v26 = *((_QWORD *)a1 + 25);
    if ( v26 )
    {
      LOBYTE(v6) = 1;
      ExDeleteTimer(v26, v6, 0LL, 0LL);
    }
    for ( n = 0; n < *((_DWORD *)a1 + 23); ++n )
    {
      v28 = (PVOID *)*((_QWORD *)a1 + 87);
      if ( n < *((_DWORD *)a1 + 192) )
        v28 += n;
      if ( *v28 )
      {
        VidSchiTerminateNode(*v28);
        v29 = (_QWORD *)(*((_QWORD *)a1 + 87) + 8LL * n);
        if ( n >= *((_DWORD *)a1 + 192) )
          v29 = (_QWORD *)*((_QWORD *)a1 + 87);
        *v29 = 0LL;
      }
    }
    v30 = 0;
    for ( *((_DWORD *)a1 + 94) = 2; v30 < *((_DWORD *)a1 + 12); ++v30 )
    {
      if ( *((_QWORD *)a1 + v30 + 431) )
      {
        VidSchiClearPeriodicFrameNotifications((__int64)a1, v30);
        v31 = *(char **)(*((_QWORD *)a1 + v30 + 431) + 136LL);
        if ( v31 )
        {
          v32 = v31 - 8;
          `vector destructor iterator'(
            v31,
            112LL,
            *((_QWORD *)v31 - 1),
            (void (__fastcall *)(char *))VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::~VIDSCH_FLIP_QUEUE_HISTORY_ENTRY);
          operator delete(v32);
        }
        operator delete(*(void **)(*((_QWORD *)a1 + v30 + 431) + 44408LL));
        if ( !*((_BYTE *)a1 + 67) )
        {
          for ( ii = 0; ii < *((_DWORD *)a1 + 40); ++ii )
          {
            v34 = *(void **)(304LL * ii + *((_QWORD *)a1 + v30 + 431) + 432);
            if ( v34 )
              ExFreePoolWithTag(v34, 0);
          }
        }
        ExFreePoolWithTag(*((PVOID *)a1 + v30 + 431), 0);
        *((_QWORD *)a1 + v30 + 431) = 0LL;
      }
      v35 = (void *)*((_QWORD *)a1 + v30 + 841);
      if ( v35 )
      {
        ExFreePoolWithTag(v35, 0);
        *((_QWORD *)a1 + v30 + 841) = 0LL;
      }
    }
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 3128));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 384));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1360));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1152));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1048));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1256));
    if ( *((_BYTE *)a1 + 7064) )
    {
      ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 6944));
      if ( *((struct _VIDSCH_GLOBAL **)a1 + 865) != (struct _VIDSCH_GLOBAL *)((char *)a1 + 6920) )
        KeWaitForSingleObject((char *)a1 + 7040, Executive, 0, 0, 0LL);
    }
    if ( *((_BYTE *)a1 + 1040) )
    {
      ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 944));
      *((_BYTE *)a1 + 1040) = 0;
    }
    v36 = (void *)*((_QWORD *)a1 + 22);
    _VIDSCH_GLOBAL::~_VIDSCH_GLOBAL(a1);
    ExFreePoolWithTag(a1, 0);
    if ( v2 )
    {
      ObfDereferenceObject(v36);
      PsTerminateSystemThread(0);
    }
  }
  return 0LL;
}
