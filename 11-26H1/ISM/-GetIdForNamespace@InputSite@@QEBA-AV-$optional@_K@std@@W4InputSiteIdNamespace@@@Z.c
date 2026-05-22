/*
 * XREFs of ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18001E8F0
 * Callers:
 *     ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x1800A92B0 (-UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x180101558 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 *     ?TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z @ 0x180135730 (-TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z.c)
 *     ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x180154034 (-GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputSite::GetIdForNamespace(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 i; // rax
  __int128 v6; // [rsp+0h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 24);
  for ( i = *(_QWORD *)(a1 + 16); i != v3; i += 16LL )
  {
    if ( *(_DWORD *)i == a3 )
      break;
  }
  *(_BYTE *)(a2 + 8) = 0;
  if ( i != v3 )
  {
    *(_QWORD *)&v6 = *(_QWORD *)(i + 8);
    BYTE8(v6) = 1;
    *(_OWORD *)a2 = v6;
  }
  return a2;
}
