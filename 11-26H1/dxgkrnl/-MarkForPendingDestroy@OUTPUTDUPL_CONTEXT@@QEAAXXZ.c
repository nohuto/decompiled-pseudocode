/*
 * XREFs of ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1401EF878
 * Callers:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14036BD68 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401ECC28 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401ECD40 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x140330710 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x14042401C (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(OUTPUTDUPL_CONTEXT *this)
{
  unsigned int v1; // edi
  DXGSESSIONMGR *v3; // rbx
  unsigned int ProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  v1 = 0;
  if ( *((_DWORD *)this + 72) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2423;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_bPendingDestroy", 2423LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 123);
  if ( v3 )
  {
    if ( !*((_DWORD *)this + 76) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2434;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SessionRefAdded", 2434LL, 0LL, 0LL, 0LL, 0LL);
    }
    ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)this + 3));
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, ProcessSessionId);
    OUTPUTDUPL_CONTEXT::ReleaseSessionReference(this, SessionDataForSpecifiedSession);
    *((_DWORD *)this + 76) = 0;
    if ( !*((_DWORD *)this + 72) )
    {
      *((_DWORD *)this + 72) = 1;
      if ( *((_DWORD *)this + 10) )
      {
        do
        {
          DXGDXGIKEYEDMUTEX::Abandon(*((DXGDXGIKEYEDMUTEX **)this + v1 + 6));
          DXGDXGIKEYEDMUTEX::CloseConsumerResources(*((struct _KPROCESS ***)this + v1++ + 6));
        }
        while ( v1 < *((_DWORD *)this + 10) );
      }
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2429;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"DXGSESSIONDATA is NULL", 2429LL, 0LL, 0LL, 0LL, 0LL);
  }
}
