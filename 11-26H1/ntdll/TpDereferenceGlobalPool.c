/*
 * XREFs of TpDereferenceGlobalPool @ 0x180067320
 * Callers:
 *     RtlpTpWorkCallback @ 0x180066C90 (RtlpTpWorkCallback.c)
 *     RtlpTpIoDllLoaded @ 0x1800B7648 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x1800B833C (RtlpTpIoAlloc.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18004EAA0 (TppPoolpDereferenceGlobalPool.c)
 */

struct _TEB *__fastcall TpDereferenceGlobalPool(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *result; // rax
  _BYTE *SubSystemTib; // rcx

  if ( a1 == TppPoolpGlobalPool && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
  result = (struct _TEB *)NtCurrentPeb();
  SubSystemTib = result->NtTib.SubSystemTib;
  if ( !SubSystemTib[72] )
    return (struct _TEB *)TppRaiseInvalidParameter(SubSystemTib, a2, a3);
  return result;
}
