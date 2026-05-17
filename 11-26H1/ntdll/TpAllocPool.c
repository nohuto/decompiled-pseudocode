/*
 * XREFs of TpAllocPool @ 0x1800650A0
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocPool(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3)
{
  if ( a1 )
  {
    if ( !Ldr )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return TpAllocPoolInternal(a1, 0LL);
    }
  }
  TppRaiseInvalidParameter(a1, Ldr, a3);
  return 3221225485LL;
}
