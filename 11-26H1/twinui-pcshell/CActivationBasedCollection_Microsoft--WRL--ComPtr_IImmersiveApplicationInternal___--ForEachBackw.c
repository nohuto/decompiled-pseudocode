/*
 * XREFs of CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_102eb91890a206a003c0de1a94bbc83e___ @ 0x1802097E0
 * Callers:
 *     ?TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS@@PEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z @ 0x180056900 (-TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800A63B8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_102eb91890a206a003c0de1a94bbc83e___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  struct IImmersiveApplicationInternal *v5; // rbp

  for ( i = *(_QWORD *)(a1 + 16); i; --i )
  {
    v5 = *(struct IImmersiveApplicationInternal **)(*(_QWORD *)(a1 + 8) + 8 * i - 8);
    if ( SHIsSameObject(*(struct IUnknown **)(a2 + 8), (struct IUnknown *)v5)
      || (*(unsigned __int8 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *))(**(_QWORD **)(a2 + 8)
                                                                                           + 168LL))(
           *(_QWORD *)(a2 + 8),
           v5) )
    {
      CApplicationManager::_ForgetApplicationNoLock(*(CApplicationManager **)a2, v5, 2u);
    }
  }
}
