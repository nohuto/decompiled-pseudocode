/*
 * XREFs of sub_14006C420 @ 0x14006C420
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 *     sub_140126CE0 @ 0x140126CE0 (sub_140126CE0.c)
 *     sub_14012BDE0 @ 0x14012BDE0 (sub_14012BDE0.c)
 *     sub_1401AED30 @ 0x1401AED30 (sub_1401AED30.c)
 * Callees:
 *     sub_14000BCAC @ 0x14000BCAC (sub_14000BCAC.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14006B3A4 @ 0x14006B3A4 (sub_14006B3A4.c)
 *     sub_14006B3C4 @ 0x14006B3C4 (sub_14006B3C4.c)
 */

__int64 __fastcall sub_14006C420(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  KSPIN_LOCK *v7; // rbx
  int v8; // eax
  KSPIN_LOCK *v9; // rbx
  KSPIN_LOCK **v10; // rax
  KSPIN_LOCK v11; // rdx
  KSPIN_LOCK *v12; // rcx
  KSPIN_LOCK **v13; // rcx
  KSPIN_LOCK v14; // rdx
  KSPIN_LOCK *v15; // rax
  _DWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  _DWORD *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = (_QWORD *)sub_1400143E0(64LL, 24LL, 1363435858LL, a1);
  v5 = v4;
  if ( !v4 )
    return 3221225495LL;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  *v4 = a2;
  v7 = *(KSPIN_LOCK **)(a1 + 64);
  v8 = *(_DWORD *)v7;
  if ( *(_DWORD *)v7 != 1094997074 )
  {
    switch ( v8 )
    {
      case 1431193940:
        KeAcquireInStackQueuedSpinLock(v7 + 439, &LockHandle);
        v13 = (KSPIN_LOCK **)(v7 + 436);
        v14 = v7[436];
        v15 = v5 + 1;
        if ( *(KSPIN_LOCK **)(v14 + 8) == v7 + 436 )
        {
          *v15 = v14;
          v5[2] = v13;
          *(_QWORD *)(v14 + 8) = v15;
          *v13 = v15;
          ++*((_DWORD *)v7 + 876);
          goto LABEL_22;
        }
        break;
      case 1314275652:
        v16 = sub_14006B3A4(a1);
        v17 = *((_QWORD *)v16 + 20);
        if ( !v17 )
          return 0LL;
        v18 = *(_QWORD *)(v17 + 8);
        if ( !v18 || !*(_BYTE *)(v18 + 65) )
          return 0LL;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 168), &LockHandle);
        v19 = v5 + 1;
        v20 = *((_QWORD *)v16 + 20) + 144LL;
        v21 = *(_QWORD *)v20;
        if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) == v20 )
        {
          *v19 = v21;
          v5[2] = v20;
          *(_QWORD *)(v21 + 8) = v19;
          *(_QWORD *)v20 = v19;
          ++*(_DWORD *)(*((_QWORD *)v16 + 20) + 160LL);
          goto LABEL_22;
        }
        break;
      case 1314278989:
        v22 = sub_14006B3C4(a1);
        v23 = *((_QWORD *)v22 + 16);
        if ( !v23 )
          return 0LL;
        v24 = *(_QWORD *)(v23 + 8);
        if ( !v24 || !*(_BYTE *)(v24 + 41) )
          return 0LL;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v23 + 128), &LockHandle);
        v25 = v5 + 1;
        v26 = *((_QWORD *)v22 + 16) + 104LL;
        v27 = *(_QWORD *)v26;
        if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) == v26 )
        {
          *v25 = v27;
          v5[2] = v26;
          *(_QWORD *)(v27 + 8) = v25;
          *(_QWORD *)v26 = v25;
          ++*(_DWORD *)(*((_QWORD *)v22 + 16) + 120LL);
          goto LABEL_22;
        }
        break;
      default:
        return 0LL;
    }
LABEL_20:
    __fastfail(3u);
  }
  v9 = (KSPIN_LOCK *)sub_14000BCAC(a1);
  KeAcquireInStackQueuedSpinLock(v9 + 721, &LockHandle);
  v10 = (KSPIN_LOCK **)(v9 + 718);
  v11 = v9[718];
  v12 = v5 + 1;
  if ( *(KSPIN_LOCK **)(v11 + 8) != v9 + 718 )
    goto LABEL_20;
  *v12 = v11;
  v5[2] = v10;
  *(_QWORD *)(v11 + 8) = v12;
  *v10 = v12;
  ++*((_DWORD *)v9 + 1440);
LABEL_22:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
