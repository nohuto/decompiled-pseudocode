/*
 * XREFs of TpWaitForWait @ 0x18002A2F0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x1801087C0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     TppWorkWait @ 0x18002B5F0 (TppWorkWait.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x180067A40 (TppCancelWait.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TpWaitForWait(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // edi
  char v4; // r14
  unsigned int v5; // ebp
  __int64 result; // rax
  int v8; // edi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 168);
  v3 = 0;
  v4 = 0;
  v12 = 0;
  v5 = a2;
  if ( (v2 & 0x10000) != 0
    || (v2 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (__int64)NtCurrentPeb();
    if ( !*(_BYTE *)(*(_QWORD *)(result + 24) + 72LL) )
      return TppRaiseInvalidParameter();
  }
  else
  {
    if ( (_DWORD)a2 )
    {
      v9 = *(_QWORD *)(a1 + 144);
      RtlAcquireSRWLockExclusive(a1 + 240);
      ++*(_BYTE *)(a1 + 355);
      TppCancelWait(a1, v9 + 112, 2LL, &v12);
      if ( *(_DWORD *)(a1 + 56) )
        v4 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive(a1 + 240, v10);
      result = TppWorkWait(a1, v5);
      if ( v4 )
      {
        RtlAcquireSRWLockExclusive(a1 + 240);
        --*(_BYTE *)(a1 + 355);
        result = RtlReleaseSRWLockExclusive(a1 + 240, v11);
      }
      v3 = v12;
    }
    else
    {
      result = TppWorkWait(a1, a2);
    }
    if ( v3 )
    {
      v8 = -v3;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v8);
      if ( (_DWORD)result == v8 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
