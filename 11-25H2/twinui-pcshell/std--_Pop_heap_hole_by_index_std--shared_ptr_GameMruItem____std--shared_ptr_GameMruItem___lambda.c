/*
 * XREFs of std::_Pop_heap_hole_by_index_std::shared_ptr_GameMruItem____std::shared_ptr_GameMruItem___lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031AC10
 * Callers:
 *     std::_Make_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031A868 (std--_Make_heap_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d7.c)
 *     std::_Sort_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031AD24 (std--_Sort_heap_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d7.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005D480 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall std::_Pop_heap_hole_by_index_std::shared_ptr_GameMruItem____std::shared_ptr_GameMruItem___lambda_0b8527cc3003404473743c68e9f64d72___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // r12
  __int64 v7; // rbp
  __int64 v8; // r10
  __int64 i; // rdi
  __int64 v12; // rdi
  __int64 *v13; // rdx

  v4 = a3 - 1;
  v7 = (a3 - 1) >> 1;
  v8 = a2;
  for ( i = a2; i < v7; v8 = i )
  {
    i = 2 * i + 1 + (**(_QWORD **)(a1 + 32 * i + 16) >= **(_QWORD **)(a1 + 32 * i + 32));
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)(a1 + 16 * v8), (__int64 *)(a1 + 16 * i));
  }
  if ( i == v7 && (a3 & 1) == 0 )
  {
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)(a1 + 16 * v8), (__int64 *)(16 * a3 + a1 - 16));
    v8 = v4;
  }
  if ( a2 < v8 )
  {
    do
    {
      v12 = (v8 - 1) >> 1;
      v13 = (__int64 *)(a1 + 16 * v12);
      if ( *(_QWORD *)*a4 >= *(_QWORD *)*v13 )
        break;
      std::shared_ptr<KBViewInfo>::operator=((_QWORD *)(a1 + 16 * v8), v13);
      v8 = v12;
    }
    while ( a2 < v12 );
  }
  return std::shared_ptr<KBViewInfo>::operator=((_QWORD *)(a1 + 16 * v8), a4);
}
