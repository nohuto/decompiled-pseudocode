/*
 * XREFs of ??$_Find_hint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180577268
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@1@@Z @ 0x180577160 (--$_Emplace_hint@AEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4.c)
 * Callees:
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18029A9EC (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18035DF74 (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180577494 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_180577494.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::_Find_hint<std::wstring>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        const wchar_t *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rcx
  const wchar_t *v9; // r14
  const wchar_t *v10; // rdx
  __int64 *v11; // rax
  __int64 *i; // rbx
  __int64 *j; // rax
  bool v14; // zf
  __int64 *v15; // rbx
  __int64 *v16; // rax
  __int64 **v17; // rcx
  __int64 *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+30h] [rbp-28h]

  v4 = qword_1808DEB58;
  if ( *((_BYTE *)a3 + 25) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(qword_1808DEB58 + 8) + 25LL)
      || (unsigned __int8)std::operator<<unsigned short>(
                            (const wchar_t *)(*(_QWORD *)(qword_1808DEB58 + 16) + 32LL),
                            a4) )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v4 + 16);
      *(_BYTE *)(a2 + 16) = 0;
LABEL_46:
      *(_QWORD *)(a2 + 8) = 0LL;
      goto LABEL_47;
    }
    goto LABEL_39;
  }
  v9 = (const wchar_t *)(a3 + 4);
  v10 = (const wchar_t *)(a3 + 4);
  if ( a3 != *(__int64 **)qword_1808DEB58 )
  {
    if ( (unsigned __int8)std::operator<<unsigned short>(a4, v10) )
    {
      v11 = a3;
      if ( *((_BYTE *)a3 + 25) )
      {
        i = (__int64 *)a3[2];
      }
      else
      {
        i = (__int64 *)*a3;
        if ( *(_BYTE *)(*a3 + 25) )
        {
          for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v11 == (__int64 *)*i; i = (__int64 *)i[1] )
            v11 = i;
          if ( *((_BYTE *)v11 + 25) )
            i = v11;
        }
        else
        {
          for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
            i = j;
        }
      }
      if ( !(unsigned __int8)std::operator<<unsigned short>((const wchar_t *)i + 16, a4) )
        goto LABEL_39;
      v14 = *(_BYTE *)(i[2] + 25) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( !v14 )
      {
        *(_QWORD *)a2 = i;
        goto LABEL_46;
      }
      *(_QWORD *)a2 = a3;
LABEL_27:
      *(_QWORD *)(a2 + 8) = 1LL;
      goto LABEL_47;
    }
    if ( !(unsigned __int8)std::operator<<unsigned short>(v9, a4) )
    {
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_45;
    }
    v15 = (__int64 *)a3[2];
    if ( *((_BYTE *)v15 + 25) )
    {
      v15 = (__int64 *)a3[1];
      if ( *((_BYTE *)v15 + 25) )
        goto LABEL_42;
      v16 = a3;
      do
      {
        v17 = (__int64 **)v15;
        if ( v16 != (__int64 *)v15[2] )
          break;
        v15 = (__int64 *)v15[1];
        v16 = (__int64 *)v17;
      }
      while ( !*((_BYTE *)v15 + 25) );
    }
    else
    {
      v18 = (__int64 *)*v15;
      if ( !*(_BYTE *)(*v15 + 25) )
      {
        do
        {
          v15 = v18;
          v18 = (__int64 *)*v18;
        }
        while ( !*((_BYTE *)v18 + 25) );
      }
    }
    if ( !*((_BYTE *)v15 + 25) && !(unsigned __int8)std::operator<<unsigned short>(a4, (const wchar_t *)v15 + 16) )
      goto LABEL_39;
LABEL_42:
    v14 = *(_BYTE *)(a3[2] + 25) == 0;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v14 )
    {
      *(_QWORD *)a2 = v15;
      goto LABEL_27;
    }
LABEL_45:
    *(_QWORD *)a2 = a3;
    goto LABEL_46;
  }
  if ( !(unsigned __int8)std::operator<<unsigned short>(a4, v10) )
  {
LABEL_39:
    std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::_Find_lower_bound<std::wstring>(
      v8,
      &v22,
      a4);
    v19 = v23;
    if ( std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::_Lower_bound_duplicate<std::wstring>(
           v20,
           v23,
           a4) )
    {
      *(_QWORD *)a2 = v19;
      *(_QWORD *)(a2 + 8) = 2LL;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_47;
    }
    *(_OWORD *)a2 = v22;
    goto LABEL_8;
  }
  *(_QWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = 1LL;
LABEL_8:
  *(_BYTE *)(a2 + 16) = 0;
LABEL_47:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
