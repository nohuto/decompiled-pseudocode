/*
 * XREFs of ??4?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18027857C
 * Callers:
 *     ?UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ @ 0x1802792AC (-UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ.c)
 *     ?erase@?$vector@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180279840 (-erase@-$vector@V-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCIntera.c)
 * Callees:
 *     ??0?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1802782E0 (--0-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CInteractionTracker2>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = Microsoft::WRL::ComPtr<CInteractionTracker2>::ComPtr<CInteractionTracker2>(&v7, a2);
  v4 = *v3;
  *v3 = *a1;
  v5 = v7;
  *a1 = v4;
  if ( v5 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
