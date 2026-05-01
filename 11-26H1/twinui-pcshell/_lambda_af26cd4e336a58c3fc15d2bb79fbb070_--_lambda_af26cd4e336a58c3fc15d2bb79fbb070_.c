/*
 * XREFs of _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::_lambda_af26cd4e336a58c3fc15d2bb79fbb070_ @ 0x18053738C
 * Callers:
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180538F90 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_af26cd4e336a58c3fc15d2bb79fbb070_::_lambda_af26cd4e336a58c3fc15d2bb79fbb070_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _OWORD *a4)
{
  __int64 *v5; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  v5 = (__int64 *)(a1 + 8);
  *v5 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  result = a1;
  *(_OWORD *)(a1 + 16) = *a4;
  return result;
}
