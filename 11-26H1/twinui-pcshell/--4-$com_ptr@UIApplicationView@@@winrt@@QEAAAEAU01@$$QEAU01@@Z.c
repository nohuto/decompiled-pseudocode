/*
 * XREFs of ??4?$com_ptr@UIApplicationView@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800E2684
 * Callers:
 *     std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180287FB8 (std--_Insertion_sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d66.c)
 *     ??$_Move_backward_unchecked@PEAU?$com_ptr@UIApplicationView@@@winrt@@PEAU12@@std@@YAPEAU?$com_ptr@UIApplicationView@@@winrt@@PEAU12@00@Z @ 0x180288168 (--$_Move_backward_unchecked@PEAU-$com_ptr@UIApplicationView@@@winrt@@PEAU12@@std@@YAPEAU-$com_pt.c)
 *     std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B8354 (std--_Pop_heap_hole_by_index_winrt--com_ptr_IApplicationView____winrt--com_ptr_IApplicationView_.c)
 *     std::_Sort_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B8610 (std--_Sort_heap_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41.c)
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x1800252D4 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 *__fastcall winrt::com_ptr<IApplicationView>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(a1);
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
