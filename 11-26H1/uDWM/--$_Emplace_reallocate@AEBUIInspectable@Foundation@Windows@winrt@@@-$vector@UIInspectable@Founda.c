/*
 * XREFs of ??$_Emplace_reallocate@AEBUIInspectable@Foundation@Windows@winrt@@@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@AEAAPEAUIInspectable@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800D9974
 * Callers:
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800DBF48 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002FDF4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x180085AA8 (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1800D9D50 (--$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V-$allocator@UIInspectable@Fou.c)
 *     ??$construct_at@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEBU1234@@Z @ 0x1800D9DD0 (--$construct_at@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@std@@YAPEAUUserResizeVisual@.c)
 *     ??1_Reallocation_guard@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1800DA720 (--1_Reallocation_guard@-$vector@UIInspectable@Foundation@Windows@winrt@@V-$allocator@UIInspectab.c)
 *     ?_Change_array@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@AEAAXQEAUIInspectable@Foundation@Windows@winrt@@_K1@Z @ 0x1800DCBD8 (-_Change_array@-$vector@UIInspectable@Foundation@Windows@winrt@@V-$allocator@UIInspectable@Found.c)
 */

char *__fastcall std::vector<winrt::Windows::Foundation::IInspectable>::_Emplace_reallocate<winrt::Windows::Foundation::IInspectable const &>(
        const char *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rsi
  char *v14; // r15
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v20; // [rsp+38h] [rbp-40h]
  char *v21; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<CVisualProxy *>::_Xlength(a1);
  v9 = v7 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v19[0] = a1;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v19[2] = v3;
  v14 = &v13[8 * v5];
  v21 = v14 + 8;
  std::construct_at<winrt::Udwm::Transitions::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual const &>(
    v14,
    a3);
  v15 = *((_QWORD *)a1 + 1);
  v16 = v13;
  v17 = *(_QWORD *)a1;
  v20 = v14;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<winrt::Windows::Foundation::IInspectable *>(v17, a2, v13);
    v15 = *((_QWORD *)a1 + 1);
    v16 = v14 + 8;
    v17 = a2;
    v20 = v13;
  }
  std::_Uninitialized_move<winrt::Windows::Foundation::IInspectable *>(v17, v15, v16);
  v19[1] = 0LL;
  std::vector<winrt::Windows::Foundation::IInspectable>::_Change_array(a1, v13, v9, v3);
  std::vector<winrt::Windows::Foundation::IInspectable>::_Reallocation_guard::~_Reallocation_guard(v19);
  return v14;
}
