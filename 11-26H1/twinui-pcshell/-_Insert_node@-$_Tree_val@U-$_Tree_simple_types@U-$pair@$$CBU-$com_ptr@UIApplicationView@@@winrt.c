/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180034B04
 * Callers:
 *     ??$_Insert_or_assign@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@?$map@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@_N@1@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@1@@Z @ 0x180034048 (--$_Insert_or_assign@AEBU-$com_ptr@UIApplicationView@@@winrt@@AEAV-$shared_ptr@VInteractionRecor.c)
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180035520 (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Insert_node(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // r10
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v9; // rcx
  __int64 *v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // r9
  _QWORD *v13; // rcx
  _QWORD *v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax

  ++a1[1];
  v4 = (_QWORD *)*a1;
  v5 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v5 == v4 )
  {
    *v4 = a3;
    v4[1] = a3;
    v4[2] = a3;
    *(_BYTE *)(a3 + 24) = 1;
    return a3;
  }
  if ( *(_DWORD *)(a2 + 8) )
  {
    *v5 = a3;
    if ( v5 == (_QWORD *)*v4 )
      *v4 = a3;
  }
  else
  {
    v5[2] = a3;
    if ( v5 == (_QWORD *)v4[2] )
      v4[2] = a3;
  }
  v6 = *(_QWORD *)(a3 + 8);
  v7 = (_QWORD *)a3;
  while ( !*(_BYTE *)(v6 + 24) )
  {
    v9 = v7[1];
    v10 = *(__int64 **)(v9 + 8);
    v11 = *v10;
    if ( v9 == *v10 )
    {
      v11 = v10[2];
      if ( *(_BYTE *)(v11 + 24) )
      {
        v12 = *(_QWORD **)(v9 + 16);
        if ( v7 == v12 )
        {
          v7 = (_QWORD *)v7[1];
          *(_QWORD *)(v9 + 16) = *v12;
          if ( !*(_BYTE *)(*v12 + 25LL) )
            *(_QWORD *)(*v12 + 8LL) = v9;
          v12[1] = *(_QWORD *)(v9 + 8);
          if ( v9 == *(_QWORD *)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v12;
          }
          else
          {
            v20 = *(_QWORD **)(v9 + 8);
            if ( v9 == *v20 )
              *v20 = v12;
            else
              v20[2] = v12;
          }
          *v12 = v9;
          *(_QWORD *)(v9 + 8) = v12;
        }
        *(_BYTE *)(v7[1] + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(v7[1] + 8LL) + 24LL) = 0;
        v13 = *(_QWORD **)(v7[1] + 8LL);
        v14 = (_QWORD *)*v13;
        *v13 = *(_QWORD *)(*v13 + 16LL);
        v15 = v14[2];
        if ( !*(_BYTE *)(v15 + 25) )
          *(_QWORD *)(v15 + 8) = v13;
        v14[1] = v13[1];
        if ( v13 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v14;
        }
        else
        {
          v16 = (_QWORD *)v13[1];
          if ( v13 == (_QWORD *)v16[2] )
            v16[2] = v14;
          else
            *v16 = v14;
        }
        v14[2] = v13;
LABEL_38:
        v13[1] = v14;
        goto LABEL_39;
      }
    }
    else if ( *(_BYTE *)(v11 + 24) )
    {
      v17 = *(_QWORD **)v9;
      if ( v7 == *(_QWORD **)v9 )
      {
        v7 = (_QWORD *)v7[1];
        *(_QWORD *)v9 = v17[2];
        v18 = v17[2];
        if ( !*(_BYTE *)(v18 + 25) )
          *(_QWORD *)(v18 + 8) = v9;
        v17[1] = *(_QWORD *)(v9 + 8);
        if ( v9 == *(_QWORD *)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v17;
        }
        else
        {
          v19 = *(_QWORD **)(v9 + 8);
          if ( v9 == v19[2] )
            v19[2] = v17;
          else
            *v19 = v17;
        }
        v17[2] = v9;
        *(_QWORD *)(v9 + 8) = v17;
      }
      *(_BYTE *)(v7[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v7[1] + 8LL) + 24LL) = 0;
      v13 = *(_QWORD **)(v7[1] + 8LL);
      v14 = (_QWORD *)v13[2];
      v13[2] = *v14;
      if ( !*(_BYTE *)(*v14 + 25LL) )
        *(_QWORD *)(*v14 + 8LL) = v13;
      v14[1] = v13[1];
      if ( v13 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v14;
      }
      else
      {
        v21 = (_QWORD *)v13[1];
        if ( v13 == (_QWORD *)*v21 )
          *v21 = v14;
        else
          v21[2] = v14;
      }
      *v14 = v13;
      goto LABEL_38;
    }
    *(_BYTE *)(v9 + 24) = 1;
    *(_BYTE *)(v11 + 24) = 1;
    *(_BYTE *)(*(_QWORD *)(v7[1] + 8LL) + 24LL) = 0;
    v7 = *(_QWORD **)(v7[1] + 8LL);
LABEL_39:
    v6 = v7[1];
  }
  *(_BYTE *)(v4[1] + 24LL) = 1;
  return a3;
}
