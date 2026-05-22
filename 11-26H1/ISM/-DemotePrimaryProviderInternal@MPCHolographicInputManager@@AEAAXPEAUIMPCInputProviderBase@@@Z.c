/*
 * XREFs of ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800B9DA0
 * Callers:
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800B9E5C (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_03f4dc41ea8f14b1d8dc5b14e548ce90__void_IMPCInputProviderBase___::_Do_call @ 0x1800BBCC0 (std--_Func_impl_no_alloc__lambda_03f4dc41ea8f14b1d8dc5b14e548ce90__void_IMPCInputPr_ea_1800BBCC0.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x180070D3C (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800913E8 (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCHolographicInputManager::DemotePrimaryProviderInternal(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  __int64 v2; // rbx
  MPCGestureHandlerManager *Instance; // rbx
  __int64 *v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 423);
  if ( *(_BYTE *)(v2 + 64) )
  {
    if ( *(_BYTE *)(v2 + 56) && *(_BYTE *)(v2 + 65) )
    {
      if ( ((*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2) & 2) != 0 )
      {
        MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v2, 0, 1u, 0);
        *(_DWORD *)(v2 + 32) = 0;
        *(_OWORD *)v2 = 0LL;
        *(_OWORD *)(v2 + 16) = 0LL;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 32) = 0;
      *(_OWORD *)v2 = 0LL;
      *(_OWORD *)(v2 + 16) = 0LL;
      MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v2, 1u, 1u, 0);
    }
  }
  Instance = MPCGestureHandlerManager::GetInstance((__int64)this, (__int64)a2);
  v5 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         &v6,
         (__int64)a2);
  MPCGestureHandlerManager::DetachProvider(Instance, v5);
}
