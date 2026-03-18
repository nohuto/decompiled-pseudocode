/*
 * XREFs of DpiFdoInitializeDisplayDiagnostics @ 0x140086810
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiFdoCleanupDisplayDiagnostics @ 0x1400866D0 (DpiFdoCleanupDisplayDiagnostics.c)
 *     DpiQueryMiniportInterface @ 0x140193720 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoInitializeDisplayDiagnostics(__int64 a1)
{
  __int64 v1; // rdi
  int MiniportInterface; // eax
  unsigned int v3; // ebx

  v1 = *(_QWORD *)(a1 + 64);
  MiniportInterface = 0;
  if ( !*(_WORD *)(v1 + 5728) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE, 48, 1);
    if ( MiniportInterface >= 0 && (*(_WORD *)(v1 + 5728) != 48 || !*(_QWORD *)(v1 + 5760) || !*(_QWORD *)(v1 + 5768)) )
    {
      v3 = -1073741823;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 14225;
LABEL_8:
      DpiFdoCleanupDisplayDiagnostics(v1);
      return v3;
    }
  }
  v3 = MiniportInterface;
  if ( MiniportInterface < 0 )
    goto LABEL_8;
  return v3;
}
