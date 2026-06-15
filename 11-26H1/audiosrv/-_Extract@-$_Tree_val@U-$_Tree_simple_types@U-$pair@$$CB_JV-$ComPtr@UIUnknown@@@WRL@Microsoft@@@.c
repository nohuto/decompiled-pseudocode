/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180066CA8
 * Callers:
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800ACADC (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180056074 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x180056580 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x180066FD4 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@2@@Z @ 0x180067024 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>>::_Extract(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // r11
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // [rsp+38h] [rbp+10h] BYREF

  v21 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(
    (__int64 *)&v21,
    a2);
  v4 = v3[2];
  if ( !*(_BYTE *)(*v3 + 25) )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      v4 = *v3;
    }
    else
    {
      v5 = (__int64)v21;
      v4 = v21[2];
      if ( v21 != v3 )
      {
        *(_QWORD *)(*v3 + 8) = v21;
        *(_QWORD *)v5 = *v3;
        if ( v5 == v3[2] )
        {
          v6 = v5;
        }
        else
        {
          v6 = *(_QWORD *)(v5 + 8);
          if ( !*(_BYTE *)(v4 + 25) )
            *(_QWORD *)(v4 + 8) = v6;
          *(_QWORD *)v6 = v4;
          *(_QWORD *)(v5 + 16) = v3[2];
          *(_QWORD *)(v3[2] + 8) = v5;
        }
        if ( *(__int64 **)(*a1 + 8LL) == v3 )
        {
          *(_QWORD *)(*a1 + 8LL) = v5;
        }
        else
        {
          v7 = (__int64 *)v3[1];
          if ( (__int64 *)*v7 == v3 )
            *v7 = v5;
          else
            v7[2] = v5;
        }
        *(_QWORD *)(v5 + 8) = v3[1];
        v12 = *(_BYTE *)(v5 + 24);
        *(_BYTE *)(v5 + 24) = *((_BYTE *)v3 + 24);
        *((_BYTE *)v3 + 24) = v12;
        goto LABEL_23;
      }
    }
  }
  v6 = v3[1];
  if ( !*(_BYTE *)(v4 + 25) )
    *(_QWORD *)(v4 + 8) = v6;
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v4;
  }
  else if ( *(__int64 **)v6 == v3 )
  {
    *(_QWORD *)v6 = v4;
  }
  else
  {
    *(_QWORD *)(v6 + 16) = v4;
  }
  v8 = (_QWORD *)*a1;
  if ( *(__int64 **)*a1 == v3 )
  {
    if ( *(_BYTE *)(v4 + 25) )
      v9 = (_QWORD *)v6;
    else
      v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min((_QWORD *)v4);
    *v8 = v9;
  }
  if ( *(__int64 **)(*a1 + 16LL) == v3 )
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
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_24;
  while ( 1 )
  {
    v15 = v6;
    if ( v4 == *(_QWORD *)(*a1 + 8LL) || *(_BYTE *)(v4 + 24) != 1 )
      break;
    v16 = *(_QWORD *)v6;
    if ( v4 == *(_QWORD *)v6 )
    {
      v16 = *(_QWORD *)(v6 + 16);
      if ( !*(_BYTE *)(v16 + 24) )
      {
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1, v6);
        v16 = *(_QWORD *)(v6 + 16);
      }
      if ( !*(_BYTE *)(v16 + 25) )
      {
        if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
            *(_BYTE *)(v16 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>>::_Rrotate(a1);
            v16 = *(_QWORD *)(v6 + 16);
          }
          *(_BYTE *)(v16 + 24) = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1, v6);
          break;
        }
        goto LABEL_66;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v16 + 24) )
      {
        *(_BYTE *)(v16 + 24) = 1;
        v17 = *(_QWORD *)v6;
        *(_BYTE *)(v6 + 24) = 0;
        *(_QWORD *)v6 = *(_QWORD *)(v17 + 16);
        v18 = *(_QWORD *)(v17 + 16);
        if ( !*(_BYTE *)(v18 + 25) )
          *(_QWORD *)(v18 + 8) = v6;
        *(_QWORD *)(v17 + 8) = *(_QWORD *)(v6 + 8);
        if ( v6 == *(_QWORD *)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v17;
        }
        else
        {
          v19 = *(_QWORD **)(v6 + 8);
          if ( v6 == v19[2] )
            v19[2] = v17;
          else
            *v19 = v17;
        }
        *(_QWORD *)(v17 + 16) = v6;
        v16 = *(_QWORD *)v6;
        *(_QWORD *)(v6 + 8) = v17;
      }
      if ( !*(_BYTE *)(v16 + 25) )
      {
        v20 = *(_QWORD *)(v16 + 16);
        if ( *(_BYTE *)(v20 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) == 1 )
          {
            *(_BYTE *)(v20 + 24) = 1;
            *(_BYTE *)(v16 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1, v16);
            v16 = *(_QWORD *)v6;
          }
          *(_BYTE *)(v16 + 24) = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>>::_Rrotate(a1);
          break;
        }
LABEL_66:
        *(_BYTE *)(v16 + 24) = 0;
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
