/*
 * XREFs of ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x1804752BC
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180094F90 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x1804741D0 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180149378 (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801497B8 (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801498B8 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18019889C (-find@-$_Tree@V-$_Tmap_traits@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802B277C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::Foundation::Point *a2,
        int a3,
        unsigned int a4)
{
  float v5; // xmm11_4
  bool v6; // cf
  float v7; // xmm12_4
  __int64 v8; // r8
  __m128 v9; // xmm4
  __m128 v10; // xmm3
  float v11; // xmm8_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  __int64 v16; // rax
  __int64 v17; // rcx
  float v18; // xmm10_4
  float v19; // xmm7_4
  _QWORD *v20; // rbx
  float v21; // xmm6_4
  __int64 *v22; // rax
  __int64 v23; // r14
  __int64 v24; // rsi
  unsigned int v25; // r9d
  __int64 v26; // rax
  const WCHAR *v27; // r8
  unsigned int v28; // eax
  unsigned int v29; // r9d
  __int64 v30; // rax
  const WCHAR *v31; // r8
  unsigned int v32; // eax
  const wchar_t *v33; // rax
  const char *cbData; // [rsp+30h] [rbp-D8h]
  char *v36; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int lpData[4]; // [rsp+50h] [rbp-B8h] BYREF
  int Data; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v39[96]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v5 = *(float *)a2;
  v6 = *((_BYTE *)this + 596) != 0;
  v7 = *((float *)a2 + 1);
  LODWORD(v36) = a3;
  v8 = v6 ? 0x50 : 0;
  v9 = *(__m128 *)((char *)this + v8 + 232);
  v10 = *(__m128 *)((char *)this + v8 + 248);
  v11 = (float)*(int *)((char *)this + v8 + 272);
  v12 = v5 - _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  v13 = v7 - _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
  v14 = (float)(v11 * v10.m128_f32[0]) / 100.0;
  v15 = (float)(v11 * _mm_shuffle_ps(v10, v10, 85).m128_f32[0]) / 100.0;
  v16 = std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
          (__int64 **)this + 72,
          (__int64)lpData,
          (unsigned int *)&v36,
          a4);
  v17 = *(_QWORD *)v16;
  v18 = *(float *)(*(_QWORD *)v16 + 36LL);
  if ( v14 < *(float *)(*(_QWORD *)v16 + 32LL) || v15 < v18 )
  {
    v20 = (_QWORD *)((char *)this + 560);
    *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                            (_QWORD *)this + 70,
                            (__int64)lpData,
                            (unsigned int *)&v36)
             + 40LL) = 0;
  }
  else
  {
    if ( v14 <= *(float *)(v17 + 32) )
    {
      v20 = (_QWORD *)((char *)this + 560);
      *(_DWORD *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               (_QWORD *)this + 70,
                               (__int64)lpData,
                               (unsigned int *)&v36)
                + 32LL) = 0;
    }
    else
    {
      v19 = fmaxf(0.0, v12 / (float)(v14 - *(float *)(v17 + 32)));
      if ( v19 >= 1.0 )
        v19 = FLOAT_1_0;
      v20 = (_QWORD *)((char *)this + 560);
      *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                              (_QWORD *)this + 70,
                              (__int64)lpData,
                              (unsigned int *)&v36)
               + 32LL) = v19;
    }
    if ( v15 <= v18 )
    {
      *(_DWORD *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               v20,
                               (__int64)lpData,
                               (unsigned int *)&v36)
                + 36LL) = 0;
    }
    else
    {
      v21 = fmaxf(0.0, v13 / (float)(v15 - v18));
      if ( v21 >= 1.0 )
        v21 = FLOAT_1_0;
      *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                              v20,
                              (__int64)lpData,
                              (unsigned int *)&v36)
               + 36LL) = v21;
    }
    *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                            v20,
                            (__int64)lpData,
                            (unsigned int *)&v36)
             + 40LL) = 1;
  }
  if ( *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               v20,
                               (__int64)lpData,
                               (unsigned int *)&v36)
                + 40LL) )
  {
    v22 = std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::find(
            (__int64 **)this + 9,
            lpData,
            &v36);
    v23 = *((_QWORD *)this + 9);
    v24 = *v22;
    if ( *std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::find(
            (__int64 **)this + 11,
            lpData,
            &v36) == *((_QWORD *)this + 11) )
    {
      v33 = L"YPosition";
      if ( v24 == v23 )
        v33 = L"XPosition and YPosition";
    }
    else
    {
      if ( v24 != v23 )
      {
        Data = (int)(float)((float)*((int *)this + 27)
                          * *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                                    (_QWORD *)this + 70,
                                                    (__int64)v39,
                                                    (unsigned int *)&v36)
                                     + 32LL));
        v26 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
                (__int64 **)this + 9,
                (__int64)v39,
                (unsigned int *)&v36,
                v25);
        v27 = (const WCHAR *)(*(_QWORD *)v26 + 40LL);
        if ( *(_QWORD *)(*(_QWORD *)v26 + 64LL) > 7uLL )
          v27 = *(const WCHAR **)v27;
        v28 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v27, 4u, &Data, 4u);
        if ( v28 )
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            1615LL,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)v28);
        lpData[0] = (int)(float)((float)*((int *)this + 27)
                               * *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                                         (_QWORD *)this + 70,
                                                         (__int64)v39,
                                                         (unsigned int *)&v36)
                                          + 36LL));
        v30 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
                (__int64 **)this + 11,
                (__int64)v39,
                (unsigned int *)&v36,
                v29);
        v31 = (const WCHAR *)(*(_QWORD *)v30 + 40LL);
        if ( *(_QWORD *)(*(_QWORD *)v30 + 64LL) > 7uLL )
          v31 = *(const WCHAR **)v31;
        v32 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v31, 4u, lpData, 4u);
        if ( v32 )
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            1618LL,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)v32);
        return 0LL;
      }
      v33 = L"XPosition";
    }
    LODWORD(cbData) = (_DWORD)v36;
    wil::details::in1diag3::Log_HrMsg(
      retaddr,
      (void *)0x658,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x8000FFFFLL,
      (unsigned __int64)"View id %u is missing key(s) for %ls",
      cbData,
      v33);
  }
  return 0LL;
}
