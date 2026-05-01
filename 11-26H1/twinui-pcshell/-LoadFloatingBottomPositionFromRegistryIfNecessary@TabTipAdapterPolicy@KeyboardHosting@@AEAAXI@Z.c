/*
 * XREFs of ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x18013D93C
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800B9230 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18024EFF0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18013DCC4 (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18013DDD4 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18013DEFC (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allocat.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x180484494 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned int a2)
{
  char *v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  char v7; // r10
  __int64 *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 i; // rcx
  char v12; // r10
  __int64 *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 j; // rcx
  char v17; // r10
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 inserted; // rax
  __int64 v22; // rax
  const WCHAR *v23; // r8
  unsigned int ValueW; // eax
  __int64 v25; // rdx
  int *v26; // rdi
  __int64 v27; // rax
  int *v28; // rsi
  const WCHAR *v29; // r8
  int v30; // ecx
  float v31; // xmm6_4
  float v32; // xmm6_4
  unsigned int pdwType; // [rsp+28h] [rbp-49h]
  DWORD v34[4]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v35; // [rsp+58h] [rbp-19h] BYREF
  char v36[8]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v37; // [rsp+70h] [rbp-1h]
  __int128 v38; // [rsp+78h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  int pvData; // [rsp+D8h] [rbp+67h] BYREF
  unsigned int v41; // [rsp+E0h] [rbp+6Fh] BYREF
  int v42; // [rsp+E8h] [rbp+77h] BYREF
  DWORD pcbData; // [rsp+F0h] [rbp+7Fh] BYREF

  v41 = a2;
  v2 = (char *)this + 824;
  v4 = *((_QWORD *)this + 103);
  v5 = v4;
  v6 = *(_QWORD *)(v4 + 8);
  v38 = (unsigned __int64)v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    *(_QWORD *)&v38 = v6;
    if ( *(_DWORD *)(v6 + 28) < a2 )
    {
      v7 = 1;
      DWORD2(v38) = 0;
    }
    else
    {
      v7 = 0;
      DWORD2(v38) = 1;
      v5 = v6;
    }
    v8 = (__int64 *)(v6 + 16);
    if ( !v7 )
      v8 = (__int64 *)v6;
    v6 = *v8;
  }
  if ( *(_BYTE *)(v5 + 25) || a2 < *(_DWORD *)(v5 + 28) )
  {
    if ( *((_QWORD *)v2 + 1) == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    *(_QWORD *)&v35 = &v41;
    v19 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *>>>(
            (unsigned int)v36,
            (_DWORD)v2,
            v4,
            v5,
            (__int64)&v35);
    v20 = *(_QWORD *)(v19 + 8);
    *(_QWORD *)(v19 + 8) = 0LL;
    if ( v37 )
      std::_Deallocate<16>(v37, 48LL);
    v35 = v38;
    inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                 (__int64)v2,
                 (__int64)&v35,
                 v20);
    a2 = v41;
    v5 = inserted;
  }
  if ( !*(_BYTE *)(v5 + 40) )
  {
    v9 = *((_QWORD *)this + 9);
    HIDWORD(v38) = 0;
    v10 = v9;
    for ( i = *(_QWORD *)(v9 + 8); !*(_BYTE *)(i + 25); i = *v13 )
    {
      if ( *(_DWORD *)(i + 32) < a2 )
      {
        v12 = 1;
      }
      else
      {
        v12 = 0;
        v10 = i;
      }
      v13 = (__int64 *)(i + 16);
      if ( !v12 )
        v13 = (__int64 *)i;
    }
    if ( v10 != v9 && !*(_BYTE *)(v10 + 25) && a2 >= *(_DWORD *)(v10 + 32) )
      goto LABEL_38;
    v14 = *((_QWORD *)this + 11);
    HIDWORD(v38) = 0;
    v15 = v14;
    for ( j = *(_QWORD *)(v14 + 8); !*(_BYTE *)(j + 25); j = *v18 )
    {
      if ( *(_DWORD *)(j + 32) < a2 )
      {
        v17 = 1;
      }
      else
      {
        v17 = 0;
        v15 = j;
      }
      v18 = (__int64 *)(j + 16);
      if ( !v17 )
        v18 = (__int64 *)j;
    }
    if ( v15 != v14 && !*(_BYTE *)(v15 + 25) && a2 >= *(_DWORD *)(v15 + 32) )
    {
LABEL_38:
      pvData = 0;
      pcbData = 4;
      v22 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>((char *)this + 72, v36, &v41);
      v23 = (const WCHAR *)(*(_QWORD *)v22 + 40LL);
      if ( *(_QWORD *)(*(_QWORD *)v22 + 64LL) > 7uLL )
        v23 = *(const WCHAR **)v23;
      ValueW = RegGetValueW(
                 HKEY_CURRENT_USER,
                 L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
                 v23,
                 0x10u,
                 0LL,
                 &pvData,
                 &pcbData);
      if ( ValueW )
      {
        if ( ValueW != 2 )
        {
          v25 = 2043LL;
LABEL_43:
          wil::details::in1diag3::Log_Win32(
            retaddr,
            (void *)v25,
            (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)ValueW,
            pdwType);
        }
      }
      else
      {
        v26 = (int *)((char *)this + 108);
        if ( (unsigned int)pvData > *((_DWORD *)this + 27) )
          pvData = *((_DWORD *)this + 27);
        v42 = 0;
        v34[0] = 4;
        v27 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>((char *)this + 88, v36, &v41);
        v28 = (int *)((char *)this + 108);
        v29 = (const WCHAR *)(*(_QWORD *)v27 + 40LL);
        if ( *(_QWORD *)(*(_QWORD *)v27 + 64LL) > 7uLL )
        {
          v29 = *(const WCHAR **)v29;
          v28 = (int *)((char *)this + 108);
        }
        ValueW = RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v29, 0x10u, 0LL, &v42, v34);
        if ( ValueW )
        {
          if ( ValueW != 2 )
          {
            v25 = 2066LL;
            goto LABEL_43;
          }
        }
        else
        {
          v30 = *v26;
          if ( v42 > (unsigned int)*v26 )
          {
            v42 = *v26;
            v26 = v28;
          }
          v31 = (float)pvData / (float)v30;
          *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  (char *)this + 824,
                                  v36,
                                  &v41)
                   + 32LL) = v31;
          v32 = (float)v42 / (float)*v26;
          *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  (char *)this + 824,
                                  v36,
                                  &v41)
                   + 36LL) = v32;
          *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  (char *)this + 824,
                                  v36,
                                  &v41)
                   + 40LL) = 1;
        }
      }
    }
  }
}
