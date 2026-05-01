/*
 * XREFs of std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18005D298
 * Callers:
 *     ?SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18005D260 (-SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18005D298 (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 * Callees:
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18005D298 (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 *     std::_Insertion_sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18005D388 (std--_Insertion_sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9.c)
 *     std::_Make_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031A868 (std--_Make_heap_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d7.c)
 *     std::_Partition_by_median_guess_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031A994 (std--_Partition_by_median_guess_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404.c)
 *     std::_Sort_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031AD24 (std--_Sort_heap_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d7.c)
 */

__int64 __fastcall std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
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
  while ( (__int64)((a2 - a1) & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
  {
    if ( v5 <= 0 )
    {
      LOBYTE(a3) = v4;
      std::_Make_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(a1, a2, a3);
      LOBYTE(v9) = v4;
      return std::_Sort_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
               a1,
               a2,
               v9);
    }
    LOBYTE(a4) = v4;
    std::_Partition_by_median_guess_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
      &v11,
      a1,
      a2,
      a4);
    v5 = (v5 >> 2) + (v5 >> 1);
    LOBYTE(v8) = v4;
    if ( (__int64)((v11 - a1) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)((a2 - v12) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(v12, a2, v5, v8);
      a2 = v11;
    }
    else
    {
      std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(a1, v11, v5, v8);
      a1 = v12;
    }
  }
  return std::_Insertion_sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
           a1,
           a2);
}
