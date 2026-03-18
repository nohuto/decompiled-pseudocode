/*
 * XREFs of ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A798
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A620 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 * Callees:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiMarkDeviceAsError @ 0x140007A8C (VidSchiMarkDeviceAsError.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140008F9C (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140017A5C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14001CCCC (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     McTemplateK0pxpqq_EtwWriteTransfer @ 0x14003B450 (McTemplateK0pxpqq_EtwWriteTransfer.c)
 *     ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x14004AF78 (-VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PE.c)
 *     ?ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x14004CFF0 (-ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall SubmitRenderToHwQueue(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE **a3,
        struct _KLOCK_QUEUE_HANDLE *a4)
{
  __int64 v4; // r12
  LARGE_INTEGER v7; // r15
  __int64 QuadPart; // r13
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // r15
  DWORD v15; // eax
  KIRQL v16; // bl
  LARGE_INTEGER PerformanceCounter; // r14
  int v18; // edx
  LONG v19; // esi
  int v20; // r8d
  struct _KLOCK_QUEUE_HANDLE *v21; // r12
  LARGE_INTEGER v22; // rdi
  LARGE_INTEGER *v23; // rbx
  LARGE_INTEGER v24; // rcx
  LARGE_INTEGER *v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // esi
  unsigned int v30; // edx
  _QWORD *v31; // r8
  DWORD v32; // [rsp+40h] [rbp-C0h]
  __int128 v34; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v35; // [rsp+60h] [rbp-A0h]
  __int128 v36; // [rsp+70h] [rbp-90h]
  __int128 v37; // [rsp+80h] [rbp-80h]
  PKLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h]
  LARGE_INTEGER v39; // [rsp+98h] [rbp-68h]
  LARGE_INTEGER *v40; // [rsp+A0h] [rbp-60h]
  _DWORD v41[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE *v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  _BYTE v44[128]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *((_QWORD *)a2 + 12);
  LockHandle = a4;
  v40 = *(LARGE_INTEGER **)(v4 + 40);
  v7 = v40[2];
  QuadPart = v40[1].QuadPart;
  v39 = v7;
  v9 = *(_QWORD *)(v7.QuadPart + 24);
  v10 = *(_QWORD *)(QuadPart + 48);
  ++*(_DWORD *)(v4 + 152);
  *((_DWORD *)a2 + 20) |= 0x40u;
  if ( *(_QWORD *)(v4 + 104) && *((_DWORD *)a2 + 196) == 1 )
    VidSchiSignalSyncObjectsFromCpu(
      a1,
      1u,
      (struct _VIDSCH_SYNC_OBJECT **)(v4 + 104),
      0,
      (const unsigned __int64 *)a2 + 103,
      a3);
  if ( (*(_BYTE *)(v9 + 3284) & 1) != 0
    || *(_DWORD *)(v9 + 3260)
    || *(_BYTE *)(QuadPart + 212)
    || _InterlockedCompareExchange((volatile signed __int32 *)(QuadPart + 208), 0, 0)
    || *(_BYTE *)(v4 + 146) )
  {
    VidSchiSimulateProgressFenceCompletion(a1, a2, (struct VIDSCH_HW_QUEUE *)v4);
    VidSchiCompleteHwQueuePacket(a1, a2, 0);
  }
  else
  {
    *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
    v11 = *((_DWORD *)a2 + 12);
    *((_DWORD *)a2 + 13) = 9;
    if ( !v11 || v11 == 8 )
      ++*(_QWORD *)(v10 + 2840);
    if ( (*((_DWORD *)a2 + 18) & 0x4000) != 0 && (*(_DWORD *)(QuadPart + 56) & 2) != 0 )
    {
      *((_DWORD *)a2 + 20) |= 0x80u;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 876));
      if ( *(_BYTE *)(v9 + 67) )
      {
        v28 = *((_DWORD *)a2 + 42);
        if ( v28 < *(_DWORD *)(v9 + 48) )
          VidSchiSetInterruptTargetPresentId((struct _VIDSCH_GLOBAL *)v9, v28, 0, 0LL, 0, 0);
      }
    }
    if ( (*((_DWORD *)a2 + 16) & 0x80u) != 0 )
    {
      v29 = *((_DWORD *)a2 + 120);
      memset(v44, 0, sizeof(v44));
      v30 = 0;
      if ( v29 )
      {
        v31 = v44;
        do
        {
          if ( v30 >= 0x10 )
            break;
          ++v30;
          *v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v31 + a2 - (struct _VIDSCH_QUEUE_PACKET *)v44 + 488) + 96LL)
                           + 48LL);
          ++v31;
        }
        while ( v30 < v29 );
      }
      v41[0] = v29;
      v41[1] = 0;
      v42 = v44;
      v43 = *(_QWORD *)(*(_QWORD *)(QuadPart + 48) + 8LL);
      DXGADAPTER::ValidateMockDriverState(*(_QWORD *)(v9 + 16), 1LL, v41);
    }
    VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v7.QuadPart);
    v12 = *((_QWORD *)a2 + 37);
    *((_QWORD *)&v36 + 1) = 0LL;
    *(_QWORD *)&v34 = *(_QWORD *)(v4 + 112);
    *((_QWORD *)&v34 + 1) = *((_QWORD *)a2 + 97);
    v37 = *(_OWORD *)((char *)a2 + 792);
    *(_QWORD *)&v35 = *((_QWORD *)a2 + 40);
    DWORD2(v35) = *((_DWORD *)a2 + 83);
    if ( v12 )
    {
      HIDWORD(v35) = *(_DWORD *)(v12 + 8);
      v13 = v12 + 16;
    }
    else
    {
      v27 = *((_QWORD *)a2 + 36);
      if ( v27 )
      {
        HIDWORD(v35) = *((_DWORD *)a2 + 89);
        v13 = *(_QWORD *)(v27 + 120);
      }
      else
      {
        HIDWORD(v35) = 0;
        v13 = 0LL;
      }
    }
    *(_QWORD *)&v36 = v13;
    DWORD2(v36) = DWORD2(v36) & 0xFFFFFFF9 | ((*((_DWORD *)a2 + 18) & 0x80 | (*((_DWORD *)a2 + 18) >> 10) & 0x40u) >> 5);
    if ( g_BreakOnPrivateDataErrors && !*((_QWORD *)a2 + 37) && *((_DWORD *)a2 + 90) )
      __debugbreak();
    v14 = (void *)*((_QWORD *)a2 + 37);
    v15 = *((_DWORD *)a2 + 196);
    *((_QWORD *)a2 + 37) = 0LL;
    v16 = 0;
    v32 = v15;
    if ( a4 )
    {
      KeReleaseInStackQueuedSpinLock(a4);
      v16 = KfRaiseIrql(2u);
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v19 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[57])(*(_QWORD *)(v9 + 8), &v34);
    if ( (byte_14008A201 & 1) != 0 )
    {
      v26 = *(_QWORD *)(v4 + 48);
      if ( !v26 )
        LODWORD(v26) = v4;
      McTemplateK0pxpqq_EtwWriteTransfer(
        *(_DWORD *)(QuadPart + 1840),
        v18,
        v20,
        v26,
        SBYTE8(v34),
        v35,
        v19,
        *(_DWORD *)(QuadPart + 1840));
    }
    v21 = LockHandle;
    if ( LockHandle )
    {
      KeLowerIrql(v16);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 2016), v21);
    }
    if ( v14 )
      CRefCountedBuffer::RefCountedBufferRelease(v14);
    v22 = v39;
    v23 = (LARGE_INTEGER *)(*(_QWORD *)(v39.QuadPart + 184) + 112LL * *(unsigned int *)(v39.QuadPart + 196));
    memset(v23, 0, 0x70uLL);
    *(_DWORD *)(v22.QuadPart + 196) = (*(_DWORD *)(v22.QuadPart + 196) + 1) & (*(_DWORD *)(v22.QuadPart + 192) - 1);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v23[1] = PerformanceCounter;
    v23->LowPart = 8;
    v24 = *(LARGE_INTEGER *)((char *)&v34 + 8);
    v23[11].LowPart = v32;
    v25 = v40;
    v23[10] = v24;
    *(_OWORD *)&v23[2].LowPart = v34;
    *(_OWORD *)&v23[4].LowPart = v35;
    *(_OWORD *)&v23[6].LowPart = v36;
    *(_OWORD *)&v23[8].LowPart = v37;
    v23[11].HighPart = v19;
    v25[28] = PerformanceCounter;
    if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741822 )
      VidSchiMarkDeviceAsError(a1, QuadPart, 19, 0LL);
  }
}
