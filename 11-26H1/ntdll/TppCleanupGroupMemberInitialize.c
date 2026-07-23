/*
 * XREFs of TppCleanupGroupMemberInitialize @ 0x180037F90
 * Callers:
 *     TppWorkInitialize @ 0x180037E20 (TppWorkInitialize.c)
 *     TppAllocAlpcCompletion @ 0x180085234 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800856E0 (TpAllocIoCompletion.c)
 *     TpAllocJobNotification @ 0x1800FAF50 (TpAllocJobNotification.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     RtlQueryInformationActivationContext @ 0x180038450 (RtlQueryInformationActivationContext.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800389D0 (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180039020 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180039308 (TppPoolpFree.c)
 */

__int64 __fastcall TppCleanupGroupMemberInitialize(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  char v5; // r14
  volatile signed __int64 **v7; // rdi
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  volatile signed __int32 *v11; // rdx
  NTSTATUS InformationActivationContext; // esi
  __int64 v13; // rax
  volatile signed __int32 *v14; // rax
  _RTL_SRWLOCK *v15; // rdx
  __int64 *v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  volatile signed __int64 *v19; // rdx
  unsigned int i; // ecx
  __int64 *v21; // rdx
  __int64 v22; // rax
  __int64 **v23; // rcx
  _RTL_SRWLOCK *v24; // r14
  volatile signed __int32 *v25; // rax
  unsigned int j; // ecx
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  signed __int32 v31; // eax
  _ACTIVATION_CONTEXT *v32; // rcx
  PACTIVATION_CONTEXT ActivationContext[2]; // [rsp+70h] [rbp-18h] BYREF

  v5 = a4;
  *(_OWORD *)ActivationContext = 0LL;
  v7 = 0LL;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = a5;
  *(_OWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = a2;
  *(_DWORD *)(a1 + 168) = a4;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 144) = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 40);
    *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 32);
    if ( *(_DWORD *)a3 <= 1u )
    {
      v8 = 1;
    }
    else
    {
      v8 = *(_DWORD *)(a3 + 60);
      if ( v8 >= 3 )
        return (unsigned int)-1073741811;
    }
    v9 = 192LL;
    v10 = a1;
  }
  else
  {
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    v8 = 1;
    v9 = a1;
    v10 = 192LL;
  }
  *(_DWORD *)(v10 + v9) = v8;
  if ( (a4 & 2) != 0 && *(_QWORD *)(a1 + 144) )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 104) = NtCurrentTeb()->SubProcessTag;
  *(_GUID *)(a1 + 112) = NtCurrentTeb()->ActivityId;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v11 = *(volatile signed __int32 **)(a1 + 96);
  if ( v11 )
  {
    if ( v11 != (volatile signed __int32 *)-1LL
      && (((unsigned __int64)v11 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL
      && *v11 != 0x7FFFFFFF )
    {
      do
      {
        if ( *v11 == 0x7FFFFFFF )
          break;
        v31 = *v11;
      }
      while ( v31 != _InterlockedCompareExchange(v11, v31 + 1, v31) );
    }
  }
  else
  {
    InformationActivationContext = RtlQueryInformationActivationContext(
                                     1u,
                                     0LL,
                                     0LL,
                                     ActivationContextBasicInformation,
                                     ActivationContext,
                                     0x10uLL,
                                     0LL);
    if ( InformationActivationContext < 0 )
      return (unsigned int)InformationActivationContext;
    if ( ((__int64)ActivationContext[1] & 1) != 0 )
    {
      RtlReleaseActivationContext(ActivationContext[0]);
      v13 = -1LL;
      ActivationContext[0] = (PACTIVATION_CONTEXT)-1LL;
    }
    else
    {
      v13 = (__int64)ActivationContext[0];
    }
    *(_QWORD *)(a1 + 96) = v13;
  }
  v14 = *(volatile signed __int32 **)(a1 + 144);
  if ( v14 )
  {
    _InterlockedIncrement(v14);
LABEL_13:
    InformationActivationContext = 0;
    v17 = *(_QWORD **)(a1 + 144);
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( v17 )
    {
      v19 = v17 + 9;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          if ( !SchedulerSharedDataSlot[i] )
          {
            v7 = (volatile signed __int64 **)&SchedulerSharedDataSlot[i];
            break;
          }
        }
      }
      if ( v7 )
        *v7 = v19;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v19, (unsigned __int64)v19);
      v21 = (__int64 *)(a1 + 152);
      v22 = *(_QWORD *)(a1 + 144) + 80LL;
      v23 = *(__int64 ***)(*(_QWORD *)(a1 + 144) + 88LL);
      if ( *v23 != (__int64 *)v22 )
        __fastfail(3u);
      *v21 = v22;
      *(_QWORD *)(a1 + 160) = v23;
      *v23 = v21;
      *(_QWORD *)(v22 + 8) = v21;
      v24 = (_RTL_SRWLOCK *)(*(_QWORD *)(a1 + 144) + 72LL);
    }
    else
    {
      if ( SchedulerSharedDataSlot )
      {
        for ( j = 0; j < 8; ++j )
        {
          v17 = &SchedulerSharedDataSlot[j];
          if ( !*v17 )
          {
            v7 = (volatile signed __int64 **)&SchedulerSharedDataSlot[j];
            break;
          }
        }
      }
      v24 = &TppCleanupGroupMemberpNoPoolListLock;
      if ( v7 )
        *v7 = (volatile signed __int64 *)&TppCleanupGroupMemberpNoPoolListLock;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&TppCleanupGroupMemberpNoPoolListLock, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(
          (volatile signed __int64 *)&TppCleanupGroupMemberpNoPoolListLock,
          (unsigned __int64)v17);
      v28 = (_QWORD *)(a1 + 152);
      v29 = off_1801C4750;
      if ( *off_1801C4750 != (_UNKNOWN *)&TppCleanupGroupMemberpNoPoolList )
        __fastfail(3u);
      *v28 = &TppCleanupGroupMemberpNoPoolList;
      *(_QWORD *)(a1 + 160) = v29;
      *v29 = v28;
      off_1801C4750 = (_UNKNOWN **)(a1 + 152);
    }
    RtlReleaseSRWLockExclusive(v24);
    v25 = *(volatile signed __int32 **)(a1 + 16);
    if ( v25 )
      _InterlockedIncrement(v25);
    goto LABEL_45;
  }
  if ( (v5 & 2) != 0 )
  {
    v15 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
    v16 = (__int64 *)&TppPoolpSerializedPool;
  }
  else
  {
    v15 = &TppPoolpGlobalPoolLock;
    v16 = &TppPoolpGlobalPool;
  }
  InformationActivationContext = TppPoolpReferenceGlobalPool(v16, v15, a1 + 144);
  if ( InformationActivationContext >= 0 )
    goto LABEL_13;
LABEL_45:
  if ( InformationActivationContext < 0 )
  {
    v32 = *(_ACTIVATION_CONTEXT **)(a1 + 96);
    if ( v32 )
    {
      if ( v32 != (_ACTIVATION_CONTEXT *)-1LL )
        RtlReleaseActivationContext(v32);
    }
  }
  return (unsigned int)InformationActivationContext;
}
