/*
 * XREFs of std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x18028ED40
 * Callers:
 *     ?GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AV?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@XZ @ 0x180272FEC (-GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x18028ED40 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 * Callees:
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x18028ED40 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 *     std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x18028EE30 (std--_Insertion_sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d66.c)
 *     std::_Make_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180593FC0 (std--_Make_heap_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41.c)
 *     std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805940C4 (std--_Partition_by_median_guess_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0.c)
 *     std::_Sort_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180594484 (std--_Sort_heap_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41.c)
 */

__int64 __fastcall std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v5; // rbp
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v4 = a4;
  v5 = a3;
  while ( (__int64)((a2 - a1) & 0xFFFFFFFFFFFFFFF8uLL) > 256 )
  {
    if ( v5 <= 0 )
    {
      LOBYTE(a3) = v4;
      std::_Make_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        a1,
        a2,
        a3);
      LOBYTE(v9) = v4;
      return std::_Sort_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
               a1,
               a2,
               v9);
    }
    LOBYTE(a4) = v4;
    std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
      &v11,
      a1,
      a2,
      a4);
    v5 = (v5 >> 2) + (v5 >> 1);
    LOBYTE(v8) = v4;
    if ( (__int64)((v11 - a1) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)((a2 - v12) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        v12,
        a2,
        v5,
        v8);
      a2 = v11;
    }
    else
    {
      std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        a1,
        v11,
        v5,
        v8);
      a1 = v12;
    }
  }
  return std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
           a1,
           a2);
}
