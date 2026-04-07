/*
 * XREFs of ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180073458
 * Callers:
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18003A3B8 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAXPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800B9B80 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAXPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18000B03C (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 */

struct tagRECT *__fastcall CTopLevelWindow::GetLivePreviewWindowRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr)
{
  CTopLevelWindow::GetActualWindowRect(this, retstr, 0, 1, 1);
  if ( (*((_BYTE *)this + 184) & 4) == 0 )
  {
    retstr->left -= *((_DWORD *)this + 159);
    retstr->top -= *((_DWORD *)this + 161);
    retstr->right += *((_DWORD *)this + 160);
    retstr->bottom += *((_DWORD *)this + 162);
  }
  return retstr;
}
