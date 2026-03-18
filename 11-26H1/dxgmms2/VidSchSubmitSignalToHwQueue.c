/*
 * XREFs of VidSchSubmitSignalToHwQueue @ 0x140008000
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiSignalSyncObject @ 0x140008708 (VidSchiSignalSyncObject.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x140009B58 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1400127F0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140039044 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchiAllocateHwQueuePacket @ 0x140109138 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitSignalToHwQueue(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        struct _VIDSCH_SYNC_OBJECT **a4,
        int a5,
        __int64 a6)
{
  struct _VIDSCH_SYNC_OBJECT *v7; // rax
  unsigned int v8; // r12d
  struct _VIDSCH_SYNC_OBJECT **v9; // r15
  unsigned int v10; // r13d
  unsigned int v11; // r14d
  __int64 v12; // rax
  int v13; // edi
  unsigned int i; // esi
  struct _VIDSCH_QUEUE_PACKET **Pool2; // rdi
  struct _VIDSCH_QUEUE_PACKET *v16; // r15
  __int64 j; // r14
  __int64 v18; // rsi
  __int64 v19; // r13
  struct _VIDSCH_QUEUE_PACKET *HwQueuePacket; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // ecx
  struct _VIDSCH_QUEUE_PACKET *v24; // rax
  struct _VIDSCH_QUEUE_PACKET **v25; // r15
  unsigned int v26; // esi
  unsigned int v27; // r14d
  char v28; // r12
  struct _VIDSCH_QUEUE_PACKET **v29; // rdi
  __int64 v30; // rbx
  struct _VIDSCH_SYNC_OBJECT *v32; // rcx
  int v33; // r8d
  char v34; // r9
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // r14d
  int v39; // ecx
  int v40; // eax
  struct _VIDSCH_SYNC_OBJECT **v41; // r15
  __int64 v42; // r12
  struct _VIDSCH_SYNC_OBJECT *v43; // rdi
  int v44; // r8d
  struct _VIDSCH_QUEUE_PACKET **v45; // rcx
  bool v46; // zf
  __int64 v47; // [rsp+28h] [rbp-C9h]
  __int64 v48; // [rsp+58h] [rbp-99h]
  struct _VIDSCH_QUEUE_PACKET **v49; // [rsp+58h] [rbp-99h]
  KSPIN_LOCK *SpinLock; // [rsp+60h] [rbp-91h]
  struct _VIDSCH_QUEUE_PACKET **v51; // [rsp+68h] [rbp-89h]
  struct _VIDSCH_QUEUE_PACKET **v52; // [rsp+70h] [rbp-81h]
  _BYTE v53[16]; // [rsp+78h] [rbp-79h] BYREF
  unsigned int v54; // [rsp+88h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-61h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-49h] BYREF
  _QWORD v57[2]; // [rsp+B0h] [rbp-41h] BYREF
  char v58; // [rsp+C0h] [rbp-31h]
  int v59; // [rsp+C4h] [rbp-2Dh]
  _QWORD v60[4]; // [rsp+C8h] [rbp-29h] BYREF
  __int16 v61; // [rsp+E8h] [rbp-9h]
  unsigned int v66; // [rsp+168h] [rbp+77h]

  v7 = *a4;
  v8 = 0;
  v9 = a4;
  v10 = a3;
  v11 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v12 = *((_QWORD *)v7 + 1);
  v48 = v12;
  SpinLock = (KSPIN_LOCK *)(v12 + 2016);
  if ( (a5 & 0x80000004) != 0 )
  {
    SpinLock = (KSPIN_LOCK *)(v12 + 2016);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 2016), &LockHandle);
    v13 = 0;
    for ( i = 0; i < v10; ++i )
    {
      v32 = v9[i];
      v33 = *((_DWORD *)v32 + 12);
      if ( (v33 == 4 || (unsigned int)(v33 - 5) <= 1) && !*((_BYTE *)v32 + 29) )
      {
        v34 = *((_BYTE *)v32 + 30);
        v35 = *(_QWORD *)(a6 + 8LL * i);
        if ( *((_BYTE *)v32 + 28) )
        {
          v36 = *(_QWORD *)(*((_QWORD *)v32 + 43) + 40LL);
        }
        else if ( v33 == 2 )
        {
          v36 = *((_QWORD *)v32 + 9);
        }
        else if ( v33 == 6 )
        {
          v36 = *((_QWORD *)v32 + 25);
        }
        else
        {
          v36 = *((_QWORD *)v32 + 12);
        }
        if ( v34 )
        {
          if ( v35 < v36 )
          {
            WdLogSingleEntry2(3LL, v35, v36);
            WdLogGlobalForLineNumber = 6019;
LABEL_73:
            v13 = -1073741811;
            WdLogSingleEntry2(1LL, *(_QWORD *)(a6 + 8LL * i), -1073741811LL);
            v47 = *(_QWORD *)(a6 + 8LL * i);
            WdLogGlobalForLineNumber = 5382;
            DxgkLogInternalTriageEvent(
              v47,
              0x40000,
              v44,
              (unsigned int)L"Invalid monitored fence value 0x%I64x, returning 0x%I64x",
              v47,
              -1073741811LL,
              0LL,
              0LL);
            break;
          }
          if ( v35 == v36 )
          {
            WdLogSingleEntry1(3LL, v35);
            WdLogGlobalForLineNumber = 6028;
          }
        }
        else
        {
          if ( (int)v36 - (int)v35 > 0 )
          {
            WdLogSingleEntry2(3LL, (unsigned int)v35, (unsigned int)v36);
            WdLogGlobalForLineNumber = 6038;
            goto LABEL_73;
          }
          if ( (_DWORD)v36 == (_DWORD)v35 )
          {
            WdLogSingleEntry1(3LL, (unsigned int)v35);
            WdLogGlobalForLineNumber = 6047;
          }
        }
        v9 = a4;
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v13 < 0 )
      return (unsigned int)v13;
    v11 = a1;
  }
  v52 = 0LL;
  v54 = 0;
  if ( v11 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
    {
LABEL_77:
      WdLogSingleEntry0(3LL);
      v45 = v52;
      v46 = v52 == (struct _VIDSCH_QUEUE_PACKET **)v53;
      WdLogGlobalForLineNumber = 5402;
LABEL_78:
      if ( !v46 && v45 )
        ExFreePoolWithTag(v45, 0);
      return 3221225495LL;
    }
    Pool2 = (struct _VIDSCH_QUEUE_PACKET **)ExAllocatePool2(64LL, 8LL * v11, 945908054LL);
    v52 = Pool2;
  }
  else
  {
    Pool2 = (struct _VIDSCH_QUEUE_PACKET **)v53;
    v51 = (struct _VIDSCH_QUEUE_PACKET **)v53;
    v52 = (struct _VIDSCH_QUEUE_PACKET **)v53;
    if ( !v11 )
      goto LABEL_10;
    memset(v53, 0, 8LL * v11);
    Pool2 = (struct _VIDSCH_QUEUE_PACKET **)v53;
  }
  v51 = Pool2;
LABEL_10:
  v54 = v11;
  if ( !Pool2 )
    goto LABEL_77;
  v16 = 0LL;
  v66 = 0;
  for ( j = 0LL; (unsigned int)j < a1; j = (unsigned int)(j + 1) )
  {
    v18 = (unsigned int)j;
    v19 = *(_QWORD *)(a2 + 8 * j);
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    if ( *(_QWORD *)(v19 + 160) == v19 + 160 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v10 = a3;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      HwQueuePacket = (struct _VIDSCH_QUEUE_PACKET *)VidSchiAllocateHwQueuePacket(v19, 0LL);
      Pool2[j] = HwQueuePacket;
      if ( !HwQueuePacket )
      {
        WdLogSingleEntry1(3LL, -1073741801LL);
        WdLogGlobalForLineNumber = 5442;
        if ( (_DWORD)j )
        {
          do
          {
            if ( *Pool2 )
              VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v19, *Pool2);
            ++Pool2;
            --v18;
          }
          while ( v18 );
        }
        v45 = v52;
        v46 = v52 == (struct _VIDSCH_QUEUE_PACKET **)v53;
        goto LABEL_78;
      }
      *(_DWORD *)HwQueuePacket = 895576406;
      v8 = j;
      v66 = j;
      *((_DWORD *)Pool2[j] + 12) = 5;
      *((_QWORD *)Pool2[j] + 7) = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)Pool2[j] + 13) = 2;
      *((_QWORD *)Pool2[j] + 12) = v19;
      *((_QWORD *)Pool2[j] + 13) = KeGetCurrentThread();
      *((_QWORD *)Pool2[j] + 9) = 0LL;
      *((_DWORD *)Pool2[j] + 70) ^= ((unsigned __int8)a5 ^ (unsigned __int8)*((_DWORD *)Pool2[j] + 70)) & 1;
      if ( (a5 & 4) != 0 )
        *((_DWORD *)Pool2[j] + 70) |= 4u;
      v10 = a3;
      if ( a3 )
      {
        v21 = 68LL;
        v22 = a3;
        do
        {
          v23 = *((_DWORD *)a4[v21 - 68] + 12);
          if ( v23 == 4 || v23 == 2 || v23 == 6 )
            *(_QWORD *)((char *)Pool2[j] + v21 * 8) = *(_QWORD *)(v21 * 8 + a6 - 544);
          *(_QWORD *)((char *)Pool2[j] + v21 * 8 - 256) = a4[v21 - 68];
          ++v21;
          --v22;
        }
        while ( v22 );
        v8 = j;
      }
      *((_DWORD *)Pool2[j] + 71) = a3;
      *((_QWORD *)Pool2[j] + 100) = 0LL;
      v24 = Pool2[j];
      if ( v16 )
      {
        *((_QWORD *)v24 + 101) = v16;
        *((_QWORD *)v16 + 100) = Pool2[j];
      }
      else
      {
        *((_QWORD *)v24 + 101) = 0LL;
      }
      v16 = Pool2[j];
    }
  }
  if ( v16 )
  {
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    v25 = Pool2;
    v49 = Pool2;
    v26 = 0;
    do
    {
      if ( *v25 )
      {
        v27 = 0;
        if ( v10 )
        {
          v28 = v26 == v8;
          do
            VidSchiSignalSyncObject(v27++, (_DWORD)a4, a5, a6, v28);
          while ( v27 < v10 );
          v25 = v49;
          v8 = v66;
        }
      }
      ++v25;
      ++v26;
      v49 = v25;
    }
    while ( v26 <= v8 );
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v29 = v51;
    v30 = v8 + 1;
    do
    {
      if ( *v29 )
        VidSchiSubmitCommandPacketToHwQueue(*v29);
      ++v29;
      --v30;
    }
    while ( v30 );
  }
  else
  {
    v60[0] = SpinLock;
    v61 = 0;
    AcquireSpinLock::Acquire((Acquire *)v60);
    v37 = v48;
    v56 = v48;
    v57[1] = v57;
    v38 = 0;
    v58 = 0;
    v57[0] = v57;
    v59 = 1;
    if ( v10 )
    {
      v39 = (int)a4;
      v40 = a6;
      v41 = a4;
      v42 = a6;
      do
      {
        v43 = *v41;
        VidSchiSignalSyncObject(v38, v39, a5, v40, 1);
        VidSchiCompleteSignalSyncObject((HwQueueStagingList *)&v56, v43, 1);
        VidSchiReleaseSyncObjectReference(v43);
        v40 = a6;
        ++v41;
        v39 = (int)a4;
        ++v38;
        v42 += 8LL;
      }
      while ( v38 < v10 );
      v37 = v48;
    }
    if ( *(_DWORD *)(v37 + 868) )
      VidSchUnwaitFlipQueue(&v56, v37);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v56);
    AcquireSpinLock::Release((AcquireSpinLock *)v60);
  }
  if ( v52 != (struct _VIDSCH_QUEUE_PACKET **)v53 && v52 )
    ExFreePoolWithTag(v52, 0);
  return 0LL;
}
