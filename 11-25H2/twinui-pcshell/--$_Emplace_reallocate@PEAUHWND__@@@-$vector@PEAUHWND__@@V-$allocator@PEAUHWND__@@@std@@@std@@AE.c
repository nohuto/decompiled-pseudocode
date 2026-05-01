/*
 * XREFs of ??$_Emplace_reallocate@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAPEAPEAUHWND__@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x1801EA550
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x1800DA680 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ??$emplace_back@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA?A_TAEAPEAUHWND__@@@Z @ 0x1802C6E78 (--$emplace_back@AEAPEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAA-A.c)
 *     ??$_Emplace_one_at_back@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAAEAPEAUHWND__@@$$QEAPEAU2@@Z @ 0x1802CBE44 (--$_Emplace_one_at_back@PEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@A.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z @ 0x1800FD27C (-_Change_array@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800FE32C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801D7794 (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

char *__fastcall std::vector<HWND__ *>::_Emplace_reallocate<HWND__ *>(const void **a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  size_t size_of; // rax
  char *v11; // rdi
  char *v12; // rsi
  _BYTE *v13; // r8
  _BYTE *v14; // rdx
  void *v15; // rcx
  size_t v16; // r8

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[8 * v6];
  *(_QWORD *)v12 = *a3;
  v13 = a1[1];
  v14 = *a1;
  v15 = v11;
  if ( a2 == v13 )
  {
    v16 = v13 - v14;
  }
  else
  {
    memmove_0(v11, v14, a2 - (_BYTE *)*a1);
    v15 = v12 + 8;
    v16 = (_BYTE *)a1[1] - a2;
    v14 = a2;
  }
  memmove_0(v15, v14, v16);
  std::vector<void *>::_Change_array((__int64)a1, (__int64)v11, v8, v9);
  return v12;
}
