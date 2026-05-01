/*
 * XREFs of std::_Make_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031A868
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18005D298 (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Pop_heap_hole_by_index_std::shared_ptr_GameMruItem____std::shared_ptr_GameMruItem___lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031AC10 (std--_Pop_heap_hole_by_index_std--shared_ptr_GameMruItem____std--shared_ptr_GameMruItem___lambda.c)
 */

void __fastcall std::_Make_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  std::_Ref_count_base **v7; // rsi
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rax
  int v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-10h]

  v5 = (a2 - a1) >> 4;
  v6 = (a2 - a1) >> 5;
  if ( v6 > 0 )
  {
    v7 = (std::_Ref_count_base **)(a1 + 16 * v6 - 8);
    do
    {
      v8 = (__int64)*(v7 - 1);
      *(v7 - 1) = 0LL;
      v11 = v8;
      v9 = *v7;
      *v7 = 0LL;
      --v6;
      v12 = v9;
      LOBYTE(v10) = a3;
      std::_Pop_heap_hole_by_index_std::shared_ptr_GameMruItem____std::shared_ptr_GameMruItem___lambda_0b8527cc3003404473743c68e9f64d72___(
        a1,
        v6,
        v5,
        &v11,
        v10);
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
      v7 -= 2;
    }
    while ( v6 > 0 );
  }
}
