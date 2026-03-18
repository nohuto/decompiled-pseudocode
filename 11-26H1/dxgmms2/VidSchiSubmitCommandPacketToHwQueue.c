/*
 * XREFs of VidSchiSubmitCommandPacketToHwQueue @ 0x140009B58
 * Callers:
 *     VidSchSubmitSignalToHwQueue @ 0x140008000 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1400090D0 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchSubmitCommandToHwQueue @ 0x14000AED0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchEnqueueCpuEvent @ 0x140108B90 (VidSchEnqueueCpuEvent.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1401095AC (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140009F10 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E2070 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1400FDA70 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  _QWORD *v1; // r14
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r15
  int v6; // eax
  char v7; // al
  __int64 v8; // rcx
  VIDMM_DEVICE *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // r15
  unsigned __int64 v19; // r8
  __int64 v20; // r15
  unsigned __int64 v21; // r8
  __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  __int64 v24; // r15
  unsigned __int64 v25; // r8
  int v26; // eax
  struct _KLOCK_QUEUE_HANDLE v27; // [rsp+40h] [rbp-40h] BYREF
  __int64 v28; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  __int16 v30; // [rsp+78h] [rbp-8h]
  __int64 v31; // [rsp+C0h] [rbp+40h]
  int v32; // [rsp+C8h] [rbp+48h]

  v1 = (_QWORD *)*((_QWORD *)a1 + 12);
  v3 = v1[5];
  v4 = *(_QWORD *)(v3 + 8);
  v31 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v31 + 24);
  v32 = v5;
  VidSchiEnsureVSyncEnabled(a1, v4);
  v30 = 0;
  v28 = v5 + 2016;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 2016), &LockHandle);
  v6 = *((_DWORD *)a1 + 12);
  LOBYTE(v30) = 1;
  if ( v6 )
  {
    if ( v6 == 8 )
    {
      v22 = v1[7];
      v23 = *((_QWORD *)a1 + 37);
      if ( *(_BYTE *)(v22 + 28) )
      {
        v24 = *(_QWORD *)(v22 + 344);
        memset(&v27, 0, sizeof(v27));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v24 + 8), &v27);
        v25 = *(_QWORD *)(v24 + 40);
        if ( v25 >= v23 )
        {
          WdLogSingleEntry3(3LL, *(_QWORD *)(v22 + 16), v25, v23);
          WdLogGlobalForLineNumber = 6247;
        }
        else
        {
          *(_QWORD *)(v24 + 40) = v23;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v27);
      }
      else
      {
        v26 = *(_DWORD *)(v22 + 48);
        if ( v26 == 2 )
        {
          *(_QWORD *)(v22 + 72) = v23;
        }
        else if ( v26 == 6 )
        {
          *(_QWORD *)(v22 + 200) = v23;
        }
        else
        {
          *(_QWORD *)(v22 + 96) = v23;
        }
      }
      v1[9] = *((_QWORD *)a1 + 37);
    }
  }
  else
  {
    v10 = *((unsigned int *)a1 + 196);
    v11 = *((_QWORD *)a1 + 97);
    v12 = 3 * v10;
    v13 = v1[3 * v10 + 7];
    if ( *(_BYTE *)(v13 + 28) )
    {
      v18 = *(_QWORD *)(v13 + 344);
      memset(&v27, 0, sizeof(v27));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v18 + 8), &v27);
      v19 = *(_QWORD *)(v18 + 40);
      if ( v19 >= v11 )
      {
        WdLogSingleEntry3(3LL, *(_QWORD *)(v13 + 16), v19, v11);
        WdLogGlobalForLineNumber = 6247;
      }
      else
      {
        *(_QWORD *)(v18 + 40) = v11;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v27);
    }
    else
    {
      v14 = *(_DWORD *)(v13 + 48);
      if ( v14 == 2 )
      {
        *(_QWORD *)(v13 + 72) = v11;
      }
      else if ( v14 == 6 )
      {
        *(_QWORD *)(v13 + 200) = v11;
      }
      else
      {
        *(_QWORD *)(v13 + 96) = v11;
      }
    }
    v1[v12 + 9] = *((_QWORD *)a1 + 97);
    v15 = v1[13];
    if ( v15 && *((_DWORD *)a1 + 196) == 1 )
    {
      v16 = *((_QWORD *)a1 + 103);
      if ( *(_BYTE *)(v15 + 28) )
      {
        v20 = *(_QWORD *)(v15 + 344);
        memset(&v27, 0, sizeof(v27));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v20 + 8), &v27);
        v21 = *(_QWORD *)(v20 + 40);
        if ( v21 >= v16 )
        {
          WdLogSingleEntry3(3LL, *(_QWORD *)(v15 + 16), v21, v16);
          WdLogGlobalForLineNumber = 6247;
        }
        else
        {
          *(_QWORD *)(v20 + 40) = v16;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v27);
      }
      else
      {
        v17 = *(_DWORD *)(v15 + 48);
        if ( v17 == 2 )
        {
          *(_QWORD *)(v15 + 72) = v16;
        }
        else if ( v17 == 6 )
        {
          *(_QWORD *)(v15 + 200) = v16;
        }
        else
        {
          *(_QWORD *)(v15 + 96) = v16;
        }
      }
    }
    ++*(_QWORD *)(v4 + 1856);
  }
  *((_QWORD *)a1 + 14) = ++v1[17];
  VidSchiProfilePerformanceTick(4, v32, v31, 0, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiInsertCommandToHwQueue(a1);
  v7 = v30;
  if ( (_BYTE)v30 )
  {
    if ( HIBYTE(v30) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    v7 = 0;
    LOBYTE(v30) = 0;
  }
  v8 = *(_QWORD *)(v4 + 8);
  if ( v8 )
  {
    v9 = *(VIDMM_DEVICE **)(v8 + 792);
    if ( v9 )
    {
      VIDMM_DEVICE::EnsureSchedulable(v9, 1);
      v7 = v30;
    }
  }
  if ( v7 )
  {
    if ( HIBYTE(v30) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
