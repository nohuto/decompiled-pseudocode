/*
 * XREFs of std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x18059429C
 * Callers:
 *     std::_Make_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180593FC0 (std--_Make_heap_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41.c)
 *     std::_Sort_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180594484 (std--_Sort_heap_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41.c)
 * Callees:
 *     ??4?$com_ptr@UIApplicationView@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800FEDFC (--4-$com_ptr@UIApplicationView@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator() @ 0x180290C5C (_lambda_6875e63b3d0ecbbc887d662ab41e20e0_--operator().c)
 */

__int64 *__fastcall std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        FILETIME a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rdi
  __int64 i; // rbx
  __int64 v11; // rbx

  v5 = (a3 - 1) >> 1;
  v7 = a2;
  for ( i = a2; i < v5; v7 = i )
  {
    i = !lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(
           a1,
           (__int64 *)(*(_QWORD *)&a1 + 16LL + 16 * i),
           (_QWORD *)(*(_QWORD *)&a1 + 16LL + 16 * i - 8))
      + 1LL
      + 2 * i;
    winrt::com_ptr<IApplicationView>::operator=(
      (__int64 *)(*(_QWORD *)&a1 + 8 * v7),
      (__int64 *)(*(_QWORD *)&a1 + 8 * i));
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    winrt::com_ptr<IApplicationView>::operator=(
      (__int64 *)(*(_QWORD *)&a1 + 8 * v7),
      (__int64 *)(*(_QWORD *)&a1 + 8 * (a3 - 1)));
    v7 = a3 - 1;
  }
  if ( a2 < v7 )
  {
    do
    {
      v11 = (v7 - 1) >> 1;
      if ( !lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(a1, (__int64 *)(*(_QWORD *)&a1 + 8 * v11), a4) )
        break;
      winrt::com_ptr<IApplicationView>::operator=(
        (__int64 *)(*(_QWORD *)&a1 + 8 * v7),
        (__int64 *)(*(_QWORD *)&a1 + 8 * v11));
      v7 = (v7 - 1) >> 1;
    }
    while ( a2 < v11 );
  }
  return winrt::com_ptr<IApplicationView>::operator=((__int64 *)(*(_QWORD *)&a1 + 8 * v7), a4);
}
