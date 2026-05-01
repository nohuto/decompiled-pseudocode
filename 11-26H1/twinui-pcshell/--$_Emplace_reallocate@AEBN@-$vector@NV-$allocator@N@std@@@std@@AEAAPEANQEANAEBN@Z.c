/*
 * XREFs of ??$_Emplace_reallocate@AEBN@?$vector@NV?$allocator@N@std@@@std@@AEAAPEANQEANAEBN@Z @ 0x180234C04
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z @ 0x1801E9AF0 (-_Change_array@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x18022440C (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@XZ @ 0x1802DDA9C (--1_Reallocation_guard@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@XZ.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

char *__fastcall std::vector<double>::_Emplace_reallocate<double const &>(__int64 *a1, _BYTE *a2, __int64 *a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 size_of; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  char *v14; // r14
  _BYTE *v15; // r8
  void *v16; // rcx
  _BYTE *v17; // rdx
  size_t v18; // r8
  _QWORD v20[3]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-50h]
  _QWORD *v22; // [rsp+40h] [rbp-48h]

  v5 = (__int64)&a2[-*a1] >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         a1,
         v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v13 = (__int64)v11;
  v20[0] = a1;
  v20[2] = v9;
  v14 = &v11[8 * v5];
  *(_QWORD *)v14 = v12;
  v15 = (_BYTE *)a1[1];
  v16 = v11;
  v17 = (_BYTE *)*a1;
  v22 = v14 + 8;
  v21 = v14;
  if ( a2 == v15 )
  {
    v18 = v15 - v17;
  }
  else
  {
    memmove_0(v11, v17, (size_t)&a2[-*a1]);
    v17 = a2;
    v18 = a1[1] - (_QWORD)a2;
    v21 = (_QWORD *)v13;
    v16 = v14 + 8;
  }
  memmove_0(v16, v17, v18);
  v20[1] = 0LL;
  std::vector<void *>::_Change_array(a1, v13, v8, v9);
  std::vector<unsigned short *>::_Reallocation_guard::~_Reallocation_guard(v20);
  return v14;
}
