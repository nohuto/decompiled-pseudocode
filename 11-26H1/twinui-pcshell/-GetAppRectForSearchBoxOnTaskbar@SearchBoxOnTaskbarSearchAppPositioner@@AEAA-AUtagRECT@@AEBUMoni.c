/*
 * XREFs of ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x180240860
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180240A28 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180240F30 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     ?GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@HH_N@Z @ 0x180240960 (-GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMonitorInfo@.c)
 *     _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x1802409D0 (_anonymous_namespace_--GetInnerSearchBoxOffset.c)
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
  int v11; // ebx
  LONG v12; // ecx
  LONG v13; // ebx
  int v14; // ebx
  LONG v15; // eax
  LONG v16; // edx
  LONG v17; // ecx
  struct tagRECT v19; // [rsp+30h] [rbp-18h] BYREF

  v7 = *((_DWORD *)a3 + 20) == 2;
  *retstr = 0LL;
  if ( v7 )
  {
    v10 = 1;
    if ( !a7 )
    {
      if ( a4 )
      {
        v11 = *((_DWORD *)a3 + 17);
        v12 = anonymous_namespace_::GetInnerSearchBoxOffset(a3) + v11;
        v13 = v12 - (_DWORD)a5;
      }
      else
      {
        v14 = *((_DWORD *)a3 + 15);
        v13 = v14 - anonymous_namespace_::GetInnerSearchBoxOffset(a3);
        v12 = v13 + (_DWORD)a5;
      }
      retstr->right = v12;
      retstr->left = v13;
      v15 = *((_DWORD *)a3 + 3);
      retstr->bottom = v15;
      retstr->top = v15 - a6;
      return retstr;
    }
LABEL_13:
    *retstr = *SearchBoxOnTaskbarSearchAppPositioner::GetCenterModeSearchRect(this, &v19, a3, (int)a5, a6, v10);
    return retstr;
  }
  v10 = 0;
  if ( a7 || *((_DWORD *)a3 + 19) == 1 )
    goto LABEL_13;
  if ( a4 )
    v16 = *((_DWORD *)a3 + 2) - (_DWORD)a5;
  else
    v16 = *(_DWORD *)a3;
  v17 = *((_DWORD *)a3 + 7);
  v19.top = v17 - a6;
  v19.right = v16 + (_DWORD)a5;
  v19.left = v16;
  v19.bottom = v17;
  *retstr = v19;
  return retstr;
}
