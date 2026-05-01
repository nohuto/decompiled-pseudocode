/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E209C
 * Callers:
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E1FA4 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@U-$com_ptr@UIApplicationView@@@winrt@@V-$shared_ptr@VI.c)
 *     ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x1805AA7A8 (-UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180031ECC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Extract(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r11
  _QWORD *v3; // r9
  _QWORD **v4; // r10
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  _QWORD *v8; // rsi
  char v9; // r8
  _QWORD *i; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // rcx
  _QWORD *v13; // r10
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _BYTE *v16; // r10
  _QWORD *v17; // rcx
  char v18; // dl
  __int64 v19; // rcx
  _QWORD *v21; // r11
  __int64 *v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 **v38; // rax

  v2 = a2 + 2;
  v3 = (_QWORD *)a2[2];
  v4 = (_QWORD **)(a2 + 1);
  v6 = a2;
  v7 = a2;
  v8 = a2;
  v9 = *((_BYTE *)v3 + 25);
  if ( v9 )
  {
    for ( i = *v4; !*((_BYTE *)i + 25) && a2 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      a2 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)a2[2]);
  }
  if ( !*(_BYTE *)(*v6 + 25LL) )
  {
    if ( v9 )
    {
      v3 = (_QWORD *)*v6;
    }
    else
    {
      v3 = (_QWORD *)i[2];
      if ( i != v7 )
      {
        *(_QWORD *)(*v6 + 8LL) = i;
        *i = *v6;
        if ( i == (_QWORD *)*v2 )
        {
          v11 = i;
        }
        else
        {
          v11 = (_QWORD *)i[1];
          if ( !*((_BYTE *)v3 + 25) )
            v3[1] = v11;
          *v11 = v3;
          i[2] = *v2;
          *(_QWORD *)(*v2 + 8LL) = i;
        }
        if ( *(_QWORD **)(*a1 + 8LL) == v7 )
        {
          *(_QWORD *)(*a1 + 8LL) = i;
        }
        else
        {
          v12 = *v4;
          if ( (_QWORD *)**v4 == v7 )
            *v12 = i;
          else
            v12[2] = i;
        }
        v17 = *v4;
        v16 = v7 + 3;
        i[1] = v17;
        v18 = *((_BYTE *)i + 24);
        *((_BYTE *)i + 24) = *((_BYTE *)v7 + 24);
        *((_BYTE *)v7 + 24) = v18;
        goto LABEL_28;
      }
    }
  }
  v11 = *v4;
  if ( !*((_BYTE *)v3 + 25) )
    v3[1] = v11;
  if ( *(_QWORD **)(*a1 + 8LL) == v7 )
  {
    *(_QWORD *)(*a1 + 8LL) = v3;
  }
  else if ( (_QWORD *)*v11 == v7 )
  {
    *v11 = v3;
  }
  else
  {
    v11[2] = v3;
  }
  v13 = (_QWORD *)*a1;
  if ( *(_QWORD **)*a1 == v7 )
  {
    if ( *((_BYTE *)v3 + 25) )
      v14 = v11;
    else
      v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min(v3);
    *v13 = v14;
  }
  if ( *(_QWORD **)(*a1 + 16LL) == v7 )
  {
    if ( *((_BYTE *)v3 + 25) )
    {
      v15 = v11;
    }
    else
    {
      v35 = v3[2];
      v15 = v3;
      while ( !*(_BYTE *)(v35 + 25) )
      {
        v15 = (_QWORD *)v35;
        v35 = *(_QWORD *)(v35 + 16);
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v15;
  }
  v16 = v8 + 3;
LABEL_28:
  if ( *v16 != 1 )
    goto LABEL_29;
  while ( 1 )
  {
    v21 = v11;
    if ( v3 == *(_QWORD **)(*a1 + 8LL) || *((_BYTE *)v3 + 24) != 1 )
      break;
    v22 = (__int64 *)*v11;
    if ( v3 == (_QWORD *)*v11 )
    {
      v22 = (__int64 *)v11[2];
      if ( !*((_BYTE *)v22 + 24) )
      {
        *((_BYTE *)v22 + 24) = 1;
        v31 = (_QWORD *)v11[2];
        *((_BYTE *)v11 + 24) = 0;
        v11[2] = *v31;
        if ( !*(_BYTE *)(*v31 + 25LL) )
          *(_QWORD *)(*v31 + 8LL) = v11;
        v31[1] = v11[1];
        if ( v11 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v31;
        }
        else
        {
          v36 = (_QWORD *)v11[1];
          if ( v11 == (_QWORD *)*v36 )
            *v36 = v31;
          else
            v36[2] = v31;
        }
        *v31 = v11;
        v11[1] = v31;
        v22 = (__int64 *)v11[2];
      }
      if ( !*((_BYTE *)v22 + 25) )
      {
        if ( *(_BYTE *)(*v22 + 24) != 1 || *(_BYTE *)(v22[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v22[2] + 24) == 1 )
          {
            *(_BYTE *)(*v22 + 24) = 1;
            v32 = *v22;
            *((_BYTE *)v22 + 24) = 0;
            *v22 = *(_QWORD *)(v32 + 16);
            v33 = *(_QWORD *)(v32 + 16);
            if ( !*(_BYTE *)(v33 + 25) )
              *(_QWORD *)(v33 + 8) = v22;
            *(_QWORD *)(v32 + 8) = v22[1];
            if ( v22 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v32;
            }
            else
            {
              v34 = (_QWORD *)v22[1];
              if ( v22 == (__int64 *)v34[2] )
                v34[2] = v32;
              else
                *v34 = v32;
            }
            *(_QWORD *)(v32 + 16) = v22;
            v22[1] = v32;
            v22 = (__int64 *)v11[2];
          }
          *((_BYTE *)v22 + 24) = *((_BYTE *)v11 + 24);
          *((_BYTE *)v11 + 24) = 1;
          *(_BYTE *)(v22[2] + 24) = 1;
          v28 = (_QWORD *)v11[2];
          v11[2] = *v28;
          if ( !*(_BYTE *)(*v28 + 25LL) )
            *(_QWORD *)(*v28 + 8LL) = v11;
          v28[1] = v11[1];
          if ( v11 == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v28;
          }
          else
          {
            v37 = (_QWORD *)v11[1];
            if ( v11 == (_QWORD *)*v37 )
              *v37 = v28;
            else
              v37[2] = v28;
          }
          *v28 = v11;
          goto LABEL_90;
        }
        goto LABEL_104;
      }
    }
    else
    {
      if ( !*((_BYTE *)v22 + 24) )
      {
        *((_BYTE *)v22 + 24) = 1;
        v23 = (__int64 *)*v11;
        *((_BYTE *)v11 + 24) = 0;
        *v11 = v23[2];
        v24 = v23[2];
        if ( !*(_BYTE *)(v24 + 25) )
          *(_QWORD *)(v24 + 8) = v11;
        v23[1] = v11[1];
        if ( v11 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v23;
        }
        else
        {
          v25 = (_QWORD *)v11[1];
          if ( v11 == (_QWORD *)v25[2] )
            v25[2] = v23;
          else
            *v25 = v23;
        }
        v23[2] = (__int64)v11;
        v11[1] = v23;
        v22 = (__int64 *)*v11;
      }
      if ( !*((_BYTE *)v22 + 25) )
      {
        v26 = v22[2];
        if ( *(_BYTE *)(v26 + 24) != 1 || *(_BYTE *)(*v22 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v22 + 24) == 1 )
          {
            *(_BYTE *)(v26 + 24) = 1;
            v27 = (__int64 *)v22[2];
            *((_BYTE *)v22 + 24) = 0;
            v22[2] = *v27;
            if ( !*(_BYTE *)(*v27 + 25) )
              *(_QWORD *)(*v27 + 8) = v22;
            v27[1] = v22[1];
            if ( v22 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v27;
            }
            else
            {
              v38 = (__int64 **)v22[1];
              if ( v22 == *v38 )
                *v38 = v27;
              else
                v38[2] = v27;
            }
            *v27 = (__int64)v22;
            v22[1] = (__int64)v27;
            v22 = (__int64 *)*v11;
          }
          *((_BYTE *)v22 + 24) = *((_BYTE *)v11 + 24);
          *((_BYTE *)v11 + 24) = 1;
          *(_BYTE *)(*v22 + 24) = 1;
          v28 = (_QWORD *)*v11;
          *v11 = *(_QWORD *)(*v11 + 16LL);
          v29 = v28[2];
          if ( !*(_BYTE *)(v29 + 25) )
            *(_QWORD *)(v29 + 8) = v11;
          v28[1] = v11[1];
          if ( v11 == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v28;
          }
          else
          {
            v30 = (_QWORD *)v11[1];
            if ( v11 == (_QWORD *)v30[2] )
              v30[2] = v28;
            else
              *v30 = v28;
          }
          v28[2] = v11;
LABEL_90:
          v11[1] = v28;
          break;
        }
LABEL_104:
        *((_BYTE *)v22 + 24) = 0;
      }
    }
    v11 = (_QWORD *)v11[1];
    v3 = v21;
  }
  *((_BYTE *)v3 + 24) = 1;
LABEL_29:
  v19 = a1[1];
  if ( v19 )
    a1[1] = v19 - 1;
  return v7;
}
