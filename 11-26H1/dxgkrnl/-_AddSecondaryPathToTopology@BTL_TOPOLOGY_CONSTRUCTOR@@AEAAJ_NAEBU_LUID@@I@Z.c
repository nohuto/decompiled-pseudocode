/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026BCB4
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x14026C394 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x14026CA8C (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026CB5C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x140424A4C (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004C270 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004CF80 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N22@Z @ 0x14018C86C (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     _BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO @ 0x140192FF0 (_BTL_TOPOLOGY_CONSTRUCTOR--_AddSecondaryPathToTopology_--_2_--_AUTO--__AUTO.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402AA9B4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402CACB0 (IsVirtualizationDisabledForTarget.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403409F4 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403444C8 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403446C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x14034737C (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        char a2,
        const struct _LUID *a3,
        unsigned int a4)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v7; // rax
  DXGADAPTER *v8; // r14
  int v9; // esi
  VIDPN_MGR *v10; // r13
  int ClientVidPn; // eax
  struct DMMVIDPN *v12; // rdi
  unsigned int i; // r15d
  __int64 v14; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rbx
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  int v19; // eax
  int v20; // eax
  _QWORD *v21; // rbx
  struct DMMVIDEOPRESENTTARGET *v22; // rsi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r15
  _QWORD *v24; // rcx
  int v25; // edx
  __int64 v26; // rdx
  int IsTargetForceable; // eax
  int VidPnCopyForClient; // eax
  DMMVIDPNTOPOLOGY *v29; // r11
  unsigned int v30; // eax
  unsigned int v31; // r13d
  unsigned int v32; // ecx
  int v33; // eax
  char v35; // [rsp+50h] [rbp-B0h] BYREF
  char v36; // [rsp+51h] [rbp-AFh] BYREF
  char v37; // [rsp+52h] [rbp-AEh] BYREF
  char v38; // [rsp+53h] [rbp-ADh] BYREF
  bool v39; // [rsp+54h] [rbp-ACh]
  bool v40; // [rsp+55h] [rbp-ABh]
  bool v41; // [rsp+56h] [rbp-AAh]
  char v42; // [rsp+57h] [rbp-A9h]
  struct DMMVIDPN *v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v45; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+6Ch] [rbp-94h]
  struct DMMVIDEOPRESENTTARGET *v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v49; // [rsp+80h] [rbp-80h]
  VIDPN_MGR *v50; // [rsp+88h] [rbp-78h]
  DMMVIDPNTOPOLOGY *v51; // [rsp+90h] [rbp-70h]
  DXGADAPTER *v52; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v53; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v54[144]; // [rsp+B0h] [rbp-50h] BYREF

  v45 = a4;
  v42 = a2;
  LOBYTE(v46) = 0;
  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3, &v53);
  v52 = v7;
  v8 = v7;
  if ( !v7 )
  {
    WdLogSingleEntry4(3LL, *this, *((_QWORD *)*this + 8), a3->HighPart, a3->LowPart);
    WdLogGlobalForLineNumber = 1820;
    v9 = -1073741810;
    goto LABEL_69;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v54, v7, 0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v54, 0LL);
  if ( v9 < 0 )
    goto LABEL_68;
  v50 = *(VIDPN_MGR **)(*((_QWORD *)v8 + 395) + 104LL);
  v10 = v50;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v44, (__int64)v50);
  v43 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v10);
  v9 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    WdLogSingleEntry5(2LL, ClientVidPn, v8, *((int *)v8 + 104), *((unsigned int *)v8 + 103), this);
    WdLogGlobalForLineNumber = 1847;
    goto LABEL_67;
  }
  v12 = v43;
  for ( i = 0; ; ++i )
  {
    v14 = *((_QWORD *)*this + 8);
    if ( v14 )
      LOWORD(v14) = *(_WORD *)(v14 + 20);
    if ( i >= (unsigned __int16)v14 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
    v16 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v8 + 103)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v8 + 104) )
    {
      v17 = *((_DWORD *)PathDescriptor + 6);
      v18 = *((_DWORD *)PathDescriptor + 7);
      v19 = (unsigned __int8)v46;
      if ( v17 == v45 )
        v19 = 1;
      v46 = v19;
      v20 = VIDPN_MGR::AddPathToVidPnTopology(
              v10,
              (struct DMMVIDPN *)((char *)v43 + 96),
              v17,
              v18,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v9 = v20;
      if ( v20 < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          v20,
          *((int *)v16 + 5),
          *((unsigned int *)v16 + 4),
          *((unsigned int *)v16 + 6),
          *((unsigned int *)v16 + 7));
        WdLogGlobalForLineNumber = 1895;
        goto LABEL_67;
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v10 + 15) + 72LL), 1u);
  v21 = (_QWORD *)*((_QWORD *)v10 + 15);
  v22 = 0LL;
  NextTarget = 0LL;
  v47 = 0LL;
  v49 = -1;
  v41 = 0;
  v40 = 0;
  v24 = (_QWORD *)v21[3];
  v39 = 0;
  v37 = 0;
  v35 = 0;
  v38 = 0;
  if ( v24 != v21 + 3 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v24 - 1);
  while ( 1 )
  {
    if ( !NextTarget )
    {
      if ( v22 )
      {
        v9 = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
               (BTL_TOPOLOGY_CONSTRUCTOR *)this,
               (const struct _LUID *)((char *)v8 + 412),
               v49);
        goto LABEL_65;
      }
      if ( v21 )
        ReferenceCounted::Release((ReferenceCounted *)(v21 + 8));
      auto_rc<DMMVIDPN>::reset((__int64 *)&v43, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v44 + 40));
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
      v9 = -1073741275;
      goto LABEL_69;
    }
    if ( !*((_DWORD *)NextTarget + 23)
      && !DMMVIDPNTOPOLOGY::IsTargetInTopology((struct DMMVIDPN *)((char *)v12 + 96), *((_DWORD *)NextTarget + 6))
      && v25 != *((_DWORD *)this + 6) )
    {
      v9 = IsVirtualizationDisabledForTarget((_DWORD)v8, v25, (unsigned int)&v37, (unsigned int)&v35, (__int64)&v38);
      if ( v9 < 0 )
      {
        WdLogSingleEntry2(2LL, v8, *((unsigned int *)NextTarget + 6));
        WdLogGlobalForLineNumber = 1946;
        goto LABEL_65;
      }
      if ( (_BYTE)v46 )
      {
        if ( !v35 )
          goto LABEL_27;
      }
      else if ( *((_BYTE *)this + 10) && v35 )
      {
        goto LABEL_27;
      }
      if ( !*((_QWORD *)NextTarget + 14) )
      {
        if ( !v42 )
          goto LABEL_27;
        v26 = *((unsigned int *)NextTarget + 6);
        v36 = 0;
        IsTargetForceable = DmmIsTargetForceable(v8, v26, &v36, 0LL);
        v9 = IsTargetForceable;
        if ( IsTargetForceable < 0 )
        {
          WdLogSingleEntry5(
            2LL,
            IsTargetForceable,
            *((int *)v8 + 104),
            *((unsigned int *)v8 + 103),
            *((unsigned int *)NextTarget + 6),
            *((_QWORD *)*this + 8));
          WdLogGlobalForLineNumber = 1977;
          goto LABEL_65;
        }
        if ( !v36 )
        {
LABEL_27:
          v22 = v47;
          goto LABEL_28;
        }
      }
      v22 = v47;
      if ( BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v8, NextTarget, v47) )
        break;
    }
