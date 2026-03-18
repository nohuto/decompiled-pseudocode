/*
 * XREFs of ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1403195E0
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140319388 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x14005E030 (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x14026938C (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x140269420 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1402ABFFC (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?IsAdaptersFirstPathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140317EDC (-IsAdaptersFirstPathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140317F38 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1403185B0 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x140318DA0 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x140318E54 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x140318FCC (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x140319B58 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x140319BB8 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14033D124 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x14037F438 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1403DAF18 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1940::__AUTO_USING_PM_PathChangeReason1940 @ 0x1404161AC (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1940--__AUTO.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, int a2, bool a3)
{
  __int64 v3; // rax
  int v4; // r12d
  __int64 v7; // rdi
  __int64 v8; // r13
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // r15d
  unsigned int i; // edx
  unsigned __int16 v17; // ax
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int k; // esi
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // rax
  __int64 v25; // rcx
  _DWORD *v27; // rcx
  __int64 v28; // rax
  _DWORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int PathModalityForAdapter; // eax
  __int64 v33; // r14
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // rcx
  unsigned __int16 v40; // si
  __int64 v41; // rdx
  __int64 v42; // rcx
  int Active; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int j; // esi
  __int64 v47; // rcx
  __int64 v48; // r14
  __int64 v49; // rdx
  CCD_TOPOLOGY *v50; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // [rsp+30h] [rbp-59h] BYREF
  int v56; // [rsp+38h] [rbp-51h]
  _BYTE v57[160]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v58; // [rsp+F0h] [rbp+67h] BYREF
  int v59; // [rsp+F8h] [rbp+6Fh]

  v59 = a2;
  v3 = *((_QWORD *)this + 8);
  v4 = 0;
  v7 = *(unsigned __int16 *)(v3 + 20);
  v8 = v3 + 56;
  v55 = v3 + 56;
  v56 = v7;
  if ( (_DWORD)v7 )
  {
    v9 = (_DWORD *)(v3 + 312);
    v10 = (unsigned int)v7;
    do
    {
      *v9 |= 1u;
      v9[1] = 0;
      v9 += 74;
      --v10;
    }
    while ( v10 );
  }
  v11 = *((_QWORD *)this + 8);
  if ( !v11 || !*(_WORD *)(v11 + 20) )
  {
    WdLogSingleEntry2(3LL, this, v11);
    WdLogGlobalForLineNumber = 1648;
    if ( (_DWORD)v7 )
    {
      v38 = (_DWORD *)(v8 + 256);
      v39 = v7;
      do
      {
        v38[1] = 0;
        *v38 &= ~1u;
        v38 += 74;
        --v39;
      }
      while ( v39 );
    }
    return 3221225473LL;
  }
  CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
  v12 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
  v13 = *((_QWORD *)this + 8);
  v14 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v12);
    WdLogGlobalForLineNumber = 1666;
    CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1940::__AUTO_USING_PM_PathChangeReason1940(&v55);
    return v14;
  }
  v15 = 0;
  for ( i = 0; ; ++i )
  {
    v17 = v13 ? *(_WORD *)(v13 + 20) : 0;
    if ( i >= v17 )
      break;
    v36 = 296LL * i;
    if ( *(_BYTE *)(v36 + v13 + 185) )
    {
      v37 = *(_QWORD *)(v36 + v13 + 56);
      if ( (v37 & 0x101) == 0 && (v37 & 0x20000) != 0 )
        v15 = 1;
    }
  }
  if ( !v15 )
    goto LABEL_12;
  v40 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v57, 8u, 0);
  LOWORD(v58) = 8;
  while ( 1 )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v57, v40) < v40 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v41);
      v52[3] = v40;
      v52[4] = this;
      v45 = *((_QWORD *)this + 8);
      v52[5] = v45;
      WdLogGlobalForLineNumber = 1714;
      goto LABEL_67;
    }
    Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v57, 1, a3, 1, (unsigned __int16 *)&v58);
    if ( Active != -1073741789 )
      break;
    v40 = v58;
  }
  if ( Active < 0 )
  {
LABEL_67:
    WdLogNewEntry5_WdTrace(v45, v44);
    WdLogGlobalForLineNumber = 1726;
    v15 = 0;
    goto LABEL_68;
  }
  for ( j = 0; ; ++j )
  {
    v47 = *((_QWORD *)this + 8);
    if ( j >= *(unsigned __int16 *)(v47 + 20) )
      break;
    v48 = 296LL * j;
    v55 = 0LL;
    if ( !DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v55, (const struct _LUID *)(v48 + v47 + 72)) )
    {
      v15 = 0;
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v55, 0LL);
      break;
    }
    if ( *(_BYTE *)(v48 + *((_QWORD *)this + 8) + 185) )
    {
      if ( *(_QWORD *)(v55 + 3168) )
      {
        if ( !ADAPTER_DISPLAY::ForceIHVScaling(*(ADAPTER_DISPLAY **)(v55 + 3160)) )
        {
          v51 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v48 + v49 + 56);
          if ( (*(_DWORD *)v51 & 0x20101) == 0x20000LL )
            CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v50, v51, (const struct CCD_TOPOLOGY *)v57);
        }
      }
    }
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v55, 0LL);
  }
LABEL_68:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v57);
LABEL_12:
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
  v18 = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) = 0;
  v19 = *((_QWORD *)this + 8);
  if ( *(_WORD *)(v19 + 20) )
  {
    do
    {
      v20 = v18++;
      *(_DWORD *)(296 * v20 + v19 + 276) = 0;
      v19 = *((_QWORD *)this + 8);
    }
    while ( v18 < *(unsigned __int16 *)(v19 + 20) );
  }
  for ( k = 0; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
  {
    if ( CCD_TOPOLOGY::IsAdaptersFirstPathByModality(this, k) )
    {
      v31 = 296LL * k;
      v58 = v31;
      while ( 1 )
      {
        PathModalityForAdapter = BmlGetPathModalityForAdapter(
                                   *((_QWORD *)this + 8),
                                   (const struct _LUID *)(v31 + *((_QWORD *)this + 8) + 72LL),
                                   *((_DWORD *)this + 19) & 1,
                                   *((_DWORD *)this + 20),
                                   v59);
        v33 = PathModalityForAdapter;
        if ( PathModalityForAdapter != -1071774970 )
          break;
        if ( !v15
          || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                              this,
                              (const struct _LUID *)(v58 + 72 + *((_QWORD *)this + 8)))
          || v4 )
        {
          goto LABEL_35;
        }
        v4 = 1;
        WdLogNewEntry5_WdTrace(v54, v53);
        v31 = v58;
        WdLogGlobalForLineNumber = 1824;
      }
      v4 = 0;
      if ( PathModalityForAdapter >= 0 )
        continue;
LABEL_35:
      WdLogSingleEntry5(
        2LL,
        v33,
        *((_QWORD *)this + 8),
        k,
        *(int *)(296LL * k + *((_QWORD *)this + 8) + 76),
        *(unsigned int *)(296LL * k + *((_QWORD *)this + 8) + 72));
      WdLogGlobalForLineNumber = 1847;
      if ( (_DWORD)v7 )
      {
        v34 = (_DWORD *)(v8 + 256);
        v35 = v7;
        do
        {
          v34[1] = 0;
          *v34 &= ~1u;
          v34 += 74;
          --v35;
        }
        while ( v35 );
      }
      return (unsigned int)v33;
    }
  }
  CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000uLL);
  v22 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
  v14 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v22);
    WdLogGlobalForLineNumber = 1876;
    if ( (_DWORD)v7 )
    {
      v29 = (_DWORD *)(v8 + 256);
      v30 = v7;
      do
      {
        v29[1] = 0;
        *v29 &= ~1u;
        v29 += 74;
        --v30;
      }
      while ( v30 );
    }
  }
  else
  {
    CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000uLL);
    v23 = CCD_TOPOLOGY::AdjustDesktopLayout(this, 0);
    v14 = v23;
    if ( v23 >= 0 )
    {
      CCD_TOPOLOGY::FillScalingIntent(this);
      CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
      if ( (_DWORD)v7 )
      {
        v24 = (_DWORD *)(v8 + 256);
        v25 = v7;
        do
        {
          v24[1] = 0;
          *v24 &= ~1u;
          v24 += 74;
          --v25;
        }
        while ( v25 );
      }
      return 0LL;
    }
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v23);
    WdLogGlobalForLineNumber = 1894;
    if ( (_DWORD)v7 )
    {
      v27 = (_DWORD *)(v8 + 256);
      v28 = v7;
      do
      {
        v27[1] = 0;
        *v27 &= ~1u;
        v27 += 74;
        --v28;
      }
      while ( v28 );
    }
  }
  return v14;
}
