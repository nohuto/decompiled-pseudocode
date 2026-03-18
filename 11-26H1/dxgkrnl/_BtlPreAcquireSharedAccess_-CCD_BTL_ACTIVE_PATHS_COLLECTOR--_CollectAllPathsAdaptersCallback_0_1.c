/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1402AA220
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x140057920 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x140087820 (DxgkIsMSBDDFallbackEnabled.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402AA9B4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1402AAE98 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402AB7A4 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140344370 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403446C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x14034482C (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_(
        DXGADAPTER *this,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
{
  unsigned int v3; // r14d
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  VIDPN_MGR *v9; // r13
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v11; // r15
  struct DMMVIDPN *v12; // rbx
  int ClientVidPn; // eax
  __int64 v14; // rsi
  __int64 v15; // r8
  _QWORD *v16; // rdi
  unsigned int v17; // r10d
  const struct DMMVIDEOPRESENTTARGET *v18; // r9
  _QWORD *v19; // rcx
  struct DMMVIDPN *v20; // rcx
  _QWORD *v21; // rdx
  int v22; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  struct DMMVIDPN *v27; // rax
  __int64 v29; // rdi
  struct DXGADAPTER *v30; // rax
  ReferenceCounted *v31; // rcx
  __int64 v32; // rdi
  struct DXGADAPTER *v33; // rax
  __int64 v34; // rdi
  struct DXGADAPTER *v35; // rax
  ReferenceCounted *v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v40; // rbx
  struct DXGADAPTER *v41; // rax
  __int64 v42; // rdi
  struct DXGADAPTER *v43; // rax
  __int64 v44; // [rsp+20h] [rbp-E0h]
  unsigned int v45; // [rsp+50h] [rbp-B0h]
  unsigned int v46; // [rsp+54h] [rbp-ACh]
  __int64 v47; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A0h] BYREF
  struct DMMVIDPN *v49; // [rsp+68h] [rbp-98h] BYREF
  const struct DMMVIDEOPRESENTTARGET *v50; // [rsp+70h] [rbp-90h]
  CCD_BTL_ACTIVE_PATHS_COLLECTOR *v51; // [rsp+78h] [rbp-88h]
  char v52[8]; // [rsp+80h] [rbp-80h] BYREF
  DXGADAPTER *v53; // [rsp+88h] [rbp-78h]
  char v54; // [rsp+90h] [rbp-70h]
  _BYTE v55[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v56[144]; // [rsp+B0h] [rbp-50h] BYREF

  v53 = this;
  v3 = 0;
  v51 = a2;
  v54 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v56, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v56, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v37[3] = this;
      v37[4] = *((int *)this + 104);
      v37[5] = *((unsigned int *)this + 103);
      v37[6] = a2;
      WdLogGlobalForLineNumber = 60;
    }
    else
    {
      v3 = v5;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
    return v3;
  }
  if ( *((_BYTE *)this + 3057) || DXGADAPTER::IsBddFallbackDriver(this) && !DxgkIsMSBDDFallbackEnabled() )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
    return 0LL;
  }
  v8 = *((_QWORD *)this + 395);
  if ( !v8 )
  {
    LODWORD(v11) = 0;
    goto LABEL_46;
  }
  v9 = *(VIDPN_MGR **)(v8 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v47, (__int64)v9);
  v49 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9);
  v11 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v38 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v9) + 103);
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v9);
    WdLogSingleEntry5(2LL, v11, v9, *(_QWORD *)a2, *((int *)ContainingAdapter + 104), v38);
    WdLogGlobalForLineNumber = 727;
    v40 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v9) + 103);
    v41 = VIDPN_MGR::GetContainingAdapter(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create copy of the client VidPN from last-client committed vidpn. (Status = 0x%I64x, pVidPnMgr "
                "= 0x%I64x, m_pTopology = 0x%I64x, i_pAdapter->GetLuid() = 0x%I64x%08I64x)",
      v11,
      (__int64)v9,
      *(_QWORD *)a2,
      *((int *)v41 + 104),
      v40);
    if ( !v49 )
      goto LABEL_45;
    v36 = (struct DMMVIDPN *)((char *)v49 + 24);
LABEL_53:
    ReferenceCounted::Release(v36);
    goto LABEL_45;
  }
  v12 = v49;
  if ( v49 == (struct DMMVIDPN *)-96LL )
  {
    v32 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v9) + 103);
    v33 = VIDPN_MGR::GetContainingAdapter(v9);
    WdLogSingleEntry5(3LL, -96LL, a2, *(_QWORD *)a2, *((int *)v33 + 104), v32);
    WdLogGlobalForLineNumber = 740;
    goto LABEL_44;
  }
  LODWORD(v11) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v49, 1);
  if ( (int)v11 < 0 )
  {
    v34 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v9) + 103);
    v35 = VIDPN_MGR::GetContainingAdapter(v9);
    WdLogSingleEntry5(2LL, v12, a2, *(_QWORD *)a2, *((int *)v35 + 104), v34);
    WdLogGlobalForLineNumber = 753;
    goto LABEL_44;
  }
  v48 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v9);
  v11 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v29 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v9) + 103);
    v30 = VIDPN_MGR::GetContainingAdapter(v9);
    WdLogSingleEntry5(2LL, v11, v9, *(_QWORD *)a2, *((int *)v30 + 104), v29);
    WdLogGlobalForLineNumber = 771;
    if ( !v48 )
      goto LABEL_44;
    v31 = (ReferenceCounted *)(v48 + 24);
    goto LABEL_58;
  }
  v14 = v48;
  v15 = v48 + 96;
  if ( v48 == -96 )
  {
    v42 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v9) + 103);
    v43 = VIDPN_MGR::GetContainingAdapter(v9);
    WdLogSingleEntry5(2LL, -96LL, v51, *(_QWORD *)v51, *((int *)v43 + 104), v42);
    WdLogGlobalForLineNumber = 784;
