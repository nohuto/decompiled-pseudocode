/*
 * XREFs of ??$_Move_backward_unchecked@PEAU?$com_ptr@UIApplicationView@@@winrt@@PEAU12@@std@@YAPEAU?$com_ptr@UIApplicationView@@@winrt@@PEAU12@00@Z @ 0x18028EFC8
 * Callers:
 *     std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x18028EE30 (std--_Insertion_sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d66.c)
 * Callees:
 *     ??4?$com_ptr@UIApplicationView@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800FEDFC (--4-$com_ptr@UIApplicationView@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 *__fastcall std::_Move_backward_unchecked<winrt::com_ptr<IApplicationView> *,winrt::com_ptr<IApplicationView> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rdi

  for ( i = a2; i != a1; winrt::com_ptr<IApplicationView>::operator=(a3, i) )
  {
    --i;
    --a3;
  }
  return a3;
}
