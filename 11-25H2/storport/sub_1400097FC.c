/*
 * XREFs of sub_1400097FC @ 0x1400097FC
 * Callers:
 *     sub_140009700 @ 0x140009700 (sub_140009700.c)
 *     sub_140059EAC @ 0x140059EAC (sub_140059EAC.c)
 * Callees:
 *     sub_14009210C @ 0x14009210C (sub_14009210C.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_1400097FC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, __int64, __int64))
{
  __int64 v6; // rcx
  unsigned int j; // esi
  __int64 v11; // rdi
  _DWORD *v12; // r9
  _QWORD *i; // rdi
  struct _IO_WORKITEM *v15; // rcx
  PIO_WORKITEM WorkItem; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+38h] [rbp-40h] BYREF

  *(_BYTE *)(a1 + 209) = 0;
  v6 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v18, 0, sizeof(v18));
  if ( (*(_BYTE *)(v6 + 112) & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 136), &v18);
    for ( i = *(_QWORD **)(*(_QWORD *)(a1 + 48) + 144LL); i != (_QWORD *)(*(_QWORD *)(a1 + 48) + 144LL); i = (_QWORD *)*i )
    {
      if ( (unsigned __int8)sub_14009210C(i - 8) )
      {
        if ( *(_QWORD *)(a1 + 312)
          || (WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 48) + 8LL)),
              (*(_QWORD *)(a1 + 312) = WorkItem) != 0LL) )
        {
          *(_BYTE *)(a1 + 209) = 1;
          break;
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&v18);
  }
  for ( j = 0; j < *(_DWORD *)(*(_QWORD *)(a1 + 48) + 968LL); ++j )
  {
    v11 = a1 + 320LL * j;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v11, &LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 192), 0, 0) )
    {
      *(_BYTE *)(v11 + 208) = 1;
      *(_QWORD *)(v11 + 224) = a4;
      *(_QWORD *)(v11 + 216) = a3;
      *(_QWORD *)(v11 + 232) = a2;
      *(_QWORD *)(v11 + 240) = a5;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      break;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v12 = *(_DWORD **)(a1 + 48);
  if ( j < v12[242] )
    return 0;
  if ( *(_BYTE *)(a1 + 209) )
  {
    v15 = *(struct _IO_WORKITEM **)(a1 + 312);
    *(_QWORD *)(a1 + 224) = a4;
    *(_QWORD *)(a1 + 216) = a3;
    *(_QWORD *)(a1 + 232) = a2;
    *(_QWORD *)(a1 + 240) = a5;
    IoQueueWorkItem(v15, sub_1400A5FC0, DelayedWorkQueue, v12);
    return 0;
  }
  a5(a2, a3, a4);
  return 1;
}
