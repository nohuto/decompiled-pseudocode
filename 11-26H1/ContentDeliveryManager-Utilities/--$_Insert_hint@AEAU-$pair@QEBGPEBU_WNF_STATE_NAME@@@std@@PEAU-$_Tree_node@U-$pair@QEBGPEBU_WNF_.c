/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18008CDD0
 * Callers:
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x18008D3CC (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x18005C330 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x18006516C (-_Max@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$.c)
 *     ??$_Insert_at@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@1@Z @ 0x18008CC64 (--$_Insert_at@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_ST.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18008D038 (--$_Insert_nohint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WN.c)
 *     ??Rless@Triggers@CreativeFramework@@QEBA_NPEBG0@Z @ 0x18008D27C (--Rless@Triggers@CreativeFramework@@QEBA_NPEBG0@Z.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_hint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v9; // rdx
  int v10; // r8d
  _QWORD *result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 i; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  _QWORD *j; // rax
  int v18; // [rsp+20h] [rbp-38h]
  char v19; // [rsp+30h] [rbp-28h] BYREF

  v9 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      if ( (unsigned __int8)CreativeFramework::Triggers::less::operator()(a1, *a4, *(_QWORD *)(a3 + 32)) )
      {
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v18,
          a5);
        return a2;
      }
      goto LABEL_39;
    }
    if ( (_QWORD *)a3 == v9 )
    {
      if ( (unsigned __int8)CreativeFramework::Triggers::less::operator()(a1, *(_QWORD *)(v9[2] + 32LL), *a4) )
      {
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          0,
          *(_QWORD **)(*a1 + 16),
          v18,
          a5);
        return a2;
      }
      goto LABEL_39;
    }
    if ( !(unsigned __int8)CreativeFramework::Triggers::less::operator()(a1, *a4, *(_QWORD *)(a3 + 32)) )
      goto LABEL_48;
    v13 = a3;
    if ( *(_BYTE *)(a3 + 25) )
    {
      v13 = *(_QWORD *)(a3 + 16);
    }
    else
    {
      v12 = *(_QWORD *)a3;
      if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
      {
        for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v13 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
          v13 = i;
        if ( !*(_BYTE *)(v13 + 25) )
          v13 = i;
      }
      else
      {
        v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Max(v12);
      }
    }
    if ( (unsigned __int8)CreativeFramework::Triggers::less::operator()(v12, *(_QWORD *)(v13 + 32), *a4) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 25LL) )
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v13,
          v18,
          a5);
      else
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v18,
          a5);
      return a2;
    }
    else
    {
LABEL_48:
      if ( !(unsigned __int8)CreativeFramework::Triggers::less::operator()(v12, *(_QWORD *)(a3 + 32), *a4) )
        goto LABEL_39;
      v16 = (_QWORD *)a3;
      if ( !*(_BYTE *)(a3 + 25) )
      {
        v15 = *(_QWORD *)(a3 + 16);
        if ( *(_BYTE *)(v15 + 25) )
        {
          for ( j = *(_QWORD **)(a3 + 8); !*((_BYTE *)j + 25) && v16 == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
            v16 = j;
        }
        else
        {
          j = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v15);
        }
        v16 = j;
      }
      if ( v16 != (_QWORD *)*a1 && !(unsigned __int8)CreativeFramework::Triggers::less::operator()(v15, *a4, v16[4]) )
      {
LABEL_39:
        *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_nohint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
                           (_DWORD)a1,
                           (unsigned int)&v19,
                           v10,
                           (_DWORD)a4,
                           (__int64)a5);
        return a2;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)a3,
          v18,
          a5);
      else
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          a2,
          1,
          v16,
          v18,
          a5);
      return a2;
    }
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        a1,
        a2,
        1,
        v9,
        v18,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      operator delete(a5);
      throw;
    }
  }
  return result;
}
