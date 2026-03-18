/*
 * XREFs of ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x14026B150
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x14026AF50 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004C270 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004CF80 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140059AF4 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO @ 0x140192FF0 (_BTL_TOPOLOGY_CONSTRUCTOR--_AddSecondaryPathToTopology_--_2_--_AUTO--__AUTO.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x140268E8C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x140268F9C (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402AA9B4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1402AC33C (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402CACB0 (IsVirtualizationDisabledForTarget.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403446C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x14037F138 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 */

__int64 __fastcall CDS_JOURNAL::_ExtendTopology(struct CCD_TOPOLOGY *this, const struct CDS_JOURNAL::_ENTRY *a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  DXGADAPTER *v6; // rdi
  int v7; // ebx
  __int64 v8; // rax
  struct VIDPN_MGR *v9; // rbx
  int ClientVidPn; // eax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // rbx
  unsigned int i; // r13d
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // r14
  int v17; // eax
  char IsPrimaryClonePathByModality; // r13
  unsigned int j; // r14d
  int v20; // eax
  int v21; // edx
  int v22; // eax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // r14
  char v25; // [rsp+60h] [rbp-A0h] BYREF
  char v26; // [rsp+61h] [rbp-9Fh] BYREF
  char v27; // [rsp+62h] [rbp-9Eh] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  VIDPN_MGR *v30; // [rsp+78h] [rbp-88h] BYREF
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v31; // [rsp+80h] [rbp-80h]
  DXGADAPTER *v32; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v34[144]; // [rsp+A0h] [rbp-60h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a2 + 20), &v33);
  v32 = v5;
  v6 = v5;
  if ( v5 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v5, 0LL);
    v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL);
    if ( v7 >= 0 )
    {
      v8 = *((_QWORD *)v6 + 395);
      if ( v8 )
      {
        v30 = *(VIDPN_MGR **)(v8 + 104);
        v9 = v30;
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, (__int64)v30);
        v28 = 0LL;
        ClientVidPn = VIDPN_MGR::CreateClientVidPn(v9);
        v7 = ClientVidPn;
        if ( ClientVidPn >= 0 )
        {
          v11 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v28 + 96);
          v31 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v28 + 96);
          for ( i = 0; ; ++i )
          {
            v13 = *((_QWORD *)this + 8);
            v14 = v13 ? *(_WORD *)(v13 + 20) : 0;
            if ( i >= v14 )
              break;
            PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
            v16 = PathDescriptor;
            if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v6 + 103)
              && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v6 + 104) )
            {
              v17 = VIDPN_MGR::AddPathToVidPnTopology(
                      v30,
                      v11,
                      *((_DWORD *)PathDescriptor + 6),
                      *((_DWORD *)PathDescriptor + 7),
                      (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                      i,
                      0,
                      D3DKMDT_MCC_ENFORCE);
              v7 = v17;
              if ( v17 < 0 )
              {
                WdLogSingleEntry5(
                  2LL,
                  v17,
                  *((int *)v16 + 5),
                  *((unsigned int *)v16 + 4),
                  *((unsigned int *)v16 + 6),
                  *((unsigned int *)v16 + 7));
                WdLogGlobalForLineNumber = 1374;
                goto LABEL_34;
              }
              v11 = v31;
            }
          }
          IsPrimaryClonePathByModality = 1;
          if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v11, *((_DWORD *)a2 + 8)) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1380;
          }
          for ( j = 0; j < *(_DWORD *)(*((_QWORD *)v6 + 395) + 96LL); ++j )
          {
            if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v11, j) )
            {
              v20 = VIDPN_MGR::AddPathToVidPnTopology(
                      v30,
                      v11,
                      j,
                      *((_DWORD *)a2 + 8),
                      (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                      0xFFFFu,
                      0,
                      D3DKMDT_MCC_ENFORCE);
              v7 = v20;
              if ( v20 != -1071774975 )
              {
                if ( v20 < 0 )
                {
                  WdLogSingleEntry5(
                    2LL,
                    v20,
                    *((int *)v6 + 104),
                    *((unsigned int *)v6 + 103),
                    j,
                    *((unsigned int *)a2 + 8));
                  WdLogGlobalForLineNumber = 1416;
                  goto LABEL_34;
                }
                break;
              }
              v11 = v31;
            }
          }
          if ( j >= *(_DWORD *)(*((_QWORD *)v6 + 395) + 96LL) )
          {
            auto_rc<DMMVIDPN>::reset(&v28, 0LL);
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v29 + 40));
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
            v7 = -1071774975;
            goto LABEL_40;
          }
          v21 = *((_DWORD *)a2 + 8);
          v27 = 0;
          v26 = 0;
          v25 = 0;
          v7 = IsVirtualizationDisabledForTarget((_DWORD)v6, v21, (unsigned int)&v27, (unsigned int)&v26, (__int64)&v25);
          if ( v7 >= 0 )
          {
            v31 = 0LL;
            v22 = CCD_TOPOLOGY::AddPathDescriptor(this, (char *)a2 + 20, j);
            v7 = v22;
            if ( v22 >= 0 )
            {
              v23 = v31;
              LODWORD(v30) = 0;
              if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                          this,
                          (const struct _LUID *)v31 + 2,
                          *((_DWORD *)v31 + 7),
                          (unsigned int *)&v30) >= 0 )
              {
                CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, (unsigned int)v30);
                IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, (unsigned int)v30);
              }
              CDS_JOURNAL::_FillPathDescriptor(v23, a2, IsPrimaryClonePathByModality, 0, v6);
            }
            else
            {
              WdLogSingleEntry5(2LL, v22, *((int *)a2 + 6), *((unsigned int *)a2 + 5), j, *((unsigned int *)a2 + 8));
              WdLogGlobalForLineNumber = 1461;
            }
          }
          else
          {
            WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 8), v6);
            WdLogGlobalForLineNumber = 1439;
          }
        }
        else
        {
          WdLogSingleEntry5(
            2LL,
            ClientVidPn,
            v6,
            *((int *)v6 + 104),
            *((unsigned int *)v6 + 103),
            *((_QWORD *)this + 8));
          WdLogGlobalForLineNumber = 1333;
        }
LABEL_34:
        auto_rc<DMMVIDPN>::reset(&v28, 0LL);
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v29 + 40));
      }
      else
      {
        v7 = -1073741637;
        WdLogSingleEntry3(3LL, *((int *)a2 + 6), *((unsigned int *)a2 + 5), -1073741637LL);
        WdLogGlobalForLineNumber = 1316;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
    goto LABEL_40;
  }
  WdLogSingleEntry4(3LL, this, *((_QWORD *)this + 8), *((int *)a2 + 6), *((unsigned int *)a2 + 5));
  WdLogGlobalForLineNumber = 1297;
  v7 = -1073741810;
LABEL_40:
  BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO(&v32);
  return (unsigned int)v7;
}
