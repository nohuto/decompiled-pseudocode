/*
 * XREFs of _lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_::_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_ @ 0x180291F10
 * Callers:
 *     ?OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z @ 0x1800B0560 (-OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___ @ 0x1801DC630 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___ @ 0x180291DFC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_05de3130c6a470510199b10214a99cbc___ @ 0x180303794 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_05de3130c6a470510199b10214a99cbc___.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_6bdb0a767824ae94d9b9ef25c3406932___ @ 0x180303A88 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_6bdb0a767824ae94d9b9ef25c3406932___.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_be09023083cb68ae0d6884a72774a2ad___ @ 0x180303DC0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_be09023083cb68ae0d6884a72774a2ad___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_::_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _OWORD *a4)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_QWORD *)(a1 + 8) = a3;
  result = a1;
  *(_OWORD *)(a1 + 16) = *a4;
  return result;
}
