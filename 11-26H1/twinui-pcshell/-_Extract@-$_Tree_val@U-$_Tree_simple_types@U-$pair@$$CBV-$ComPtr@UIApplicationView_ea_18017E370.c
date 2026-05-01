/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18017E370
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180035E18 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x18017E2E0 (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicatio.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180031ECC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1800CF680 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1800CF6D4 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E204C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v9; // rdi
  _BYTE *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // dl
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = v3[2];
  if ( *(_BYTE *)(*v3 + 25) )
    goto LABEL_2;
  if ( *(_BYTE *)(v4 + 25) )
  {
    v4 = *v3;
    goto LABEL_2;
  }
  v12 = (__int64)v18;
  v4 = v18[2];
  if ( v18 == v3 )
  {
LABEL_2:
    v5 = v3[1];
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v5;
    if ( *(__int64 **)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( *(__int64 **)v5 == v3 )
    {
      *(_QWORD *)v5 = v4;
    }
    else
    {
      *(_QWORD *)(v5 + 16) = v4;
    }
    v6 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
        v14 = (_QWORD *)v5;
      else
        v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v4);
      *v6 = v14;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
      {
        v15 = v5;
      }
      else
      {
        v16 = *(_QWORD *)(v4 + 16);
        v15 = v4;
        while ( !*(_BYTE *)(v16 + 25) )
        {
          v15 = v16;
          v16 = *(_QWORD *)(v16 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v15;
    }
    goto LABEL_9;
  }
  *(_QWORD *)(*v3 + 8) = v18;
  *(_QWORD *)v12 = *v3;
  if ( v12 == v3[2] )
  {
    v5 = v12;
  }
  else
  {
    v5 = *(_QWORD *)(v12 + 8);
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v5;
    *(_QWORD *)v5 = v4;
    *(_QWORD *)(v12 + 16) = v3[2];
    *(_QWORD *)(v3[2] + 8) = v12;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v12;
  }
  else
  {
    v17 = (__int64 *)v3[1];
    if ( (__int64 *)*v17 == v3 )
      *v17 = v12;
    else
      v17[2] = v12;
  }
  *(_QWORD *)(v12 + 8) = v3[1];
  v13 = *(_BYTE *)(v12 + 24);
  *(_BYTE *)(v12 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v13;
LABEL_9:
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_10;
  while ( 1 )
  {
    v9 = v5;
    if ( v4 == *(_QWORD *)(*a1 + 8LL) || *(_BYTE *)(v4 + 24) != 1 )
      break;
    v10 = *(_BYTE **)v5;
    if ( v4 == *(_QWORD *)v5 )
    {
      v10 = *(_BYTE **)(v5 + 16);
      if ( !v10[24] )
      {
        v10[24] = 1;
        *(_BYTE *)(v5 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
          (__int64)a1,
          v5);
        v10 = *(_BYTE **)(v5 + 16);
      }
      if ( !v10[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v10 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v10 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v10 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v10 + 24LL) = 1;
            v10[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
              (__int64)a1,
              v10);
            v10 = *(_BYTE **)(v5 + 16);
          }
          v10[24] = *(_BYTE *)(v5 + 24);
          *(_BYTE *)(v5 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v10 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
            (__int64)a1,
            v5);
          break;
        }
        goto LABEL_31;
      }
    }
    else
    {
      if ( !v10[24] )
      {
        v10[24] = 1;
        *(_BYTE *)(v5 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v5);
        v10 = *(_BYTE **)v5;
      }
      if ( !v10[25] )
      {
        v11 = *((_QWORD *)v10 + 2);
        if ( *(_BYTE *)(v11 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v10 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v10 + 24LL) == 1 )
          {
            *(_BYTE *)(v11 + 24) = 1;
            v10[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
              (__int64)a1,
              (__int64)v10);
            v10 = *(_BYTE **)v5;
          }
          v10[24] = *(_BYTE *)(v5 + 24);
          *(_BYTE *)(v5 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v10 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v5);
          break;
        }
LABEL_31:
        v10[24] = 0;
      }
    }
    v5 = *(_QWORD *)(v5 + 8);
    v4 = v9;
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_10:
  v7 = a1[1];
  if ( v7 )
    a1[1] = v7 - 1;
  return v3;
}
