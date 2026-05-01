/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180180EE8
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1803FD7B0 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180031ECC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1800CF680 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1800CF6D4 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r10
  __int64 *v4; // r8
  _QWORD *v5; // r11
  __int64 *v6; // rdi
  __int64 *v7; // rsi
  __int64 *v8; // rbp
  char v9; // r9
  __int64 *i; // rax
  __int64 v11; // r9
  _QWORD *v12; // rcx
  _QWORD *v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _BYTE *v16; // r8
  __int64 v17; // rcx
  __int64 v19; // rbx
  _BYTE *v20; // rdx
  _BYTE *v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  char v26; // dl
  __int64 v27; // rax

  v2 = a2 + 2;
  v3 = a2[2];
  v4 = a2 + 1;
  v5 = a1;
  v6 = a2;
  v7 = a2;
  v8 = a2;
  v9 = *(_BYTE *)(v3 + 25);
  if ( v9 )
  {
    for ( i = (__int64 *)*v4; !*((_BYTE *)i + 25) && a2 == (__int64 *)i[2]; i = (__int64 *)i[1] )
      a2 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)a2[2]);
  }
  if ( !*(_BYTE *)(*v6 + 25) )
  {
    if ( v9 )
    {
      v3 = *v6;
    }
    else
    {
      v3 = i[2];
      if ( i != v7 )
      {
        *(_QWORD *)(*v6 + 8) = i;
        *i = *v6;
        if ( i == (__int64 *)*v2 )
        {
          v11 = (__int64)i;
        }
        else
        {
          v11 = i[1];
          if ( !*(_BYTE *)(v3 + 25) )
            *(_QWORD *)(v3 + 8) = v11;
          *(_QWORD *)v11 = v3;
          i[2] = *v2;
          *(_QWORD *)(*v2 + 8LL) = i;
        }
        if ( *(__int64 **)(*v5 + 8LL) == v7 )
        {
          *(_QWORD *)(*v5 + 8LL) = i;
        }
        else
        {
          v12 = (_QWORD *)*v4;
          if ( *(__int64 **)*v4 == v7 )
            *v12 = i;
          else
            v12[2] = i;
        }
        v25 = (_QWORD *)*v4;
        v16 = v7 + 3;
        i[1] = (__int64)v25;
        v26 = *((_BYTE *)i + 24);
        *((_BYTE *)i + 24) = *((_BYTE *)v7 + 24);
        *((_BYTE *)v7 + 24) = v26;
        goto LABEL_25;
      }
    }
  }
  v11 = *v4;
  if ( !*(_BYTE *)(v3 + 25) )
    *(_QWORD *)(v3 + 8) = v11;
  if ( *(__int64 **)(*v5 + 8LL) == v7 )
  {
    *(_QWORD *)(*v5 + 8LL) = v3;
  }
  else if ( *(__int64 **)v11 == v7 )
  {
    *(_QWORD *)v11 = v3;
  }
  else
  {
    *(_QWORD *)(v11 + 16) = v3;
  }
  v13 = (_QWORD *)*v5;
  if ( *(__int64 **)*v5 == v7 )
  {
    if ( *(_BYTE *)(v3 + 25) )
      v14 = (_QWORD *)v11;
    else
      v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v3);
    *v13 = v14;
  }
  if ( *(__int64 **)(*v5 + 16LL) == v7 )
  {
    if ( *(_BYTE *)(v3 + 25) )
    {
      v15 = v11;
    }
    else
    {
      v27 = *(_QWORD *)(v3 + 16);
      v15 = v3;
      while ( !*(_BYTE *)(v27 + 25) )
      {
        v15 = v27;
        v27 = *(_QWORD *)(v27 + 16);
      }
    }
    *(_QWORD *)(*v5 + 16LL) = v15;
  }
  v16 = v8 + 3;
LABEL_25:
  if ( *v16 != 1 )
    goto LABEL_26;
  while ( 1 )
  {
    v19 = v11;
    if ( v3 == *(_QWORD *)(*v5 + 8LL) || *(_BYTE *)(v3 + 24) != 1 )
      break;
    v20 = *(_BYTE **)v11;
    if ( v3 == *(_QWORD *)v11 )
    {
      v20 = *(_BYTE **)(v11 + 16);
      if ( !v20[24] )
      {
        v20[24] = 1;
        *(_BYTE *)(v11 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
          (__int64)v5,
          v11);
        v20 = *(_BYTE **)(v11 + 16);
      }
      if ( !v20[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v20 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v20 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v20 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v20 + 24LL) = 1;
            v20[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
              (__int64)v5,
              v20);
            v20 = *(_BYTE **)(v11 + 16);
          }
          v20[24] = *(_BYTE *)(v11 + 24);
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v20 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
            (__int64)v5,
            v11);
          break;
        }
        goto LABEL_74;
      }
    }
    else
    {
      if ( !v20[24] )
      {
        v20[24] = 1;
        v21 = *(_BYTE **)v11;
        *(_BYTE *)(v11 + 24) = 0;
        *(_QWORD *)v11 = *((_QWORD *)v21 + 2);
        v22 = *((_QWORD *)v21 + 2);
        if ( !*(_BYTE *)(v22 + 25) )
          *(_QWORD *)(v22 + 8) = v11;
        *((_QWORD *)v21 + 1) = *(_QWORD *)(v11 + 8);
        if ( v11 == *(_QWORD *)(*v5 + 8LL) )
        {
          *(_QWORD *)(*v5 + 8LL) = v21;
        }
        else
        {
          v23 = *(_QWORD **)(v11 + 8);
          if ( v11 == v23[2] )
            v23[2] = v21;
          else
            *v23 = v21;
        }
        *((_QWORD *)v21 + 2) = v11;
        v20 = *(_BYTE **)v11;
        *(_QWORD *)(v11 + 8) = v21;
      }
      if ( !v20[25] )
      {
        v24 = *((_QWORD *)v20 + 2);
        if ( *(_BYTE *)(v24 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v20 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v20 + 24LL) == 1 )
          {
            *(_BYTE *)(v24 + 24) = 1;
            v20[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
              (__int64)v5,
              (__int64)v20);
            v20 = *(_BYTE **)v11;
          }
          v20[24] = *(_BYTE *)(v11 + 24);
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v20 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
            (__int64)v5,
            (_QWORD *)v11);
          break;
        }
LABEL_74:
        v20[24] = 0;
      }
    }
    v11 = *(_QWORD *)(v11 + 8);
    v3 = v19;
  }
  *(_BYTE *)(v3 + 24) = 1;
LABEL_26:
  v17 = v5[1];
  if ( v17 )
    v5[1] = v17 - 1;
  return v7;
}
