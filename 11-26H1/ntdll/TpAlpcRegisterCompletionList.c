/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x180088030
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(_PEB_LDR_DATA *Ldr, __int64 a2)
{
  __int64 v2; // rbx
  int EntryInProgress; // eax
  _DWORD *v4; // rdi

  v2 = (__int64)Ldr;
  if ( !Ldr
    || (EntryInProgress = (int)Ldr[2].EntryInProgress, (EntryInProgress & 0x10000) != 0)
    || (EntryInProgress & 0x20000) != 0
    || Ldr->ShutdownThreadId != TppAlpcpCleanupGroupMemberVFuncs
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2);
    v4 = (_DWORD *)(v2 + 288);
  }
  else
  {
    v4 = (_DWORD *)(v2 + 288);
    if ( (*(_BYTE *)(v2 + 288) & 1) != 0 )
      goto LABEL_8;
  }
  TppRaiseInvalidParameter(Ldr, a2);
LABEL_8:
  _InterlockedExchange((volatile __int32 *)(v2 + 284), 0);
  *v4 |= 2u;
  return TppFastAlpcAdjustConcurrencyCount(v2);
}