LABEL_43:
    if ( !v14 )
    {
LABEL_44:
      if ( !v12 )
        goto LABEL_45;
      v36 = (struct DMMVIDPN *)((char *)v12 + 24);
      goto LABEL_53;
    }
    v31 = (ReferenceCounted *)(v14 + 24);
LABEL_58:
    ReferenceCounted::Release(v31);
    goto LABEL_44;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 15) + 72LL));
  v16 = (_QWORD *)*((_QWORD *)v9 + 15);
  v17 = 0;
LABEL_11:
  v45 = v17;
  if ( v17 >= *(_DWORD *)(*((_QWORD *)this + 395) + 96LL) )
  {
    if ( v16 )
      ReferenceCounted::Release((ReferenceCounted *)(v16 + 8));
    goto LABEL_43;
  }
  v18 = 0LL;
  v19 = (_QWORD *)v16[3];
  if ( v19 != v16 + 3 )
    v18 = (const struct DMMVIDEOPRESENTTARGET *)(v19 - 1);
  while ( 1 )
  {
    v50 = v18;
    if ( !v18 )
    {
      ++v17;
      goto LABEL_11;
    }
    v20 = (struct DMMVIDPN *)*((_QWORD *)v12 + 15);
    v21 = 0LL;
    v46 = *((_DWORD *)v18 + 6);
    if ( v20 != (struct DMMVIDPN *)((char *)v12 + 120) )
      v21 = (_QWORD *)((char *)v20 - 8);
    if ( !v21 )
      break;
    while ( *(_DWORD *)(v21[11] + 24LL) != v17 || *(_DWORD *)(v21[12] + 24LL) != v46 )
    {
      v27 = (struct DMMVIDPN *)v21[1];
      v21 = (_QWORD *)((char *)v27 - 8);
      if ( v27 == (struct DMMVIDPN *)((char *)v12 + 120) )
        v21 = 0LL;
      if ( !v21 )
        goto LABEL_21;
    }
LABEL_33:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v16, v18);
    v17 = v45;
    v15 = v14 + 96;
    v18 = NextTarget;
  }
LABEL_21:
  if ( *((_DWORD *)v18 + 21) == 15 && !*((_QWORD *)v18 + 14) )
    goto LABEL_33;
  if ( *(_QWORD *)(v15 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 821;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pScratchVidPnTopology->GetNumPaths() == 0",
      821LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v17 = v45;
  }
  v22 = VIDPN_MGR::AddPathToVidPnTopology(
          v9,
          (struct DMMVIDPNTOPOLOGY *const)(v14 + 96),
          v17,
          v46,
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_IGNORE);
  v11 = v22;
  if ( v22 == -1071774975 )
  {
    LODWORD(v11) = 0;
LABEL_32:
    v18 = v50;
    goto LABEL_33;
  }
  if ( v22 >= 0 )
  {
    if ( *(_QWORD *)(v14 + 136) != 1LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 852;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pScratchVidPnTopology->GetNumPaths() == 1",
        852LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v14 + 96), v45, v46);
    LODWORD(v11) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(v51, this, Path, 0, 0);
    if ( (int)v11 < 0 )
      goto LABEL_67;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v55, v14 + 152, 2u, v24, v44, 255LL);
    DMMVIDPNTOPOLOGY::RemovePath((DMMVIDPNTOPOLOGY *)(v14 + 96), v45, v46, 0LL);
    if ( *(_QWORD *)(v14 + 136) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 876;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pScratchVidPnTopology->GetNumPaths() == 0",
        876LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v55, v25);
    goto LABEL_32;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 847;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"AddPathToVidPnTopology() failed. (Status = 0x%I64x)",
    v11,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_67:
  if ( v16 )
    ReferenceCounted::Release((ReferenceCounted *)(v16 + 8));
  auto_rc<DMMVIDPN>::reset(&v48, 0LL);
  auto_rc<DMMVIDPN>::reset((__int64 *)&v49, 0LL);
LABEL_45:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v47 + 40));
LABEL_46:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
  return (unsigned int)v11;
}
