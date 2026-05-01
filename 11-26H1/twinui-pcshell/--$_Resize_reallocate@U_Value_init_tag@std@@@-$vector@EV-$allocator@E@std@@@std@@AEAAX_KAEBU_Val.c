/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805E0F94
 * Callers:
 *     _anonymous_namespace_::TryGetFilePublisher @ 0x1805EB00C (_anonymous_namespace_--TryGetFilePublisher.c)
 * Callees:
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??1_Reallocation_guard@?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x1805E3970 (--1_Reallocation_guard@-$vector@EV-$allocator@E@std@@@std@@QEAA@XZ.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  signed __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  char *v8; // rax
  char *v9; // rdi
  char *v10; // r12
  size_t v11; // r8
  const void *v12; // rdx
  void *v13; // rcx
  _QWORD v15[6]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v5 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v6 = (_BYTE *)a1[2] - (_BYTE *)*a1;
  v7 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(v2);
  v15[0] = a1;
  v15[2] = v2;
  v9 = &v8[v5];
  v10 = v8;
  v15[3] = &v8[v5];
  memset_0(&v8[v5], 0, a2 - v5);
  v11 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v12 = *a1;
  v15[4] = &v9[a2 - v5];
  memmove_0(v10, v12, v11);
  v13 = (void *)*a1;
  v15[1] = 0LL;
  if ( v13 )
    std::_Deallocate<16>(v13, (struct std::nothrow_t *)((_BYTE *)a1[2] - (_BYTE *)v13));
  *a1 = v10;
  a1[1] = &v10[a2];
  a1[2] = &v10[v2];
  return std::vector<unsigned char>::_Reallocation_guard::~_Reallocation_guard(v15);
}
