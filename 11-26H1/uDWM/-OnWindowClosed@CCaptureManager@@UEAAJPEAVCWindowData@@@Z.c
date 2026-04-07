/*
 * XREFs of ?OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x18007EC90
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18001B1F0 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?_RemoveSecondaryWindowFromWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x180066260 (-_RemoveSecondaryWindowFromWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x18009BEB4 (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?erase@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@@Z @ 0x1800A6B28 (-erase@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTERED_WINDOW@.c)
 *     ?erase@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@@Z @ 0x1800A6BD4 (-erase@-$vector@U_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformation@@@std@.c)
 */

__int64 __fastcall CCaptureManager::OnWindowClosed(CCaptureManager *this, struct CWindowData *a2)
{
  __int64 **v4; // rdi
  __int64 **i; // rbx
  unsigned __int64 v6; // rcx
  __int64 *v7; // r8
  unsigned __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r15
  int v12; // eax
  unsigned int v13; // r14d
  int v14; // eax
  unsigned int v15; // esi
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v21; // [rsp+68h] [rbp+10h] BYREF
  char v22; // [rsp+70h] [rbp+18h] BYREF

  if ( *((_DWORD *)a2 + 115) )
  {
    v4 = (__int64 **)*((_QWORD *)this + 26);
    for ( i = (__int64 **)*v4; i != v4; i = (__int64 **)*i )
    {
      v6 = 0LL;
      v7 = i[11];
      v8 = ((char *)i[12] - (char *)v7) >> 4;
      if ( v8 )
      {
        v9 = i[11];
        while ( *v9 != *((_QWORD *)a2 + 5) )
        {
          ++v6;
          v9 += 2;
          if ( v6 >= v8 )
            goto LABEL_12;
        }
        if ( (v6 & 0x80000000) == 0LL )
        {
          v10 = (int)v6;
          v11 = 2LL * (int)v6;
          v12 = CContainerVisualProxy::RemoveChild((CContainerVisualProxy *)i[10], (struct CVisualProxy *)v7[v11 + 1]);
          v13 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4C6,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
              (const char *)(unsigned int)v12,
              v19);
            return v13;
          }
          std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::erase(i + 11, &v21, &i[11][v11]);
          std::vector<_DWMCaptureWindowInformation>::erase(i + 14, &v22, &i[14][4 * v10]);
          --*((_DWORD *)a2 + 115);
          v14 = CCaptureControllerProxy::SetWindowInfos(
                  (CCaptureControllerProxy *)i[4],
                  (const struct _DWMCaptureWindowInformation *)i[14],
                  ((char *)i[15] - (char *)i[14]) >> 5);
          v15 = v14;
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4CC,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
              (const char *)(unsigned int)v14,
              v19);
            return v15;
          }
        }
      }
LABEL_12:
      ;
    }
  }
  v17 = CCaptureManager::_RemoveSecondaryWindowFromWindowCaptures(this, a2);
  v18 = v17;
  if ( v17 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D1,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)v17,
    v19);
  return v18;
}
