/*
 * XREFs of ?PruneStaleEntries@@YAXAEAV?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@Z @ 0x180046918
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x1800455E8 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x180046224 (--$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_92c40f897d3a9c7e927f302002ea2ff3___ @ 0x180046834 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef.c)
 */

__int64 __fastcall PruneStaleEntries(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rcx
  __int64 *v4; // rbx
  __int64 *v5; // [rsp+30h] [rbp+8h] BYREF

  result = (__int64)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_92c40f897d3a9c7e927f302002ea2ff3___(
                      &v5,
                      *(_QWORD **)a1,
                      *(char **)(a1 + 8));
  v3 = *(__int64 **)(a1 + 8);
  if ( v5 != v3 )
  {
    v4 = std::_Move_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v3, *(__int64 **)(a1 + 8), v5);
    result = std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v4, *(__int64 **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v4;
  }
  return result;
}
