/*
 * XREFs of ?IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14005065C
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BBFC (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDIAGNOSTICS::IsPersistentPacket(struct _DXGK_DIAG_HEADER **this, struct _DXGK_DIAG_HEADER *a2)
{
  int i; // r8d

  for ( i = 0; ; i = 1 )
  {
    if ( i )
      return 0LL;
    if ( a2 == this[1] )
      break;
  }
  return 1LL;
}
