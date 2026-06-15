/*
 * XREFs of ?_Change_array@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VEffectPack@@@2@_K1@Z @ 0x18007D028
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEBV21@@Z @ 0x18008FF88 (--$_Emplace_reallocate@AEBV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@1@QEAV21@AEBV21@@Z @ 0x180103018 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@-$vector@V-$shared_pt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x18007D104 (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 */

void __fastcall std::vector<std::shared_ptr<EffectPack>>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v6);
    std::_Deallocate<16>(
      *(void **)a1,
      (struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