LABEL_28:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v21, NextTarget);
  }
  v48 = 0LL;
  VidPnCopyForClient = VIDPN_MGR::CreateVidPnCopyForClient(v10, v12);
  v9 = VidPnCopyForClient;
  if ( VidPnCopyForClient < 0 )
  {
    WdLogSingleEntry5(2LL, VidPnCopyForClient, v8, *((int *)v8 + 104), *((unsigned int *)v8 + 103), this);
    WdLogGlobalForLineNumber = 2005;
    goto LABEL_55;
  }
  v29 = (DMMVIDPNTOPOLOGY *)(v48 + 96);
  v51 = (DMMVIDPNTOPOLOGY *)(v48 + 96);
  if ( v48 == -96 )
  {
    WdLogSingleEntry4(2LL, v8, *((int *)v8 + 104), *((unsigned int *)v8 + 103), this);
    WdLogGlobalForLineNumber = 2017;
    auto_rc<DMMVIDPN>::reset(&v48, 0LL);
    if ( v21 )
      ReferenceCounted::Release((ReferenceCounted *)(v21 + 8));
    auto_rc<DMMVIDPN>::reset((__int64 *)&v43, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v44 + 40));
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
    v9 = -1073741823;
    goto LABEL_69;
  }
  v30 = v45;
  v31 = 0;
  if ( v45 != -1 )
    v31 = v45;
  while ( 2 )
  {
    if ( v30 == -1 )
    {
      v32 = *(_DWORD *)(*((_QWORD *)v8 + 395) + 96LL);
      v30 = v45;
    }
    else
    {
      v32 = v30 + 1;
    }
    if ( v31 >= v32 )
    {
      v22 = v47;
      goto LABEL_52;
    }
    if ( v30 == -1 && DMMVIDPNTOPOLOGY::IsSourceInTopology(v29, v31) )
    {
LABEL_48:
      v30 = v45;
      ++v31;
      continue;
    }
    break;
  }
  v33 = VIDPN_MGR::AddPathToVidPnTopology(
          v50,
          v29,
          v31,
          *((_DWORD *)NextTarget + 6),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_IGNORE);
  v9 = v33;
  if ( v33 == -1071774975 )
  {
    v29 = v51;
    goto LABEL_48;
  }
  if ( v33 >= 0 )
  {
    v22 = NextTarget;
    v47 = NextTarget;
    v41 = v37 == 0;
    v49 = v31;
    v40 = v35 == 0;
    v39 = v38 == 0;
LABEL_52:
    auto_rc<DMMVIDPN>::reset(&v48, 0LL);
    v10 = v50;
    goto LABEL_28;
  }
  WdLogSingleEntry5(2LL, v33, *((int *)v8 + 104), *((unsigned int *)v8 + 103), v31, *((unsigned int *)NextTarget + 6));
  WdLogGlobalForLineNumber = 2064;
LABEL_55:
  auto_rc<DMMVIDPN>::reset(&v48, 0LL);
LABEL_65:
  if ( v21 )
    ReferenceCounted::Release((ReferenceCounted *)(v21 + 8));
LABEL_67:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v43, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v44 + 40));
LABEL_68:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
LABEL_69:
  BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO(&v52);
  return (unsigned int)v9;
}
