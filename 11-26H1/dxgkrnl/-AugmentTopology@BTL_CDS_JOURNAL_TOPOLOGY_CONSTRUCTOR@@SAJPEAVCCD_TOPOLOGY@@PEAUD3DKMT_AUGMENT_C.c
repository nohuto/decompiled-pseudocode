/*
 * XREFs of ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x14026A6F0
 * Callers:
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14026A5DC (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1402ABAA0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140059AF4 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x14005EC08 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO @ 0x140192FF0 (_BTL_TOPOLOGY_CONSTRUCTOR--_AddSecondaryPathToTopology_--_2_--_AUTO--__AUTO.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x140268D1C (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x140268E8C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x140268F9C (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x140269228 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x14026AC64 (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14026AD0C (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402AA9B4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1402AC33C (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402CACB0 (IsVirtualizationDisabledForTarget.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403446C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(
        struct CCD_TOPOLOGY *this,
        struct D3DKMT_AUGMENT_CDSJ *a2,
        char a3)
{
  unsigned int v3; // edi
  unsigned int i; // ebx
  __int64 v7; // rax
  struct _LUID *v8; // r12
  unsigned __int16 v9; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v10; // r15
  const struct _LUID *v11; // rdx
  int v12; // r8d
  _DWORD *v13; // rcx
  bool v14; // r9
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v17; // rax
  DXGADAPTER *v18; // r13
  int v19; // r15d
  __int64 v20; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rbx
  int ClientVidPn; // eax
  struct DMMVIDPNTOPOLOGY *v23; // r15
  unsigned int v24; // ebx
  char j; // r12
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // r12
  int v30; // eax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v31; // rcx
  __int64 v32; // rbx
  int v33; // edx
  __int64 v34; // r8
  bool v35; // r9
  char v36; // [rsp+60h] [rbp-A0h] BYREF
  char v37; // [rsp+61h] [rbp-9Fh] BYREF
  char v38; // [rsp+62h] [rbp-9Eh] BYREF
  unsigned int v39; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v42; // [rsp+78h] [rbp-88h]
  DXGADAPTER *v43; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  struct DMMVIDPNTOPOLOGY *v45; // [rsp+90h] [rbp-70h]
  _BYTE v46[144]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = 0;
  v36 = a3;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 6) = -2;
  if ( (*(_DWORD *)a2 & 8) != 0 )
    CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(this, (struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3));
  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = (struct _LUID *)((char *)a2 + 4);
    if ( v7 )
      v9 = *(_WORD *)(v7 + 20);
    else
      v9 = 0;
    if ( i >= v9 )
    {
      if ( !v36 )
        return 3223192377LL;
      Global = DXGGLOBAL::GetGlobal();
      v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v8, &v44);
      v43 = v17;
      v18 = v17;
      if ( v17 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, v17, 0LL);
        v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v46, 0LL);
        if ( v19 >= 0 )
        {
          v20 = *((_QWORD *)v18 + 395);
          if ( !v20 )
          {
            WdLogSingleEntry3(3LL, *((int *)a2 + 2), v8->LowPart, -1073741637LL);
            WdLogGlobalForLineNumber = 165;
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
            BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO(&v43);
            return 3221225659LL;
          }
          v42 = *(struct D3DKMT_PATHMODALITY_DESCRIPTOR **)(v20 + 104);
          v21 = v42;
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v41, (__int64)v42);
          v40 = 0LL;
          ClientVidPn = VIDPN_MGR::CreateClientVidPn(v21);
          v19 = ClientVidPn;
          if ( ClientVidPn >= 0 )
          {
            v23 = (struct DMMVIDPNTOPOLOGY *)(v40 + 96);
            v45 = (struct DMMVIDPNTOPOLOGY *)(v40 + 96);
            v24 = 0;
            for ( j = 1; ; j = 1 )
            {
              v26 = *((_QWORD *)this + 8);
              v39 = v24;
              v27 = v26 ? *(_WORD *)(v26 + 20) : 0;
              if ( v24 >= v27 )
                break;
              PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v24);
              v29 = PathDescriptor;
              if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v18 + 103)
                && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v18 + 104) )
              {
                v30 = VIDPN_MGR::AddPathToVidPnTopology(
                        v42,
                        v23,
                        *((_DWORD *)PathDescriptor + 6),
                        *((_DWORD *)PathDescriptor + 7),
                        (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                        v24,
                        0,
                        D3DKMDT_MCC_IGNORE);
                v19 = v30;
                if ( v30 < 0 )
                {
                  WdLogSingleEntry5(
                    2LL,
                    v30,
                    *((int *)v29 + 5),
                    *((unsigned int *)v29 + 4),
                    *((unsigned int *)v29 + 6),
                    *((unsigned int *)v29 + 7));
                  WdLogGlobalForLineNumber = 224;
                  goto LABEL_44;
                }
                v23 = v45;
              }
              ++v24;
            }
            v19 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(v23, a2);
            if ( v19 >= 0 )
            {
              v31 = v42;
              _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v42 + 15) + 72LL), 1u);
              v32 = *((_QWORD *)v31 + 15);
              v33 = *((_DWORD *)a2 + 4);
              v36 = 0;
              v38 = 0;
              v37 = 0;
              v19 = IsVirtualizationDisabledForTarget(
                      (_DWORD)v18,
                      v33,
                      (unsigned int)&v36,
                      (unsigned int)&v38,
                      (__int64)&v37);
              if ( v19 >= 0 )
              {
                v34 = *((unsigned int *)a2 + 3);
                v42 = 0LL;
                v19 = CCD_TOPOLOGY::AddPathDescriptor(this, (char *)a2 + 4, v34);
                if ( v19 >= 0 )
                {
                  if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                              this,
                              (const struct _LUID *)v42 + 2,
                              *((_DWORD *)v42 + 7),
                              &v39) >= 0 )
                  {
                    CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, v39);
                    j = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v39);
                  }
                  CDS_JOURNAL::FillPathDescriptor(v42, a2, j, v35, v18);
                }
              }
              else
              {
                WdLogSingleEntry3(2LL, *((unsigned int *)a2 + 4), *((int *)a2 + 2), *((unsigned int *)a2 + 1));
                WdLogGlobalForLineNumber = 250;
              }
              if ( v32 )
                ReferenceCounted::Release((ReferenceCounted *)(v32 + 64));
            }
          }
          else
          {
            WdLogSingleEntry5(
              2LL,
              ClientVidPn,
              *((int *)v18 + 104),
              *((unsigned int *)v18 + 103),
              this,
              *((_QWORD *)this + 8));
            WdLogGlobalForLineNumber = 182;
          }
LABEL_44:
          auto_rc<DMMVIDPN>::reset(&v40, 0LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v41 + 40));
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
      }
      else
      {
        WdLogSingleEntry4(3LL, this, *((_QWORD *)this + 8), *((int *)a2 + 2), v8->LowPart);
        WdLogGlobalForLineNumber = 148;
        v19 = -1073741810;
      }
      BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO(&v43);
      return (unsigned int)v19;
    }
    v10 = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( CCD_TOPOLOGY::IsMatchingSource(v10, (const struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3)) )
      break;
  }
  v13 = (_DWORD *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 4) = *((_DWORD *)v10 + 7);
  *((_DWORD *)a2 + 5) = *((_DWORD *)v10 + 22);
  *((_DWORD *)a2 + 6) = *((_DWORD *)v10 + 23);
  if ( v13 )
  {
    if ( (v13[18] & 0x180000) != 0x180000 || v13[43] || v13[44] )
    {
      if ( !CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
        return 3223192371LL;
      CDS_JOURNAL::FillPathDescriptor(v10, a2, 1, v14, 0LL);
    }
    else
    {
      return (unsigned int)CCD_TOPOLOGY::RemoveCloneGroupByModality(this, v11, v12);
    }
  }
  return v3;
}
