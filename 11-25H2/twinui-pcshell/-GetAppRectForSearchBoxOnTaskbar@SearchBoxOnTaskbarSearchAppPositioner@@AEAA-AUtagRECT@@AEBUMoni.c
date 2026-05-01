/*
 * XREFs of ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x18024C914
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x18024CACC (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x18024CF80 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     ?GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@HH_N@Z @ 0x18024CA04 (-GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMonitorInfo@.c)
 *     _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x18024CA74 (_anonymous_namespace_--GetInnerSearchBoxOffset.c)
 */

struct tagRECT *__fastcall SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        struct tagRECT *__return_ptr retstr,
        const struct MonitorInfo *a3,
        char a4,
        struct MonitorInfo *a5,
        int a6,
        bool a7)
{
  bool v7; // zf
  bool v10; // al
  LONG v11; // edx
  LONG v12; // ecx
  LONG v13; // eax
  LONG v14; // edx
  LONG v15; // ecx
  struct tagRECT v17; // [rsp+30h] [rbp-18h] BYREF

  v7 = *((_DWORD *)a3 + 20) == 2;
  *retstr = 0LL;
  if ( v7 )
  {
    v10 = 1;
    if ( !a7 )
    {
      if ( a4 )
      {
        v11 = anonymous_namespace_::GetInnerSearchBoxOffset(a3) + *((_DWORD *)a3 + 17);
        v12 = v11 - (_DWORD)a5;
      }
      else
      {
        v12 = *((_DWORD *)a3 + 15) - anonymous_namespace_::GetInnerSearchBoxOffset(a3);
        v11 = v12 + (_DWORD)a5;
      }
      retstr->right = v11;
      retstr->left = v12;
      v13 = *((_DWORD *)a3 + 3);
      retstr->bottom = v13;
      retstr->top = v13 - a6;
      return retstr;
    }
LABEL_13:
    *retstr = *SearchBoxOnTaskbarSearchAppPositioner::GetCenterModeSearchRect(this, &v17, a3, (int)a5, a6, v10);
    return retstr;
  }
  v10 = 0;
  if ( a7 || *((_DWORD *)a3 + 19) == 1 )
    goto LABEL_13;
  if ( a4 )
    v14 = *((_DWORD *)a3 + 2) - (_DWORD)a5;
  else
    v14 = *(_DWORD *)a3;
  v15 = *((_DWORD *)a3 + 7);
  v17.top = v15 - a6;
  v17.right = v14 + (_DWORD)a5;
  v17.left = v14;
  v17.bottom = v15;
  *retstr = v17;
  return retstr;
}
