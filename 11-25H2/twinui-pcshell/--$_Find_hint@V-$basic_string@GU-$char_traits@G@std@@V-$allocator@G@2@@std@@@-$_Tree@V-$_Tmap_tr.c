/*
 * XREFs of ??$_Find_hint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1805530C8
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@1@@Z @ 0x180552FC4 (--$_Emplace_hint@AEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18023A6FC (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1803576E8 (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180553324 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_180553324.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::_Find_hint<std::wstring>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  __int64 v6; // r11
  int v7; // eax
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  unsigned __int16 *v10; // rdx
  int v11; // eax
  __int64 v12; // r11
  int v13; // eax
  _QWORD *v14; // r11
  _QWORD *v15; // rdi
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // r8
  __int64 i; // rax
  int v21; // eax
  __int64 v22; // r11
  bool v23; // zf
  int v24; // eax
  __int64 *v25; // r11
  __int64 *v26; // rdi
  char v27; // bp
  __int64 *v28; // rax
  __int64 **v29; // rcx
  __int64 *v30; // rcx
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int128 v35; // [rsp+20h] [rbp-28h] BYREF
  __int64 v36; // [rsp+30h] [rbp-18h]

  if ( *(_BYTE *)(a3 + 25) )
  {
    v6 = qword_18089E408;
    if ( *(_BYTE *)(*(_QWORD *)(qword_18089E408 + 8) + 25LL)
      || (LOBYTE(v7) = std::wstring::compare((_QWORD *)(*(_QWORD *)(qword_18089E408 + 16) + 32LL), a4), v7 < 0) )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v6 + 16);
      *(_BYTE *)(a2 + 16) = 0;
LABEL_43:
      *(_QWORD *)(a2 + 8) = 0LL;
      goto LABEL_44;
    }
    goto LABEL_36;
  }
  v9 = (_QWORD *)(a3 + 32);
  v10 = (unsigned __int16 *)(a3 + 32);
  if ( a3 == *(_QWORD *)qword_18089E408 )
  {
    LOBYTE(v11) = std::wstring::compare(a4, v10);
    if ( v11 < 0 )
    {
      *(_QWORD *)a2 = v12;
      *(_QWORD *)(a2 + 8) = 1LL;
LABEL_8:
      *(_BYTE *)(a2 + 16) = 0;
      goto LABEL_44;
    }
LABEL_36:
    std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::_Find_lower_bound<std::wstring>(
      v8,
      &v35,
      a4);
    v32 = v36;
    if ( std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::_Lower_bound_duplicate<std::wstring>(
           v33,
           v36,
           a4) )
    {
      *(_QWORD *)a2 = v32;
      *(_QWORD *)(a2 + 8) = 2LL;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_44;
    }
    *(_OWORD *)a2 = v35;
    goto LABEL_8;
  }
  LOBYTE(v13) = std::wstring::compare(a4, v10);
  if ( v13 >= 0 )
  {
    LOBYTE(v24) = std::wstring::compare(v9, a4);
    if ( v24 >= 0 )
    {
      *(_QWORD *)a2 = v25;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_43;
    }
    v26 = (__int64 *)v25[2];
    v27 = *((_BYTE *)v26 + 25);
    if ( v27 )
    {
      v26 = (__int64 *)v25[1];
      if ( *((_BYTE *)v26 + 25) )
      {
LABEL_39:
        *(_BYTE *)(a2 + 16) = 0;
        if ( v27 )
        {
          *(_QWORD *)a2 = v25;
          *(_QWORD *)(a2 + 8) = 0LL;
        }
        else
        {
          *(_QWORD *)a2 = v26;
          *(_QWORD *)(a2 + 8) = 1LL;
        }
        goto LABEL_44;
      }
      v28 = v25;
      do
      {
        v29 = (__int64 **)v26;
        if ( v28 != (__int64 *)v26[2] )
          break;
        v26 = (__int64 *)v26[1];
        v28 = (__int64 *)v29;
      }
      while ( !*((_BYTE *)v26 + 25) );
    }
    else
    {
      v30 = (__int64 *)*v26;
      if ( !*(_BYTE *)(*v26 + 25) )
      {
        do
        {
          v26 = v30;
          v30 = (__int64 *)*v30;
        }
        while ( !*((_BYTE *)v30 + 25) );
      }
    }
    if ( !*((_BYTE *)v26 + 25) )
    {
      LOBYTE(v31) = std::wstring::compare(a4, (unsigned __int16 *)v26 + 16);
      if ( v31 >= 0 )
        goto LABEL_36;
    }
    goto LABEL_39;
  }
  v15 = (_QWORD *)*v14;
  if ( *(_BYTE *)(*v14 + 25LL) )
  {
    v15 = (_QWORD *)v14[1];
    v16 = v14;
    v17 = v14;
    if ( !*((_BYTE *)v15 + 25) )
    {
      v18 = v14;
      v19 = v14;
      do
      {
        v16 = v19;
        if ( v18 != (_QWORD *)*v15 )
          break;
        v17 = v15;
        v15 = (_QWORD *)v15[1];
        v18 = v17;
        v19 = v17;
        v16 = v17;
      }
      while ( !*((_BYTE *)v15 + 25) );
    }
    if ( *((_BYTE *)v17 + 25) )
      v15 = v16;
  }
  else
  {
    for ( i = v15[2]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      v15 = (_QWORD *)i;
  }
  LOBYTE(v21) = std::wstring::compare(v15 + 4, a4);
  if ( v21 >= 0 )
    goto LABEL_36;
  v23 = *(_BYTE *)(v15[2] + 25LL) == 0;
  *(_BYTE *)(a2 + 16) = 0;
  if ( !v23 )
  {
    *(_QWORD *)a2 = v15;
    goto LABEL_43;
  }
  *(_QWORD *)a2 = v22;
  *(_QWORD *)(a2 + 8) = 1LL;
LABEL_44:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
