/*
 * XREFs of ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1401F6320
 * Callers:
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002DDE8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x14002E698 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1401C69BC (-ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1401F5F98 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SetDisplayConfigHandlePreferredScaling(
        struct D3DKMT_GETPATHSMODALITY *a1,
        enum _DXGK_DIAG_SDC_STAGE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  const struct D3DKMT_GETPATHSMODALITY *v6; // rdi
  int v7; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int i; // esi

  if ( !*((_WORD *)a1 + 10) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14567;
  }
  v6 = AllocPathsModality(*((_WORD *)a1 + 10));
  if ( v6 )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
    if ( (*(int (__fastcall **)(const struct D3DKMT_GETPATHSMODALITY *, struct D3DKMT_GETPATHSMODALITY *))(DxgkWin32kInterface + 592))(
           v6,
           a1) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 14579;
    }
    v11 = DxDdGetDxgkWin32kInterface(v10, v9);
    if ( (*(int (__fastcall **)(__int64, const struct D3DKMT_GETPATHSMODALITY *))(v11 + 144))(47LL, v6) < 0 )
    {
      for ( i = 0;
            i < *((unsigned __int16 *)a1 + 10);
            ConvertPathPreferredScalingToAdapterDefault(
              (struct D3DKMT_GETPATHSMODALITY *)((char *)a1 + 296 * i++ + 56),
              v4) )
      {
        ;
      }
    }
    else
    {
      v7 = ReplacePreferredScaling(v6, a1);
      if ( v7 < 0 )
      {
        *(_DWORD *)a2 = 20;
        goto LABEL_13;
      }
    }
    v7 = 0;
    goto LABEL_13;
  }
  *(_DWORD *)a2 = 19;
  v7 = -1073741801;
LABEL_13:
  FreePathsModality(v6, v4);
  return (unsigned int)v7;
}
