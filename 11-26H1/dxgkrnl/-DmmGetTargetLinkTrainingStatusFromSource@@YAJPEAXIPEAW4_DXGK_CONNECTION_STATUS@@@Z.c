/*
 * XREFs of ?DmmGetTargetLinkTrainingStatusFromSource@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x14025EC28
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x1402C42E0 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x14004FFE0 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403C3D6C (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 */

__int64 __fastcall DmmGetTargetLinkTrainingStatusFromSource(
        _QWORD *a1,
        unsigned int a2,
        enum _DXGK_CONNECTION_STATUS *a3)
{
  __int64 v4; // rbp
  VIDPN_MGR *v6; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  const struct DMMVIDPN *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  const struct DMMVIDPN *v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v6 = *(VIDPN_MGR **)(a1[395] + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v13, (__int64)v6);
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v6);
  v15 = ClientCommittedVidPnRef;
  v8 = ClientCommittedVidPnRef;
  if ( ClientCommittedVidPnRef )
  {
    v14 = 0;
    v10 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
            (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96),
            v4,
            0LL,
            &v14);
    v9 = v10;
    if ( v10 >= 0 )
    {
      PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((const struct DMMVIDPN *)((char *)v8 + 96), v14);
      if ( PathFromTarget )
      {
        *(_DWORD *)a3 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(
                          *(_QWORD *)(*((_QWORD *)PathFromTarget + 12) + 96LL),
                          0LL);
        v9 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4582;
        v9 = -1071774971;
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, v4, a1, v10);
      WdLogGlobalForLineNumber = 4572;
    }
  }
  else
  {
    v9 = -1071774884;
    WdLogSingleEntry2(2LL, a1, -1071774884LL);
    WdLogGlobalForLineNumber = 4556;
  }
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v15, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v13[0] + 40));
  return v9;
}
