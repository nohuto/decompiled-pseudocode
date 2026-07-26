/*
 * XREFs of ?HandlersRestoredEntry@EntryFuncs@?$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z @ 0x1400B2D40
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreHandlers@NdisWdfIdle@@AEAAXXZ @ 0x1400B2F5C (-RestoreHandlers@NdisWdfIdle@@AEAAXXZ.c)
 */

__int64 __fastcall IdleStateMachine<NdisWdfIdle>::EntryFuncs::HandlersRestoredEntry(NdisWdfIdle *a1)
{
  NdisWdfIdle::RestoreHandlers(a1);
  return 0LL;
}
