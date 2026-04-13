/*
 * XREFs of ?IsDebuggerPresent@details@wil@@YA_NXZ @ 0x180033F10
 * Callers:
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180027000 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4FailureFlags@2@PEAUFailureInfo@2@@Z @ 0x180034AFC (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4F.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7W4FailureFlags@2@PEAUFailureInfo@2@@Z @ 0x180077ABC (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7W.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details::IsDebuggerPresent(wil::details *this)
{
  char v1; // bl

  v1 = 0;
  if ( wil::g_fIsDebuggerPresent )
    return 1;
  if ( wil::g_pfnIsDebuggerPresent )
  {
    if ( !(unsigned __int8)wil::g_pfnIsDebuggerPresent(this) )
      return v1;
    return 1;
  }
  if ( IsDebuggerPresent() )
    return 1;
  return v1;
}
