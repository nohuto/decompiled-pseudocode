/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180055760
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180054E40 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18005A364 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1800F767C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1800F76CC (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801E1A14 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_ea_1801E1A14.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>>::_Extract(
        __int64 **a1,
        __int64 *a2)
{
  __int64 v3; // rdx
  __int64 *v4; // r11
  __int64 v5; // r10
  __int64 *v6; // rax
  __int64 v7; // r9
  __int64 *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 **v12; // rcx
  char v13; // dl
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 *v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>>,std::_Iterator_base0>::operator++(&v19);
  v5 = v4[2];
  if ( *(_BYTE *)(*v4 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v5 + 25) )
  {
    v5 = *v4;
LABEL_5:
    v7 = v4[1];
    if ( !*(_BYTE *)(v5 + 25) )
      *(_QWORD *)(v5 + 8) = v7;
    if ( (__int64 *)(*a1)[1] == v4 )
    {
      (*a1)[1] = v5;
    }
    else if ( *(__int64 **)v7 == v4 )
    {
      *(_QWORD *)v7 = v5;
    }
    else
    {
      *(_QWORD *)(v7 + 16) = v5;
    }
    v8 = *a1;
    if ( (__int64 *)**a1 == v4 )
    {
      if ( *(_BYTE *)(v5 + 25) )
        v9 = v7;
      else
        v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min(
               v5,
               v3,
               v8,
               v7);
      *v8 = v9;
    }
    if ( (__int64 *)(*a1)[2] == v4 )
    {
      if ( *(_BYTE *)(v5 + 25) )
      {
        v10 = v7;
      }
      else
      {
        v11 = *(_QWORD *)(v5 + 16);
        v10 = v5;
        while ( !*(_BYTE *)(v11 + 25) )
        {
          v10 = v11;
          v11 = *(_QWORD *)(v11 + 16);
        }
      }
      (*a1)[2] = v10;
    }
    goto LABEL_35;
  }
  v6 = v19;
  v5 = v19[2];
  if ( v19 == v4 )
    goto LABEL_5;
  *(_QWORD *)(*v4 + 8) = v19;
  *v6 = *v4;
  if ( v6 == (__int64 *)v4[2] )
  {
    v7 = (__int64)v6;
  }
  else
  {
    v7 = v6[1];
    if ( !*(_BYTE *)(v5 + 25) )
      *(_QWORD *)(v5 + 8) = v7;
    *(_QWORD *)v7 = v5;
    v6[2] = v4[2];
    *(_QWORD *)(v4[2] + 8) = v6;
  }
  if ( (__int64 *)(*a1)[1] == v4 )
  {
    (*a1)[1] = (__int64)v6;
  }
  else
  {
    v12 = (__int64 **)v4[1];
    if ( *v12 == v4 )
      *v12 = v6;
    else
      v12[2] = v6;
  }
  v6[1] = v4[1];
  v13 = *((_BYTE *)v6 + 24);
  *((_BYTE *)v6 + 24) = *((_BYTE *)v4 + 24);
  *((_BYTE *)v4 + 24) = v13;
LABEL_35:
  if ( *((_BYTE *)v4 + 24) != 1 )
    goto LABEL_58;
  while ( 1 )
  {
    v14 = v7;
    if ( v5 == (*a1)[1] || *(_BYTE *)(v5 + 24) != 1 )
      break;
    v15 = *(_QWORD *)v7;
    if ( v5 == *(_QWORD *)v7 )
    {
      v15 = *(_QWORD *)(v7 + 16);
      if ( !*(_BYTE *)(v15 + 24) )
      {
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(v7 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
        v15 = *(_QWORD *)(v7 + 16);
      }
      if ( !*(_BYTE *)(v15 + 25) )
      {
        if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v15 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v15 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v15 + 24LL) = 1;
            *(_BYTE *)(v15 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v15);
            v15 = *(_QWORD *)(v7 + 16);
          }
          *(_BYTE *)(v15 + 24) = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v15 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
          break;
        }
LABEL_52:
        *(_BYTE *)(v15 + 24) = 0;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v15 + 24) )
      {
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(v7 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v7);
        v15 = *(_QWORD *)v7;
      }
      if ( !*(_BYTE *)(v15 + 25) )
      {
        v16 = *(_QWORD *)(v15 + 16);
        if ( *(_BYTE *)(v16 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v15 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) == 1 )
          {
            *(_BYTE *)(v16 + 24) = 1;
            *(_BYTE *)(v15 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
            v15 = *(_QWORD *)v7;
          }
          *(_BYTE *)(v15 + 24) = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v15 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v7);
          break;
        }
        goto LABEL_52;
      }
    }
    v7 = *(_QWORD *)(v7 + 8);
    v5 = v14;
  }
  *(_BYTE *)(v5 + 24) = 1;
LABEL_58:
  v17 = a1[1];
  if ( v17 )
    a1[1] = (__int64 *)((char *)v17 - 1);
  return v4;
}
