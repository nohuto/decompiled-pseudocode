/*
 * XREFs of CcUninitializePartitionVacbs @ 0x1405B2FF8
 * Callers:
 *     CcDeletePartition @ 0x1405B2214 (CcDeletePartition.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     CcSetVacbInFreeList @ 0x1402E28F0 (CcSetVacbInFreeList.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MmFreeSystemCacheReserveView @ 0x14086AA70 (MmFreeSystemCacheReserveView.c)
 */

_QWORD *__fastcall CcUninitializePartitionVacbs(__int64 a1)
{
  _QWORD **v2; // rsi
  _QWORD *result; // rax
  __int64 v4; // r8
  struct _SINGLE_LIST_ENTRY *v5; // r14
  _QWORD *v6; // rcx
  KIRQL v7; // bl
  int v8; // eax

  v2 = (_QWORD **)(a1 + 1232);
  while ( 1 )
  {
    result = *v2;
    if ( *v2 == v2 )
      break;
    v4 = *result;
    v5 = (struct _SINGLE_LIST_ENTRY *)(result - 2);
    if ( *(_QWORD **)(*result + 8LL) != result || (v6 = (_QWORD *)result[1], (_QWORD *)*v6 != result) )
      __fastfail(3u);
    *v6 = v4;
    *(_QWORD *)(v4 + 8) = v6;
    MmFreeSystemCacheReserveView(v5->Next);
    v5->Next = 0LL;
    v7 = KeAcquireQueuedSpinLock(4uLL);
    CcSetVacbInFreeList(a1, v5, 0LL);
    KeReleaseQueuedSpinLock(4uLL, v7);
    v8 = *(_DWORD *)(a1 + 1248);
    if ( !v8 )
      KeBugCheckEx(0x34u, 0x78FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 1248) = v8 - 1;
  }
  if ( *(_DWORD *)(a1 + 1248) )
    KeBugCheckEx(0x34u, 0x797uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return result;
}
