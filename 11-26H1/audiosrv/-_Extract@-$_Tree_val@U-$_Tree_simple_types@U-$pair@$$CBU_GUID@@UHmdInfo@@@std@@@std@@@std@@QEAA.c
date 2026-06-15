/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800560C8
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x180152510 (-_Erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x180056580 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Extract(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v3; // r11
  _QWORD *v4; // r9
  _QWORD **v5; // r10
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  _QWORD *v9; // rsi
  _QWORD *i; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // rcx
  __int64 *v13; // r10
  __int64 v14; // rax
  _QWORD *v15; // rcx
  _BYTE *v16; // r10
  __int64 *v17; // rcx
  _QWORD *v19; // r11
  __int64 *v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rdx
  __int64 **v26; // rax
  _QWORD *v27; // rcx
  char v28; // dl
  __int64 v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // rax
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax

  v3 = a2 + 2;
  v4 = (_QWORD *)a2[2];
  v5 = (_QWORD **)(a2 + 1);
  v7 = a2;
  v8 = a2;
  v9 = a2;
  LOBYTE(a3) = *((_BYTE *)v4 + 25);
  if ( (_BYTE)a3 )
  {
    for ( i = *v5; !*((_BYTE *)i + 25) && a2 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      a2 = i;
  }
  else
  {
    i = (_QWORD *)std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(a2[2], a2, a3);
  }
  if ( !*(_BYTE *)(*v7 + 25LL) )
  {
    if ( (_BYTE)a3 )
    {
      v4 = (_QWORD *)*v7;
    }
    else
    {
      v4 = (_QWORD *)i[2];
      if ( i != v8 )
      {
        *(_QWORD *)(*v7 + 8LL) = i;
        *i = *v7;
        if ( i == (_QWORD *)*v3 )
        {
          v11 = i;
        }
        else
        {
          v11 = (_QWORD *)i[1];
          if ( !*((_BYTE *)v4 + 25) )
            v4[1] = v11;
          *v11 = v4;
          i[2] = *v3;
          *(_QWORD *)(*v3 + 8LL) = i;
        }
        if ( (_QWORD *)(*a1)[1] == v8 )
        {
          (*a1)[1] = (__int64)i;
        }
        else
        {
          v12 = *v5;
          if ( (_QWORD *)**v5 == v8 )
            *v12 = i;
          else
            v12[2] = i;
        }
        v27 = *v5;
        v16 = v8 + 3;
        i[1] = v27;
        v28 = *((_BYTE *)i + 24);
        *((_BYTE *)i + 24) = *((_BYTE *)v8 + 24);
        *((_BYTE *)v8 + 24) = v28;
        goto LABEL_29;
      }
    }
  }
  v11 = *v5;
  if ( !*((_BYTE *)v4 + 25) )
    v4[1] = v11;
  if ( (_QWORD *)(*a1)[1] == v8 )
  {
    (*a1)[1] = (__int64)v4;
  }
  else if ( (_QWORD *)*v11 == v8 )
  {
    *v11 = v4;
  }
  else
  {
    v11[2] = v4;
  }
  v13 = *a1;
  if ( (_QWORD *)**a1 == v8 )
  {
    if ( *((_BYTE *)v4 + 25) )
      v14 = (__int64)v11;
    else
      v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v4, a2, v11);
    *v13 = v14;
  }
  if ( (_QWORD *)(*a1)[2] == v8 )
  {
    if ( *((_BYTE *)v4 + 25) )
    {
      v15 = v11;
    }
    else
    {
      v29 = v4[2];
      v15 = v4;
      while ( !*(_BYTE *)(v29 + 25) )
      {
        v15 = (_QWORD *)v29;
        v29 = *(_QWORD *)(v29 + 16);
      }
    }
    (*a1)[2] = (__int64)v15;
  }
  v16 = v9 + 3;
LABEL_29:
  if ( *v16 != 1 )
    goto LABEL_30;
  while ( 1 )
  {
    v19 = v11;
    if ( v4 == (_QWORD *)(*a1)[1] || *((_BYTE *)v4 + 24) != 1 )
      break;
    v20 = (__int64 *)*v11;
    if ( v4 == (_QWORD *)*v11 )
    {
      v20 = (__int64 *)v11[2];
      if ( !*((_BYTE *)v20 + 24) )
      {
        *((_BYTE *)v20 + 24) = 1;
        v30 = (_QWORD *)v11[2];
        *((_BYTE *)v11 + 24) = 0;
        v11[2] = *v30;
        if ( !*(_BYTE *)(*v30 + 25LL) )
          *(_QWORD *)(*v30 + 8LL) = v11;
        v30[1] = v11[1];
        if ( v11 == (_QWORD *)(*a1)[1] )
        {
          (*a1)[1] = (__int64)v30;
        }
        else
        {
          v31 = (_QWORD *)v11[1];
          if ( v11 == (_QWORD *)*v31 )
            *v31 = v30;
          else
            v31[2] = v30;
        }
        *v30 = v11;
        v11[1] = v30;
        v20 = (__int64 *)v11[2];
      }
      if ( !*((_BYTE *)v20 + 25) )
      {
        if ( *(_BYTE *)(*v20 + 24) != 1 || *(_BYTE *)(v20[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v20[2] + 24) == 1 )
          {
            *(_BYTE *)(*v20 + 24) = 1;
            v32 = *v20;
            *((_BYTE *)v20 + 24) = 0;
            *v20 = *(_QWORD *)(v32 + 16);
            v33 = *(_QWORD *)(v32 + 16);
            if ( !*(_BYTE *)(v33 + 25) )
              *(_QWORD *)(v33 + 8) = v20;
            *(_QWORD *)(v32 + 8) = v20[1];
            if ( v20 == (__int64 *)(*a1)[1] )
            {
              (*a1)[1] = v32;
            }
            else
            {
              v34 = (__int64 *)v20[1];
              if ( v20 == (__int64 *)v34[2] )
                v34[2] = v32;
              else
                *v34 = v32;
            }
            *(_QWORD *)(v32 + 16) = v20;
            v20[1] = v32;
            v20 = (__int64 *)v11[2];
          }
          *((_BYTE *)v20 + 24) = *((_BYTE *)v11 + 24);
          *((_BYTE *)v11 + 24) = 1;
          *(_BYTE *)(v20[2] + 24) = 1;
          v35 = (_QWORD *)v11[2];
          v11[2] = *v35;
          if ( !*(_BYTE *)(*v35 + 25LL) )
            *(_QWORD *)(*v35 + 8LL) = v11;
          v35[1] = v11[1];
          if ( v11 == (_QWORD *)(*a1)[1] )
          {
            (*a1)[1] = (__int64)v35;
          }
          else
          {
            v36 = (_QWORD *)v11[1];
            if ( v11 == (_QWORD *)*v36 )
              *v36 = v35;
            else
              v36[2] = v35;
          }
          *v35 = v11;
          goto LABEL_91;
        }
        goto LABEL_110;
      }
    }
    else
    {
      if ( !*((_BYTE *)v20 + 24) )
      {
        *((_BYTE *)v20 + 24) = 1;
        v21 = (__int64 *)*v11;
        *((_BYTE *)v11 + 24) = 0;
        *v11 = v21[2];
        v22 = v21[2];
        if ( !*(_BYTE *)(v22 + 25) )
          *(_QWORD *)(v22 + 8) = v11;
        v21[1] = v11[1];
        if ( v11 == (_QWORD *)(*a1)[1] )
        {
          (*a1)[1] = (__int64)v21;
        }
        else
        {
          v23 = (_QWORD *)v11[1];
          if ( v11 == (_QWORD *)v23[2] )
            v23[2] = v21;
          else
            *v23 = v21;
        }
        v21[2] = (__int64)v11;
        v11[1] = v21;
        v20 = (__int64 *)*v11;
      }
      if ( !*((_BYTE *)v20 + 25) )
      {
        v24 = v20[2];
        if ( *(_BYTE *)(v24 + 24) != 1 || *(_BYTE *)(*v20 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v20 + 24) == 1 )
          {
            *(_BYTE *)(v24 + 24) = 1;
            v25 = (__int64 *)v20[2];
            *((_BYTE *)v20 + 24) = 0;
            v20[2] = *v25;
            if ( !*(_BYTE *)(*v25 + 25) )
              *(_QWORD *)(*v25 + 8) = v20;
            v25[1] = v20[1];
            if ( v20 == (__int64 *)(*a1)[1] )
            {
              (*a1)[1] = (__int64)v25;
            }
            else
            {
              v26 = (__int64 **)v20[1];
              if ( v20 == *v26 )
                *v26 = v25;
              else
                v26[2] = v25;
            }
            *v25 = (__int64)v20;
            v20[1] = (__int64)v25;
            v20 = (__int64 *)*v11;
          }
          *((_BYTE *)v20 + 24) = *((_BYTE *)v11 + 24);
          *((_BYTE *)v11 + 24) = 1;
          *(_BYTE *)(*v20 + 24) = 1;
          v35 = (_QWORD *)*v11;
          *v11 = *(_QWORD *)(*v11 + 16LL);
          v37 = v35[2];
          if ( !*(_BYTE *)(v37 + 25) )
            *(_QWORD *)(v37 + 8) = v11;
          v35[1] = v11[1];
          if ( v11 == (_QWORD *)(*a1)[1] )
          {
            (*a1)[1] = (__int64)v35;
          }
          else
          {
            v38 = (_QWORD *)v11[1];
            if ( v11 == (_QWORD *)v38[2] )
              v38[2] = v35;
            else
              *v38 = v35;
          }
          v35[2] = v11;
LABEL_91:
          v11[1] = v35;
          break;
        }
LABEL_110:
        *((_BYTE *)v20 + 24) = 0;
      }
    }
    v11 = (_QWORD *)v11[1];
    v4 = v19;
  }
  *((_BYTE *)v4 + 24) = 1;
LABEL_30:
  v17 = a1[1];
  if ( v17 )
    a1[1] = (__int64 *)((char *)v17 - 1);
  return v8;
}
