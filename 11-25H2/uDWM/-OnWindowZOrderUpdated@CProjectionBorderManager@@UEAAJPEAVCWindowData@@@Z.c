/*
 * XREFs of ?OnWindowZOrderUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180075770
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800071D4 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x180059084 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A8D0C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?RemoveAt@?$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJI@Z @ 0x1800C0064 (-RemoveAt@-$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJI@Z.c)
 *     ?_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@PEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800C3618 (-_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENT.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowZOrderUpdated(
        CProjectionBorderManager *this,
        struct CWindowData *a2)
{
  struct _RTL_GENERIC_TABLE *v4; // r12
  char *v5; // rax
  char *v6; // rdi
  __int64 v7; // rbx
  __int64 *v8; // r14
  struct CVisualProxy **v9; // r15
  int v10; // esi
  CProjectionBorderManager *v11; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID RestartKey; // [rsp+58h] [rbp+10h] BYREF

  if ( !*((_DWORD *)a2 + 115) )
    return 0LL;
  RestartKey = 0LL;
  v4 = (struct _RTL_GENERIC_TABLE *)((char *)this + 576);
LABEL_4:
  while ( 2 )
  {
    while ( 2 )
    {
      v5 = (char *)RtlEnumerateGenericTableWithoutSplaying(v4, &RestartKey);
      v6 = v5;
      if ( !v5 )
        return 0LL;
      v7 = 0LL;
      v8 = (__int64 *)(v5 + 72);
      while ( 1 )
      {
        if ( (unsigned int)v7 >= *((_DWORD *)v5 + 24) )
          goto LABEL_4;
        if ( **(_QWORD **)(*v8 + 8 * v7) == *((_QWORD *)a2 + 5) && *((_QWORD *)a2 + 55) )
          break;
        v7 = (unsigned int)(v7 + 1);
      }
      if ( (int)v7 < 0 )
        continue;
      break;
    }
    _mm_lfence();
    v9 = *(struct CVisualProxy ***)(*v8 + 8 * v7);
    v10 = CContainerVisualProxy::RemoveChild(*((CContainerVisualProxy **)v5 + 8), v9[1]);
    if ( v10 < 0 )
    {
      v14 = 1369LL;
      goto LABEL_22;
    }
    v10 = DynArray<CAnimationComponent *,0>::RemoveAt(v8, v7);
    if ( v10 < 0 )
    {
      v14 = 1370LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v10,
        v15);
      return (unsigned int)v10;
    }
    v12 = DynArray<_DWMCaptureWindowInformation,0>::RemoveAt(v6 + 104, (unsigned int)v7);
    if ( v12 < 0 )
    {
      v13 = 1371LL;
    }
    else
    {
      v12 = CProjectionBorderManager::_AddWindowToFilteredCapture(
              v11,
              (struct CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)v6,
              (struct CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *)v9,
              a2);
      if ( v12 < 0 )
      {
        v13 = 1374LL;
      }
      else
      {
        v12 = CCaptureControllerProxy::SetWindowInfos(
                *((CCaptureControllerProxy **)v6 + 1),
                *((const struct _DWMCaptureWindowInformation **)v6 + 13),
                *((_DWORD *)v6 + 32));
        if ( v12 >= 0 )
          continue;
        v13 = 1377LL;
      }
    }
    break;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)v12,
    v15);
  return (unsigned int)v12;
}
