/*
 * XREFs of ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8
 * Callers:
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x14025B780 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025CB60 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x14025E8CC (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1402644C0 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A7514 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402A7B08 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1402A9F68 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1402AA220 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140344904 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403451A4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14038275C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403EF568 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x14004B810 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?ImposeModifyingActionConstraints@ProtectableFromChange@@QEAAXEAEBTModifyingActionConstraints@1@@Z @ 0x140097608 (-ImposeModifyingActionConstraints@ProtectableFromChange@@QEAAXEAEBTModifyingActionConstraints@1@.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1403AB208 (-AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z.c)
 */

void __fastcall ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        ApplyPermissionWithinThisScope *this,
        __int64 a2)
{
  ProtectableFromChange *v3; // rdi
  unsigned int v4; // ebp
  int v5; // eax
  ProtectableFromChange *v6; // rdi
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int8 v9; // r9

  if ( *((_BYTE *)this + 10) )
  {
    v3 = *(ProtectableFromChange **)this;
    v4 = *((unsigned __int8 *)this + 8);
    if ( *((_BYTE *)this + 9) )
    {
      if ( ProtectableFromChange::IsModifyingActionAllowed(*(ProtectableFromChange **)this, *((_BYTE *)this + 8)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 263;
      }
      ProtectableFromChange::AllowModifyingAction(
        *(ProtectableFromChange **)this,
        *((_BYTE *)this + 8),
        *((_QWORD *)this + 2),
        v9);
      ProtectableFromChange::ImposeModifyingActionConstraints(
        *(ProtectableFromChange **)this,
        *((_BYTE *)this + 8),
        (ApplyPermissionWithinThisScope *)((char *)this + 11));
    }
    else
    {
      if ( (unsigned __int8)v4 >= *((_BYTE *)v3 + 20) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 243;
      }
      v5 = *((unsigned __int16 *)v3 + 11);
      if ( _bittest(&v5, v4) )
      {
        v6 = *(ProtectableFromChange **)this;
        v7 = *((unsigned __int8 *)this + 8);
        if ( (unsigned __int8)v7 >= *(_BYTE *)(*(_QWORD *)this + 20LL) && (_BYTE)v7 != 0xFF )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 116;
        }
        v8 = WdLogNewEntry5_WdTrace(this, a2);
        *(_QWORD *)(v8 + 24) = v7;
        *(_QWORD *)(v8 + 32) = v6;
        WdLogGlobalForLineNumber = 125;
        if ( (_BYTE)v7 == 0xFF )
        {
          *((_WORD *)v6 + 11) = 0;
          memset(*((void **)v6 + 6), 0, *((_QWORD *)v6 + 5));
          memset(*((void **)v6 + 11), 0, 8LL * *((_QWORD *)v6 + 10));
        }
        else
        {
          *((_WORD *)v6 + 11) &= ~(1 << v7);
          if ( v7 >= *((_QWORD *)v6 + 5) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 82;
          }
          *(_BYTE *)(*((_QWORD *)v6 + 6) + v7) &= 0xF0u;
          if ( v7 >= *((_QWORD *)v6 + 10) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 82;
          }
          *(_QWORD *)(*((_QWORD *)v6 + 11) + 8 * v7) = 0LL;
        }
      }
    }
  }
}
