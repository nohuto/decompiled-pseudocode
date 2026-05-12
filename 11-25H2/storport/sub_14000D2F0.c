/*
 * XREFs of sub_14000D2F0 @ 0x14000D2F0
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 *     sub_14000CE18 @ 0x14000CE18 (sub_14000CE18.c)
 *     sub_14003E6C0 @ 0x14003E6C0 (sub_14003E6C0.c)
 *     sub_14006191C @ 0x14006191C (sub_14006191C.c)
 *     sub_140065290 @ 0x140065290 (sub_140065290.c)
 *     sub_140065E20 @ 0x140065E20 (sub_140065E20.c)
 *     StorPortCompleteRequest @ 0x1400739A0 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1400745D0 (StorPortPause.c)
 * Callees:
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_1400A6328 @ 0x1400A6328 (sub_1400A6328.c)
 *     sub_1400A65FC @ 0x1400A65FC (sub_1400A65FC.c)
 */

__int64 __fastcall sub_14000D2F0(__int64 a1, char a2, char a3)
{
  char v3; // al
  bool v6; // si
  KSPIN_LOCK *v7; // rcx
  signed __int32 v8; // ebx
  __int64 v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD *i; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+38h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v3 = 0;
  v6 = *(_DWORD *)(a1 + 968) > 1u;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v16, 0, sizeof(v16));
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
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &v16);
    for ( i = *(_QWORD **)(a1 + 144); i != (_QWORD *)(a1 + 144); i = (_QWORD *)*i )
      sub_14000D760(i - 8, 4LL);
    if ( !a3 )
      KeReleaseInStackQueuedSpinLock(&v16);
  }
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v9 = *(unsigned int *)(a1 + 56);
    if ( *(_DWORD *)a1 != 1314275652 )
    {
      v10 = *(_DWORD *)(a1 + 4932);
      if ( v10 )
      {
        v11 = *(_QWORD *)(a1 + 4936);
        if ( v11 )
        {
          v12 = v11 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(a1 + 4928)) % v10);
          *(_DWORD *)v12 = 7;
          *(_QWORD *)(v12 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v12 + 16) = v8;
          *(_QWORD *)(v12 + 8) = retaddr;
          *(_QWORD *)(v12 + 24) = a1;
          *(_QWORD *)(v12 + 32) = v9;
        }
      }
    }
  }
  return (unsigned int)v8;
}
