/*
 * XREFs of RtlpCreateWnfNameSubscription @ 0x18008E8D0
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18008E48C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlRbInsertNodeEx @ 0x18008CB50 (RtlRbInsertNodeEx.c)
 *     RtlpFindWnfNameSubscription @ 0x18008EB00 (RtlpFindWnfNameSubscription.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateWnfNameSubscription(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  BOOLEAN v4; // di
  __int64 WnfNameSubscription; // rax
  char *Heap_0; // rax
  char *v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  int v12; // ebp
  unsigned __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF

  v3 = qword_1801C6200;
  v4 = 0;
  v15 = a2;
  if ( a3 )
    return 3221225485LL;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801C6200 + 8));
  WnfNameSubscription = RtlpFindWnfNameSubscription(v3, &v15);
  if ( WnfNameSubscription )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(WnfNameSubscription + 88)) <= 1 )
      __fastfail(0xEu);
    *a1 = WnfNameSubscription;
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v3 + 8));
    return 0LL;
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v3 + 8));
  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x98uLL);
  v9 = Heap_0;
  if ( Heap_0 )
  {
    memset_thunk_772440563353939046(Heap_0, 0, 0x98uLL);
    *(_DWORD *)v9 = 9963794;
    *((_QWORD *)v9 + 2) = a2;
    *((_QWORD *)v9 + 10) = v9 + 72;
    *((_QWORD *)v9 + 9) = v9 + 72;
    *((_QWORD *)v9 + 11) = 1LL;
    *((_DWORD *)v9 + 31) = 0;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v3 + 8));
    v10 = RtlpFindWnfNameSubscription(v3, &v15);
    if ( v10 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 88)) <= 1 )
        __fastfail(0xEu);
      *a1 = v10;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v3 + 8));
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v9);
    }
    else
    {
      v11 = *(_QWORD *)(v3 + 16);
      if ( (*(_BYTE *)(v3 + 24) & 1) != 0 )
      {
        if ( v11 )
          v11 ^= v3 + 16;
        else
          v11 = 0LL;
      }
      v12 = *(_BYTE *)(v3 + 24) & 1;
      if ( v11 )
      {
        while ( 1 )
        {
          if ( memcmp(v9 + 16, (const void *)(v11 - 16), 8uLL) >= 0 )
          {
            v13 = *(_QWORD *)(v11 + 8);
            if ( v12 )
            {
              if ( !v13 )
              {
LABEL_15:
                v4 = 1;
                break;
              }
              v13 ^= v11;
            }
            if ( !v13 )
              goto LABEL_15;
          }
          else
          {
            v13 = *(_QWORD *)v11;
            if ( v12 )
            {
              if ( !v13 )
                break;
              v13 ^= v11;
            }
            if ( !v13 )
              break;
          }
          v11 = v13;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(v3 + 16), (PRTL_BALANCED_NODE)v11, v4, (PRTL_BALANCED_NODE)(v9 + 32));
      *a1 = (__int64)v9;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v3 + 8));
    }
    return 0LL;
  }
  return 3221225495LL;
}
