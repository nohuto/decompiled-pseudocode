/*
 * XREFs of ??$_Assign_counted_range@PEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@1@_K@Z @ 0x18018FF70
 * Callers:
 *     ??4?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18018FD78 (--4-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@2@@s.c)
 *     ?HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18018FE28 (-HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003479C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18009100C (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ??$_Uninitialized_copy_n@PEAV?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@_K0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x18018FF28 (--$_Uninitialized_copy_n@PEAV-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewI.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAX_K@Z @ 0x18019012C (-_Clear_and_reserve_geometric@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_p.c)
 */

void __fastcall std::vector<std::shared_ptr<KBViewInfo>>::_Assign_counted_range<std::shared_ptr<KBViewInfo> *>(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  char *v3; // rsi
  unsigned __int64 v4; // rdi
  char *i; // rbx
  __int64 v8; // rdx
  char *v9; // r8
  unsigned __int64 v10; // rbx

  v3 = *(char **)a1;
  v4 = a3;
  if ( a3 > (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4 )
  {
    std::vector<std::shared_ptr<KBViewInfo>>::_Clear_and_reserve_geometric(a1, a3);
    for ( i = *(char **)a1; v4; --v4 )
    {
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(i, a2);
      i += 16;
      a2 += 2;
    }
    v8 = (__int64)i;
LABEL_5:
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)i, v8);
    goto LABEL_6;
  }
  v9 = *(char **)(a1 + 8);
  v10 = (v9 - v3) >> 4;
  if ( v4 <= v10 )
  {
    for ( i = &v3[16 * v4]; v4; --v4 )
    {
      std::shared_ptr<FlyoutView>::operator=(v3, a2);
      v3 += 16;
      a2 += 2;
    }
    v8 = *(_QWORD *)(a1 + 8);
    goto LABEL_5;
  }
  while ( v3 != v9 )
  {
    std::shared_ptr<FlyoutView>::operator=(v3, a2);
    v9 = *(char **)(a1 + 8);
    v3 += 16;
    a2 += 2;
  }
  i = (char *)std::_Uninitialized_copy_n<std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
                (__int64)a2,
                v4 - v10,
                v9);
LABEL_6:
  *(_QWORD *)(a1 + 8) = i;
}
