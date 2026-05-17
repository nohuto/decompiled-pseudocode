/*
 * XREFs of TpIsTimerSet @ 0x1800697E0
 * Callers:
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 */

_BOOL8 __fastcall TpIsTimerSet(__int64 a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !*(_BYTE *)(a1 + 353) )
    {
      v1 = *(_DWORD *)(a1 + 168);
      if ( (v1 & 0x10000) == 0
        && (v1 & 0x20000) == 0
        && *(__int64 (__fastcall ***)())(a1 + 8) == TppTimerpCleanupGroupMemberVFuncs
        && !NtCurrentPeb()->Ldr->ShutdownInProgress )
      {
        return *(_QWORD *)(a1 + 328) != 0LL;
      }
    }
  }
  TppRaiseInvalidParameter();
  return 0LL;
}
