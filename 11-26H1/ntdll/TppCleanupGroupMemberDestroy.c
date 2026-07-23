/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x180037BD0
 * Callers:
 *     TppWorkInitialize @ 0x180037E20 (TppWorkInitialize.c)
 *     TppWorkpFree @ 0x1800390C0 (TppWorkpFree.c)
 *     TppAllocAlpcCompletion @ 0x180085234 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x180085680 (TppIopFree.c)
 *     TpAllocIoCompletion @ 0x1800856E0 (TpAllocIoCompletion.c)
 *     TppDestroyTimer @ 0x1800D7474 (TppDestroyTimer.c)
 *     TpSimpleTryPost @ 0x1800D7DF0 (TpSimpleTryPost.c)
 *     TppSimplepFree @ 0x1800E1510 (TppSimplepFree.c)
 *     TpAllocJobNotification @ 0x1800FAF50 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x1800FEE50 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180103A90 (TppJobpFree.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     TppCallbackEpilog @ 0x18002A2B0 (TppCallbackEpilog.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x180038C10 (TppCallbackCheckThreadBeforeCallback.c)
 *     TppCleanupGroupRemoveMember @ 0x180038D40 (TppCleanupGroupRemoveMember.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180039020 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180039308 (TppPoolpFree.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  void *v2; // r8
  _ACTIVATION_CONTEXT *v3; // rcx
  __int64 v4; // r8
  volatile signed __int64 *v5; // r8
  volatile signed __int64 **v6; // rdx
  _QWORD *SchedulerSharedDataSlot; // r10
  unsigned int i; // ecx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  PVOID v12; // rcx
  __int64 v13; // r10
  void (__fastcall *v14)(unsigned int *, __int64); // r11
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rdx
  unsigned int v18[22]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v19; // [rsp+88h] [rbp-C0h]
  __int64 v20; // [rsp+90h] [rbp-B8h]

  memset_thunk_772440563353939046(v18, 0, 0x100uLL);
  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v2 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag, v2);
  }
  v3 = (_ACTIVATION_CONTEXT *)a1[12];
  if ( v3 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlReleaseActivationContext(v3);
  v4 = a1[18];
  if ( v4 )
  {
    v5 = (volatile signed __int64 *)(v4 + 72);
    v6 = 0LL;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( !SchedulerSharedDataSlot[i] )
        {
          v6 = (volatile signed __int64 **)&SchedulerSharedDataSlot[i];
          break;
        }
      }
    }
    if ( v6 )
      *v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(v5, (unsigned __int64)v6);
    v9 = a1 + 19;
    v10 = a1[19];
    v11 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v10 + 8) != a1 + 19 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    a1[20] = a1 + 19;
    *v9 = v9;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1[18] + 72LL));
    v12 = (PVOID)a1[18];
    if ( v12 == (PVOID)TppPoolpGlobalPool )
    {
      TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
    else if ( v12 == TppPoolpSerializedPool )
    {
      TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12, 0xFFFFFFFF) == 1 )
    {
      TppPoolpFree(v12);
    }
  }
  else
  {
    RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
    v15 = a1 + 19;
    v16 = a1[19];
    v17 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v16 + 8) != a1 + 19 || (_QWORD *)*v17 != v15 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    a1[20] = a1 + 19;
    *v15 = v15;
    RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  }
  if ( a1[4] )
  {
    v19 = a1[4];
    v20 = a1[11];
    TppCallbackCheckThreadBeforeCallback(v18);
    v14(v18, v13);
    TppCallbackEpilog(v18);
  }
}
