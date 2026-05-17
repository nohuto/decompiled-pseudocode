/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x18004D650
 * Callers:
 *     TppWorkInitialize @ 0x18004D8A0 (TppWorkInitialize.c)
 *     TppWorkpFree @ 0x18004EB40 (TppWorkpFree.c)
 *     TppAllocAlpcCompletion @ 0x180064DE4 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x180065230 (TppIopFree.c)
 *     TpAllocIoCompletion @ 0x180065290 (TpAllocIoCompletion.c)
 *     TppDestroyTimer @ 0x1800DA4B4 (TppDestroyTimer.c)
 *     TpSimpleTryPost @ 0x1800DAE30 (TpSimpleTryPost.c)
 *     TppSimplepFree @ 0x1800E2CB0 (TppSimplepFree.c)
 *     TpAllocJobNotification @ 0x1800FB800 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x1800FF700 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180104710 (TppJobpFree.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     TppCallbackEpilog @ 0x18003FD40 (TppCallbackEpilog.c)
 *     RtlReleaseActivationContext @ 0x18004DE10 (RtlReleaseActivationContext.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x18004E690 (TppCallbackCheckThreadBeforeCallback.c)
 *     TppCleanupGroupRemoveMember @ 0x18004E7C0 (TppCleanupGroupRemoveMember.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18004EAA0 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x18004ED88 (TppPoolpFree.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppCleanupGroupMemberDestroy(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  volatile signed __int64 *v5; // r8
  volatile signed __int64 **v6; // rdx
  _QWORD *SchedulerSharedDataSlot; // r10
  unsigned int i; // ecx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // r10
  void (__fastcall *v14)(unsigned int *, __int64); // r11
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rdx
  unsigned int v18[22]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v19; // [rsp+88h] [rbp-C0h]
  __int64 v20; // [rsp+90h] [rbp-B8h]

  memset_thunk_772440563353939046(v18, 0, 0x100uLL);
  if ( *(_QWORD *)(a1 + 16) )
  {
    TppCleanupGroupRemoveMember(a1);
    if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 16), 0xFFFFFFFF) == 1 )
      RtlFreeHeap_0();
  }
  v3 = *(_QWORD *)(a1 + 96);
  if ( v3 != -1 )
    RtlReleaseActivationContext(v3, v2);
  v4 = *(_QWORD *)(a1 + 144);
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
      RtlpAcquireSRWLockExclusiveContended(v5, (__int64)v6);
    v9 = (_QWORD *)(a1 + 152);
    v10 = *(_QWORD *)(a1 + 152);
    v11 = *(_QWORD **)(a1 + 160);
    if ( *(_QWORD *)(v10 + 8) != a1 + 152 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)(a1 + 160) = a1 + 152;
    *v9 = v9;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a1 + 144) + 72LL));
    v12 = *(volatile signed __int32 **)(a1 + 144);
    if ( v12 == (volatile signed __int32 *)TppPoolpGlobalPool )
    {
      TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
    else if ( v12 == (volatile signed __int32 *)TppPoolpSerializedPool )
    {
      TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
    }
    else if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
    {
      TppPoolpFree(v12);
    }
  }
  else
  {
    RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock, v2);
    v15 = (_QWORD *)(a1 + 152);
    v16 = *(_QWORD *)(a1 + 152);
    v17 = *(_QWORD **)(a1 + 160);
    if ( *(_QWORD *)(v16 + 8) != a1 + 152 || (_QWORD *)*v17 != v15 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    *(_QWORD *)(a1 + 160) = a1 + 152;
    *v15 = v15;
    RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v19 = *(_QWORD *)(a1 + 32);
    v20 = *(_QWORD *)(a1 + 88);
    TppCallbackCheckThreadBeforeCallback(v18);
    v14(v18, v13);
    TppCallbackEpilog(v18);
  }
}
