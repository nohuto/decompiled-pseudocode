/*
 * XREFs of ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140037B00
 * Callers:
 *     ?IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400FA154 (-IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 * Callees:
 *     ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140037C80 (-NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentActive(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  char v4; // r14
  __int64 v5; // rdi
  int v6; // ebx
  __int64 i; // rbx
  VIDMM_SEGMENT *v8; // rcx
  VIDMM_SEGMENT *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * *((unsigned __int16 *)a2 + 34));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5156, &LockHandle);
  *((_QWORD *)this + 5157) = KeGetCurrentThread();
  v6 = *(_DWORD *)(v5 + 552);
  *(_DWORD *)(v5 + 552) = v6 | (1 << *((_BYTE *)a2 + 70));
  *((_QWORD *)this + 5157) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v6 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 136); i = (unsigned int)(i + 1) )
    {
      v8 = *(VIDMM_SEGMENT **)(*(_QWORD *)(v5 + 1752) + 8 * i);
      if ( *((_DWORD *)v8 + 100) != -1
        && (*(_DWORD *)(v5 + 176) == VIDMM_SEGMENT::DriverId(v8) || *(_DWORD *)(v5 + 160) == VIDMM_SEGMENT::DriverId(v9)) )
      {
        if ( (unsigned int)VIDMM_GLOBAL::NotifyMemorySegmentHasData(this, *((_DWORD *)a2 + 100), 1u) == -1071775466
          && *(char *)(v5 + 556) < 0 )
        {
          *(_BYTE *)(v5 + 557) |= 4u;
          v4 = 1;
        }
        *(_BYTE *)(v5 + 557) &= ~8u;
      }
    }
  }
  VIDMM_GLOBAL::NotifyMemorySegmentHasData(this, *((_DWORD *)a2 + 100), 1u);
  if ( (*(_BYTE *)(v5 + 557) & 4) != 0 )
  {
    if ( v4 )
      VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((unsigned __int16 *)a2 + 34), 1u);
  }
}
