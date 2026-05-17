/*
 * XREFs of TpCancelAsyncIoOperation @ 0x1800E0250
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TpCancelAsyncIoOperation(__int64 a1)
{
  int v2; // eax
  signed __int32 v3; // eax
  signed __int32 v4; // ett

  if ( !a1
    || (v2 = *(_DWORD *)(a1 + 168), (v2 & 0x10000) != 0)
    || (v2 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppIopCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    _m_prefetchw((const void *)(a1 + 280));
    v3 = *(_DWORD *)(a1 + 280);
    while ( v3 > 0 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), v3 - 1, v3);
      if ( v4 == v3 )
      {
        TppBarrierAdjust((signed __int64 *)(a1 + 56), -1, 0);
        break;
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
}
