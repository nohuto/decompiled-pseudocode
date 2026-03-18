/*
 * XREFs of OutputDuplRemoteSessionReconnected @ 0x140193D34
 * Callers:
 *     DxgkSessionReconnected @ 0x1403B4E10 (DxgkSessionReconnected.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1401EED10 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

void __fastcall OutputDuplRemoteSessionReconnected(unsigned int a1)
{
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v3; // rbx
  int v4; // eax
  _BYTE v5[40]; // [rsp+50h] [rbp-28h] BYREF

  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  v3 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, (struct _KTHREAD **)RemoteOutputDuplMgr + 3, 0);
    DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v5);
    v4 = OUTPUTDUPL_MGR::ReconfigureNumSources(v3, a1);
    if ( v4 != -1073741801 )
    {
      if ( v4 >= 0 )
      {
        *((_DWORD *)v3 + 18) = 1;
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4014;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(Status == STATUS_NO_MEMORY) || NT_SUCCESS(Status)",
          4014LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5);
  }
}
