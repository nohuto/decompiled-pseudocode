/*
 * XREFs of ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x14004AB54
 * Callers:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x14007A870 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x140191B04 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1401C7774 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401CA340 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1401EDAA4 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x14004AC1C (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x14006C8C0 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnostics(
        DXGDIAGNOSTICS *this,
        unsigned __int8 *a2,
        unsigned int *a3,
        unsigned int CurrentProcessSessionId)
{
  unsigned int v9; // esi
  unsigned int DiagnosticsInternal; // ebx

  if ( !a3 )
    return 3221225485LL;
  if ( a2 )
  {
    v9 = *a3;
    if ( *a3 )
      memset(a2, 0, v9);
  }
  else
  {
    v9 = 0;
  }
  if ( CurrentProcessSessionId == -1 )
  {
    if ( IsCurrentProcessAdmin() )
      CurrentProcessSessionId = -1;
    else
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  }
  DXGFASTMUTEX::Acquire((DXGDIAGNOSTICS *)((char *)this + 64));
  DiagnosticsInternal = DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, CurrentProcessSessionId, v9, a2, a3);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 8);
  if ( *a3 > v9 )
    return (unsigned int)-2147483643;
  return DiagnosticsInternal;
}
