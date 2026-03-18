/*
 * XREFs of ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x14026C394
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x140337350 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14018C814 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1401907B8 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     DxgkIsMonitorConnected @ 0x1401B6B20 (DxgkIsMonitorConnected.c)
 *     _lambda_58ec37c2392282bb0e6e3e53197351b6_::operator() @ 0x14026B94C (_lambda_58ec37c2392282bb0e6e3e53197351b6_--operator().c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026BCB4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x14026CA50 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x14026CA8C (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026CB5C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026CC18 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1402AC310 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1403200E0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14033D260 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403AE090 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403AE120 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1403DAF18 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x140424A4C (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x14042BAD8 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(BTL_TOPOLOGY_CONSTRUCTOR *this, unsigned int *a2)
{
  unsigned int v2; // r15d
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  __int128 v8; // xmm0
  int v9; // r12d
  unsigned __int16 v10; // r13
  DXGPROCESS *Current; // rax
  struct CCD_BTL *v12; // rax
  unsigned int v13; // r14d
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  unsigned int v17; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rcx
  __int64 v19; // rax
  __int128 v20; // xmm1
  unsigned int v21; // r14d
  unsigned int j; // r14d
  unsigned __int16 v23; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // r15
  unsigned int k; // edi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rax
  unsigned int v27; // edi
  CCD_TOPOLOGY *v28; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // r14
  bool *v30; // r15
  const struct _LUID *v31; // r13
  int IsVirtualizationDisabledForTarget; // eax
  bool v33; // cl
  bool v34; // zf
  bool v35; // al
  int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  CCD_TOPOLOGY *v39; // rcx
  int v40; // esi
  _WORD *v41; // r13
  int v42; // eax
  CCD_TOPOLOGY *v43; // rcx
  int v44; // esi
  int v45; // eax
  CCD_TOPOLOGY *v46; // rax
  CCD_TOPOLOGY *v47; // rcx
  __int16 v49; // [rsp+40h] [rbp-89h]
  __int128 v50; // [rsp+58h] [rbp-71h]
  __int128 v51; // [rsp+68h] [rbp-61h]
  _BYTE v52[64]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-9h]
  CCD_TOPOLOGY *i; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned __int16 v55; // [rsp+140h] [rbp+77h]
  _BYTE *v56; // [rsp+148h] [rbp+7Fh]

  v2 = 0;
  *a2 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304952)
    || (v7 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(this), v7 < 0) )
  {
    v8 = *(_OWORD *)((char *)this + 12);
    v9 = *((_DWORD *)this + 15);
    LODWORD(v56) = v9;
    v50 = *(_OWORD *)((char *)this + 28);
    v51 = *(_OWORD *)((char *)this + 44);
    v55 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(this);
    v49 = v55;
    v10 = v55;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v52, 8u, 0);
    Current = DXGPROCESS::GetCurrent();
    if ( DXGPROCESS::IsRemoteConnection(Current)
      || (v12 = CCD_BTL::Global(),
          (int)CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v52, (struct CCD_BTL *)((char *)v12 + 8)) >= 0) )
    {
      *a2 = 0;
      v13 = 0;
LABEL_7:
      v14 = v53;
      while ( 1 )
      {
        v15 = v14 ? *(_WORD *)(v14 + 20) : 0;
        if ( v2 >= v15 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v52, v2);
        LOBYTE(i) = 0;
        if ( (int)DxgkIsMonitorConnected(
                    *(struct _LUID *)((char *)PathDescriptor + 16),
                    *((_DWORD *)PathDescriptor + 7),
                    0,
                    0,
                    (unsigned __int8 *)&i) >= 0
          && (_BYTE)i )
        {
          v17 = *a2;
          *((_QWORD *)PathDescriptor + 1) = 0LL;
          if ( v2 != v17 )
          {
            v18 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v52, v17);
            v19 = 2LL;
            do
            {
              *(_OWORD *)v18 = *(_OWORD *)PathDescriptor;
              *((_OWORD *)v18 + 1) = *((_OWORD *)PathDescriptor + 1);
              *((_OWORD *)v18 + 2) = *((_OWORD *)PathDescriptor + 2);
              *((_OWORD *)v18 + 3) = *((_OWORD *)PathDescriptor + 3);
              *((_OWORD *)v18 + 4) = *((_OWORD *)PathDescriptor + 4);
              *((_OWORD *)v18 + 5) = *((_OWORD *)PathDescriptor + 5);
              *((_OWORD *)v18 + 6) = *((_OWORD *)PathDescriptor + 6);
              v18 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v18 + 128);
              v20 = *((_OWORD *)PathDescriptor + 7);
              PathDescriptor = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)PathDescriptor + 128);
              *((_OWORD *)v18 - 1) = v20;
              --v19;
            }
            while ( v19 );
            *(_OWORD *)v18 = *(_OWORD *)PathDescriptor;
            *((_OWORD *)v18 + 1) = *((_OWORD *)PathDescriptor + 1);
            *((_QWORD *)v18 + 4) = *((_QWORD *)PathDescriptor + 4);
          }
          v13 = ++*a2;
          ++v2;
          goto LABEL_7;
        }
        v21 = 0;
        for ( i = (CCD_TOPOLOGY *)v52; v21 < *a2; ++v21 )
          lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()(&i, (__int64)PathDescriptor, v21);
        for ( j = ++v2; ; ++j )
        {
          v14 = v53;
          v23 = v53 ? *(_WORD *)(v53 + 20) : 0;
          if ( j >= v23 )
            break;
          lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()(&i, (__int64)PathDescriptor, j);
        }
        v13 = *a2;
      }
      v10 = v55;
      v9 = (int)v56;
      *(_WORD *)(v14 + 20) = *(_WORD *)a2;
      if ( v13 )
      {
        do
        {
          v24 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v52, v13 - 1);
          if ( (*(_QWORD *)v24 & 0x4000000000000LL) != 0 )
          {
            for ( k = 0; k < v13; ++k )
            {
              v26 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v52, k);
              if ( (*(_QWORD *)v26 & 0x4000000000000LL) != 0 && *((_DWORD *)v24 + 46) == *((_DWORD *)v26 + 46) )
              {
                v27 = k | 0xFE530000;
                goto LABEL_37;
              }
            }
          }
          else
          {
            v27 = (v13 - 1) | 0xFE530000;
            *(_QWORD *)v24 |= 0x4000000000000uLL;
LABEL_37:
            *((_DWORD *)v24 + 46) = v27;
          }
          --v13;
        }
        while ( v13 );
        v10 = v55;
      }
      if ( *a2 && (unsigned __int16)(v49 - 1) > 1u )
      {
        v28 = *(CCD_TOPOLOGY **)this;
        *((_WORD *)this + 4) = *(_WORD *)a2;
        if ( (int)CCD_TOPOLOGY::CopyInheritScope(v28, (const struct CCD_TOPOLOGY *)v52) >= 0 )
        {
          if ( *a2 != 1 )
            v49 = 4;
          v29 = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, 0);
          v30 = (bool *)this + 60;
          v31 = (const struct _LUID *)((char *)v29 + 16);
          *(_QWORD *)((char *)this + 12) = *((_QWORD *)v29 + 2);
          *((_DWORD *)this + 5) = *((_DWORD *)v29 + 6);
          *((_DWORD *)this + 6) = *((_DWORD *)v29 + 7);
          *((_DWORD *)this + 7) = *((_DWORD *)v29 + 22);
          *((_DWORD *)this + 8) = *((_DWORD *)v29 + 23);
          IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                                *(struct _LUID *)((char *)v29 + 16),
                                                *((_DWORD *)v29 + 7),
                                                (__int64)this + 54,
                                                0LL,
                                                0LL,
                                                0LL);
          if ( IsVirtualizationDisabledForTarget >= 0 )
          {
            v33 = *v30;
            v34 = !*v30;
            *((_BYTE *)this + 53) = *((_BYTE *)this + 53) == 0;
            *v30 = v34;
            *((_BYTE *)this + 54) = *((_BYTE *)this + 54) == 0;
            *((_BYTE *)this + 11) = v49 == 3;
            v35 = v49 == 3 && !v33;
            *((_BYTE *)this + 10) = v35;
            if ( v33 && v49 == 3 )
            {
              *((_BYTE *)this + 10) = 0;
              v36 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
                      (CCD_TOPOLOGY **)this,
                      0,
                      v31,
                      *((_DWORD *)v29 + 6));
              v7 = v36;
              if ( v36 >= 0 )
              {
                if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v29 + 22)) )
                {
                  v37 = *(_QWORD *)(*(_QWORD *)this + 64LL);
                  if ( v37 )
                  {
                    if ( *(_WORD *)(v37 + 20) >= 2u )
                      CCD_TOPOLOGY::SwapPathsDescriptors(*(CCD_TOPOLOGY **)this, 0, 1u);
                  }
                }
                goto LABEL_80;
              }
              WdLogSingleEntry5(
                2LL,
                v36,
                *((int *)v29 + 5),
                *((unsigned int *)v29 + 4),
                *((unsigned int *)v29 + 6),
                *(_QWORD *)(*(_QWORD *)this + 64LL));
              WdLogGlobalForLineNumber = 1458;
            }
            else
            {
              v38 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, 0);
              v7 = v38;
              if ( v38 >= 0 )
                goto LABEL_80;
              WdLogSingleEntry4(2LL, *((unsigned int *)v29 + 7), *((int *)v29 + 5), *((unsigned int *)v29 + 4), v38);
              WdLogGlobalForLineNumber = 1440;
            }
          }
          else
          {
            WdLogSingleEntry4(
              2LL,
              *((unsigned int *)v29 + 7),
              *((int *)v29 + 5),
              v31->LowPart,
              IsVirtualizationDisabledForTarget);
            WdLogGlobalForLineNumber = 1419;
          }
          v10 = v55;
          v9 = (int)v56;
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1362;
        }
      }
    }
    v39 = *(CCD_TOPOLOGY **)this;
    *a2 = 0;
    *(_OWORD *)((char *)this + 12) = v8;
    *((_WORD *)this + 4) = 0;
    *((_BYTE *)this + 10) = 0;
    *(_OWORD *)((char *)this + 28) = v50;
    *(_OWORD *)((char *)this + 44) = v51;
    *((_DWORD *)this + 15) = v9;
    *((_BYTE *)this + 11) = 0;
    CCD_TOPOLOGY::Clear(v39);
    v40 = v10;
    switch ( v10 )
    {
      case 1u:
        v42 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
        break;
      case 2u:
        v42 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
        break;
      case 3u:
        v42 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
        break;
      default:
        if ( (unsigned int)v10 - 4 >= 2 )
        {
          WdLogSingleEntry1(1LL);
          WdLogGlobalForLineNumber = 1515;
          v7 = -1073741823;
          i = (BTL_TOPOLOGY_CONSTRUCTOR *)((char *)this + 10);
          v41 = (_WORD *)((char *)this + 8);
          v56 = (char *)this + 11;
LABEL_74:
          v43 = *(CCD_TOPOLOGY **)this;
          *((_WORD *)this + 4) = 0;
          *((_BYTE *)this + 10) = 0;
          *((_BYTE *)this + 11) = 0;
          CCD_TOPOLOGY::Clear(v43);
          v44 = v40 - 3;
          if ( v44 )
          {
            if ( (unsigned int)(v44 - 1) > 1 )
            {
LABEL_79:
              WdLogSingleEntry3(3LL, v7, *(_QWORD *)this, v55);
              v46 = i;
              v47 = *(CCD_TOPOLOGY **)this;
              WdLogGlobalForLineNumber = 1548;
              *v41 = 0;
              *(_BYTE *)v46 = 0;
              *v56 = 0;
              CCD_TOPOLOGY::Clear(v47);
              v7 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
              goto LABEL_80;
            }
            v45 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
          }
          else
          {
            v45 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
          }
          v7 = v45;
          if ( v45 < 0 )
            goto LABEL_79;
LABEL_80:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v52);
          return (unsigned int)v7;
        }
        v7 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
        v41 = (_WORD *)((char *)this + 8);
        i = (BTL_TOPOLOGY_CONSTRUCTOR *)((char *)this + 10);
        v56 = (char *)this + 11;
LABEL_73:
        if ( v7 >= 0 )
          goto LABEL_80;
        goto LABEL_74;
    }
    v7 = v42;
    i = (BTL_TOPOLOGY_CONSTRUCTOR *)((char *)this + 10);
    v41 = (_WORD *)((char *)this + 8);
    v56 = (char *)this + 11;
    goto LABEL_73;
  }
  WdLogNewEntry5_WdTrace(v6, v5);
  WdLogGlobalForLineNumber = 1104;
  return (unsigned int)v7;
}
