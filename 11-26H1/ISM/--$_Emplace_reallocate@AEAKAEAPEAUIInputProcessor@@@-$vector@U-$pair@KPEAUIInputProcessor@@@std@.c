/*
 * XREFs of ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x180082DD4
 * Callers:
 *     ??$emplace_back@AEAKPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAAEAU?$pair@KPEAUIInputProcessor@@@1@AEAK$$QEAPEAUIInputProcessor@@@Z @ 0x1800CC918 (--$emplace_back@AEAKPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$alloca.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18002DF80 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move@PEAUInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@YAPEAUInputSiteId@@QEAU1@0PEAU1@AEAV?$allocator@UInputSiteId@@@0@@Z @ 0x18007C790 (--$_Uninitialized_move@PEAUInputSiteId@@V-$allocator@UInputSiteId@@@std@@@std@@YAPEAUInputSiteId.c)
 *     ?_Change_array@?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@AEAAXQEAUTouchInjectionContact@Input@Internal@UI@Windows@@_K1@Z @ 0x18007D6D0 (-_Change_array@-$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V-$allocator@UTouchInj.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180098184 (-_Calculate_growth@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInput.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA@XZ @ 0x1800CCB50 (--1_Reallocation_guard@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 size_of; // rax
  char *v12; // rax
  char *v13; // rsi
  __int64 v14; // rdi
  char *v15; // r8
  __int64 v16; // rdx
  void *v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h]
  char *v21; // [rsp+40h] [rbp-38h]

  v5 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v7 + 1;
  v10 = std::vector<std::pair<unsigned long,IInputProcessor *>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<16>(v10);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v13 = &v12[v5 & 0xFFFFFFFFFFFFFFF0uLL];
  v19[0] = a1;
  v14 = (__int64)v12;
  v19[2] = v10;
  v20 = (__int64)v13;
  v15 = v12;
  *(_DWORD *)v13 = *a3;
  *((_QWORD *)v13 + 1) = *a4;
  v16 = a1[1];
  v17 = (void *)*a1;
  v21 = v13 + 16;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<InputSiteId *>(v17, a2, v12);
    v16 = a1[1];
    v15 = v13 + 16;
    v17 = (void *)a2;
    v20 = v14;
  }
  std::_Uninitialized_move<InputSiteId *>(v17, v16, v15);
  v19[1] = 0LL;
  std::vector<Windows::UI::Internal::Input::TouchInjectionContact>::_Change_array(a1, v14, v9, v10);
  std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::_Reallocation_guard::~_Reallocation_guard(v19);
  return v13;
}
