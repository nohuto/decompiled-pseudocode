/*
 * XREFs of ?VidSchPostCrossAdapterSignal@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_SYNC_OBJECT_CROSS_ADAPTER@@@Z @ 0x140047380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchPostCrossAdapterSignal(struct _VIDSCH_GLOBAL *a1, struct VIDSCH_SYNC_OBJECT_CROSS_ADAPTER *a2)
{
  _QWORD *v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  _QWORD *v7; // rax
  __int64 v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 428, &LockHandle);
  if ( a2 )
  {
    v4 = (_QWORD *)((char *)a2 + 296);
    if ( !*((_QWORD *)a2 + 37) )
    {
      _m_prefetchw((char *)a2 + 36);
      v5 = *((_DWORD *)a2 + 9);
      while ( v5 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)a2 + 9, v5 + 1, v5);
        if ( v6 == v5 )
        {
          v7 = (_QWORD *)((char *)a1 + 3408);
          v8 = *((_QWORD *)a1 + 426);
          if ( *(struct _VIDSCH_GLOBAL **)(v8 + 8) != (struct _VIDSCH_GLOBAL *)((char *)a1 + 3408) )
            __fastfail(3u);
          *v4 = v8;
          *((_QWORD *)a2 + 38) = v7;
          *(_QWORD *)(v8 + 8) = v4;
          *v7 = v4;
          ++*((_DWORD *)a1 + 860);
          goto LABEL_10;
        }
      }
    }
  }
  else
  {
    *((_BYTE *)a1 + 3444) = 1;
LABEL_10:
    *((_QWORD *)a1 + 187) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)a1 + 61, 0, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
