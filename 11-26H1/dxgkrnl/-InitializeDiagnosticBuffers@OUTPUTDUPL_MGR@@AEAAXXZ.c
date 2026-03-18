/*
 * XREFs of ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x140195210
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x14040F02C (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z @ 0x14007B964 (--0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(OUTPUTDUPL_MGR *this)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( !*((_QWORD *)this + 10) && g_IsInternalReleaseOrDbg )
  {
    v2 = operator new(0x70uLL, 0x674D444Fu, 256LL);
    if ( v2 )
    {
      v3 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v2, 0x80000u, 1, 256LL, 0x12Cu);
      *((_QWORD *)this + 10) = v3;
      if ( v3 )
        return;
    }
    else
    {
      *((_QWORD *)this + 10) = 0LL;
    }
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 956;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create high frequency diagnostic buffer.",
      956LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
