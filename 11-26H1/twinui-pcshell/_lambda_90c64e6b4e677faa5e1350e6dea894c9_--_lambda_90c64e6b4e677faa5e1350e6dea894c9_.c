/*
 * XREFs of _lambda_90c64e6b4e677faa5e1350e6dea894c9_::_lambda_90c64e6b4e677faa5e1350e6dea894c9_ @ 0x1803076C8
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x1803074D0 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180072898 (-InternalAddRef@-$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_90c64e6b4e677faa5e1350e6dea894c9_::_lambda_90c64e6b4e677faa5e1350e6dea894c9_(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        _QWORD *a4,
        __int64 a5)
{
  volatile int *v9; // rdx
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_DWORD *)(a1 + 16) = *a3;
  *(_QWORD *)(a1 + 24) = *a4;
  Microsoft::WRL::ComPtr<CApplicationViewManager>::InternalAddRef((__int64 *)(a1 + 24), v9);
  result = a1;
  *(_QWORD *)(a1 + 32) = a5;
  return result;
}
