/*
 * XREFs of TpDereferenceGlobalPool @ 0x180087770
 * Callers:
 *     RtlpTpWorkCallback @ 0x1800870E0 (RtlpTpWorkCallback.c)
 *     RtlpTpIoDllLoaded @ 0x1800B4B68 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x1800B585C (RtlpTpIoAlloc.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x180039020 (TppPoolpDereferenceGlobalPool.c)
 */

void __fastcall TpDereferenceGlobalPool(__int64 a1, __int64 a2)
{
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 != TppPoolpGlobalPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, a2);
  }
  else
  {
    TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
  }
}
