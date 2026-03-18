/*
 * XREFs of ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1403D7540
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1403D6DA0 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x14005E030 (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1401907B8 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x14026938C (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x140269420 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x14026A1FC (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1402ABFFC (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x140318E54 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x140318FCC (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x140319BB8 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14033D124 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1403DAF18 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1940::__AUTO_USING_PM_PathChangeReason1940 @ 0x1404161AC (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1940--__AUTO.c)
 */

__int64 __fastcall CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
        CCD_TOPOLOGY *this,
        int a2,
        unsigned int a3,
        struct CCD_MODE_RESULT_SET *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v15; // esi
  unsigned int i; // edx
  unsigned __int16 v17; // ax
  __int64 v18; // rax
  unsigned __int16 v19; // di
  __int64 v20; // rdx
  __int64 v21; // rcx
  int Active; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int j; // edi
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  DXGGLOBAL *Global; // rax
  __int64 v29; // r14
  struct DXGADAPTER *v30; // rax
  __int64 v31; // r15
  unsigned __int8 v32; // r12
  DXGADAPTER *v33; // rdx
  CCD_TOPOLOGY *v34; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // r12
  int v38; // r14d
  __int64 v39; // r13
  __int64 v40; // r15
  int PathModeListForAdapter; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  _DWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // [rsp+38h] [rbp-59h] BYREF
  int v47; // [rsp+40h] [rbp-51h]
  _BYTE v48[160]; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v49; // [rsp+F8h] [rbp+67h] BYREF
  int v50; // [rsp+100h] [rbp+6Fh]
  struct CCD_MODE_RESULT_SET *v51; // [rsp+110h] [rbp+7Fh]

  v51 = a4;
  v50 = a2;
  CCD_TOPOLOGY::SwapPathsDescriptors(this, a3, *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) - 1);
  v5 = *((_QWORD *)this + 8);
  v6 = *(unsigned __int16 *)(v5 + 20);
  v7 = v5 + 56;
  v46 = v5 + 56;
  v47 = v6;
  if ( (_DWORD)v6 )
  {
    v8 = (_DWORD *)(v5 + 312);
    v9 = (unsigned int)v6;
    do
    {
      *v8 |= 1u;
      v8[1] = 0;
      v8 += 74;
      --v9;
    }
    while ( v9 );
  }
  v10 = *((_QWORD *)this + 8);
  if ( v10 && *(_WORD *)(v10 + 20) )
  {
    CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
    v11 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
    v12 = *((_QWORD *)this + 8);
    LODWORD(v13) = v11;
    if ( v11 >= 0 )
    {
      v15 = 0;
      for ( i = 0; ; ++i )
      {
        v17 = v12 ? *(_WORD *)(v12 + 20) : 0;
        if ( i >= (unsigned int)v17 - 1 )
          break;
        v18 = 296LL * i;
        if ( *(_BYTE *)(v18 + v12 + 185) )
        {
          if ( (*(_DWORD *)(v18 + v12 + 56) & 0x20101) == 0x20000LL )
            v15 = 1;
        }
      }
      if ( v15 )
      {
        v19 = 8;
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v48, 8u, 0);
        LOWORD(v49) = 8;
        while ( 1 )
        {
          if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v48, v19) < v19 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20);
            v36[3] = v19;
            v36[4] = this;
            v24 = *((_QWORD *)this + 8);
            v36[5] = v24;
            WdLogGlobalForLineNumber = 2012;
            goto LABEL_38;
          }
          Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v48, 1, 0, 1, (unsigned __int16 *)&v49);
          if ( Active != -1073741789 )
            break;
          v19 = v49;
        }
        if ( Active >= 0 )
        {
          for ( j = 0; ; ++j )
          {
            v26 = *((_QWORD *)this + 8);
            v27 = v26 ? *(_WORD *)(v26 + 20) : 0;
            if ( j >= (unsigned int)v27 - 1 )
              break;
            Global = DXGGLOBAL::GetGlobal();
            v29 = 296LL * j;
            v30 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(v29 + *((_QWORD *)this + 8) + 72), &v49);
            if ( !v30 )
              goto LABEL_39;
            v31 = *((_QWORD *)v30 + 396);
            v32 = ADAPTER_DISPLAY::ForceIHVScaling(*((ADAPTER_DISPLAY **)v30 + 395));
            DXGADAPTER::ReleaseReference(v33);
            v34 = (CCD_TOPOLOGY *)*((_QWORD *)this + 8);
            if ( *((_BYTE *)v34 + v29 + 185) )
            {
              if ( v31 )
              {
                if ( !v32 )
                {
                  v35 = (CCD_TOPOLOGY *)((char *)v34 + v29 + 56);
                  if ( (*(_DWORD *)v35 & 0x20101) == 0x20000LL )
                    CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v34, v35, (const struct CCD_TOPOLOGY *)v48);
                }
              }
            }
          }
          goto LABEL_40;
        }
LABEL_38:
        WdLogNewEntry5_WdTrace(v24, v23);
        WdLogGlobalForLineNumber = 2024;
LABEL_39:
        v15 = 0;
LABEL_40:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v48);
      }
      CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
      v37 = *((_QWORD *)this + 8);
      v38 = 0;
      v39 = 296LL * *(unsigned __int16 *)(v37 + 20);
      v40 = v37 + v39;
      while ( 1 )
      {
        PathModeListForAdapter = BmlGetPathModeListForAdapter(
                                   *((_QWORD *)this + 8),
                                   *(struct _LUID *)(v40 - 224),
                                   *((_DWORD *)this + 19) & 1,
                                   *((_DWORD *)this + 20),
                                   v50,
                                   (__int64)v51);
        v13 = PathModeListForAdapter;
        if ( PathModeListForAdapter != -1071774970 )
          break;
        if ( !v15
          || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                              this,
                              (const struct _LUID *)(v40 - 224))
          || v38 )
        {
          goto LABEL_49;
        }
        v38 = 1;
        WdLogNewEntry5_WdTrace(v43, v42);
        WdLogGlobalForLineNumber = 2096;
      }
      if ( PathModeListForAdapter >= 0 )
      {
        CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
        goto LABEL_8;
      }
LABEL_49:
      WdLogSingleEntry5(
        2LL,
        v13,
        *((_QWORD *)this + 8),
        *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) - 1LL,
        *(int *)(v37 + v39 - 220),
        *(unsigned int *)(v40 - 224));
      WdLogGlobalForLineNumber = 2119;
    }
    else
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v11);
      WdLogGlobalForLineNumber = 1964;
    }
LABEL_8:
    CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1940::__AUTO_USING_PM_PathChangeReason1940(&v46);
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry2(3LL, this, v10);
    WdLogGlobalForLineNumber = 1946;
    if ( (_DWORD)v6 )
    {
      v44 = (_DWORD *)(v7 + 256);
      v45 = v6;
      do
      {
        v44[1] = 0;
        *v44 &= ~1u;
        v44 += 74;
        --v45;
      }
      while ( v45 );
    }
    return 3221225473LL;
  }
}
