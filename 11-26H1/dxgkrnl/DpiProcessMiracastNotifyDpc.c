/*
 * XREFs of DpiProcessMiracastNotifyDpc @ 0x140037610
 * Callers:
 *     DxgNotifyDpcCB @ 0x1400374A0 (DxgNotifyDpcCB.c)
 * Callees:
 *     DpSynchronizeExecution @ 0x14002F9D0 (DpSynchronizeExecution.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x140087878 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x140087B94 (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x140088980 (DpiMiracastStopMiracastSessionAsync.c)
 */

void __fastcall DpiProcessMiracastNotifyDpc(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  unsigned int v4; // r9d
  struct MIRACAST_CHUNK *i; // rax
  struct _KEVENT *v6; // rcx
  _QWORD v7[2]; // [rsp+38h] [rbp-9h] BYREF
  _QWORD v8[2]; // [rsp+48h] [rbp+7h] BYREF
  int v9; // [rsp+58h] [rbp+17h]
  int v10; // [rsp+5Ch] [rbp+1Bh]
  __int128 v11; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+70h] [rbp+2Fh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+37h] BYREF
  BOOLEAN v14; // [rsp+A8h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v12 = 0LL;
  v11 = 0LL;
  if ( v1 && *(_DWORD *)(v1 + 16) == 1953656900 && *(_DWORD *)(v1 + 20) == 2 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v3 = *(_QWORD *)(v1 + 3368);
    if ( v3 )
    {
      *(_QWORD *)&v11 = v1;
      *((_QWORD *)&v11 + 1) = *(_QWORD *)(v3 + 488);
      DpSynchronizeExecution(
        a1,
        (KSYNCHRONIZE_ROUTINE *)MiracastProcessPendingDPCChunks,
        &v11,
        *(_DWORD *)(v1 + 4044),
        &v14);
      if ( BYTE1(v12) )
      {
        DpiMiracastStopMiracastSessionAsync((PVOID)v3);
      }
      else
      {
        if ( (_BYTE)v12 )
          *(_BYTE *)(v3 + 588) = 1;
        if ( HIDWORD(v12) < 0x14 && *(_DWORD *)(v1 + 3388) + 5 < 40 )
        {
          v10 = *(_DWORD *)(v1 + 3352);
          v9 = 0;
          v8[1] = v8;
          v8[0] = v8;
          if ( MIRACAST_CHUNK_LIST::AllocateNewChunks((MIRACAST_CHUNK_LIST *)v8, 5u) )
          {
            v4 = *(_DWORD *)(v1 + 4044);
            v7[0] = v8;
            v7[1] = *(_QWORD *)(v1 + 3392);
            DpSynchronizeExecution(a1, (KSYNCHRONIZE_ROUTINE *)DpiMiracastMoveChunkList, v7, v4, &v14);
            *(_DWORD *)(v1 + 3388) += 5;
          }
          else
          {
            WdLogSingleEntry1(6LL);
            WdLogGlobalForLineNumber = 8494;
          }
          for ( i = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v8);
                i;
                i = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v8) )
          {
            ExFreePoolWithTag(i, 0);
          }
        }
        if ( BYTE2(v12) || (_BYTE)v12 )
        {
          v6 = *(struct _KEVENT **)(v3 + 496);
          if ( v6 )
            KeSetEvent(v6, 1, 0);
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    WdLogSingleEntry2(2LL, v1, -1073741585LL);
    WdLogGlobalForLineNumber = 8371;
  }
}
