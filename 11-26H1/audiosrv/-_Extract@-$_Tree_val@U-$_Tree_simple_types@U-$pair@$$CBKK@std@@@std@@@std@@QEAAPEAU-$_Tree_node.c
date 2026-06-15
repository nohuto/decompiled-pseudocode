/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180057040
 * Callers:
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@V21@@Z @ 0x180056FD0 (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@@s.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@2@@Z @ 0x18003EB30 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AXXZ@std@@@std@@@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18003EB84 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU-$_Tree_nod.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x180056580 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // r10
  __int64 *v4; // r8
  _QWORD *v5; // r11
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  char v9; // r9
  __int64 *i; // rax
  __int64 v11; // r9
  _QWORD *v12; // r8
  __int64 v13; // rcx
  _BYTE *v14; // r8
  __int64 v15; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  char v20; // dl
  __int64 v21; // rax
  _QWORD *v22; // rcx
  _BYTE *v23; // rdx
  __int64 v24; // rcx

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
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min((_QWORD *)a2[2]);
  }
  if ( *(_BYTE *)(*v6 + 25) )
    goto LABEL_5;
  if ( v9 )
  {
    v3 = *v6;
    goto LABEL_5;
  }
  v3 = i[2];
  if ( i == v7 )
  {
LABEL_5:
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
    v12 = (_QWORD *)*v5;
    if ( *(__int64 **)*v5 == v7 )
    {
      if ( *(_BYTE *)(v3 + 25) )
        v17 = (_QWORD *)v11;
      else
        v17 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min((_QWORD *)v3);
      *v12 = v17;
    }
    if ( *(__int64 **)(*v5 + 16LL) == v7 )
    {
      if ( *(_BYTE *)(v3 + 25) )
      {
        v13 = v11;
      }
      else
      {
        v21 = *(_QWORD *)(v3 + 16);
        v13 = v3;
        while ( !*(_BYTE *)(v21 + 25) )
        {
          v13 = v21;
          v21 = *(_QWORD *)(v21 + 16);
        }
      }
      *(_QWORD *)(*v5 + 16LL) = v13;
    }
    v14 = v8 + 3;
    goto LABEL_19;
  }
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
    v22 = (_QWORD *)*v4;
    if ( *(__int64 **)*v4 == v7 )
      *v22 = i;
    else
      v22[2] = i;
  }
  v19 = *v4;
  v14 = v7 + 3;
  i[1] = v19;
  v20 = *((_BYTE *)i + 24);
  *((_BYTE *)i + 24) = *((_BYTE *)v7 + 24);
  *((_BYTE *)v7 + 24) = v20;
LABEL_19:
  if ( *v14 != 1 )
    goto LABEL_20;
  while ( 1 )
  {
    v18 = v11;
    if ( v3 == *(_QWORD *)(*v5 + 8LL) || *(_BYTE *)(v3 + 24) != 1 )
      break;
    v23 = *(_BYTE **)v11;
    if ( v3 == *(_QWORD *)v11 )
    {
      v23 = *(_BYTE **)(v11 + 16);
      if ( !v23[24] )
      {
        v23[24] = 1;
        *(_BYTE *)(v11 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
          (__int64)v5,
          v11);
        v23 = *(_BYTE **)(v11 + 16);
      }
      if ( !v23[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v23 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v23 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v23 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v23 + 24LL) = 1;
            v23[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
              (__int64)v5,
              v23);
            v23 = *(_BYTE **)(v11 + 16);
          }
          v23[24] = *(_BYTE *)(v11 + 24);
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v23 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
            (__int64)v5,
            v11);
          break;
        }
LABEL_64:
        v23[24] = 0;
      }
    }
    else
    {
      if ( !v23[24] )
      {
        v23[24] = 1;
        *(_BYTE *)(v11 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
          (__int64)v5,
          (_QWORD *)v11);
        v23 = *(_BYTE **)v11;
      }
      if ( !v23[25] )
      {
        v24 = *((_QWORD *)v23 + 2);
        if ( *(_BYTE *)(v24 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v23 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v23 + 24LL) == 1 )
          {
            *(_BYTE *)(v24 + 24) = 1;
            v23[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
              (__int64)v5,
              (__int64)v23);
            v23 = *(_BYTE **)v11;
          }
          v23[24] = *(_BYTE *)(v11 + 24);
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v23 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
            (__int64)v5,
            (_QWORD *)v11);
          break;
        }
        goto LABEL_64;
      }
    }
    v11 = *(_QWORD *)(v11 + 8);
    v3 = v18;
  }
  *(_BYTE *)(v3 + 24) = 1;
LABEL_20:
  v15 = v5[1];
  if ( v15 )
    v5[1] = v15 - 1;
  return v7;
}
