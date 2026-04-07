/*
 * XREFs of ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800A466C
 * Callers:
 *     ?OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180069330 (-OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18009E6A0 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A41D0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18000B03C (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z @ 0x18001C620 (-InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003B008 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z @ 0x180068A94 (-SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??$_Copy_backward_memmove@PEAU_DWMCaptureWindowInformation@@PEAU1@@std@@YAPEAU_DWMCaptureWindowInformation@@PEAU1@00@Z @ 0x18009D040 (--$_Copy_backward_memmove@PEAU_DWMCaptureWindowInformation@@PEAU1@@std@@YAPEAU_DWMCaptureWindowI.c)
 *     ??$_Emplace_back_with_unused_capacity@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAAEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@$$QEAU23@@Z @ 0x18009D0E0 (--$_Emplace_back_with_unused_capacity@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTU.c)
 *     ??$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAPEAU_DWMCaptureWindowInformation@@QEAU2@AEBU2@@Z @ 0x18009D250 (--$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@-$vector@U_DWMCaptureWindowInformation.c)
 *     ??$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU23@$$QEAU23@@Z @ 0x18009D4C0 (--$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WIN.c)
 *     ??$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@$$QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@@Z @ 0x18009DE14 (--$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WINDOW@CCapture.c)
 *     ?ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ @ 0x1800A1B68 (-ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CCaptureManager::_AddWindowToFilteredCapture(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  CTopLevelWindow *v4; // rcx
  char ShouldExcludeFromFilteredCaptures; // al
  CVisualProxy *v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // rdx
  const char **v14; // rbx
  int inserted; // eax
  unsigned int v16; // edi
  __int64 v17; // rdx
  const char *v18; // rcx
  bool v19; // zf
  struct CVisualProxy *v20; // r12
  unsigned __int8 v21; // r13
  int v22; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  const char *v24; // r9
  struct _LIST_ENTRY *i; // rcx
  unsigned __int64 v26; // rdx
  CTopLevelWindow *j; // rcx
  const char *v28; // r10
  unsigned __int64 v29; // rdx
  CContainerVisualProxy *v30; // rcx
  struct CVisualProxy *v31; // rdx
  __int64 v32; // rcx
  _OWORD *v33; // rbx
  _OWORD *v34; // r8
  __int128 v35; // xmm1
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  _OWORD *v38; // rdx
  __int128 v39; // xmm1
  __m256i v40; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v41; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v4 = *(CTopLevelWindow **)(a4 + 440);
  *(_OWORD *)v40.m256i_i8 = (unsigned __int64)*a3;
  *(_OWORD *)&v40.m256i_u64[2] = 0LL;
  *(_OWORD *)&v40.m256i_u64[1] = *(_OWORD *)(a4 + 48);
  if ( v4 )
    *(struct tagRECT *)&v40.m256i_u64[1] = *CTopLevelWindow::GetActualWindowRect(v4, &v41, 0, 1, 1);
  ShouldExcludeFromFilteredCaptures = CWindowData::ShouldExcludeFromFilteredCaptures((CTopLevelWindow **)a4);
  v9 = (CVisualProxy *)a3[1];
  v40.m256i_i8[24] = ShouldExcludeFromFilteredCaptures == 0;
  v11 = CVisualProxy::SetExcludeSubtree(v9, ShouldExcludeFromFilteredCaptures, v10);
  if ( v11 < 0 )
  {
    v12 = 2134LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v14 = (const char **)(a2 + 64);
  if ( *(_QWORD *)(a2 + 64) == *(_QWORD *)(a2 + 72) )
  {
    inserted = CContainerVisualProxy::InsertChild(
                 *(CContainerVisualProxy **)(a2 + 56),
                 (struct CVisualProxy *)a3[1],
                 0LL,
                 0);
    v16 = inserted;
    if ( inserted < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B7,
        (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)inserted);
      return v16;
    }
    v17 = *(_QWORD *)(a2 + 72);
    v18 = (const char *)(a2 + 64);
    v19 = v17 == *(_QWORD *)(a2 + 80);
LABEL_52:
    if ( v19 )
      std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Emplace_reallocate<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        v18,
        v17,
        (__int64)a3);
    else
      std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Emplace_back_with_unused_capacity<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        (__int64)v18,
        a3);
    v32 = a2 + 88;
    v38 = *(_OWORD **)(a2 + 96);
    if ( v38 != *(_OWORD **)(a2 + 104) )
    {
      v39 = *(_OWORD *)&v40.m256i_u64[2];
      *v38 = *(_OWORD *)v40.m256i_i8;
      v38[1] = v39;
      goto LABEL_44;
    }
LABEL_47:
    std::vector<_DWMCaptureWindowInformation>::_Emplace_reallocate<_DWMCaptureWindowInformation const &>(
      (const char *)v32,
      (__int64)v38,
      (__int128 *)v40.m256i_i8);
    return 0LL;
  }
  v20 = 0LL;
  v21 = 0;
  v22 = -1;
  if ( *(_QWORD *)a4 != a4 || *(_QWORD *)(a4 + 8) != a4 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             *(_QWORD *)(a4 + 136));
    for ( i = *(struct _LIST_ENTRY **)(a4 + 8); i != WindowListForDesktop; i = i->Blink )
    {
      v24 = (const char *)retaddr;
      if ( i == (struct _LIST_ENTRY *)a4 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x86A,
          (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)retaddr);
      if ( i )
      {
        v22 = -1;
        v26 = 0LL;
        v24 = *v14;
        while ( v26 < (__int64)(*(_QWORD *)(a2 + 72) - *(_QWORD *)(a2 + 64)) >> 4 )
        {
          if ( *(struct _LIST_ENTRY **)v24 == i[2].Blink )
          {
            v22 = v26;
            if ( (v26 & 0x80000000) != 0LL )
              break;
            v21 = 1;
            v20 = *(struct CVisualProxy **)&(*v14)[16 * (int)v26 + 8];
            if ( v20 )
              goto LABEL_35;
            goto LABEL_23;
          }
          ++v26;
          v24 += 16;
        }
      }
    }
LABEL_23:
    for ( j = *(CTopLevelWindow **)a4; j != (CTopLevelWindow *)WindowListForDesktop; j = *(CTopLevelWindow **)j )
    {
      if ( j == (CTopLevelWindow *)a4 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x888,
          (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          v24);
      if ( j )
      {
        v28 = *(const char **)(a2 + 64);
        v22 = -1;
        v29 = 0LL;
        v24 = v28;
        while ( v29 < (__int64)(*(_QWORD *)(a2 + 72) - (_QWORD)v28) >> 4 )
        {
          if ( *(_QWORD *)v24 == *((_QWORD *)j + 5) )
          {
            v22 = v29;
            if ( (v29 & 0x80000000) != 0LL )
              break;
            v21 = 0;
            v20 = *(struct CVisualProxy **)&v28[16 * (int)v29 + 8];
            goto LABEL_35;
          }
          ++v29;
          v24 += 16;
        }
      }
    }
  }
LABEL_35:
  v30 = *(CContainerVisualProxy **)(a2 + 56);
  v31 = (struct CVisualProxy *)a3[1];
  if ( !v20 )
  {
    v11 = CContainerVisualProxy::InsertChild(v30, v31, 0LL, 0);
    if ( v11 < 0 )
    {
      v12 = 2224LL;
      goto LABEL_5;
    }
    v18 = (const char *)(a2 + 64);
    v17 = *(_QWORD *)(a2 + 72);
    v19 = v17 == *(_QWORD *)(a2 + 80);
    goto LABEL_52;
  }
  v11 = CContainerVisualProxy::InsertChild(v30, v31, v20, v21);
  if ( v11 < 0 )
  {
    v12 = 2211LL;
    goto LABEL_5;
  }
  if ( v21 )
    ++v22;
  std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::emplace<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
    a2 + 64,
    (char **)&v41,
    (CBaseObject **)(*(_QWORD *)(a2 + 64) + 16LL * v22),
    a3);
  v32 = a2 + 88;
  v33 = (_OWORD *)(*(_QWORD *)(a2 + 88) + 32LL * v22);
  v34 = *(_OWORD **)(a2 + 96);
  if ( v34 == *(_OWORD **)(a2 + 104) )
  {
    v38 = (_OWORD *)(*(_QWORD *)(a2 + 88) + 32LL * v22);
    goto LABEL_47;
  }
  if ( v33 != v34 )
  {
    v36 = *(v34 - 1);
    *v34 = *(v34 - 2);
    v34[1] = v36;
    *(_QWORD *)(a2 + 96) += 32LL;
    std::_Copy_backward_memmove<_DWMCaptureWindowInformation *,_DWMCaptureWindowInformation *>(
      v33,
      (__int64)(v34 - 2),
      (__int64)v34);
    v37 = *(_OWORD *)&v40.m256i_u64[2];
    *v33 = *(_OWORD *)v40.m256i_i8;
    v33[1] = v37;
    return 0LL;
  }
  v35 = *(_OWORD *)&v40.m256i_u64[2];
  *v34 = *(_OWORD *)v40.m256i_i8;
  v34[1] = v35;
LABEL_44:
  *(_QWORD *)(v32 + 8) += 32LL;
  return 0LL;
}
