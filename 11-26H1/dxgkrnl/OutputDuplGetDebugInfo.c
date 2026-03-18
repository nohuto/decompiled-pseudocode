/*
 * XREFs of OutputDuplGetDebugInfo @ 0x14042A46C
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x140054270 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1401ED8E4 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x14029E110 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplGetDebugInfo(struct DXGADAPTER *this, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  struct DXGADAPTER **v4; // rbx
  struct DXGADAPTER **v5; // rax
  int OutputDuplManager; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  unsigned int DebugInfo; // ebx
  DXGADAPTER *v13; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-18h] BYREF
  DXGADAPTER *v15; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-8h] BYREF
  OUTPUTDUPL_MGR *v17; // [rsp+70h] [rbp+10h] BYREF

  v15 = 0LL;
  v13 = 0LL;
  v17 = 0LL;
  if ( !this || (unsigned int)DxgIsRemoteSessionUsingXddmMonitors((__int64)this) )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    goto LABEL_11;
  }
  v4 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v15);
  v5 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v13);
  OutputDuplManager = FindOutputDuplManager(this, 0, v5, &v14, v4, &v16, &v17);
  v9 = OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    RemoteOutputDuplMgr = v17;
LABEL_11:
    if ( RemoteOutputDuplMgr )
    {
      DebugInfo = OUTPUTDUPL_MGR::GetDebugInfo((UINT *)RemoteOutputDuplMgr, a2);
    }
    else
    {
      WdLogNewEntry5_WdTrace(v8, v7);
      WdLogGlobalForLineNumber = 3031;
      DebugInfo = -1073741275;
    }
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v13, 0LL);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v15, 0LL);
    return DebugInfo;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7) + 24) = OutputDuplManager;
  WdLogGlobalForLineNumber = 3019;
  if ( v13 )
    DXGADAPTER::ReleaseReference(v13);
  v13 = 0LL;
  if ( v15 )
    DXGADAPTER::ReleaseReference(v15);
  return v9;
}
