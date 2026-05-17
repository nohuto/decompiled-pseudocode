/*
 * XREFs of TpWaitForTimer @ 0x180068120
 * Callers:
 *     RtlDeleteTimer @ 0x180067850 (RtlDeleteTimer.c)
 * Callees:
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x1800686D0 (TppCancelTimer.c)
 *     TppETWCallbackCancel @ 0x18010DD60 (TppETWCallbackCancel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TpWaitForTimer(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v4; // eax
  char v5; // bp
  char v6; // si
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int32 v9; // eax
  unsigned __int32 v10; // edi
  __int64 v11; // rdx
  _DWORD *SharedData; // rcx
  __int64 v13; // rcx
  unsigned __int32 v14; // ett

  v2 = a2;
  if ( !a1
    || *(_BYTE *)(a1 + 353)
    || (v4 = *(_DWORD *)(a1 + 168), (v4 & 0x10000) != 0)
    || (v4 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    v5 = 0;
    v6 = 0;
    if ( (_DWORD)a2 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240), a2);
      v7 = *(_QWORD *)(a1 + 144);
      LOBYTE(v8) = 1;
      ++*(_BYTE *)(a1 + 355);
      v6 = TppCancelTimer(a1, v7 + 112, v8);
      if ( *(_DWORD *)(a1 + 56) )
        v5 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    _m_prefetchw((const void *)(a1 + 232));
    v9 = *(_DWORD *)(a1 + 232);
    if ( v2 )
    {
      while ( 1 )
      {
        v10 = v9 >> 1;
        if ( !(v9 >> 1) )
          break;
        v14 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), v9 & 1, v9);
        if ( v14 == v9 )
          goto LABEL_14;
      }
    }
    v10 = 0;
LABEL_14:
    TppBarrierAdjust((signed __int64 *)(a1 + 56), -v10, 1);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v13 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v13 = 2147353478LL;
    if ( *(_BYTE *)v13 && v10 )
      TppETWCallbackCancel(
        *(_QWORD *)(a1 + 144),
        a1 + 200,
        *(_QWORD *)(a1 + 80),
        *(_QWORD *)(a1 + 88),
        *(_QWORD *)(a1 + 104),
        v10);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240), v11);
      --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
}
