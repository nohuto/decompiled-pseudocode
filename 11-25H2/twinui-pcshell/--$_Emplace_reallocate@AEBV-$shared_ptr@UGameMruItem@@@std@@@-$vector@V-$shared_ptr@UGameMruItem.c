/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@UGameMruItem@@@std@@@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UGameMruItem@@@1@QEAV21@AEBV21@@Z @ 0x1801C458C
 * Callers:
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800645C4 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x18031B510 (-AddMruItem@JsonGameMruManager@@QEAAXV-$shared_ptr@UGameMruItem@@@std@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180029B90 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18002A0C0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UGameMruItem@@@2@_K1@Z @ 0x1801C4764 (-_Change_array@-$vector@V-$shared_ptr@UGameMruItem@@@std@@V-$allocator@V-$shared_ptr@UGameMruIte.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

char *__fastcall std::vector<std::shared_ptr<GameMruItem>>::_Emplace_reallocate<std::shared_ptr<GameMruItem> const &>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  size_t size_of; // rax
  char *v11; // rax
  char *v12; // r14
  unsigned __int64 v13; // r15
  char *v14; // r13
  char *v15; // rbx
  __int64 v16; // rax
  char *v17; // r8
  char *v18; // rdx
  char *v19; // rcx
  __int64 v20; // rdx
  char *result; // rax
  char *v22; // rcx
  signed __int64 v23; // rdi
  char *v24; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  char *v26; // [rsp+28h] [rbp-40h]
  void *v27; // [rsp+28h] [rbp-40h]
  __int64 v28; // [rsp+70h] [rbp+8h]
  __int64 v30; // [rsp+88h] [rbp+20h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  v7 = 0xFFFFFFFFFFFFFFFLL;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v30 = v6 + 1;
  v8 = (a1[2] - *a1) >> 4;
  v9 = v8 >> 1;
  if ( v8 <= 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v7 = v9 + v8;
    if ( v9 + v8 < v6 + 1 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v7);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v26 = v11;
  v13 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = &v11[v13];
  v15 = &v11[v13 + 16];
  v24 = v15;
  try
  {
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 1) = 0LL;
    v16 = a3[1];
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    *(_QWORD *)v14 = *a3;
    *((_QWORD *)v14 + 1) = a3[1];
    v28 = (__int64)v14;
    v17 = a1[1];
    v18 = *a1;
    v19 = v12;
    if ( a2 == v17 )
    {
      while ( v18 != v17 )
      {
        *(_QWORD *)v19 = 0LL;
        *((_QWORD *)v19 + 1) = 0LL;
        *(_QWORD *)v19 = *(_QWORD *)v18;
        *((_QWORD *)v19 + 1) = *((_QWORD *)v18 + 1);
        *(_QWORD *)v18 = 0LL;
        *((_QWORD *)v18 + 1) = 0LL;
        v19 += 16;
        v18 += 16;
      }
      v20 = (__int64)v19;
    }
    else
    {
      while ( v18 != a2 )
      {
        *(_QWORD *)v19 = 0LL;
        *((_QWORD *)v19 + 1) = 0LL;
        *(_QWORD *)v19 = *(_QWORD *)v18;
        *((_QWORD *)v19 + 1) = *((_QWORD *)v18 + 1);
        *(_QWORD *)v18 = 0LL;
        *((_QWORD *)v18 + 1) = 0LL;
        v19 += 16;
        v18 += 16;
      }
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v19, (__int64)v19);
      v28 = (__int64)v12;
      v22 = a1[1];
      if ( a2 != v22 )
      {
        v23 = &a2[-v13] - v12;
        do
        {
          *(_QWORD *)v15 = 0LL;
          *((_QWORD *)v15 + 1) = 0LL;
          *(_QWORD *)v15 = *(_QWORD *)&v15[v23 - 16];
          *((_QWORD *)v15 + 1) = *(_QWORD *)&v15[v23 - 8];
          *(_QWORD *)&v15[v23 - 16] = 0LL;
          *(_QWORD *)&v15[v23 - 8] = 0LL;
          v15 += 16;
        }
        while ( &v15[v23 - 16] != v22 );
      }
      v20 = (__int64)v15;
      v19 = v15;
    }
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v19, v20);
    std::vector<std::shared_ptr<GameMruItem>>::_Change_array(a1, v12, v30, v7, v24, v26);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v28, v25);
    std::_Deallocate<16,0>(v27, (const struct std::nothrow_t *)(16 * v7));
    throw;
  }
  return result;
}
