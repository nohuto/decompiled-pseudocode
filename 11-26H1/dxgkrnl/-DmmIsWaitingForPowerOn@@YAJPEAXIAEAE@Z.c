/*
 * XREFs of ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x14025B4E8
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x1402C42E0 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004CF80 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1403B97AC (-GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403C3D6C (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1403DA270 (-IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DmmIsWaitingForPowerOn(_QWORD *a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v7; // rax
  VIDPN_MGR *v8; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  ADAPTER_DISPLAY *v10; // rcx
  const struct DMMVIDPN *v11; // rbx
  unsigned int v12; // edx
  struct DMMVIDPNPRESENTPATH *MostImportantPathFromSource; // rax
  const struct DMMVIDPN *v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15212;
    return 3221225473LL;
  }
  if ( !a1[395] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15220;
  }
  if ( a1[396] )
  {
    v7 = a1[395];
    v8 = *(VIDPN_MGR **)(v7 + 104);
    if ( !v8 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 15238;
      return 3221225473LL;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v15, *(_QWORD *)(v7 + 104));
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v8);
    v10 = (ADAPTER_DISPLAY *)a1[395];
    v11 = ClientCommittedVidPnRef;
    v14 = ClientCommittedVidPnRef;
    if ( !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v10, a2) )
    {
      if ( v11 )
      {
        if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((const struct DMMVIDPN *)((char *)v11 + 96), a2) )
        {
          MostImportantPathFromSource = DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(
                                          (const struct DMMVIDPN *)((char *)v11 + 96),
                                          v12);
          if ( MostImportantPathFromSource )
          {
            if ( (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(
                                 *(_QWORD *)(*((_QWORD *)MostImportantPathFromSource + 12) + 96LL),
                                 0LL) == 14
              && !DMMVIDPN::IsPathFromSourcePoweredOff(v11, a2) )
            {
              *a3 = 1;
            }
          }
        }
      }
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v14, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v15 + 40));
  }
  return 0LL;
}
