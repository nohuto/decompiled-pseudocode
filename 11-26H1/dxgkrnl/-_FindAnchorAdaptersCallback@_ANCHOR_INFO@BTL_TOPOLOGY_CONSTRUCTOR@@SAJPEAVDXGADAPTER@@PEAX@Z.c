/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403451A4
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_ @ 0x140346C80 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402AA9B4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402AB7A4 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402DB730 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140344370 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403446C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x140345868 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x140345918 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?_IsBetterAnchorTarget@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x14034594C (-_IsBetterAnchorTarget@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAA_NAEBVDXGADAPTER@@AEBVDMMVIDEO.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x140345A40 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x140346C50 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *a1,
        _DWORD *a2)
{
  _DWORD *v2; // r12
  __int64 v4; // rcx
  __int64 v5; // rdx
  VIDPN_MGR *v6; // r14
  __int64 v7; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  __int64 v9; // rbx
  int v10; // eax
  int ClientVidPn; // eax
  unsigned int v12; // esi
  _QWORD *v13; // rdi
  _QWORD *v14; // rsi
  _QWORD *v15; // rcx
  VIDPN_MGR *v16; // r12
  unsigned int v17; // r14d
  struct DMMVIDPNTOPOLOGY *v18; // rdi
  unsigned int PathSourceFromTarget; // eax
  unsigned int v21; // r8d
  DXGMONITOR *v22; // r14
  __int64 v23; // r9
  char v24; // r10
  char v25; // dl
  __int64 v26; // rdx
  __int64 v27; // [rsp+20h] [rbp-79h]
  unsigned int v28; // [rsp+54h] [rbp-45h]
  unsigned int v29; // [rsp+58h] [rbp-41h] BYREF
  __int64 v30; // [rsp+60h] [rbp-39h] BYREF
  _QWORD *v31; // [rsp+68h] [rbp-31h] BYREF
  int AdapterPreference; // [rsp+70h] [rbp-29h]
  VIDPN_MGR *v33; // [rsp+78h] [rbp-21h]
  DMMVIDPNTOPOLOGY *v34; // [rsp+80h] [rbp-19h]
  __int64 v35; // [rsp+88h] [rbp-11h] BYREF
  struct DMMVIDPNTOPOLOGY *v36; // [rsp+90h] [rbp-9h]
  DXGMONITOR *v38[10]; // [rsp+A0h] [rbp+7h] BYREF

  v2 = a2;
  AdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference();
  if ( AdapterPreference < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(VIDPN_MGR **)(*(_QWORD *)(v4 + 3160) + 104LL);
  v33 = v6;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v35, (__int64)v6);
  v7 = *((_QWORD *)a1 + 395);
  NextTarget = 0LL;
  v9 = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  if ( *(_BYTE *)(v7 + 290) )
  {
    v10 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v6, &v30);
    v9 = v30;
    if ( v10 >= 0 )
    {
      if ( !v30 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 649;
      }
      v34 = (DMMVIDPNTOPOLOGY *)(v9 + 96);
    }
  }
  v31 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v6, (__int64 *)&v31);
  v12 = ClientVidPn;
  if ( ClientVidPn >= 0 )
  {
    v13 = v31;
    v36 = (struct DMMVIDPNTOPOLOGY *)(v31 + 12);
    if ( v31 == (_QWORD *)-96LL )
    {
      WdLogSingleEntry5(2LL, ClientVidPn, a1, *((int *)a1 + 104), *((unsigned int *)a1 + 103), v2);
      WdLogGlobalForLineNumber = 676;
      auto_rc<DMMVIDPN>::reset((__int64 *)&v31, 0LL);
      auto_rc<DMMVIDPN>::reset(&v30, 0LL);
      goto LABEL_29;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 15) + 72LL));
    v14 = (_QWORD *)*((_QWORD *)v6 + 15);
    v15 = (_QWORD *)v14[3];
    if ( v15 != v14 + 3 )
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v15 - 1);
    while ( 1 )
    {
      if ( !NextTarget )
      {
        if ( v14 )
          ReferenceCounted::Release((ReferenceCounted *)(v14 + 8));
        if ( v13 )
          ReferenceCounted::Release((ReferenceCounted *)(v13 + 3));
        if ( v9 )
          ReferenceCounted::Release((ReferenceCounted *)(v9 + 24));
        v12 = 0;
        goto LABEL_29;
      }
      v29 = 0;
      if ( DMMVIDEOPRESENTTARGET::IsMonitorConnected(NextTarget, (enum _DMM_VIDPN_MONITOR_TYPE *)&v29) )
      {
        if ( !*((_DWORD *)NextTarget + 23)
          && (unsigned __int8)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_IsBetterAnchorTarget(v2, a1, NextTarget, v29) )
        {
          break;
        }
      }
LABEL_13:
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v14, NextTarget);
    }
    if ( v34 )
    {
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v34, *((_DWORD *)NextTarget + 6));
      v16 = v33;
      v28 = PathSourceFromTarget;
      if ( PathSourceFromTarget != -1
        && (int)VIDPN_MGR::AddPathToVidPnTopology(
                  v33,
                  (struct DMMVIDPNTOPOLOGY *const)(v13 + 12),
                  PathSourceFromTarget,
                  *((_DWORD *)NextTarget + 6),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE) >= 0 )
      {
LABEL_32:
        v21 = *((_DWORD *)NextTarget + 6);
        if ( v21 == -1 )
          goto LABEL_49;
        if ( !*((_QWORD *)a1 + 395) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 10231;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The selected adapter is render-only",
            10231LL,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_49:
          WdLogSingleEntry3(2LL, *((unsigned int *)NextTarget + 6), *((int *)a1 + 104), *((unsigned int *)a1 + 103));
          WdLogGlobalForLineNumber = 777;
          if ( v14 )
            ReferenceCounted::Release((ReferenceCounted *)(v14 + 8));
          if ( v13 )
            ReferenceCounted::Release((ReferenceCounted *)(v13 + 3));
          if ( v9 )
            ReferenceCounted::Release((ReferenceCounted *)(v9 + 24));
          v12 = -1073741811;
          goto LABEL_29;
        }
        MONITOR_MGR::AcquireMonitorShared(v38, (__int64)a1, v21, 1u);
        v22 = v38[0];
        if ( v38[0] )
        {
          if ( *((_DWORD *)v38[0] + 70) != 1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5280;
          }
          DXGMONITOR::_IsVirtualModeSupportDisabled(v22);
        }
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v38);
        v2 = a2;
        *(_QWORD *)a2 = *(_QWORD *)((char *)a1 + 412);
        a2[2] = v28;
        a2[3] = *((_DWORD *)NextTarget + 6);
        a2[4] = *((_DWORD *)NextTarget + 20);
        a2[5] = *((_DWORD *)NextTarget + 21);
        a2[6] = *((_DWORD *)NextTarget + 25);
        a2[7] = *((_DWORD *)NextTarget + 31);
        a2[8] = v29;
        a2[9] = AdapterPreference;
        *((_BYTE *)a2 + 40) = *((_BYTE *)NextTarget + 405);
        a2[11] = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1);
        *((_BYTE *)a2 + 41) = (_BYTE)v23 == 0;
        *((_BYTE *)a2 + 48) = v24 == 0;
        *((_BYTE *)a2 + 42) = v25 == 0;
        *((_BYTE *)a2 + 49) = *((_BYTE *)NextTarget + 412);
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v38,
          (__int64)(v13 + 19),
          2u,
          v23,
          v27,
          255LL);
        if ( (int)DMMVIDPNTOPOLOGY::RemovePath((DMMVIDPNTOPOLOGY *)(v13 + 12), v28, *((_DWORD *)NextTarget + 6), 0LL) < 0
          || v13[17] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 808;
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v38, v26);
        goto LABEL_13;
      }
    }
    else
    {
      v16 = v33;
    }
    v17 = 0;
    v28 = 0;
    if ( *(_DWORD *)(*((_QWORD *)a1 + 395) + 96LL) )
    {
      v18 = v36;
      do
      {
        if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                    v16,
                    v18,
                    v17,
                    *((_DWORD *)NextTarget + 6),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE) >= 0 )
          break;
        ++v17;
      }
      while ( v17 < *(_DWORD *)(*((_QWORD *)a1 + 395) + 96LL) );
      v9 = v30;
      v13 = v31;
      v28 = v17;
    }
    goto LABEL_32;
  }
  WdLogSingleEntry5(2LL, ClientVidPn, a1, *((int *)a1 + 104), *((unsigned int *)a1 + 103), v2);
  WdLogGlobalForLineNumber = 663;
  if ( v31 )
    ReferenceCounted::Release((ReferenceCounted *)(v31 + 3));
  if ( v9 )
    ReferenceCounted::Release((ReferenceCounted *)(v9 + 24));
LABEL_29:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v35 + 40));
  return v12;
}
