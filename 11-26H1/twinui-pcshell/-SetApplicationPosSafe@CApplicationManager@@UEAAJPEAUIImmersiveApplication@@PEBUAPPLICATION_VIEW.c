/*
 * XREFs of ?SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x1802E5620
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1800AE9E0 (-_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DA.c)
 */

__int64 __fastcall CApplicationManager::SetApplicationPosSafe(__int64 a1, void *a2, __int64 a3, int a4, __int64 a5)
{
  return CApplicationManager::_SetApplicationPos((CApplicationManager *)(a1 - 248), a2, a3, a4, a5, 1);
}
