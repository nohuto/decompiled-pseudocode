/*
 * XREFs of ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x14025E8CC
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x140364B10 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402CF610 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1402D6908 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140344370 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140384408 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140384650 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DmmDisableAllFailurePathsOnAdapter(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  VIDPN_MGR *v7; // r12
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
  struct DMMVIDPN *v11; // rbx
  DMMVIDPNTOPOLOGY *v12; // r15
  int NumPathsFromSource; // eax
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  ADAPTER_DISPLAY *v17; // rax
  unsigned int v18; // esi
  char v19; // al
  _BYTE v21[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct DMMVIDPN *v22; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v25[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[272]; // [rsp+90h] [rbp-70h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4196;
  }
  if ( a4 && (*(_DWORD *)(a4 + 464) != 2 || *(_QWORD *)(a4 + 1896) != a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4199;
  }
  v7 = *(VIDPN_MGR **)(*(_QWORD *)(a1 + 3160) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v24, (__int64)v7);
  v22 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v7);
  v9 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    WdLogSingleEntry3(2LL, *(int *)(a1 + 416), *(unsigned int *)(a1 + 412), ClientVidPnFromLastClientCommitedVidPn);
    WdLogGlobalForLineNumber = 4225;
    goto LABEL_34;
  }
  v10 = 0;
  v11 = v22;
  v12 = (struct DMMVIDPN *)((char *)v22 + 96);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 3160) + 96LL) )
  {
    while ( 1 )
    {
      if ( _bittest(&a2, v10) )
      {
        v23 = 0LL;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v12, v10, &v23);
        if ( NumPathsFromSource >= 0 )
          goto LABEL_15;
        if ( NumPathsFromSource != -1071774919 || v23 )
          break;
      }
LABEL_20:
      if ( ++v10 >= *(_DWORD *)(*(_QWORD *)(a1 + 3160) + 96LL) )
      {
        v11 = v22;
        goto LABEL_22;
      }
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4253;
LABEL_15:
    if ( v23 )
    {
      LOBYTE(v14) = 2;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        v25,
        ((unsigned __int64)v22 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v22 + 96) != 0LL),
        v14);
      v15 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v12, v10);
      if ( ((v15 + 0x80000000) & 0x80000000) == 0 && v15 != -1071774919 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4270;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v25);
    }
    goto LABEL_20;
  }
LABEL_22:
  memset(v26, 0, 0x104uLL);
  v21[0] = 0;
  v16 = VIDPN_MGR::SetTimingsFromVidPn(v7, 0LL, 1LL, v11, v26, v21, 0, a4, 0LL);
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(2LL, v11, v16);
    v17 = *(ADAPTER_DISPLAY **)(a1 + 3160);
    v18 = 0;
    for ( WdLogGlobalForLineNumber = 4292; v18 < *((_DWORD *)v17 + 24); ++v18 )
    {
      if ( _bittest(&a2, v18) )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v17, v18, 0, 0LL, 0, 0);
      v17 = *(ADAPTER_DISPLAY **)(a1 + 3160);
    }
  }
  v19 = v21[0];
  if ( (v21[0] & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v19 = v21[0];
    WdLogGlobalForLineNumber = 4306;
  }
  if ( (v19 & 2) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4307;
  }
  if ( (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef(v7, v11) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4313;
  }
  v9 = 0;
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v22, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v24 + 40));
  return v9;
}
