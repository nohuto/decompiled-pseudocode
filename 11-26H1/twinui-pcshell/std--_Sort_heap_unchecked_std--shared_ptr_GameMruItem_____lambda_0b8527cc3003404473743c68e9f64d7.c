/*
 * XREFs of std::_Sort_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x180317238
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18013A96C (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013AB58 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     std::_Pop_heap_hole_by_index_std::shared_ptr_GameMruItem____std::shared_ptr_GameMruItem___lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031711C (std--_Pop_heap_hole_by_index_std--shared_ptr_GameMruItem____std--shared_ptr_GameMruItem___lambda.c)
 */

signed __int64 __fastcall std::_Sort_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
        __int64 *a1,
        __int64 a2)
{
  signed __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-10h]

  result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( result >= 32 )
  {
    v4 = a2 - 16;
    v5 = -8LL - (_QWORD)a1;
    v6 = 16LL - (_QWORD)a1;
    do
    {
      if ( (__int64)((v6 + v4) & 0xFFFFFFFFFFFFFFF0uLL) >= 32 )
      {
        v7 = *(_QWORD *)v4;
        v8 = *(std::_Ref_count_base **)(v4 + 8);
        *(_QWORD *)v4 = 0LL;
        *(_QWORD *)(v4 + 8) = 0LL;
        std::shared_ptr<KBViewInfo>::operator=((_QWORD *)v4, a1);
        std::_Pop_heap_hole_by_index_std::shared_ptr_GameMruItem____std::shared_ptr_GameMruItem___lambda_0b8527cc3003404473743c68e9f64d72___(
          (__int64)a1,
          0LL,
          (v4 + v5 + 8) >> 4,
          &v7);
        if ( v8 )
          std::_Ref_count_base::_Decref(v8);
      }
      v4 -= 16LL;
      result = (v6 + v4) & 0xFFFFFFFFFFFFFFF0uLL;
    }
    while ( result >= 32 );
  }
  return result;
}
