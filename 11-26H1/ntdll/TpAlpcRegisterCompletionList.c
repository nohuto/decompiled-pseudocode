/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x180067BE0
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int EntryInProgress; // eax
  _DWORD *v5; // rdi

  v3 = (__int64)Ldr;
  if ( !Ldr
    || (EntryInProgress = (int)Ldr[2].EntryInProgress, (EntryInProgress & 0x10000) != 0)
    || (EntryInProgress & 0x20000) != 0
    || Ldr->ShutdownThreadId != TppAlpcpCleanupGroupMemberVFuncs
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3);
    v5 = (_DWORD *)(v3 + 288);
  }
  else
  {
    v5 = (_DWORD *)(v3 + 288);
    if ( (*(_BYTE *)(v3 + 288) & 1) != 0 )
      goto LABEL_8;
  }
  TppRaiseInvalidParameter(Ldr, a2, a3);
LABEL_8:
  _InterlockedExchange((volatile __int32 *)(v3 + 284), 0);
  *v5 |= 2u;
  return TppFastAlpcAdjustConcurrencyCount(v3);
}
