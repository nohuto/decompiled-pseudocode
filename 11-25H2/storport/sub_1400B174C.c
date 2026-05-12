/*
 * XREFs of sub_1400B174C @ 0x1400B174C
 * Callers:
 *     sub_140115650 @ 0x140115650 (sub_140115650.c)
 * Callees:
 *     sub_1400B1218 @ 0x1400B1218 (sub_1400B1218.c)
 *     sub_1400B504C @ 0x1400B504C (sub_1400B504C.c)
 *     sub_1400B75FC @ 0x1400B75FC (sub_1400B75FC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_1400B174C(int a1, __int64 a2, _DWORD *a3, int a4)
{
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned int v14; // eax
  int v15; // ecx
  __int64 v16; // r14
  unsigned __int8 v17; // r12
  __int64 v18; // r15
  __int64 v19; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h]
  _OWORD Dst_8[6]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-50h]
  _BYTE v24[112]; // [rsp+C8h] [rbp-40h] BYREF

  v21 = 0LL;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  memset_0(Dst_8, 0, 0x68uLL);
  sub_1400B504C(a1, a2, (_DWORD)a3, a4, (__int64)Dst_8);
  KeAcquireInStackQueuedSpinLock(
    (PKSPIN_LOCK)(*(_QWORD *)(a2 + 608) + 104LL),
    (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  v8 = *(_QWORD *)(a2 + 608);
  v9 = Dst_8[1];
  *(_OWORD *)(v8 + 120) = Dst_8[0];
  v10 = Dst_8[2];
  *(_OWORD *)(v8 + 136) = v9;
  v11 = Dst_8[3];
  *(_OWORD *)(v8 + 152) = v10;
  v12 = Dst_8[4];
  *(_OWORD *)(v8 + 168) = v11;
  v13 = Dst_8[5];
  *(_OWORD *)(v8 + 184) = v12;
  *(_QWORD *)&v12 = v23;
  *(_OWORD *)(v8 + 200) = v13;
  *(_QWORD *)(v8 + 216) = v12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 608) + 112LL), 1u) == -1 )
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a2 + 608) + 112LL), -1);
  v14 = (unsigned __int8)*a3;
  if ( v14 <= 0x19 )
  {
    v15 = 33554742;
    if ( _bittest(&v15, v14) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 608) + 116LL), 1u) == -1 )
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a2 + 608) + 116LL), -1);
    }
  }
  v16 = *(_QWORD *)(a2 + 608);
  v17 = 0;
  while ( 1 )
  {
    v18 = 104LL * v17;
    v19 = v18 + v16 + 1264;
    if ( sub_1400B1218(v16 + 120, v19) )
      break;
    memset_0(v24, 0, 0x68uLL);
    if ( sub_1400B1218(v18 + v16 + 1264, (__int64)v24) )
    {
      *(_OWORD *)v19 = *(_OWORD *)(v16 + 120);
      *(_OWORD *)(v19 + 16) = *(_OWORD *)(v16 + 136);
      *(_OWORD *)(v19 + 32) = *(_OWORD *)(v16 + 152);
      *(_OWORD *)(v19 + 48) = *(_OWORD *)(v16 + 168);
      *(_OWORD *)(v19 + 64) = *(_OWORD *)(v16 + 184);
      *(_OWORD *)(v19 + 80) = *(_OWORD *)(v16 + 200);
      *(_QWORD *)(v19 + 96) = *(_QWORD *)(v16 + 216);
      *(_DWORD *)(*(_QWORD *)(a2 + 608) + v18 + 1356) = 1;
      sub_1400B75FC(a2, v18 + *(_QWORD *)(a2 + 608) + 1264LL);
      goto LABEL_14;
    }
    if ( ++v17 >= 0xAu )
      goto LABEL_14;
  }
  ++*(_DWORD *)(v18 + v16 + 1356);
LABEL_14:
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
}
