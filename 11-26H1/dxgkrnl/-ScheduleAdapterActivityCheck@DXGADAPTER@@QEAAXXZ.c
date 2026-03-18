/*
 * XREFs of ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x140013260
 * Callers:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140012E10 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x14030E300 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGADAPTER::ScheduleAdapterActivityCheck(DXGADAPTER *this)
{
  __int64 v1; // rdx
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  KSPIN_LOCK *v6; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+48h] [rbp-10h]

  v1 = *((_QWORD *)this + 467);
  v6 = (KSPIN_LOCK *)((char *)this + 3728);
  v8 = 0;
  if ( (struct _KTHREAD *)v1 != KeGetCurrentThread() )
  {
    KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
    v6[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v8 = 1;
  }
  *(_QWORD *)(*((_QWORD *)this + 453) + 392LL) = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(*((_QWORD *)this + 453) + 392LL) += *((_QWORD *)this + 446);
  v3 = (_QWORD *)(*((_QWORD *)this + 453) + 400LL);
  if ( !*v3 )
  {
    v4 = (_QWORD *)((char *)this + 3712);
    v1 = *((_QWORD *)this + 464);
    if ( *(DXGADAPTER **)(v1 + 8) != (DXGADAPTER *)((char *)this + 3712) )
      __fastfail(3u);
    *v3 = v1;
    v3[1] = v4;
    *(_QWORD *)(v1 + 8) = v3;
    *v4 = v3;
  }
  if ( !*((_BYTE *)this + 3700) )
  {
    v5 = *((_QWORD *)this + 396);
    LOBYTE(v1) = 1;
    *((_BYTE *)this + 3700) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v5 + 736) + 8LL) + 888LL))(
      *(_QWORD *)(v5 + 744),
      v1);
  }
  if ( v8 )
  {
    v8 = 0;
    v6[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
