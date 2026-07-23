/*
 * XREFs of TppCallbackCheckThreadBeforeCallback @ 0x180038C10
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     <none>
 */

void __fastcall TppCallbackCheckThreadBeforeCallback(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r9d
  struct _TEB *v3; // rax
  void *CurrentTransactionHandle; // rdx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 128);
    *(_GUID *)(a1 + 232) = NtCurrentTeb()->ActivityId;
    if ( v1 )
    {
      if ( (*(_BYTE *)(v1 + 436) & 1) == 0 )
      {
        v2 = *(_DWORD *)(a1 + 104) | 8;
        *(_DWORD *)(a1 + 104) = v2;
        if ( NtCurrentTeb()->IsImpersonating )
        {
          v2 |= 4u;
          *(_DWORD *)(a1 + 104) = v2;
        }
        v3 = NtCurrentTeb();
        CurrentTransactionHandle = v3->CurrentTransactionHandle;
        if ( CurrentTransactionHandle && CurrentTransactionHandle != (void *)-1LL
          || v3->TxnScopeEnterCallback
          || v3->TxnScopeExitCallback
          || v3->TxnScopeContext
          || v3->TxFsContext != 65534 )
        {
          v2 |= 0x10u;
          *(_DWORD *)(a1 + 104) = v2;
        }
        if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
        {
          v2 |= 0x20u;
          *(_DWORD *)(a1 + 104) = v2;
        }
        if ( NtCurrentTeb()->PreferredLanguages )
        {
          v2 |= 0x40u;
          *(_DWORD *)(a1 + 104) = v2;
        }
        if ( NtCurrentTeb()->SavedPriorityState )
          *(_DWORD *)(a1 + 104) = v2 | 0x80;
      }
    }
  }
}
