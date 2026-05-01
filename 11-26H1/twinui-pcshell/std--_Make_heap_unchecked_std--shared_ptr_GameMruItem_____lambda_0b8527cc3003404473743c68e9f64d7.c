/*
 * XREFs of std::_Make_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x180316D70
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18013A96C (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Pop_heap_hole_by_index_std::shared_ptr_GameMruItem____std::shared_ptr_GameMruItem___lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031711C (std--_Pop_heap_hole_by_index_std--shared_ptr_GameMruItem____std--shared_ptr_GameMruItem___lambda.c)
 */

void __fastcall std::_Make_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 *v7; // rdi
  int v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-10h]

  v5 = (a2 - a1) >> 4;
  v6 = (a2 - a1) >> 5;
  if ( v6 > 0 )
  {
    v7 = (__int64 *)(a1 + 16 * v6);
    do
    {
      v7 -= 2;
      LOBYTE(v8) = a3;
      v9 = *v7;
      --v6;
      v10 = (std::_Ref_count_base *)v7[1];
      *v7 = 0LL;
      v7[1] = 0LL;
      std::_Pop_heap_hole_by_index_std::shared_ptr_GameMruItem____std::shared_ptr_GameMruItem___lambda_0b8527cc3003404473743c68e9f64d72___(
        a1,
        v6,
        v5,
        &v9,
        v8);
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
    }
    while ( v6 > 0 );
  }
}
