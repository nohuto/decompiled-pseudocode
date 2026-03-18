/*
 * XREFs of ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140259188
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14038275C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140053050 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140264C80 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1402A9F68 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 */

__int64 __fastcall VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4)
{
  __int64 VidPnSourceId; // rsi
  __int64 VidPnTargetId; // rbp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  struct DMMVIDPNPRESENTPATH *v14; // rdx
  int v15; // eax
  int v16; // r14d
  struct DMMVIDPNPRESENTPATH *v18; // [rsp+60h] [rbp+8h] BYREF
  struct DMMVIDPNPRESENTPATH *v19; // [rsp+68h] [rbp+10h] BYREF

  if ( !DXGFASTMUTEX::IsOwner((VIDPN_MGR *)((char *)this + 40)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8166;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8169;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8170;
  }
  VidPnSourceId = a3->VidPnSourceId;
  VidPnTargetId = a3->VidPnTargetId;
  v18 = 0LL;
  v19 = 0LL;
  v9 = DMMVIDPNTOPOLOGY::CreateNewPath(a2, a3, &v19);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
    v13[3] = VidPnSourceId;
    v13[4] = VidPnTargetId;
    v13[5] = v12;
    WdLogGlobalForLineNumber = 0x1FFF;
    goto LABEL_19;
  }
  v14 = v19;
  *((_WORD *)v19 + 54) = *(_WORD *)&a3[1].CopyProtection.OEMCopyProtection[52];
  auto_ptr<DMMVIDPNPRESENTPATH>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))&v18,
    (__int64 (__fastcall ***)(_QWORD, __int64))v14);
  v15 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v18, D3DKMDT_MCC_ENFORCE, 1u);
  LODWORD(v12) = v15;
  v16 = -1071774957;
  if ( v15 == -1071774957 )
  {
    WdLogSingleEntry3(7LL, VidPnSourceId, VidPnTargetId, a2);
    WdLogGlobalForLineNumber = 8214;
LABEL_11:
    LODWORD(v12) = v16;
    goto LABEL_19;
  }
  v16 = -1071774920;
  if ( v15 == -1071774920 )
  {
    WdLogSingleEntry3(7LL, VidPnSourceId, VidPnTargetId, a2);
    WdLogGlobalForLineNumber = 8226;
    goto LABEL_11;
  }
  v16 = -1071774975;
  if ( v15 == -1071774975 )
  {
    WdLogSingleEntry3(7LL, VidPnSourceId, VidPnTargetId, a2);
    WdLogGlobalForLineNumber = 8235;
    goto LABEL_11;
  }
  if ( v15 >= 0 )
  {
    v18 = 0LL;
    LODWORD(v12) = 0;
  }
  else
  {
    WdLogSingleEntry4(2LL, VidPnSourceId, VidPnTargetId, a2, v15);
    WdLogGlobalForLineNumber = 8245;
  }
LABEL_19:
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v18);
  return (unsigned int)v12;
}
