/*
 * XREFs of std::_Make_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180593FC0
 * Callers:
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x18028ED40 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180066C0C (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x18059429C (std--_Pop_heap_hole_by_index_winrt--com_ptr_IApplicationView____winrt--com_ptr_IApplicationView_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Make_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = (a2 - a1) >> 3;
  v6 = (a2 - a1) >> 4;
  while ( v6 > 0 )
  {
    --v6;
    v7 = *(_QWORD *)(a1 + 8 * v6);
    *(_QWORD *)(a1 + 8 * v6) = 0LL;
    v10 = v7;
    LOBYTE(v9) = a3;
    std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
      a1,
      v6,
      v5,
      &v10,
      v9);
    result = winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v10);
  }
  return result;
}
