/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18017A198
 * Callers:
 *     _lambda_687e5a8c7a4f05ed052b2b78739515ed_::operator() @ 0x180179650 (_lambda_687e5a8c7a4f05ed052b2b78739515ed_--operator().c)
 *     _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x180179994 (_lambda_16e39da7052e4c67737ceb9c18ac8be9_--operator().c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180031ECC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1800CF680 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1800CF6D4 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E204C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,DisplayRegionInfo>>>::_Extract(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 *v7; // rcx
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // dl
  __int64 v13; // rcx
  __int64 v15; // rdi
  _BYTE *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = *(_QWORD *)(v3 + 16);
  if ( !*(_BYTE *)(*(_QWORD *)v3 + 25LL) )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      v4 = *(_QWORD *)v3;
    }
    else
    {
      v5 = v18;
      v4 = *(_QWORD *)(v18 + 16);
      if ( v18 != v3 )
      {
        *(_QWORD *)(*(_QWORD *)v3 + 8LL) = v18;
        *(_QWORD *)v5 = *(_QWORD *)v3;
        if ( v5 == *(_QWORD *)(v3 + 16) )
        {
          v6 = v5;
        }
        else
        {
          v6 = *(_QWORD *)(v5 + 8);
          if ( !*(_BYTE *)(v4 + 25) )
            *(_QWORD *)(v4 + 8) = v6;
          *(_QWORD *)v6 = v4;
          *(_QWORD *)(v5 + 16) = *(_QWORD *)(v3 + 16);
          *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL) = v5;
        }
        if ( *(_QWORD *)(*a1 + 8LL) == v3 )
        {
          *(_QWORD *)(*a1 + 8LL) = v5;
        }
        else
        {
          v7 = *(__int64 **)(v3 + 8);
          if ( *v7 == v3 )
            *v7 = v5;
          else
            v7[2] = v5;
        }
        *(_QWORD *)(v5 + 8) = *(_QWORD *)(v3 + 8);
        v12 = *(_BYTE *)(v5 + 24);
        *(_BYTE *)(v5 + 24) = *(_BYTE *)(v3 + 24);
        *(_BYTE *)(v3 + 24) = v12;
        goto LABEL_23;
      }
    }
  }
  v6 = *(_QWORD *)(v3 + 8);
  if ( !*(_BYTE *)(v4 + 25) )
    *(_QWORD *)(v4 + 8) = v6;
  if ( *(_QWORD *)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v4;
  }
  else if ( *(_QWORD *)v6 == v3 )
  {
    *(_QWORD *)v6 = v4;
  }
  else
  {
    *(_QWORD *)(v6 + 16) = v4;
  }
  v8 = (_QWORD *)*a1;
  if ( *(_QWORD *)*a1 == v3 )
  {
    if ( *(_BYTE *)(v4 + 25) )
      v9 = (_QWORD *)v6;
    else
      v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v4);
    *v8 = v9;
  }
  if ( *(_QWORD *)(*a1 + 16LL) == v3 )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      v11 = v6;
    }
    else
    {
      v10 = *(_QWORD *)(v4 + 16);
      v11 = v4;
      while ( !*(_BYTE *)(v10 + 25) )
      {
        v11 = v10;
        v10 = *(_QWORD *)(v10 + 16);
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v11;
  }
LABEL_23:
  if ( *(_BYTE *)(v3 + 24) != 1 )
    goto LABEL_24;
  while ( 1 )
  {
    v15 = v6;
    if ( v4 == *(_QWORD *)(*a1 + 8LL) || *(_BYTE *)(v4 + 24) != 1 )
      break;
    v16 = *(_BYTE **)v6;
    if ( v4 == *(_QWORD *)v6 )
    {
      v16 = *(_BYTE **)(v6 + 16);
      if ( !v16[24] )
      {
        v16[24] = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
          (__int64)a1,
          v6);
        v16 = *(_BYTE **)(v6 + 16);
      }
      if ( !v16[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
            v16[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
              (__int64)a1,
              v16);
            v16 = *(_BYTE **)(v6 + 16);
          }
          v16[24] = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
            (__int64)a1,
            v6);
          break;
        }
        goto LABEL_59;
      }
    }
    else
    {
      if ( !v16[24] )
      {
        v16[24] = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v6);
        v16 = *(_BYTE **)v6;
      }
      if ( !v16[25] )
      {
        v17 = *((_QWORD *)v16 + 2);
        if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) == 1 )
          {
            *(_BYTE *)(v17 + 24) = 1;
            v16[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
              (__int64)a1,
              (__int64)v16);
            v16 = *(_BYTE **)v6;
          }
          v16[24] = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v6);
          break;
        }
LABEL_59:
        v16[24] = 0;
      }
    }
    v6 = *(_QWORD *)(v6 + 8);
    v4 = v15;
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_24:
  v13 = a1[1];
  if ( v13 )
    a1[1] = v13 - 1;
  return v3;
}
