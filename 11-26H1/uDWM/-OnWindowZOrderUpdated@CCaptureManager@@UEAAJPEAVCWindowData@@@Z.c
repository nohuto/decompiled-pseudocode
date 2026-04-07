/*
 * XREFs of ?OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180069330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18001B1F0 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x18009BEB4 (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800A466C (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 *     ?erase@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@@Z @ 0x1800A6B28 (-erase@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTERED_WINDOW@.c)
 *     ?erase@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@@Z @ 0x1800A6BD4 (-erase@-$vector@U_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformation@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::OnWindowZOrderUpdated(CCaptureManager *this, struct CWindowData *a2)
{
  __int64 **v4; // rdi
  __int64 **v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 *v7; // r9
  __int64 *i; // r8
  __int64 v9; // rsi
  __int64 v10; // r12
  CBaseObject *v11; // rcx
  int v12; // eax
  int v13; // ebp
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rdx
  int v18[2]; // [rsp+20h] [rbp-48h] BYREF
  CBaseObject *v19[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v21; // [rsp+78h] [rbp+10h] BYREF
  char v22; // [rsp+80h] [rbp+18h] BYREF

  if ( !*((_DWORD *)a2 + 115) )
    return 0LL;
  v4 = (__int64 **)*((_QWORD *)this + 26);
  v5 = (__int64 **)*v4;
  while ( 2 )
  {
    if ( v5 == v4 )
      return 0LL;
    v6 = 0LL;
    v7 = v5[11];
    for ( i = v7; ; i += 2 )
    {
      if ( v6 >= ((char *)v5[12] - (char *)v7) >> 4 )
        goto LABEL_16;
      if ( *i == *((_QWORD *)a2 + 5) && *((_QWORD *)a2 + 55) )
        break;
      ++v6;
    }
    if ( (v6 & 0x80000000) != 0LL )
    {
LABEL_16:
      v5 = (__int64 **)*v5;
      continue;
    }
    break;
  }
  v9 = (int)v6;
  v10 = 2LL * (int)v6;
  *(_QWORD *)v18 = v7[v10];
  v11 = (CBaseObject *)v7[v10 + 1];
  v19[0] = v11;
  if ( v11 )
    CBaseObject::AddRef(v11);
  v12 = CContainerVisualProxy::RemoveChild((CContainerVisualProxy *)v5[10], v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4EA,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v12,
      v18[0]);
    v16 = v13;
  }
  else
  {
    std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::erase(v5 + 11, &v21, &v5[11][v10]);
    std::vector<_DWMCaptureWindowInformation>::erase(v5 + 14, &v22, &v5[14][4 * v9]);
    v15 = CCaptureManager::_AddWindowToFilteredCapture(v14, v5 + 3, v18, a2);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 1263LL;
    }
    else
    {
      v15 = CCaptureControllerProxy::SetWindowInfos(
              (CCaptureControllerProxy *)v5[4],
              (const struct _DWMCaptureWindowInformation *)v5[14],
              ((char *)v5[15] - (char *)v5[14]) >> 5);
      v16 = v15;
      if ( v15 >= 0 )
      {
        Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v19);
        goto LABEL_16;
      }
      v17 = 1266LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v15,
      v18[0]);
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v19);
  return v16;
}
