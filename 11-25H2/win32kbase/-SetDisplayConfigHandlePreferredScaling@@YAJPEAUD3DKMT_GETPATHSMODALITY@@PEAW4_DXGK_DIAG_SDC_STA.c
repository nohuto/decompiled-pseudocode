/*
 * XREFs of ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1401CCA14
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140112D64 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x140112EB4 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1401A238C (-ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1401CC5D8 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SetDisplayConfigHandlePreferredScaling(
        struct D3DKMT_GETPATHSMODALITY *a1,
        enum _DXGK_DIAG_SDC_STAGE *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int i; // edi
  const struct D3DKMT_GETPATHSMODALITY *Buffer; // [rsp+30h] [rbp+8h]

  if ( !*((_WORD *)a1 + 10) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14711;
  }
  Buffer = AllocPathsModality(*((_WORD *)a1 + 10));
  if ( Buffer )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v4);
    if ( (*(int (__fastcall **)(const struct D3DKMT_GETPATHSMODALITY *, struct D3DKMT_GETPATHSMODALITY *))(DxgkWin32kInterface + 592))(
           Buffer,
           a1) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 14723;
    }
    v8 = DxDdGetDxgkWin32kInterface(v7);
    if ( (*(int (__fastcall **)(__int64, const struct D3DKMT_GETPATHSMODALITY *))(v8 + 144))(47LL, Buffer) < 0 )
    {
      for ( i = 0;
            i < *((unsigned __int16 *)a1 + 10);
            ConvertPathPreferredScalingToAdapterDefault((struct D3DKMT_GETPATHSMODALITY *)((char *)a1 + 296 * i++ + 56)) )
      {
        ;
      }
    }
    else
    {
      v5 = ReplacePreferredScaling(Buffer, a1);
      if ( v5 < 0 )
      {
        *(_DWORD *)a2 = 20;
        goto LABEL_13;
      }
    }
    v5 = 0;
    goto LABEL_13;
  }
  *(_DWORD *)a2 = 19;
  v5 = -1073741801;
LABEL_13:
  FreePathsModality((char *)Buffer);
  return (unsigned int)v5;
}
