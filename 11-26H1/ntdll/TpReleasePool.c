/*
 * XREFs of TpReleasePool @ 0x1800CB610
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18004E450 (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18004EAA0 (TppPoolpDereferenceGlobalPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18004EAA0 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x18004ED88 (TppPoolpFree.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x1800CB85C (TppETWPoolClose.c)
 *     TppQueueRemoveHead @ 0x1800CB8F0 (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x180162830 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TpReleasePool(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v4; // r8
  __int64 v5; // r9
  signed __int64 v6; // rax
  __int64 v7; // rax
  int i; // esi
  signed __int64 v9; // rdx
  __int64 j; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  volatile signed __int64 *v13; // rdx
  __int64 *v14; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  signed __int64 v16; // [rsp+58h] [rbp+10h]

  v3 = 0;
  if ( !a1 || a1 == TppPoolpGlobalPool || a1 == TppPoolpSerializedPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 368), a2);
    if ( *(_BYTE *)(a1 + 377) )
    {
      TppRaiseInvalidParameter();
    }
    else
    {
      v3 = 1;
      if ( !*(_BYTE *)(a1 + 376) )
      {
        *(_BYTE *)(a1 + 376) = 1;
        ZwShutdownWorkerFactory(*(_QWORD *)(a1 + 56), a1);
      }
      while ( 1 )
      {
        _m_prefetchw((const void *)(a1 + 8));
        v6 = *(_QWORD *)(a1 + 8);
        LODWORD(v16) = v6;
        do
        {
          if ( !HIDWORD(v6) )
            break;
          v9 = v6;
          HIDWORD(v16) = HIDWORD(v6) - 1;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v16, v6);
          LODWORD(v16) = v6;
        }
        while ( v6 != v9 );
        if ( !HIDWORD(v6) )
          break;
        v7 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v7 )
            goto LABEL_15;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v7; j = (unsigned int)(j + 1) )
          {
            v11 = TppQueueRemoveHead(*(_QWORD *)(a1 + 8LL * i + 16) + 24 * j, i, v4, v5);
            v7 = (v11 - 16) & -(__int64)(v11 != 0);
          }
        }
        if ( !v7 )
          continue;
LABEL_15:
        if ( *(_QWORD *)v7 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
          if ( v4 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, a1);
        }
      }
      *(_QWORD *)(a1 + 408) = retaddr;
      *(_BYTE *)(a1 + 377) = 1;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v12 = 2147353478LL;
    if ( *(_BYTE *)v12 )
      TppETWPoolClose(a1);
    if ( v3 )
    {
      if ( a1 == TppPoolpGlobalPool )
      {
        v13 = &TppPoolpGlobalPoolLock;
        v14 = &TppPoolpGlobalPool;
      }
      else
      {
        if ( a1 != TppPoolpSerializedPool )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            TppPoolpFree(a1);
          return;
        }
        v13 = &TppPoolpSerializedPoolLock;
        v14 = &TppPoolpSerializedPool;
      }
      TppPoolpDereferenceGlobalPool((const void **)v14, v13);
    }
  }
}
