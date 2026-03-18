/*
 * XREFs of ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140269D98
 * Callers:
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1401CD9F8 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x14026BB04 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x140269C0C (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1403185B0 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CCD_BTL::ConvertVidPnToPathsModality(
        CCD_BTL *this,
        struct DMMVIDPN *a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rdi
  int v8; // eax
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // eax
  unsigned int v13; // r14d
  int *v14; // [rsp+28h] [rbp-49h] BYREF
  unsigned __int16 v15; // [rsp+30h] [rbp-41h]
  int v16; // [rsp+38h] [rbp-39h] BYREF
  __int128 v17; // [rsp+40h] [rbp-31h]
  __int64 v18; // [rsp+50h] [rbp-21h]
  __int16 v19; // [rsp+58h] [rbp-19h]
  __int128 v20; // [rsp+60h] [rbp-11h]
  __int64 v21; // [rsp+70h] [rbp-1h]
  struct D3DKMT_GETPATHSMODALITY *v22; // [rsp+78h] [rbp+7h]
  bool v23; // [rsp+80h] [rbp+Fh]
  int v24; // [rsp+84h] [rbp+13h]
  int v25; // [rsp+88h] [rbp+17h]
  __int64 v26; // [rsp+8Ch] [rbp+1Bh]
  __int64 v27; // [rsp+98h] [rbp+27h]

  v3 = 0;
  if ( !a2 || !a3 || *a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1316;
  }
  v7 = *((unsigned __int16 *)a2 + 68);
  v8 = *((unsigned __int16 *)a2 + 68);
  if ( (unsigned __int16)v7 <= 1u )
    v8 = 1;
  v9 = (unsigned int)(296 * (v8 - 1) + 352);
  v10 = operator new[](v9, 0x63644356u, 256LL);
  *a3 = (struct D3DKMT_GETPATHSMODALITY *)v10;
  if ( v10 )
  {
    *(_WORD *)(v10 + 22) = v7;
    if ( (_WORD)v7 )
    {
      v22 = *a3;
      v16 = 0;
      v23 = v22 == 0LL;
      v18 = 0LL;
      v17 = 0LL;
      v19 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v24 = 0;
      v25 = 1;
      v26 = 0LL;
      v27 = 0LL;
      v14 = &v16;
      v15 = 0;
      v12 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v14, a2);
      v13 = v12;
      if ( v12 >= 0 )
      {
        if ( v22 )
          v3 = *((_WORD *)v22 + 10);
        if ( v3 < v15 )
          v13 = -1073741789;
        CCD_TOPOLOGY::AdjustDesktopLayout((CCD_TOPOLOGY *)&v16, 1);
      }
      else
      {
        WdLogSingleEntry3(2LL, v12, a2, v7);
        WdLogGlobalForLineNumber = 1359;
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v16);
      return v13;
    }
    else
    {
      WdLogSingleEntry3(7LL, this, a2, a3);
      result = 0LL;
      WdLogGlobalForLineNumber = 1345;
    }
  }
  else
  {
    WdLogSingleEntry3(6LL, (unsigned int)v9, a2, v7);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 1333;
  }
  return result;
}
