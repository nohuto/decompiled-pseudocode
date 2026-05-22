/*
 * XREFs of ??$_Emplace_reallocate@AEAHPEAVInputRedirectionTarget@@@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@AEAAPEAU?$pair@KPEAVInputRedirectionTarget@@@1@QEAU21@AEAH$$QEAPEAVInputRedirectionTarget@@@Z @ 0x1801B4050
 * Callers:
 *     ??$emplace_back@AEAHPEAVInputRedirectionTarget@@@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAAAEAU?$pair@KPEAVInputRedirectionTarget@@@1@AEAH$$QEAPEAVInputRedirectionTarget@@@Z @ 0x1801B418C (--$emplace_back@AEAHPEAVInputRedirectionTarget@@@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18002DF80 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move@PEAUInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@YAPEAUInputSiteId@@QEAU1@0PEAU1@AEAV?$allocator@UInputSiteId@@@0@@Z @ 0x18007C790 (--$_Uninitialized_move@PEAUInputSiteId@@V-$allocator@UInputSiteId@@@std@@@std@@YAPEAUInputSiteId.c)
 *     ?_Change_array@?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@AEAAXQEAUTouchInjectionContact@Input@Internal@UI@Windows@@_K1@Z @ 0x18007D6D0 (-_Change_array@-$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V-$allocator@UTouchInj.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA@XZ @ 0x1800CCB50 (--1_Reallocation_guard@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::_Emplace_reallocate<int &,InputRedirectionTarget *>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 size_of; // rax
  char *v14; // rax
  char *v15; // r14
  __int64 v16; // rdi
  char *v17; // r8
  __int64 v18; // rdx
  void *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v4 = 0xFFFFFFFFFFFFFFFLL;
  v5 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v10 = v7 + 1;
  v11 = (a1[2] - *a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v4 = v12 + v11;
    if ( v12 + v11 < v10 )
      v4 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v4);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v15 = &v14[v5 & 0xFFFFFFFFFFFFFFF0uLL];
  v21[0] = a1;
  v16 = (__int64)v14;
  v21[2] = v4;
  v22 = (__int64)v15;
  v17 = v14;
  *(_DWORD *)v15 = *a3;
  *((_QWORD *)v15 + 1) = *a4;
  v18 = a1[1];
  v19 = (void *)*a1;
  v23 = v15 + 16;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<InputSiteId *>(v19, a2, v14);
    v18 = a1[1];
    v17 = v15 + 16;
    v19 = (void *)a2;
    v22 = v16;
  }
  std::_Uninitialized_move<InputSiteId *>(v19, v18, v17);
  v21[1] = 0LL;
  std::vector<Windows::UI::Internal::Input::TouchInjectionContact>::_Change_array(a1, v16, v10, v4);
  std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::_Reallocation_guard::~_Reallocation_guard((__int64)v21);
  return v15;
}
