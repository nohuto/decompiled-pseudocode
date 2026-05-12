/*
 * XREFs of sub_14000D600 @ 0x14000D600
 * Callers:
 *     sub_140066768 @ 0x140066768 (sub_140066768.c)
 * Callees:
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_1400A6328 @ 0x1400A6328 (sub_1400A6328.c)
 *     sub_1400A65FC @ 0x1400A65FC (sub_1400A65FC.c)
 */

__int64 __fastcall sub_14000D600(__int64 a1, char a2, char a3)
{
  char v3; // al
  bool v6; // si
  KSPIN_LOCK *v7; // rcx
  unsigned __int32 v8; // ebx
  _QWORD *v10; // rsi
  _QWORD *i; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  v6 = *(_DWORD *)(a1 + 968) > 1u;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v13, 0, sizeof(v13));
  if ( a2 )
  {
    v7 = *(KSPIN_LOCK **)(a1 + 960);
    if ( v7 )
    {
      if ( !v6 )
      {
        KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
        v8 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 988));
LABEL_5:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_6;
      }
      v3 = sub_1400A6328(a1);
    }
  }
  v8 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 988));
  if ( v3 )
  {
    if ( !v6 )
      goto LABEL_5;
    sub_1400A65FC(a1);
  }
LABEL_6:
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    if ( !a3 )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &v13);
    v10 = (_QWORD *)(a1 + 144);
    for ( i = *(_QWORD **)(a1 + 144); i != v10; i = (_QWORD *)*i )
      sub_14000D760(i - 8, 4LL);
    if ( !a3 )
      KeReleaseInStackQueuedSpinLock(&v13);
  }
  return v8;
}
