/*
 * XREFs of OutputDuplRemoteSessionDisconnected @ 0x140194CA0
 * Callers:
 *     DxgkSessionDisconnected @ 0x1403B4C60 (DxgkSessionDisconnected.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1401EECC0 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

void OutputDuplRemoteSessionDisconnected()
{
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v1; // rbx
  _BYTE v2[40]; // [rsp+20h] [rbp-28h] BYREF

  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  v1 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v2, (struct _KTHREAD **)RemoteOutputDuplMgr + 3, 0);
    DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v2);
    *((_DWORD *)v1 + 18) = 0;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v2);
    OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect(v1);
  }
}
