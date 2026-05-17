/*
 * XREFs of RtlpCreateWnfNameSubscription @ 0x18006E480
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlRbInsertNodeEx @ 0x18006C700 (RtlRbInsertNodeEx.c)
 *     RtlpFindWnfNameSubscription @ 0x18006E6B0 (RtlpFindWnfNameSubscription.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateWnfNameSubscription(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  bool v4; // di
  __int64 WnfNameSubscription; // rax
  _QWORD *Heap_0; // rax
  _QWORD *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // ebp
  unsigned __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF

  v3 = qword_1801C7200;
  v4 = 0;
  v16 = a2;
  if ( a3 )
    return 3221225485LL;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801C7200 + 8));
  WnfNameSubscription = RtlpFindWnfNameSubscription(v3, &v16);
  if ( WnfNameSubscription )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(WnfNameSubscription + 88)) <= 1 )
      __fastfail(0xEu);
    *a1 = WnfNameSubscription;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v3 + 8));
    return 0LL;
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(v3 + 8));
  Heap_0 = (_QWORD *)RtlAllocateHeap_0();
  v9 = Heap_0;
  if ( Heap_0 )
  {
    memset_thunk_772440563353939046(Heap_0, 0, 0x98uLL);
    *(_DWORD *)v9 = 9963794;
    v9[2] = a2;
    v9[10] = v9 + 9;
    v9[9] = v9 + 9;
    v9[11] = 1LL;
    *((_DWORD *)v9 + 31) = 0;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v3 + 8), v10);
    v11 = RtlpFindWnfNameSubscription(v3, &v16);
    if ( v11 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 88)) <= 1 )
        __fastfail(0xEu);
      *a1 = v11;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v3 + 8));
      RtlFreeHeap_0();
    }
    else
    {
      v12 = *(_QWORD *)(v3 + 16);
      if ( (*(_BYTE *)(v3 + 24) & 1) != 0 )
      {
        if ( v12 )
          v12 ^= v3 + 16;
        else
          v12 = 0LL;
      }
      v13 = *(_BYTE *)(v3 + 24) & 1;
      if ( v12 )
      {
        while ( 1 )
        {
          if ( memcmp(v9 + 2, (const void *)(v12 - 16), 8uLL) >= 0 )
          {
            v14 = *(_QWORD *)(v12 + 8);
            if ( v13 )
            {
              if ( !v14 )
              {
LABEL_15:
                v4 = 1;
                break;
              }
              v14 ^= v12;
            }
            if ( !v14 )
              goto LABEL_15;
          }
          else
          {
            v14 = *(_QWORD *)v12;
            if ( v13 )
            {
              if ( !v14 )
                break;
              v14 ^= v12;
            }
            if ( !v14 )
              break;
          }
          v12 = v14;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)(v3 + 16), v12, v4, (unsigned __int64)(v9 + 4));
      *a1 = (__int64)v9;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v3 + 8));
    }
    return 0LL;
  }
  return 3221225495LL;
}
