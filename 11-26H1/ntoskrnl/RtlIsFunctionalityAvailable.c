/*
 * XREFs of RtlIsFunctionalityAvailable @ 0x140805F60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 */

unsigned __int8 __fastcall RtlIsFunctionalityAvailable(unsigned int a1)
{
  unsigned __int8 result; // al
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v3; // r8
  __int64 v4; // rdx

  result = 0;
  if ( a1 < 0x80 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    LODWORD(CurrentServerSiloGlobals) = *((_DWORD *)&CurrentServerSiloGlobals[90].Flink + v4);
    return _bittest((const int *)&CurrentServerSiloGlobals, v3 & 0x1F);
  }
  return result;
}
