/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x140349A8C
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x14026BAC4 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004C270 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004CF80 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N22@Z @ 0x14018C86C (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x14019024C (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402AA9B4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402CACB0 (IsVirtualizationDisabledForTarget.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402DB730 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140344370 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403446C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x140349170 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(CCD_TOPOLOGY **this, struct DXGADAPTER *a2)
{
  CCD_TOPOLOGY **v3; // rbx
  VIDPN_MGR *v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v7; // rdi
  int v8; // eax
  int ClientVidPn; // eax
  int v10; // r14d
  _QWORD *v11; // rsi
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rbx
  int v16; // eax
  int v17; // r12d
  VIDPN_MGR **v18; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  const struct DMMVIDEOPRESENTTARGET *v20; // r13
  int v21; // edx
  __int64 v22; // r11
  unsigned int v23; // edx
  int v24; // eax
  int v25; // eax
  const struct DMMVIDEOPRESENTTARGET *j; // rax
  const struct DMMVIDEOPRESENTTARGET *v27; // r13
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  int v30; // r8d
  _QWORD *v31; // rax
  int v32; // edx
  unsigned int k; // r12d
  int v34; // eax
  int v35; // eax
  int v37; // [rsp+50h] [rbp-19h]
  unsigned int PathSourceFromTarget; // [rsp+54h] [rbp-15h]
  __int64 v39; // [rsp+58h] [rbp-11h] BYREF
  DMMVIDPNTOPOLOGY *v40; // [rsp+60h] [rbp-9h]
  _QWORD *v41; // [rsp+68h] [rbp-1h] BYREF
  VIDPN_MGR *v42; // [rsp+70h] [rbp+7h]
  __int64 v43[9]; // [rsp+78h] [rbp+Fh] BYREF
  bool v45; // [rsp+D8h] [rbp+6Fh] BYREF
  bool v46; // [rsp+E0h] [rbp+77h] BYREF
  bool v47; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = this;
  v4 = *(VIDPN_MGR **)(*((_QWORD *)a2 + 395) + 104LL);
  v42 = v4;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v43, (__int64)v4);
  v5 = *((_QWORD *)a2 + 395);
  v6 = 0;
  v7 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( *(_BYTE *)(v5 + 290) )
  {
    v8 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v4, &v39);
    v7 = v39;
    if ( v8 >= 0 )
    {
      if ( !v39 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2127;
      }
      v40 = (DMMVIDPNTOPOLOGY *)(v7 + 96);
    }
  }
  v41 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v4, (__int64 *)&v41);
  v10 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    WdLogSingleEntry4(2LL, ClientVidPn, a2, *((int *)a2 + 104), *((unsigned int *)a2 + 103));
    WdLogGlobalForLineNumber = 2140;
LABEL_76:
    auto_rc<DMMVIDPN>::reset((__int64 *)&v41, 0LL);
    auto_rc<DMMVIDPN>::reset(&v39, 0LL);
    goto LABEL_86;
  }
  v11 = v41;
  if ( v41 == (_QWORD *)-96LL )
  {
    WdLogSingleEntry4(2LL, -96LL, a2, *((int *)a2 + 104), *((unsigned int *)a2 + 103));
    WdLogGlobalForLineNumber = 2152;
    v10 = -1073741823;
    goto LABEL_76;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)*v3 + 8);
    v13 = v12 ? *(_WORD *)(v12 + 20) : 0;
    if ( v6 >= v13 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*v3, v6);
    v15 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a2 + 103)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a2 + 104) )
    {
      v16 = VIDPN_MGR::AddPathToVidPnTopology(
              v4,
              (struct DMMVIDPNTOPOLOGY *const)(v11 + 12),
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v6,
              0,
              D3DKMDT_MCC_IGNORE);
      v10 = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          v16,
          *((int *)v15 + 5),
          *((unsigned int *)v15 + 4),
          *((unsigned int *)v15 + 6),
          *((unsigned int *)v15 + 7));
        WdLogGlobalForLineNumber = 2184;
        if ( v11 )
          ReferenceCounted::Release((ReferenceCounted *)(v11 + 3));
        if ( v7 )
          ReferenceCounted::Release((ReferenceCounted *)(v7 + 24));
        goto LABEL_86;
      }
    }
    v3 = this;
    ++v6;
  }
  v17 = -1071774975;
  v37 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 15) + 72LL));
  v18 = (VIDPN_MGR **)*((_QWORD *)v4 + 15);
  v47 = 0;
  v45 = 0;
  v46 = 0;
  if ( v40 )
  {
    for ( i = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v18);
          ;
          i = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v20, v18) )
    {
      v20 = i;
      if ( !i )
        break;
      if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v11 + 12), *((_DWORD *)i + 6)) )
      {
        if ( v21 == *((_DWORD *)this + 6)
          && *((_DWORD *)a2 + 103) == *((_DWORD *)this + 3)
          && *((_DWORD *)a2 + 104) == *((_DWORD *)this + 4)
          || *((_QWORD *)v20 + 14) == v22
          || *((_DWORD *)v20 + 23) != (_DWORD)v22 )
        {
          goto LABEL_41;
        }
        v10 = IsVirtualizationDisabledForTarget((__int64)a2, v21, &v47, &v45, &v46);
        if ( v10 < 0 )
        {
          WdLogSingleEntry2(2LL, *((unsigned int *)v20 + 6), a2);
          WdLogGlobalForLineNumber = 2246;
LABEL_74:
          if ( v18 )
            ReferenceCounted::Release((ReferenceCounted *)(v18 + 8));
          goto LABEL_76;
        }
        if ( *((_BYTE *)this + 10) && v45
          || (PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v40, *((_DWORD *)v20 + 6)),
              PathSourceFromTarget == -1)
          || DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v11 + 12), PathSourceFromTarget)
          || (v24 = VIDPN_MGR::AddPathToVidPnTopology(
                      v42,
                      (struct DMMVIDPNTOPOLOGY *const)(v11 + 12),
                      v23,
                      *((_DWORD *)v20 + 6),
                      (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                      0xFFFFu,
                      0,
                      D3DKMDT_MCC_IGNORE),
              v10 = v24,
              v24 == -1071774975) )
        {
LABEL_41:
          v17 = v37;
        }
        else
        {
          if ( v24 < 0 )
          {
            WdLogSingleEntry5(
              2LL,
              v24,
              *((int *)a2 + 104),
              *((unsigned int *)a2 + 103),
              PathSourceFromTarget,
              *((unsigned int *)v20 + 6));
            WdLogGlobalForLineNumber = 2296;
            goto LABEL_74;
          }
          v25 = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                  (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                  (const struct _LUID *)((char *)a2 + 412),
                  PathSourceFromTarget);
          v17 = v37;
          v10 = v25;
          if ( v25 >= 0 )
            v17 = v25;
          v37 = v17;
        }
      }
    }
  }
  for ( j = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v18);
        ;
        j = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v27, v18) )
  {
    v27 = j;
    if ( !j )
      break;
    v28 = (_QWORD *)v11[15];
    if ( v28 == v11 + 15 || (v29 = v28 - 1) == 0LL )
    {
LABEL_54:
      v32 = *((_DWORD *)v27 + 6);
      if ( (v32 != *((_DWORD *)this + 6)
         || *((_DWORD *)a2 + 103) != *((_DWORD *)this + 3)
         || *((_DWORD *)a2 + 104) != *((_DWORD *)this + 4))
        && *((_QWORD *)v27 + 14) )
      {
        v10 = IsVirtualizationDisabledForTarget((__int64)a2, v32, &v47, &v45, &v46);
        if ( v10 < 0 )
        {
          WdLogSingleEntry2(2LL, *((unsigned int *)v27 + 6), a2);
          WdLogGlobalForLineNumber = 2350;
          goto LABEL_74;
        }
        if ( !*((_BYTE *)this + 10) || !v45 )
        {
          for ( k = 0; k < *(_DWORD *)(*((_QWORD *)a2 + 395) + 96LL); ++k )
          {
            if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v11 + 12), k) )
            {
              v34 = VIDPN_MGR::AddPathToVidPnTopology(
                      v42,
                      (struct DMMVIDPNTOPOLOGY *const)(v11 + 12),
                      k,
                      *((_DWORD *)v27 + 6),
                      (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                      0xFFFFu,
                      0,
                      D3DKMDT_MCC_IGNORE);
              v10 = v34;
              if ( v34 != -1071774975 )
              {
                if ( v34 < 0 )
                {
                  WdLogSingleEntry5(
                    2LL,
                    v34,
                    *((int *)a2 + 104),
                    *((unsigned int *)a2 + 103),
                    k,
                    *((unsigned int *)v27 + 6));
                  WdLogGlobalForLineNumber = 2391;
                  goto LABEL_74;
                }
                v35 = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                        (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                        (const struct _LUID *)((char *)a2 + 412),
                        k);
                v17 = v37;
                v10 = v35;
                if ( v35 >= 0 )
                  v17 = v35;
                v37 = v17;
                goto LABEL_71;
              }
            }
          }
        }
      }
      v17 = v37;
    }
    else
    {
      v30 = *((_DWORD *)j + 6);
      while ( *(_DWORD *)(v29[12] + 24LL) != v30 )
      {
        v31 = (_QWORD *)v29[1];
        v29 = v31 - 1;
        if ( v31 == v11 + 15 )
          v29 = 0LL;
        if ( !v29 )
          goto LABEL_54;
      }
    }
LABEL_71:
    ;
  }
  if ( v10 != -1071774975 )
    v17 = v10;
  if ( v18 )
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 8));
  if ( v11 )
    ReferenceCounted::Release((ReferenceCounted *)(v11 + 3));
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 24));
  v10 = v17;
LABEL_86:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v43[0] + 40));
  return (unsigned int)v10;
}
