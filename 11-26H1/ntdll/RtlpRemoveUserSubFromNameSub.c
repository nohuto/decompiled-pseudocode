/*
 * XREFs of RtlpRemoveUserSubFromNameSub @ 0x1800902B4
 * Callers:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180090260 (RtlUnsubscribeWnfStateChangeNotification.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x18003ABD0 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x18008E680 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlpWnfETWEventUnsubscribe @ 0x18011433C (RtlpWnfETWEventUnsubscribe.c)
 *     NtSubscribeWnfStateChange @ 0x1801627F0 (NtSubscribeWnfStateChange.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpRemoveUserSubFromNameSub(char *BaseAddress, _QWORD *a2, _DWORD *a3)
{
  _RTL_SRWLOCK *v5; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  unsigned int v9; // edx
  int v10; // eax
  ULONG v11; // r8d
  _DWORD *v12; // rdx
  unsigned int i; // ecx
  unsigned __int32 v14; // edi
  NTSTATUS v15; // eax
  unsigned __int64 SubscriptionId; // [rsp+50h] [rbp+8h] BYREF
  void (__fastcall *v18)(__int64); // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  SubscriptionId = 0LL;
  v5 = (_RTL_SRWLOCK *)(qword_1801C6200 + 8);
  v18 = 0LL;
  v19 = 0LL;
  *a3 = 0;
  RtlAcquireSRWLockExclusive(v5);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
  if ( *((_DWORD *)a2 + 19) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801C6200 + 8));
    return 3221225473LL;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v7 = 2147353486LL;
    if ( *(_BYTE *)v7 )
      RtlpWnfETWEventUnsubscribe(
        *((_QWORD *)BaseAddress + 2),
        (_DWORD)a2,
        (_DWORD)BaseAddress,
        *((_DWORD *)BaseAddress + 22),
        a2[5],
        *((_DWORD *)a2 + 18));
    v8 = BaseAddress + 104;
    v9 = 0;
    *((_DWORD *)a2 + 19) = 1;
    *a3 = 1;
    do
    {
      v10 = *((_DWORD *)a2 + 18);
      if ( _bittest(&v10, v9) )
        --*v8;
      ++v9;
      ++v8;
    }
    while ( v9 < 5 );
    v11 = 0;
    v12 = BaseAddress + 104;
    for ( i = 0; i < 5; ++i )
    {
      if ( *v12 )
        v11 |= 1 << i;
      ++v12;
    }
    --*((_DWORD *)BaseAddress + 24);
    if ( (*((_BYTE *)a2 + 68) & 4) != 0 )
      --*((_DWORD *)BaseAddress + 25);
    v14 = 0;
    if ( *((_QWORD *)BaseAddress + 1) )
    {
      v15 = NtSubscribeWnfStateChange(
              (PCWNF_STATE_NAME)BaseAddress + 2,
              *((_DWORD *)BaseAddress + 6),
              v11,
              &SubscriptionId);
      v14 = v15;
      if ( v15 < 0 )
      {
        if ( v15 == -1073741772 || v15 == -1073741431 )
          v14 = 0;
      }
      else
      {
        *((_QWORD *)BaseAddress + 1) = SubscriptionId;
      }
    }
    RtlpDereferenceWnfUserSubscription(a2, &v18, &v19);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801C6200 + 8));
    if ( v18 )
      v18(v19);
    RtlpDereferenceWnfNameSubscription(BaseAddress);
    return v14;
  }
}
