/*
 * XREFs of ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS@@IPEAVAUTOEXPANDALLOCATION@@@Z @ 0x14029C5C0
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x14029BEC8 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BB9C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B0DC4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B1AD4 (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::LogPresentParams(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS a2,
        struct _D3DKMT_PRESENT_RGNS *a3,
        int a4,
        struct AUTOEXPANDALLOCATION *a5)
{
  __int64 v8; // rdi
  UINT v10; // r15d
  char *Buffer; // rax
  char *v12; // rsi
  OUTPUTDUPL_MGR *v13; // rcx
  OUTPUTDUPL_MGR *v14; // rcx
  DXGDIAGNOSTICS *v15; // rcx

  v8 = 16 * a3->DirtyRectCount;
  v10 = 24 * a3->MoveRectCount;
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(a5, v10 + v8 + 72, 0);
  v12 = Buffer;
  if ( Buffer )
  {
    memset(Buffer, 0, 0x48uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v13, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v12);
    *((struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS *)v12 + 14) = a2;
    *((_DWORD *)v12 + 1) = v10 + v8 + 72;
    *((_DWORD *)v12 + 12) = 2;
    *((_DWORD *)v12 + 13) = a4;
    *((_DWORD *)v12 + 15) = a3->DirtyRectCount;
    *((_DWORD *)v12 + 16) = a3->MoveRectCount;
    memmove(v12 + 72, a3->pDirtyRects, (unsigned int)v8);
    memmove(&v12[(v8 & 0xFFFFFFFFFFFFFFF0uLL) + 72], a3->pMoveRects, v10);
    if ( bTracingEnabled )
      OUTPUTDUPL_MGR::LogEtw(v14, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v12);
    v15 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 10);
    if ( v15 )
      DXGDIAGNOSTICS::WriteDiagnosticEntry(v15, (struct _DXGK_DIAG_HEADER *)v12);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1194;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to expand tmp buffer for present logging packet.",
      1194LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
