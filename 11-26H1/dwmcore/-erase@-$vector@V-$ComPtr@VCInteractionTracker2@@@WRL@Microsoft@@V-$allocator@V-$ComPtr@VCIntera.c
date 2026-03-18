/*
 * XREFs of ?erase@?$vector@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180279840
 * Callers:
 *     ?TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ @ 0x180279094 (-TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ.c)
 * Callees:
 *     ??4?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18027857C (--4-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<CInteractionTracker2>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbp
  _QWORD *i; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD **)(a1 + 8);
  for ( i = (_QWORD *)(a3 + 8); i != v3; ++i )
    Microsoft::WRL::ComPtr<CInteractionTracker2>::operator=(i - 1, i);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(v8 - 8);
  if ( v9 )
  {
    *(_QWORD *)(v8 - 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
