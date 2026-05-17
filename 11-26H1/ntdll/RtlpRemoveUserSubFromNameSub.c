/*
 * XREFs of RtlpRemoveUserSubFromNameSub @ 0x18006FE64
 * Callers:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x18006FE10 (RtlUnsubscribeWnfStateChangeNotification.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x180050650 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x18006E230 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlpWnfETWEventUnsubscribe @ 0x180114B40 (RtlpWnfETWEventUnsubscribe.c)
 *     NtSubscribeWnfStateChange @ 0x1801628F0 (NtSubscribeWnfStateChange.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpRemoveUserSubFromNameSub(__int64 a1, __int64 a2, _DWORD *a3)
{
  volatile signed __int64 *v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // r8
  _DWORD *v13; // rdx
  unsigned int i; // ecx
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  void (__fastcall *v20)(__int64); // [rsp+58h] [rbp+10h] BYREF
  __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  v5 = (volatile signed __int64 *)(qword_1801C7200 + 8);
  v20 = 0LL;
  v21 = 0LL;
  *a3 = 0;
  RtlAcquireSRWLockExclusive(v5, a2);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 64), v7);
  if ( *(_DWORD *)(a2 + 76) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801C7200 + 8));
    return 3221225473LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v8 = 2147353486LL;
    if ( *(_BYTE *)v8 )
      RtlpWnfETWEventUnsubscribe(
        *(_QWORD *)(a1 + 16),
        a2,
        a1,
        *(_DWORD *)(a1 + 88),
        *(_QWORD *)(a2 + 40),
        *(_DWORD *)(a2 + 72));
    v9 = (_DWORD *)(a1 + 104);
    v10 = 0;
    *(_DWORD *)(a2 + 76) = 1;
    *a3 = 1;
    do
    {
      v11 = *(_DWORD *)(a2 + 72);
      if ( _bittest(&v11, v10) )
        --*v9;
      ++v10;
      ++v9;
    }
    while ( v10 < 5 );
    v12 = 0LL;
    v13 = (_DWORD *)(a1 + 104);
    for ( i = 0; i < 5; ++i )
    {
      if ( *v13 )
        v12 = (1 << i) | (unsigned int)v12;
      ++v13;
    }
    --*(_DWORD *)(a1 + 96);
    if ( (*(_BYTE *)(a2 + 68) & 4) != 0 )
      --*(_DWORD *)(a1 + 100);
    v15 = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v16 = NtSubscribeWnfStateChange(a1 + 16, *(unsigned int *)(a1 + 24), v12, &v19);
      v15 = v16;
      if ( v16 < 0 )
      {
        if ( v16 == -1073741772 || v16 == -1073741431 )
          v15 = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v19;
      }
    }
    RtlpDereferenceWnfUserSubscription(a2, &v20, &v21);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801C7200 + 8));
    if ( v20 )
      v20(v21);
    RtlpDereferenceWnfNameSubscription(a1, v17);
    return v15;
  }
}
