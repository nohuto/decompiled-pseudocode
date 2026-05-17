/*
 * XREFs of RtlpRemoveVectoredHandler @ 0x18007E530
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x180105670 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x18013A970 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 */

__int64 __fastcall RtlpRemoveVectoredHandler(__int64 *a1, __int64 a2)
{
  int v2; // r14d
  __int64 v4; // rbp
  __int64 *v5; // rdi
  __int64 *i; // rbx
  __int64 v7; // rdx
  int v8; // edi
  signed __int64 v9; // rcx
  bool v10; // cc
  signed __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 *v15; // rdi
  __int64 v17; // rdx
  __int64 **v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx

  v2 = a2;
  v4 = 3LL * (unsigned int)a2;
  v5 = (__int64 *)(&LdrpVectorHandlerList + 3 * (unsigned int)a2 + 1);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * (unsigned int)a2), a2);
  for ( i = (__int64 *)*v5; ; i = (__int64 *)*i )
  {
    if ( i == v5 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v4));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( (unsigned int)((__int64 (*)(void))LdrControlFlowGuardEnforced)() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v7);
    v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlProtectHeap(LdrpMrdataHeap, 0LL);
      goto LABEL_7;
    }
    if ( v8 == -1 )
    {
LABEL_23:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
LABEL_7:
    *(_DWORD *)LdrpMrdataHeapUnprotected = v8 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  *((_DWORD *)i + 6) = 1;
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)i[2], 0xFFFFFFFFFFFFFFFFuLL);
  v10 = v9 <= 1;
  v11 = v9 - 1;
  if ( v10 )
  {
    if ( v11 )
      __fastfail(0xEu);
    LdrProtectMrdata(0LL);
    v18 = (__int64 **)*i;
    if ( *(__int64 **)(*i + 8) != i || (v19 = (__int64 **)i[1], *v19 != i) )
      __fastfail(3u);
    *v19 = (__int64 *)v18;
    v18[1] = (__int64 *)v19;
    if ( v19 == v18 )
      _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, v2 + 2);
    v15 = i;
  }
  else
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced(v11) )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v12);
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_23;
      v14 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v14;
      if ( !v14 )
      {
        LOBYTE(v13) = 1;
        RtlProtectHeap(LdrpMrdataHeap, v13);
      }
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v15 = 0LL;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v4));
  if ( v15 )
  {
    RtlFreeHeap_0();
    LdrControlFlowGuardEnforced(v20);
    RtlFreeHeap_0();
    LdrProtectMrdata(1LL);
    if ( (unsigned int)LdrControlFlowGuardEnforced(v21) )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v22);
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_23;
      v17 = (unsigned int)(*(_DWORD *)LdrpMrdataHeapUnprotected - 1);
      *(_DWORD *)LdrpMrdataHeapUnprotected = v17;
      if ( !(_DWORD)v17 )
      {
        LODWORD(v17) = 1;
        RtlProtectHeap(LdrpMrdataHeap, v17);
      }
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
  }
  return 1LL;
}
